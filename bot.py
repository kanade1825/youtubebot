import asyncio
import subprocess

import discord
import youtube_dl
from yt_dlp import YoutubeDL

# Suppress noise about console usage from errors
youtube_dl.utils.bug_reports_message = lambda: ''

ytdl_format_options = {
    'format': 'bestaudio/best',
    'outtmpl': '%(extractor)s-%(id)s-%(title)s.%(ext)s',
    'restrictfilenames': True,
    'noplaylist': True,
    'nocheckcertificate': True,
    'ignoreerrors': False,
    'logtostderr': False,
    'quiet': True,
    'no_warnings': True,
    'default_search': 'auto',
    'source_address': '0.0.0.0'  # bind to ipv4 since ipv6 addresses cause issues sometimes
}

ffmpeg_options = {
    'options': '-vn'
}

ytdl = youtube_dl.YoutubeDL(ytdl_format_options)
playlist = []
VoiCE = 1056658567668715525

class YTDLSource(discord.PCMVolumeTransformer):
    def __init__(self, source, *, data, volume=0.5):
        super().__init__(source, volume)

        self.data = data

        self.title = data.get('title')
        self.url = data.get('url')

    @classmethod
    async def from_url(cls, url, *, loop=None, stream=False):
        loop = loop or asyncio.get_event_loop()
        data = await loop.run_in_executor(None, lambda: ytdl.extract_info(url, download=not stream))

        if 'entries' in data:
            # take first item from a playlist
            data = data['entries'][0]

        filename = data['url'] if stream else ytdl.prepare_filename(data)
        return cls(discord.FFmpegPCMAudio(filename, **ffmpeg_options), data=data)


client = discord.Client(intents=discord.Intents.all())


@client.event
async def on_ready():
    # 起動したらターミナルにログイン通知が表示される
    print('ログインしました')

def play_next(message):
        video_url = str(playlist[0])
        playlist.pop(0)
        # youtubeから音楽をダウンロードする
        someFilename = subprocess.getoutput(f'yt-dlp --print filename {video_url}')
        ydl_video_opts = {
            'outtmpl': someFilename,
            'format': 'bestaudio'
        }
        with YoutubeDL(ydl_video_opts) as ydl:
            ydl.download(video_url)
            # 再生する
            print(someFilename)
            message.guild.voice_client.play(discord.FFmpegPCMAudio(str(someFilename)),after=lambda e: play_next(message))
            print('ok')




@client.event
async def on_message(message: discord.Message):
    # メッセージの送信者がbotだった場合は無視する
    if message.author.bot:
        return

    if message.content == "!join":
        if message.author.voice is None:
            await message.channel.send("あなたはボイスチャンネルに接続していません。")
            return
        # ボイスチャンネルに接続する
        await message.author.voice.channel.connect()
        await message.channel.send("接続しました。")
        return

    elif message.content == "!leave":
        if message.guild.voice_client is None:
            await message.channel.send("接続していません。")
            return

        # 切断する
        await message.guild.voice_client.disconnect()

        await message.channel.send("切断しました。")
        return

    elif message.content.startswith("!play "):
        if message.guild.voice_client is None:
            await message.channel.send("接続していません。")
            return
        # 再生中の場合は再生しない

        url = message.content[6:]
        if message.guild.voice_client.is_playing():
            await message.channel.send("再生中です。")
            playlist.append(url)
            await message.channel.send(url + "をキューに追加しました。")

        playlist.append(url)
        play_next(message)

        await message.channel.send("全ての曲が再生されました。")



    elif message.content == "!skip":
        if message.guild.voice_client is None:
            await message.channel.send("接続していません。")
            return

        # 再生中ではない場合は実行しない
        if not message.guild.voice_client.is_playing():
            await message.channel.send("再生していません。")
            return

        message.guild.voice_client.stop()

        await message.channel.send("ストップしました。")
        return


client.run("")


