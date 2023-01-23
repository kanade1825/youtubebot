/* Generated code for Python module 'youtube_dl.extractor.neteasemusic'
 * created by Nuitka version 1.3.8
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_youtube_dl$extractor$neteasemusic" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_youtube_dl$extractor$neteasemusic;
PyDictObject *moduledict_youtube_dl$extractor$neteasemusic;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[278];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[278];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("youtube_dl.extractor.neteasemusic"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 278; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_youtube_dl$extractor$neteasemusic(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 278; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9f13bb75cc8e7e77a58c842eb3619fd8;
static PyCodeObject *codeobj_c4afd1ad73a4b54c77afdf519b635a19;
static PyCodeObject *codeobj_965898d3fb2c7a7e960203849d5d935d;
static PyCodeObject *codeobj_3954ec2b80dbdb0e893ab9c6d59f2644;
static PyCodeObject *codeobj_a5de6959b354f654c4c92d233f63a045;
static PyCodeObject *codeobj_cf019df72d76f7755187dc61f30ccde7;
static PyCodeObject *codeobj_2b3d8917416a5abd47bcf47c1b2d2220;
static PyCodeObject *codeobj_a2d17d591e6fdcc37599c74dac36d789;
static PyCodeObject *codeobj_02b083e08058426fd0a389d0b949e995;
static PyCodeObject *codeobj_f0bee486206575f44809cbfd143880e7;
static PyCodeObject *codeobj_5367fecf8c9ae49bdaeaa025226a3eb4;
static PyCodeObject *codeobj_46a20ba28d59af6f57b183a104f7c4b8;
static PyCodeObject *codeobj_9888ea7cf2a58e53c8e9f695bd75f420;
static PyCodeObject *codeobj_84cad546ded4c8cb7242e979d249c89e;
static PyCodeObject *codeobj_317b256ac09e1a696aa9cd5634a77c63;
static PyCodeObject *codeobj_59bc0c90168c1c2e4658b037a58df49a;
static PyCodeObject *codeobj_3d82f6892b1ccc6cfd90881157d5edc0;
static PyCodeObject *codeobj_aaeec3598be91f5105a7da14f190b5f2;
static PyCodeObject *codeobj_fe2e4785224ee3ee6c072d67ccdd9443;
static PyCodeObject *codeobj_4b0cfff01a0731a2df0413c1ae2e38a5;
static PyCodeObject *codeobj_54c65a155a01582a5bdb7c75fc2c0be2;
static PyCodeObject *codeobj_367061a680212f105c009db0a633fd92;
static PyCodeObject *codeobj_f9baefe9e4f4202f6b59a38b7b1dcad5;
static PyCodeObject *codeobj_7f63f154cb3b3b3e6279473bbffd93f3;
static PyCodeObject *codeobj_dd97e0e85c194d144cf1c14658911cff;
static PyCodeObject *codeobj_39e082618e59b1b1ce84dfc70bdf9848;
static PyCodeObject *codeobj_b6da38f8b2e4aad8a8de31a235a1557d;
static PyCodeObject *codeobj_5bdd72333d7209be1624f2540e0a2261;
static PyCodeObject *codeobj_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d;
static PyCodeObject *codeobj_cc4faf3178fbef3429f547b04fdf57e4;
static PyCodeObject *codeobj_f184d64cd96e85722c1291fae770aeb9;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[254]); CHECK_OBJECT(module_filename_obj);
    codeobj_9f13bb75cc8e7e77a58c842eb3619fd8 = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[61], mod_consts[61], mod_consts[255], NULL, 1, 0, 0);
    codeobj_c4afd1ad73a4b54c77afdf519b635a19 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[256], mod_consts[256], mod_consts[257], NULL, 1, 0, 0);
    codeobj_965898d3fb2c7a7e960203849d5d935d = MAKE_CODE_OBJECT(module_filename_obj, 336, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[256], mod_consts[256], mod_consts[258], NULL, 1, 0, 0);
    codeobj_3954ec2b80dbdb0e893ab9c6d59f2644 = MAKE_CODE_OBJECT(module_filename_obj, 470, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[256], mod_consts[256], mod_consts[259], NULL, 1, 0, 0);
    codeobj_a5de6959b354f654c4c92d233f63a045 = MAKE_CODE_OBJECT(module_filename_obj, 433, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[256], mod_consts[256], mod_consts[260], NULL, 1, 0, 0);
    codeobj_cf019df72d76f7755187dc61f30ccde7 = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[256], mod_consts[256], mod_consts[261], NULL, 1, 0, 0);
    codeobj_2b3d8917416a5abd47bcf47c1b2d2220 = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[256], mod_consts[256], mod_consts[261], NULL, 1, 0, 0);
    codeobj_a2d17d591e6fdcc37599c74dac36d789 = MAKE_CODE_OBJECT(module_filename_obj, 304, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[256], mod_consts[256], mod_consts[261], NULL, 1, 0, 0);
    codeobj_02b083e08058426fd0a389d0b949e995 = MAKE_CODE_OBJECT(module_filename_obj, 434, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[256], mod_consts[256], mod_consts[262], NULL, 1, 0, 0);
    codeobj_f0bee486206575f44809cbfd143880e7 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[256], mod_consts[256], mod_consts[263], NULL, 1, 0, 0);
    codeobj_5367fecf8c9ae49bdaeaa025226a3eb4 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[264], mod_consts[264], NULL, NULL, 0, 0, 0);
    codeobj_46a20ba28d59af6f57b183a104f7c4b8 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[216], mod_consts[216], mod_consts[265], NULL, 0, 0, 0);
    codeobj_9888ea7cf2a58e53c8e9f695bd75f420 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[187], mod_consts[187], mod_consts[265], NULL, 0, 0, 0);
    codeobj_84cad546ded4c8cb7242e979d249c89e = MAKE_CODE_OBJECT(module_filename_obj, 442, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[247], mod_consts[247], mod_consts[265], NULL, 0, 0, 0);
    codeobj_317b256ac09e1a696aa9cd5634a77c63 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[204], mod_consts[204], mod_consts[265], NULL, 0, 0, 0);
    codeobj_59bc0c90168c1c2e4658b037a58df49a = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[229], mod_consts[229], mod_consts[265], NULL, 0, 0, 0);
    codeobj_3d82f6892b1ccc6cfd90881157d5edc0 = MAKE_CODE_OBJECT(module_filename_obj, 312, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[235], mod_consts[235], mod_consts[265], NULL, 0, 0, 0);
    codeobj_aaeec3598be91f5105a7da14f190b5f2 = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[241], mod_consts[241], mod_consts[265], NULL, 0, 0, 0);
    codeobj_fe2e4785224ee3ee6c072d67ccdd9443 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[223], mod_consts[223], mod_consts[265], NULL, 0, 0, 0);
    codeobj_4b0cfff01a0731a2df0413c1ae2e38a5 = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[20], mod_consts[20], mod_consts[266], NULL, 2, 0, 0);
    codeobj_54c65a155a01582a5bdb7c75fc2c0be2 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[76], mod_consts[76], mod_consts[267], NULL, 2, 0, 0);
    codeobj_367061a680212f105c009db0a633fd92 = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[214], mod_consts[214], mod_consts[268], NULL, 2, 0, 0);
    codeobj_f9baefe9e4f4202f6b59a38b7b1dcad5 = MAKE_CODE_OBJECT(module_filename_obj, 458, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[214], mod_consts[214], mod_consts[269], NULL, 2, 0, 0);
    codeobj_7f63f154cb3b3b3e6279473bbffd93f3 = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[214], mod_consts[214], mod_consts[270], NULL, 2, 0, 0);
    codeobj_dd97e0e85c194d144cf1c14658911cff = MAKE_CODE_OBJECT(module_filename_obj, 329, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[214], mod_consts[214], mod_consts[271], NULL, 2, 0, 0);
    codeobj_39e082618e59b1b1ce84dfc70bdf9848 = MAKE_CODE_OBJECT(module_filename_obj, 398, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[214], mod_consts[214], mod_consts[272], NULL, 2, 0, 0);
    codeobj_b6da38f8b2e4aad8a8de31a235a1557d = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[214], mod_consts[214], mod_consts[273], NULL, 2, 0, 0);
    codeobj_5bdd72333d7209be1624f2540e0a2261 = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[214], mod_consts[214], mod_consts[274], NULL, 2, 0, 0);
    codeobj_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[86], mod_consts[86], mod_consts[275], NULL, 2, 0, 0);
    codeobj_cc4faf3178fbef3429f547b04fdf57e4 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[72], mod_consts[72], mod_consts[276], NULL, 2, 0, 0);
    codeobj_f184d64cd96e85722c1291fae770aeb9 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[66], mod_consts[66], mod_consts[277], NULL, 4, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_youtube_dl$extractor$neteasemusic$$$function__5__process_lyrics$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__10__real_extract();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__11__real_extract();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__12__real_extract();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__1__encrypt();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__2_extract_formats();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__3_convert_milliseconds();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__4_query_api();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__5__process_lyrics();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__6__real_extract();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__7__real_extract();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__8__real_extract();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__9__real_extract();


// The module function definitions.
static PyObject *impl_youtube_dl$extractor$neteasemusic$$$function__1__encrypt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_dfsid = python_pars[1];
    PyObject *var_salt_bytes = NULL;
    PyObject *var_string_bytes = NULL;
    PyObject *var_salt_len = NULL;
    PyObject *var_i = NULL;
    PyObject *var_m = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_4b0cfff01a0731a2df0413c1ae2e38a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4b0cfff01a0731a2df0413c1ae2e38a5 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4b0cfff01a0731a2df0413c1ae2e38a5)) {
        Py_XDECREF(cache_frame_4b0cfff01a0731a2df0413c1ae2e38a5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4b0cfff01a0731a2df0413c1ae2e38a5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4b0cfff01a0731a2df0413c1ae2e38a5 = MAKE_FUNCTION_FRAME(codeobj_4b0cfff01a0731a2df0413c1ae2e38a5, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4b0cfff01a0731a2df0413c1ae2e38a5->m_type_description == NULL);
    frame_4b0cfff01a0731a2df0413c1ae2e38a5 = cache_frame_4b0cfff01a0731a2df0413c1ae2e38a5;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_4b0cfff01a0731a2df0413c1ae2e38a5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4b0cfff01a0731a2df0413c1ae2e38a5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_bytearray_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b0cfff01a0731a2df0413c1ae2e38a5->m_frame.f_lineno = 28;
        tmp_bytearray_arg_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[2]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_bytearray_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_1);
        Py_DECREF(tmp_bytearray_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_salt_bytes == NULL);
        var_salt_bytes = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_bytearray_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dfsid);
        tmp_args_element_value_1 = par_dfsid;
        frame_4b0cfff01a0731a2df0413c1ae2e38a5->m_frame.f_lineno = 29;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b0cfff01a0731a2df0413c1ae2e38a5->m_frame.f_lineno = 29;
        tmp_bytearray_arg_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[4]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_bytearray_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_2);
        Py_DECREF(tmp_bytearray_arg_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_string_bytes == NULL);
        var_string_bytes = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_salt_bytes);
        tmp_len_arg_1 = var_salt_bytes;
        tmp_assign_source_3 = BUILTIN_LEN(tmp_len_arg_1);
        assert(!(tmp_assign_source_3 == NULL));
        assert(var_salt_len == NULL);
        var_salt_len = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(var_string_bytes);
        tmp_len_arg_2 = var_string_bytes;
        tmp_xrange_low_1 = BUILTIN_LEN(tmp_len_arg_2);
        assert(!(tmp_xrange_low_1 == NULL));
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 31;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_bitxor_expr_left_1;
        PyObject *tmp_bitxor_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (var_string_bytes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 32;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = var_string_bytes;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_bitxor_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_bitxor_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_salt_bytes);
        tmp_expression_value_5 = var_salt_bytes;
        CHECK_OBJECT(var_i);
        tmp_mod_expr_left_1 = var_i;
        if (var_salt_len == NULL) {
            Py_DECREF(tmp_bitxor_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 32;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_mod_expr_right_1 = var_salt_len;
        tmp_subscript_value_2 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitxor_expr_left_1);

            exception_lineno = 32;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_bitxor_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_bitxor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitxor_expr_left_1);

            exception_lineno = 32;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_BITXOR_OBJECT_OBJECT_OBJECT(tmp_bitxor_expr_left_1, tmp_bitxor_expr_right_1);
        Py_DECREF(tmp_bitxor_expr_left_1);
        Py_DECREF(tmp_bitxor_expr_right_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (var_string_bytes == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 32;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_string_bytes;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 31;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b0cfff01a0731a2df0413c1ae2e38a5->m_frame.f_lineno = 33;
        tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_m == NULL);
        var_m = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_bytes_arg_1;
        CHECK_OBJECT(var_m);
        tmp_expression_value_6 = var_m;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[8]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_string_bytes == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_bytes_arg_1 = var_string_bytes;
        tmp_args_element_value_2 = BUILTIN_BYTES1(tmp_bytes_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b0cfff01a0731a2df0413c1ae2e38a5->m_frame.f_lineno = 34;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_1;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_m);
        tmp_called_instance_1 = var_m;
        frame_4b0cfff01a0731a2df0413c1ae2e38a5->m_frame.f_lineno = 35;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[10]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b0cfff01a0731a2df0413c1ae2e38a5->m_frame.f_lineno = 35;
        tmp_expression_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[11]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b0cfff01a0731a2df0413c1ae2e38a5->m_frame.f_lineno = 35;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[4]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_result);
        tmp_expression_value_9 = var_result;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[12]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b0cfff01a0731a2df0413c1ae2e38a5->m_frame.f_lineno = 36;
        tmp_expression_value_8 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_9, mod_consts[13]);

        Py_DECREF(tmp_called_value_9);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[12]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b0cfff01a0731a2df0413c1ae2e38a5->m_frame.f_lineno = 36;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_8, mod_consts[14]);

        Py_DECREF(tmp_called_value_8);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4b0cfff01a0731a2df0413c1ae2e38a5);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4b0cfff01a0731a2df0413c1ae2e38a5);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4b0cfff01a0731a2df0413c1ae2e38a5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4b0cfff01a0731a2df0413c1ae2e38a5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4b0cfff01a0731a2df0413c1ae2e38a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4b0cfff01a0731a2df0413c1ae2e38a5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4b0cfff01a0731a2df0413c1ae2e38a5,
        type_description_1,
        par_cls,
        par_dfsid,
        var_salt_bytes,
        var_string_bytes,
        var_salt_len,
        var_i,
        var_m,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_4b0cfff01a0731a2df0413c1ae2e38a5 == cache_frame_4b0cfff01a0731a2df0413c1ae2e38a5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4b0cfff01a0731a2df0413c1ae2e38a5);
        cache_frame_4b0cfff01a0731a2df0413c1ae2e38a5 = NULL;
    }

    assertFrameObject(frame_4b0cfff01a0731a2df0413c1ae2e38a5);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_salt_bytes);
    Py_DECREF(var_salt_bytes);
    var_salt_bytes = NULL;
    Py_XDECREF(var_string_bytes);
    var_string_bytes = NULL;
    Py_XDECREF(var_salt_len);
    var_salt_len = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    CHECK_OBJECT(var_m);
    Py_DECREF(var_m);
    var_m = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_salt_bytes);
    var_salt_bytes = NULL;
    Py_XDECREF(var_string_bytes);
    var_string_bytes = NULL;
    Py_XDECREF(var_salt_len);
    var_salt_len = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_dfsid);
    Py_DECREF(par_dfsid);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_dfsid);
    Py_DECREF(par_dfsid);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$neteasemusic$$$function__2_extract_formats(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_info = python_pars[1];
    PyObject *var_formats = NULL;
    PyObject *var_song_format = NULL;
    PyObject *var_details = NULL;
    PyObject *var_song_file_path = NULL;
    PyObject *var_host = NULL;
    PyObject *var_song_url = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_cc4faf3178fbef3429f547b04fdf57e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cc4faf3178fbef3429f547b04fdf57e4 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_formats == NULL);
        var_formats = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_cc4faf3178fbef3429f547b04fdf57e4)) {
        Py_XDECREF(cache_frame_cc4faf3178fbef3429f547b04fdf57e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc4faf3178fbef3429f547b04fdf57e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc4faf3178fbef3429f547b04fdf57e4 = MAKE_FUNCTION_FRAME(codeobj_cc4faf3178fbef3429f547b04fdf57e4, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cc4faf3178fbef3429f547b04fdf57e4->m_type_description == NULL);
    frame_cc4faf3178fbef3429f547b04fdf57e4 = cache_frame_cc4faf3178fbef3429f547b04fdf57e4;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_cc4faf3178fbef3429f547b04fdf57e4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cc4faf3178fbef3429f547b04fdf57e4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 40;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_song_format;
            var_song_format = tmp_assign_source_4;
            Py_INCREF(var_song_format);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        if (par_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_info;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_song_format);
        tmp_args_element_value_1 = var_song_format;
        frame_cc4faf3178fbef3429f547b04fdf57e4->m_frame.f_lineno = 41;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_details;
            var_details = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_details);
        tmp_operand_value_1 = var_details;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_start_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        tmp_mod_expr_left_1 = mod_consts[18];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[20]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_details);
        tmp_expression_value_4 = var_details;
        tmp_subscript_value_1 = mod_consts[21];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 45;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_cc4faf3178fbef3429f547b04fdf57e4->m_frame.f_lineno = 45;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_details);
            tmp_expression_value_5 = var_details;
            tmp_subscript_value_2 = mod_consts[21];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_details);
            tmp_expression_value_6 = var_details;
            tmp_subscript_value_3 = mod_consts[22];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_song_file_path;
            var_song_file_path = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = mod_consts[23];
        tmp_assign_source_7 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        assert(!(tmp_assign_source_7 == NULL));
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 51;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_9 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_host;
            var_host = tmp_assign_source_9;
            Py_INCREF(var_host);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(var_host);
        tmp_add_expr_left_1 = var_host;
        if (var_song_file_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_add_expr_right_1 = var_song_file_path;
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_song_url;
            var_song_url = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_5;
        int tmp_truth_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_7 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[25]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_song_url);
        tmp_args_element_value_3 = var_song_url;
        if (par_info == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_8 = par_info;
        tmp_subscript_value_4 = mod_consts[26];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 54;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_5 = mod_consts[27];
        frame_cc4faf3178fbef3429f547b04fdf57e4->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 54;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        if (var_formats == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_9 = var_formats;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[29]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_dict_key_1 = mod_consts[30];
        CHECK_OBJECT(var_song_url);
        tmp_dict_value_1 = var_song_url;
        tmp_args_element_value_6 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_kwargs_value_1;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_13;
            tmp_res = PyDict_SetItem(tmp_args_element_value_6, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[31];
            CHECK_OBJECT(var_details);
            tmp_expression_value_10 = var_details;
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[17]);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            frame_cc4faf3178fbef3429f547b04fdf57e4->m_frame.f_lineno = 57;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[32]);

            Py_DECREF(tmp_called_value_5);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_6, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[33];
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(var_details);
            tmp_expression_value_11 = var_details;
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[17]);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            frame_cc4faf3178fbef3429f547b04fdf57e4->m_frame.f_lineno = 58;
            tmp_tuple_element_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[35]);

            Py_DECREF(tmp_called_value_7);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_2);
            tmp_kwargs_value_1 = DICT_COPY(mod_consts[36]);
            frame_cc4faf3178fbef3429f547b04fdf57e4->m_frame.f_lineno = 58;
            tmp_dict_value_1 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            Py_DECREF(tmp_kwargs_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_6, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[37];
            CHECK_OBJECT(var_song_format);
            tmp_dict_value_1 = var_song_format;
            tmp_res = PyDict_SetItem(tmp_args_element_value_6, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[38];
            CHECK_OBJECT(var_details);
            tmp_expression_value_12 = var_details;
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[17]);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            frame_cc4faf3178fbef3429f547b04fdf57e4->m_frame.f_lineno = 60;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[39]);

            Py_DECREF(tmp_called_value_8);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_6, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[40];
            CHECK_OBJECT(var_details);
            tmp_expression_value_13 = var_details;
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[17]);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            frame_cc4faf3178fbef3429f547b04fdf57e4->m_frame.f_lineno = 61;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[41]);

            Py_DECREF(tmp_called_value_9);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_6, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        goto try_except_handler_3;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_cc4faf3178fbef3429f547b04fdf57e4->m_frame.f_lineno = 55;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto loop_end_2;
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 51;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 40;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_formats == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 64;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_formats;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cc4faf3178fbef3429f547b04fdf57e4);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cc4faf3178fbef3429f547b04fdf57e4);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cc4faf3178fbef3429f547b04fdf57e4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cc4faf3178fbef3429f547b04fdf57e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc4faf3178fbef3429f547b04fdf57e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc4faf3178fbef3429f547b04fdf57e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc4faf3178fbef3429f547b04fdf57e4,
        type_description_1,
        par_self,
        par_info,
        var_formats,
        var_song_format,
        var_details,
        var_song_file_path,
        var_host,
        var_song_url
    );


    // Release cached frame if used for exception.
    if (frame_cc4faf3178fbef3429f547b04fdf57e4 == cache_frame_cc4faf3178fbef3429f547b04fdf57e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cc4faf3178fbef3429f547b04fdf57e4);
        cache_frame_cc4faf3178fbef3429f547b04fdf57e4 = NULL;
    }

    assertFrameObject(frame_cc4faf3178fbef3429f547b04fdf57e4);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_formats);
    var_formats = NULL;
    Py_XDECREF(var_song_format);
    var_song_format = NULL;
    Py_XDECREF(var_details);
    var_details = NULL;
    Py_XDECREF(var_song_file_path);
    var_song_file_path = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_song_url);
    var_song_url = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_formats);
    var_formats = NULL;
    Py_XDECREF(var_song_format);
    var_song_format = NULL;
    Py_XDECREF(var_details);
    var_details = NULL;
    Py_XDECREF(var_song_file_path);
    var_song_file_path = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_song_url);
    var_song_url = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$neteasemusic$$$function__3_convert_milliseconds(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_ms = python_pars[1];
    struct Nuitka_FrameObject *frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d)) {
        Py_XDECREF(cache_frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d = MAKE_FUNCTION_FRAME(codeobj_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d->m_type_description == NULL);
    frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d = cache_frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[42]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_ms);
        tmp_truediv_expr_left_1 = par_ms;
        tmp_truediv_expr_right_1 = mod_consts[43];
        tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d->m_frame.f_lineno = 68;
        tmp_int_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d,
        type_description_1,
        par_cls,
        par_ms
    );


    // Release cached frame if used for exception.
    if (frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d == cache_frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d);
        cache_frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d = NULL;
    }

    assertFrameObject(frame_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_ms);
    Py_DECREF(par_ms);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_ms);
    Py_DECREF(par_ms);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$neteasemusic$$$function__4_query_api(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_endpoint = python_pars[1];
    PyObject *par_video_id = python_pars[2];
    PyObject *par_note = python_pars[3];
    PyObject *var_req = NULL;
    struct Nuitka_FrameObject *frame_f184d64cd96e85722c1291fae770aeb9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f184d64cd96e85722c1291fae770aeb9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f184d64cd96e85722c1291fae770aeb9)) {
        Py_XDECREF(cache_frame_f184d64cd96e85722c1291fae770aeb9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f184d64cd96e85722c1291fae770aeb9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f184d64cd96e85722c1291fae770aeb9 = MAKE_FUNCTION_FRAME(codeobj_f184d64cd96e85722c1291fae770aeb9, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f184d64cd96e85722c1291fae770aeb9->m_type_description == NULL);
    frame_f184d64cd96e85722c1291fae770aeb9 = cache_frame_f184d64cd96e85722c1291fae770aeb9;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_f184d64cd96e85722c1291fae770aeb9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f184d64cd96e85722c1291fae770aeb9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[45];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_endpoint);
        tmp_tuple_element_1 = par_endpoint;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_f184d64cd96e85722c1291fae770aeb9->m_frame.f_lineno = 71;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_req == NULL);
        var_req = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_req);
        tmp_expression_value_2 = var_req;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[47]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[48];
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[46]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_f184d64cd96e85722c1291fae770aeb9->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_req);
        tmp_args_element_value_4 = var_req;
        CHECK_OBJECT(par_video_id);
        tmp_args_element_value_5 = par_video_id;
        CHECK_OBJECT(par_note);
        tmp_args_element_value_6 = par_note;
        frame_f184d64cd96e85722c1291fae770aeb9->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[49],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f184d64cd96e85722c1291fae770aeb9);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f184d64cd96e85722c1291fae770aeb9);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f184d64cd96e85722c1291fae770aeb9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f184d64cd96e85722c1291fae770aeb9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f184d64cd96e85722c1291fae770aeb9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f184d64cd96e85722c1291fae770aeb9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f184d64cd96e85722c1291fae770aeb9,
        type_description_1,
        par_self,
        par_endpoint,
        par_video_id,
        par_note,
        var_req
    );


    // Release cached frame if used for exception.
    if (frame_f184d64cd96e85722c1291fae770aeb9 == cache_frame_f184d64cd96e85722c1291fae770aeb9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f184d64cd96e85722c1291fae770aeb9);
        cache_frame_f184d64cd96e85722c1291fae770aeb9 = NULL;
    }

    assertFrameObject(frame_f184d64cd96e85722c1291fae770aeb9);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_req);
    Py_DECREF(var_req);
    var_req = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_req);
    var_req = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_endpoint);
    Py_DECREF(par_endpoint);
    CHECK_OBJECT(par_video_id);
    Py_DECREF(par_video_id);
    CHECK_OBJECT(par_note);
    Py_DECREF(par_note);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_endpoint);
    Py_DECREF(par_endpoint);
    CHECK_OBJECT(par_video_id);
    Py_DECREF(par_video_id);
    CHECK_OBJECT(par_note);
    Py_DECREF(par_note);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$neteasemusic$$$function__5__process_lyrics(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lyrics_info = python_pars[1];
    PyObject *var_original = NULL;
    PyObject *var_translated = NULL;
    PyObject *var_original_ts_texts = NULL;
    PyObject *var_translation_ts_dict = NULL;
    PyObject *var_lyrics = NULL;
    PyObject *outline_0_var_time_stamp = NULL;
    PyObject *outline_0_var_text = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_54c65a155a01582a5bdb7c75fc2c0be2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_f0bee486206575f44809cbfd143880e7_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_f0bee486206575f44809cbfd143880e7_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_54c65a155a01582a5bdb7c75fc2c0be2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_54c65a155a01582a5bdb7c75fc2c0be2)) {
        Py_XDECREF(cache_frame_54c65a155a01582a5bdb7c75fc2c0be2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_54c65a155a01582a5bdb7c75fc2c0be2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_54c65a155a01582a5bdb7c75fc2c0be2 = MAKE_FUNCTION_FRAME(codeobj_54c65a155a01582a5bdb7c75fc2c0be2, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_54c65a155a01582a5bdb7c75fc2c0be2->m_type_description == NULL);
    frame_54c65a155a01582a5bdb7c75fc2c0be2 = cache_frame_54c65a155a01582a5bdb7c75fc2c0be2;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_54c65a155a01582a5bdb7c75fc2c0be2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_54c65a155a01582a5bdb7c75fc2c0be2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(par_lyrics_info);
        tmp_expression_value_2 = par_lyrics_info;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[50];
        tmp_call_arg_element_2 = MAKE_DICT_EMPTY();
        frame_54c65a155a01582a5bdb7c75fc2c0be2->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        frame_54c65a155a01582a5bdb7c75fc2c0be2->m_frame.f_lineno = 135;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[51]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        assert(var_original == NULL);
        var_original = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_arg_element_3;
        PyObject *tmp_call_arg_element_4;
        CHECK_OBJECT(par_lyrics_info);
        tmp_expression_value_4 = par_lyrics_info;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[17]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_3 = mod_consts[52];
        tmp_call_arg_element_4 = MAKE_DICT_EMPTY();
        frame_54c65a155a01582a5bdb7c75fc2c0be2->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = {tmp_call_arg_element_3, tmp_call_arg_element_4};
            tmp_expression_value_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_call_arg_element_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        frame_54c65a155a01582a5bdb7c75fc2c0be2->m_frame.f_lineno = 136;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[51]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        assert(var_translated == NULL);
        var_translated = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_translated);
        tmp_operand_value_1 = var_translated;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(var_original);
    tmp_return_value = var_original;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[55];
        CHECK_OBJECT(var_original);
        tmp_args_element_value_2 = var_original;
        frame_54c65a155a01582a5bdb7c75fc2c0be2->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[54],
                call_args
            );
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        assert(var_original_ts_texts == NULL);
        var_original_ts_texts = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dict_seq_1;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "ooooNooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_value_3 = mod_consts[55];
            CHECK_OBJECT(var_translated);
            tmp_args_element_value_4 = var_translated;
            frame_54c65a155a01582a5bdb7c75fc2c0be2->m_frame.f_lineno = 144;
            {
                PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS2(
                    tmp_called_instance_2,
                    mod_consts[54],
                    call_args
                );
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "ooooNooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_1 = "ooooNooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_5;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_dict_seq_1 = MAKE_GENERATOR_youtube_dl$extractor$neteasemusic$$$function__5__process_lyrics$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_assign_source_4 = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        assert(var_translation_ts_dict == NULL);
        var_translation_ts_dict = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[56];
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(var_original_ts_texts);
            tmp_iter_arg_2 = var_original_ts_texts;
            tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_1 = "ooooNooo";
                goto try_except_handler_3;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_8;
        }
        if (isFrameUnusable(cache_frame_f0bee486206575f44809cbfd143880e7_2)) {
            Py_XDECREF(cache_frame_f0bee486206575f44809cbfd143880e7_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f0bee486206575f44809cbfd143880e7_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f0bee486206575f44809cbfd143880e7_2 = MAKE_FUNCTION_FRAME(codeobj_f0bee486206575f44809cbfd143880e7, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_f0bee486206575f44809cbfd143880e7_2->m_type_description == NULL);
        frame_f0bee486206575f44809cbfd143880e7_2 = cache_frame_f0bee486206575f44809cbfd143880e7_2;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_f0bee486206575f44809cbfd143880e7_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_f0bee486206575f44809cbfd143880e7_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_9 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 146;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_3 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_11 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 146;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_12 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 146;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "ooo";
                        exception_lineno = 146;
                        goto try_except_handler_6;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[57];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "ooo";
                exception_lineno = 146;
                goto try_except_handler_6;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_5;
        // End of try:
        try_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_4;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_13 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_time_stamp;
                outline_0_var_time_stamp = tmp_assign_source_13;
                Py_INCREF(outline_0_var_time_stamp);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_14 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_text;
                outline_0_var_text = tmp_assign_source_14;
                Py_INCREF(outline_0_var_text);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_mod_expr_left_1;
            PyObject *tmp_mod_expr_right_1;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mod_expr_left_1 = mod_consts[58];
            CHECK_OBJECT(outline_0_var_time_stamp);
            tmp_tuple_element_1 = outline_0_var_time_stamp;
            tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_5;
                PyObject *tmp_expression_value_5;
                PyObject *tmp_args_element_value_5;
                PyObject *tmp_args_element_value_6;
                PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
                CHECK_OBJECT(outline_0_var_text);
                tmp_tuple_element_1 = outline_0_var_text;
                PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
                if (var_translation_ts_dict == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[59]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 147;
                    type_description_2 = "ooo";
                    goto tuple_build_exception_1;
                }

                tmp_expression_value_5 = var_translation_ts_dict;
                tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[17]);
                if (tmp_called_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 147;
                    type_description_2 = "ooo";
                    goto tuple_build_exception_1;
                }
                CHECK_OBJECT(outline_0_var_time_stamp);
                tmp_args_element_value_5 = outline_0_var_time_stamp;
                tmp_args_element_value_6 = mod_consts[60];
                frame_f0bee486206575f44809cbfd143880e7_2->m_frame.f_lineno = 147;
                {
                    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
                    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
                }

                Py_DECREF(tmp_called_value_5);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 147;
                    type_description_2 = "ooo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_mod_expr_right_1);
            goto try_except_handler_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_append_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
            Py_DECREF(tmp_mod_expr_right_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_2 = "ooo";
                goto try_except_handler_4;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "ooo";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_2 = "ooo";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_iterable_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iterable_value_1);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f0bee486206575f44809cbfd143880e7_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_f0bee486206575f44809cbfd143880e7_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto try_return_handler_3;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f0bee486206575f44809cbfd143880e7_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f0bee486206575f44809cbfd143880e7_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f0bee486206575f44809cbfd143880e7_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f0bee486206575f44809cbfd143880e7_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f0bee486206575f44809cbfd143880e7_2,
            type_description_2,
            outline_0_var_time_stamp,
            outline_0_var_text,
            var_translation_ts_dict
        );


        // Release cached frame if used for exception.
        if (frame_f0bee486206575f44809cbfd143880e7_2 == cache_frame_f0bee486206575f44809cbfd143880e7_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_f0bee486206575f44809cbfd143880e7_2);
            cache_frame_f0bee486206575f44809cbfd143880e7_2 = NULL;
        }

        assertFrameObject(frame_f0bee486206575f44809cbfd143880e7_2);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooNooo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_time_stamp);
        outline_0_var_time_stamp = NULL;
        Py_XDECREF(outline_0_var_text);
        outline_0_var_text = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_time_stamp);
        outline_0_var_time_stamp = NULL;
        Py_XDECREF(outline_0_var_text);
        outline_0_var_text = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 146;
        goto frame_exception_exit_1;
        outline_result_2:;
        tmp_assign_source_6 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        assert(var_lyrics == NULL);
        var_lyrics = tmp_assign_source_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_54c65a155a01582a5bdb7c75fc2c0be2);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_54c65a155a01582a5bdb7c75fc2c0be2);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_54c65a155a01582a5bdb7c75fc2c0be2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_54c65a155a01582a5bdb7c75fc2c0be2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_54c65a155a01582a5bdb7c75fc2c0be2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_54c65a155a01582a5bdb7c75fc2c0be2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_54c65a155a01582a5bdb7c75fc2c0be2,
        type_description_1,
        par_self,
        par_lyrics_info,
        var_original,
        var_translated,
        NULL,
        var_original_ts_texts,
        var_translation_ts_dict,
        var_lyrics
    );


    // Release cached frame if used for exception.
    if (frame_54c65a155a01582a5bdb7c75fc2c0be2 == cache_frame_54c65a155a01582a5bdb7c75fc2c0be2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_54c65a155a01582a5bdb7c75fc2c0be2);
        cache_frame_54c65a155a01582a5bdb7c75fc2c0be2 = NULL;
    }

    assertFrameObject(frame_54c65a155a01582a5bdb7c75fc2c0be2);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    CHECK_OBJECT(var_lyrics);
    tmp_return_value = var_lyrics;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_original);
    var_original = NULL;
    Py_XDECREF(var_translated);
    var_translated = NULL;
    Py_XDECREF(var_original_ts_texts);
    var_original_ts_texts = NULL;
    Py_XDECREF(var_translation_ts_dict);
    var_translation_ts_dict = NULL;
    Py_XDECREF(var_lyrics);
    var_lyrics = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_original);
    var_original = NULL;
    Py_XDECREF(var_translated);
    var_translated = NULL;
    Py_XDECREF(var_original_ts_texts);
    var_original_ts_texts = NULL;
    Py_XDECREF(var_translation_ts_dict);
    var_translation_ts_dict = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lyrics_info);
    Py_DECREF(par_lyrics_info);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lyrics_info);
    Py_DECREF(par_lyrics_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct youtube_dl$extractor$neteasemusic$$$function__5__process_lyrics$$$genexpr__1_genexpr_locals {
    PyObject *var_time_stamp;
    PyObject *var_text;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *youtube_dl$extractor$neteasemusic$$$function__5__process_lyrics$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct youtube_dl$extractor$neteasemusic$$$function__5__process_lyrics$$$genexpr__1_genexpr_locals *generator_heap = (struct youtube_dl$extractor$neteasemusic$$$function__5__process_lyrics$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_time_stamp = NULL;
    generator_heap->var_text = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_9f13bb75cc8e7e77a58c842eb3619fd8, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);

    pushFrameStack(generator->m_frame);

    // Taking a reference prevents reuse of generator frame while it is being used.
    Py_INCREF(generator->m_frame->m_frame.f_back);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 0x3b0
        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
#endif
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
        ASSIGN_EXC_TRACEBACK_F(generator, EXC_TRACEBACK(thread_state));
        Py_XINCREF(EXC_TRACEBACK_F(generator));
#endif
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 143;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 143;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 143;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 143;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 143;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[57];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 143;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_time_stamp;
            generator_heap->var_time_stamp = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_time_stamp);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_text;
            generator_heap->var_text = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_text);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_time_stamp);
        tmp_tuple_element_1 = generator_heap->var_time_stamp;
        tmp_expression_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_expression_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(generator_heap->var_text);
        tmp_tuple_element_1 = generator_heap->var_text;
        PyTuple_SET_ITEM0(tmp_expression_value_1, 1, tmp_tuple_element_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 143;
        generator_heap->type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_time_stamp,
            generator_heap->var_text
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_time_stamp);
    generator_heap->var_time_stamp = NULL;
    Py_XDECREF(generator_heap->var_text);
    generator_heap->var_text = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_time_stamp);
    generator_heap->var_time_stamp = NULL;
    Py_XDECREF(generator_heap->var_text);
    generator_heap->var_text = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_youtube_dl$extractor$neteasemusic$$$function__5__process_lyrics$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        youtube_dl$extractor$neteasemusic$$$function__5__process_lyrics$$$genexpr__1_genexpr_context,
        module_youtube_dl$extractor$neteasemusic,
        mod_consts[61],
#if PYTHON_VERSION >= 0x350
        mod_consts[62],
#endif
        codeobj_9f13bb75cc8e7e77a58c842eb3619fd8,
        closure,
        1,
        sizeof(struct youtube_dl$extractor$neteasemusic$$$function__5__process_lyrics$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_youtube_dl$extractor$neteasemusic$$$function__6__real_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_song_id = NULL;
    PyObject *var_params = NULL;
    PyObject *var_info = NULL;
    PyObject *var_formats = NULL;
    PyObject *var_lyrics_info = NULL;
    PyObject *var_lyrics = NULL;
    PyObject *var_alt_title = NULL;
    PyObject *outline_0_var_artist = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_5bdd72333d7209be1624f2540e0a2261;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_c4afd1ad73a4b54c77afdf519b635a19_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_c4afd1ad73a4b54c77afdf519b635a19_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_5bdd72333d7209be1624f2540e0a2261 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5bdd72333d7209be1624f2540e0a2261)) {
        Py_XDECREF(cache_frame_5bdd72333d7209be1624f2540e0a2261);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5bdd72333d7209be1624f2540e0a2261 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5bdd72333d7209be1624f2540e0a2261 = MAKE_FUNCTION_FRAME(codeobj_5bdd72333d7209be1624f2540e0a2261, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5bdd72333d7209be1624f2540e0a2261->m_type_description == NULL);
    frame_5bdd72333d7209be1624f2540e0a2261 = cache_frame_5bdd72333d7209be1624f2540e0a2261;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_5bdd72333d7209be1624f2540e0a2261);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5bdd72333d7209be1624f2540e0a2261) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_value_1 = par_url;
        frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 153;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[63], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_song_id == NULL);
        var_song_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[26];
        CHECK_OBJECT(var_song_id);
        tmp_dict_value_1 = var_song_id;
        tmp_assign_source_2 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_mod_expr_left_1;
            PyObject *tmp_mod_expr_right_1;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[64];
            tmp_mod_expr_left_1 = mod_consts[65];
            CHECK_OBJECT(var_song_id);
            tmp_mod_expr_right_1 = var_song_id;
            tmp_dict_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_params == NULL);
        var_params = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[66]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = mod_consts[67];
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_params);
        tmp_args_element_value_3 = var_params;
        frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 160;
        tmp_add_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_song_id);
        tmp_args_element_value_4 = var_song_id;
        tmp_args_element_value_5 = mod_consts[69];
        frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 159;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[70];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[71];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_info == NULL);
        var_info = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_info);
        tmp_args_element_value_6 = var_info;
        frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 163;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[72], tmp_args_element_value_6);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_formats == NULL);
        var_formats = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_formats);
        tmp_args_element_value_7 = var_formats;
        frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 164;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[73], tmp_args_element_value_7);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[66]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_2 = mod_consts[74];
        CHECK_OBJECT(var_song_id);
        tmp_mod_expr_right_2 = var_song_id;
        tmp_args_element_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 167;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_song_id);
        tmp_args_element_value_9 = var_song_id;
        tmp_args_element_value_10 = mod_consts[75];
        frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lyrics_info == NULL);
        var_lyrics_info = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_lyrics_info);
        tmp_args_element_value_11 = var_lyrics_info;
        frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 169;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[76], tmp_args_element_value_11);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lyrics == NULL);
        var_lyrics = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_None;
        assert(var_alt_title == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_alt_title = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_info);
        tmp_expression_value_5 = var_info;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[17]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 172;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[77]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 172;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        tmp_str_arg_value_1 = mod_consts[78];
        CHECK_OBJECT(var_info);
        tmp_expression_value_6 = var_info;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[17]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 173;
        tmp_iterable_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[77]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_alt_title;
            assert(old != NULL);
            var_alt_title = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[26];
        CHECK_OBJECT(var_song_id);
        tmp_dict_value_2 = var_song_id;
        tmp_return_value = _PyDict_NewPresized( 9 );
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_str_arg_value_2;
            PyObject *tmp_iterable_value_2;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_call_arg_element_3;
            PyObject *tmp_call_arg_element_4;
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_call_arg_element_5;
            PyObject *tmp_call_arg_element_6;
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_16;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[79];
            CHECK_OBJECT(var_info);
            tmp_expression_value_7 = var_info;
            tmp_subscript_value_3 = mod_consts[80];
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[81];
            CHECK_OBJECT(var_alt_title);
            tmp_dict_value_2 = var_alt_title;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[82];
            tmp_str_arg_value_2 = mod_consts[83];
            // Tried code:
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_called_value_6;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_call_arg_element_1;
                PyObject *tmp_call_arg_element_2;
                CHECK_OBJECT(var_info);
                tmp_expression_value_8 = var_info;
                tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[17]);
                if (tmp_called_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 179;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_call_arg_element_1 = mod_consts[84];
                tmp_call_arg_element_2 = MAKE_LIST_EMPTY(0);
                frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 179;
                {
                    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
                    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
                }

                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_call_arg_element_2);
                if (tmp_iter_arg_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 179;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_1);
                Py_DECREF(tmp_iter_arg_1);
                if (tmp_assign_source_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 179;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                assert(tmp_listcomp_1__$0 == NULL);
                tmp_listcomp_1__$0 = tmp_assign_source_9;
            }
            {
                PyObject *tmp_assign_source_10;
                tmp_assign_source_10 = MAKE_LIST_EMPTY(0);
                assert(tmp_listcomp_1__contraction == NULL);
                tmp_listcomp_1__contraction = tmp_assign_source_10;
            }
            if (isFrameUnusable(cache_frame_c4afd1ad73a4b54c77afdf519b635a19_2)) {
                Py_XDECREF(cache_frame_c4afd1ad73a4b54c77afdf519b635a19_2);

#if _DEBUG_REFCOUNTS
                if (cache_frame_c4afd1ad73a4b54c77afdf519b635a19_2 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_c4afd1ad73a4b54c77afdf519b635a19_2 = MAKE_FUNCTION_FRAME(codeobj_c4afd1ad73a4b54c77afdf519b635a19, module_youtube_dl$extractor$neteasemusic, sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }
            assert(cache_frame_c4afd1ad73a4b54c77afdf519b635a19_2->m_type_description == NULL);
            frame_c4afd1ad73a4b54c77afdf519b635a19_2 = cache_frame_c4afd1ad73a4b54c77afdf519b635a19_2;


            // Push the new frame as the currently active one.
            pushFrameStack(frame_c4afd1ad73a4b54c77afdf519b635a19_2);

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert(Py_REFCNT(frame_c4afd1ad73a4b54c77afdf519b635a19_2) == 2); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT(tmp_listcomp_1__$0);
                tmp_next_source_1 = tmp_listcomp_1__$0;
                tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_1);
                if (tmp_assign_source_11 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_1;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_2 = "o";
                        exception_lineno = 179;
                        goto try_except_handler_3;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_11;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
                tmp_assign_source_12 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_artist;
                    outline_0_var_artist = tmp_assign_source_12;
                    Py_INCREF(outline_0_var_artist);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_4;
                CHECK_OBJECT(tmp_listcomp_1__contraction);
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT(outline_0_var_artist);
                tmp_expression_value_9 = outline_0_var_artist;
                tmp_subscript_value_4 = mod_consts[80];
                tmp_append_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_4);
                if (tmp_append_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 179;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
                assert(PyList_Check(tmp_append_list_1));
                tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 179;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_iterable_value_2 = tmp_listcomp_1__contraction;
            Py_INCREF(tmp_iterable_value_2);
            goto try_return_handler_3;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            Py_DECREF(tmp_listcomp_1__$0);
            tmp_listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            Py_DECREF(tmp_listcomp_1__contraction);
            tmp_listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp_1__iter_value_0);
            tmp_listcomp_1__iter_value_0 = NULL;
            goto frame_return_exit_2;
            // Exception handler code:
            try_except_handler_3:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_listcomp_1__$0);
            Py_DECREF(tmp_listcomp_1__$0);
            tmp_listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            Py_DECREF(tmp_listcomp_1__contraction);
            tmp_listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp_1__iter_value_0);
            tmp_listcomp_1__iter_value_0 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_2;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION(frame_c4afd1ad73a4b54c77afdf519b635a19_2);
#endif

            // Put the previous frame back on top.
            popFrameStack();


            goto frame_no_exception_1;

            frame_return_exit_2:;
#if 0
            RESTORE_FRAME_EXCEPTION(frame_c4afd1ad73a4b54c77afdf519b635a19_2);
#endif

            // Put the previous frame back on top.
            popFrameStack();


            goto try_return_handler_2;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION(frame_c4afd1ad73a4b54c77afdf519b635a19_2);
#endif

            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_c4afd1ad73a4b54c77afdf519b635a19_2, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_c4afd1ad73a4b54c77afdf519b635a19_2->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_c4afd1ad73a4b54c77afdf519b635a19_2, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_c4afd1ad73a4b54c77afdf519b635a19_2,
                type_description_2,
                outline_0_var_artist
            );


            // Release cached frame if used for exception.
            if (frame_c4afd1ad73a4b54c77afdf519b635a19_2 == cache_frame_c4afd1ad73a4b54c77afdf519b635a19_2) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif

                Py_DECREF(cache_frame_c4afd1ad73a4b54c77afdf519b635a19_2);
                cache_frame_c4afd1ad73a4b54c77afdf519b635a19_2 = NULL;
            }

            assertFrameObject(frame_c4afd1ad73a4b54c77afdf519b635a19_2);

            // Put the previous frame back on top.
            popFrameStack();


            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
            skip_nested_handling_1:;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            Py_XDECREF(outline_0_var_artist);
            outline_0_var_artist = NULL;
            goto outline_result_1;
            // Exception handler code:
            try_except_handler_2:;
            exception_keeper_type_2 = exception_type;
            exception_keeper_value_2 = exception_value;
            exception_keeper_tb_2 = exception_tb;
            exception_keeper_lineno_2 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(outline_0_var_artist);
            outline_0_var_artist = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_1;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_1:;
            exception_lineno = 179;
            goto dict_build_exception_2;
            outline_result_1:;
            tmp_dict_value_2 = UNICODE_JOIN(tmp_str_arg_value_2, tmp_iterable_value_2);
            Py_DECREF(tmp_iterable_value_2);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[85];
            CHECK_OBJECT(par_self);
            tmp_expression_value_10 = par_self;
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[86]);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            CHECK_OBJECT(var_info);
            tmp_expression_value_12 = var_info;
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[17]);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 180;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            tmp_call_arg_element_3 = mod_consts[87];
            tmp_call_arg_element_4 = MAKE_DICT_EMPTY();
            frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 180;
            {
                PyObject *call_args[] = {tmp_call_arg_element_3, tmp_call_arg_element_4};
                tmp_expression_value_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
            }

            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_call_arg_element_4);
            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 180;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[17]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 180;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 180;
            tmp_args_element_value_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[88]);

            Py_DECREF(tmp_called_value_8);
            if (tmp_args_element_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 180;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 180;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[89];
            CHECK_OBJECT(var_info);
            tmp_expression_value_14 = var_info;
            tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[17]);
            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            tmp_call_arg_element_5 = mod_consts[87];
            tmp_call_arg_element_6 = MAKE_DICT_EMPTY();
            frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 181;
            {
                PyObject *call_args[] = {tmp_call_arg_element_5, tmp_call_arg_element_6};
                tmp_expression_value_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
            }

            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_call_arg_element_6);
            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[17]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 181;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[90]);

            Py_DECREF(tmp_called_value_10);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[91];
            CHECK_OBJECT(par_self);
            tmp_expression_value_15 = par_self;
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[86]);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            CHECK_OBJECT(var_info);
            tmp_expression_value_16 = var_info;
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[17]);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 182;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 182;
            tmp_args_element_value_13 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_13, mod_consts[92]);

            Py_DECREF(tmp_called_value_13);
            if (tmp_args_element_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 182;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            frame_5bdd72333d7209be1624f2540e0a2261->m_frame.f_lineno = 182;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[93];
            CHECK_OBJECT(var_lyrics);
            tmp_dict_value_2 = var_lyrics;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[28];
            CHECK_OBJECT(var_formats);
            tmp_dict_value_2 = var_formats;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5bdd72333d7209be1624f2540e0a2261);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5bdd72333d7209be1624f2540e0a2261);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5bdd72333d7209be1624f2540e0a2261);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5bdd72333d7209be1624f2540e0a2261, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5bdd72333d7209be1624f2540e0a2261->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5bdd72333d7209be1624f2540e0a2261, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5bdd72333d7209be1624f2540e0a2261,
        type_description_1,
        par_self,
        par_url,
        var_song_id,
        var_params,
        var_info,
        var_formats,
        var_lyrics_info,
        var_lyrics,
        var_alt_title
    );


    // Release cached frame if used for exception.
    if (frame_5bdd72333d7209be1624f2540e0a2261 == cache_frame_5bdd72333d7209be1624f2540e0a2261) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5bdd72333d7209be1624f2540e0a2261);
        cache_frame_5bdd72333d7209be1624f2540e0a2261 = NULL;
    }

    assertFrameObject(frame_5bdd72333d7209be1624f2540e0a2261);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_song_id);
    Py_DECREF(var_song_id);
    var_song_id = NULL;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;
    CHECK_OBJECT(var_formats);
    Py_DECREF(var_formats);
    var_formats = NULL;
    CHECK_OBJECT(var_lyrics_info);
    Py_DECREF(var_lyrics_info);
    var_lyrics_info = NULL;
    CHECK_OBJECT(var_lyrics);
    Py_DECREF(var_lyrics);
    var_lyrics = NULL;
    CHECK_OBJECT(var_alt_title);
    Py_DECREF(var_alt_title);
    var_alt_title = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_song_id);
    var_song_id = NULL;
    Py_XDECREF(var_params);
    var_params = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_formats);
    var_formats = NULL;
    Py_XDECREF(var_lyrics_info);
    var_lyrics_info = NULL;
    Py_XDECREF(var_lyrics);
    var_lyrics = NULL;
    Py_XDECREF(var_alt_title);
    var_alt_title = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$neteasemusic$$$function__7__real_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_album_id = NULL;
    PyObject *var_info = NULL;
    PyObject *var_name = NULL;
    PyObject *var_desc = NULL;
    PyObject *var_entries = NULL;
    PyObject *outline_0_var_song = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_367061a680212f105c009db0a633fd92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_cf019df72d76f7755187dc61f30ccde7_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_cf019df72d76f7755187dc61f30ccde7_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_367061a680212f105c009db0a633fd92 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_367061a680212f105c009db0a633fd92)) {
        Py_XDECREF(cache_frame_367061a680212f105c009db0a633fd92);

#if _DEBUG_REFCOUNTS
        if (cache_frame_367061a680212f105c009db0a633fd92 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_367061a680212f105c009db0a633fd92 = MAKE_FUNCTION_FRAME(codeobj_367061a680212f105c009db0a633fd92, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_367061a680212f105c009db0a633fd92->m_type_description == NULL);
    frame_367061a680212f105c009db0a633fd92 = cache_frame_367061a680212f105c009db0a633fd92;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_367061a680212f105c009db0a633fd92);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_367061a680212f105c009db0a633fd92) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_value_1 = par_url;
        frame_367061a680212f105c009db0a633fd92->m_frame.f_lineno = 203;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[63], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_album_id == NULL);
        var_album_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[66]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[94];
        CHECK_OBJECT(var_album_id);
        tmp_tuple_element_1 = var_album_id;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_album_id);
        tmp_tuple_element_1 = var_album_id;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        tmp_args_element_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_album_id);
        tmp_args_element_value_3 = var_album_id;
        tmp_args_element_value_4 = mod_consts[95];
        frame_367061a680212f105c009db0a633fd92->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[87];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_info == NULL);
        var_info = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_info);
        tmp_expression_value_3 = var_info;
        tmp_subscript_value_2 = mod_consts[80];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_info);
        tmp_expression_value_4 = var_info;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[17]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_367061a680212f105c009db0a633fd92->m_frame.f_lineno = 210;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[96]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_desc == NULL);
        var_desc = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_3;
            CHECK_OBJECT(var_info);
            tmp_expression_value_5 = var_info;
            tmp_subscript_value_3 = mod_consts[70];
            tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_7;
        }
        if (isFrameUnusable(cache_frame_cf019df72d76f7755187dc61f30ccde7_2)) {
            Py_XDECREF(cache_frame_cf019df72d76f7755187dc61f30ccde7_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_cf019df72d76f7755187dc61f30ccde7_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_cf019df72d76f7755187dc61f30ccde7_2 = MAKE_FUNCTION_FRAME(codeobj_cf019df72d76f7755187dc61f30ccde7, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_cf019df72d76f7755187dc61f30ccde7_2->m_type_description == NULL);
        frame_cf019df72d76f7755187dc61f30ccde7_2 = cache_frame_cf019df72d76f7755187dc61f30ccde7_2;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_cf019df72d76f7755187dc61f30ccde7_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_cf019df72d76f7755187dc61f30ccde7_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_8 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 211;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_9 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_song;
                outline_0_var_song = tmp_assign_source_9;
                Py_INCREF(outline_0_var_song);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_mod_expr_left_2;
            PyObject *tmp_mod_expr_right_2;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_5;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            if (par_self == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[19]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 212;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }

            tmp_expression_value_6 = par_self;
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[97]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_mod_expr_left_2 = mod_consts[98];
            CHECK_OBJECT(outline_0_var_song);
            tmp_expression_value_7 = outline_0_var_song;
            tmp_subscript_value_4 = mod_consts[26];
            tmp_mod_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_4);
            if (tmp_mod_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 212;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_args_element_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
            Py_DECREF(tmp_mod_expr_right_2);
            if (tmp_args_element_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 212;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_args_element_value_6 = mod_consts[99];
            CHECK_OBJECT(outline_0_var_song);
            tmp_expression_value_8 = outline_0_var_song;
            tmp_subscript_value_5 = mod_consts[26];
            tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_5);
            if (tmp_args_element_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_args_element_value_5);

                exception_lineno = 213;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            frame_cf019df72d76f7755187dc61f30ccde7_2->m_frame.f_lineno = 212;
            {
                PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
            }

            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_5 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_5);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_cf019df72d76f7755187dc61f30ccde7_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_cf019df72d76f7755187dc61f30ccde7_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_cf019df72d76f7755187dc61f30ccde7_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cf019df72d76f7755187dc61f30ccde7_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cf019df72d76f7755187dc61f30ccde7_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cf019df72d76f7755187dc61f30ccde7_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cf019df72d76f7755187dc61f30ccde7_2,
            type_description_2,
            outline_0_var_song,
            par_self
        );


        // Release cached frame if used for exception.
        if (frame_cf019df72d76f7755187dc61f30ccde7_2 == cache_frame_cf019df72d76f7755187dc61f30ccde7_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_cf019df72d76f7755187dc61f30ccde7_2);
            cache_frame_cf019df72d76f7755187dc61f30ccde7_2 = NULL;
        }

        assertFrameObject(frame_cf019df72d76f7755187dc61f30ccde7_2);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_song);
        outline_0_var_song = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_song);
        outline_0_var_song = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 211;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_entries == NULL);
        var_entries = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 216;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_entries);
        tmp_args_element_value_8 = var_entries;
        CHECK_OBJECT(var_album_id);
        tmp_args_element_value_9 = var_album_id;
        CHECK_OBJECT(var_name);
        tmp_args_element_value_10 = var_name;
        CHECK_OBJECT(var_desc);
        tmp_args_element_value_11 = var_desc;
        frame_367061a680212f105c009db0a633fd92->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_return_value = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_2,
                mod_consts[100],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_367061a680212f105c009db0a633fd92);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_367061a680212f105c009db0a633fd92);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_367061a680212f105c009db0a633fd92);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_367061a680212f105c009db0a633fd92, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_367061a680212f105c009db0a633fd92->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_367061a680212f105c009db0a633fd92, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_367061a680212f105c009db0a633fd92,
        type_description_1,
        par_self,
        par_url,
        var_album_id,
        var_info,
        var_name,
        var_desc,
        var_entries
    );


    // Release cached frame if used for exception.
    if (frame_367061a680212f105c009db0a633fd92 == cache_frame_367061a680212f105c009db0a633fd92) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_367061a680212f105c009db0a633fd92);
        cache_frame_367061a680212f105c009db0a633fd92 = NULL;
    }

    assertFrameObject(frame_367061a680212f105c009db0a633fd92);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_album_id);
    Py_DECREF(var_album_id);
    var_album_id = NULL;
    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;
    CHECK_OBJECT(var_name);
    Py_DECREF(var_name);
    var_name = NULL;
    CHECK_OBJECT(var_desc);
    Py_DECREF(var_desc);
    var_desc = NULL;
    CHECK_OBJECT(var_entries);
    Py_DECREF(var_entries);
    var_entries = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_album_id);
    var_album_id = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_desc);
    var_desc = NULL;
    Py_XDECREF(var_entries);
    var_entries = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$neteasemusic$$$function__8__real_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_singer_id = NULL;
    PyObject *var_info = NULL;
    PyObject *var_name = NULL;
    PyObject *var_entries = NULL;
    PyObject *outline_0_var_song = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_b6da38f8b2e4aad8a8de31a235a1557d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_2b3d8917416a5abd47bcf47c1b2d2220_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_2b3d8917416a5abd47bcf47c1b2d2220_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b6da38f8b2e4aad8a8de31a235a1557d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b6da38f8b2e4aad8a8de31a235a1557d)) {
        Py_XDECREF(cache_frame_b6da38f8b2e4aad8a8de31a235a1557d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b6da38f8b2e4aad8a8de31a235a1557d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b6da38f8b2e4aad8a8de31a235a1557d = MAKE_FUNCTION_FRAME(codeobj_b6da38f8b2e4aad8a8de31a235a1557d, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b6da38f8b2e4aad8a8de31a235a1557d->m_type_description == NULL);
    frame_b6da38f8b2e4aad8a8de31a235a1557d = cache_frame_b6da38f8b2e4aad8a8de31a235a1557d;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_b6da38f8b2e4aad8a8de31a235a1557d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b6da38f8b2e4aad8a8de31a235a1557d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_value_1 = par_url;
        frame_b6da38f8b2e4aad8a8de31a235a1557d->m_frame.f_lineno = 244;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[63], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_singer_id == NULL);
        var_singer_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[66]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[101];
        CHECK_OBJECT(var_singer_id);
        tmp_tuple_element_1 = var_singer_id;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_singer_id);
        tmp_tuple_element_1 = var_singer_id;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        tmp_args_element_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 247;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_singer_id);
        tmp_args_element_value_3 = var_singer_id;
        tmp_args_element_value_4 = mod_consts[102];
        frame_b6da38f8b2e4aad8a8de31a235a1557d->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_info == NULL);
        var_info = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_info);
        tmp_expression_value_3 = var_info;
        tmp_subscript_value_1 = mod_consts[103];
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[80];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_info);
        tmp_expression_value_5 = var_info;
        tmp_subscript_value_3 = mod_consts[103];
        tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[104];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_subscript_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 251;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_2;
        tmp_mod_expr_left_2 = mod_consts[105];
        CHECK_OBJECT(var_name);
        tmp_tuple_element_2 = var_name;
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_subscript_value_6;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_info);
            tmp_expression_value_7 = var_info;
            tmp_subscript_value_5 = mod_consts[103];
            tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_5);
            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_subscript_value_6 = mod_consts[104];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_name;
            assert(old != NULL);
            var_name = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_subscript_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_info);
        tmp_expression_value_9 = var_info;
        tmp_subscript_value_7 = mod_consts[103];
        tmp_expression_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_7);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = mod_consts[106];
        tmp_subscript_result_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_subscript_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_subscript_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_2);

            exception_lineno = 253;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_3;
        tmp_mod_expr_left_3 = mod_consts[105];
        CHECK_OBJECT(var_name);
        tmp_tuple_element_3 = var_name;
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_str_arg_value_1;
            PyObject *tmp_iterable_value_1;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_subscript_value_10;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 0, tmp_tuple_element_3);
            tmp_str_arg_value_1 = mod_consts[107];
            CHECK_OBJECT(var_info);
            tmp_expression_value_11 = var_info;
            tmp_subscript_value_9 = mod_consts[103];
            tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_9);
            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_1 = "oooooo";
                goto tuple_build_exception_2;
            }
            tmp_subscript_value_10 = mod_consts[106];
            tmp_iterable_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_iterable_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_1 = "oooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_3 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
            Py_DECREF(tmp_iterable_value_1);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_1 = "oooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_name;
            assert(old != NULL);
            var_name = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_11;
            CHECK_OBJECT(var_info);
            tmp_expression_value_12 = var_info;
            tmp_subscript_value_11 = mod_consts[108];
            tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_11);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_8;
        }
        if (isFrameUnusable(cache_frame_2b3d8917416a5abd47bcf47c1b2d2220_2)) {
            Py_XDECREF(cache_frame_2b3d8917416a5abd47bcf47c1b2d2220_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_2b3d8917416a5abd47bcf47c1b2d2220_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_2b3d8917416a5abd47bcf47c1b2d2220_2 = MAKE_FUNCTION_FRAME(codeobj_2b3d8917416a5abd47bcf47c1b2d2220, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_2b3d8917416a5abd47bcf47c1b2d2220_2->m_type_description == NULL);
        frame_2b3d8917416a5abd47bcf47c1b2d2220_2 = cache_frame_2b3d8917416a5abd47bcf47c1b2d2220_2;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_2b3d8917416a5abd47bcf47c1b2d2220_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_2b3d8917416a5abd47bcf47c1b2d2220_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_9 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 256;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_10 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_song;
                outline_0_var_song = tmp_assign_source_10;
                Py_INCREF(outline_0_var_song);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_mod_expr_left_4;
            PyObject *tmp_mod_expr_right_4;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_13;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            if (par_self == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[19]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 257;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }

            tmp_expression_value_13 = par_self;
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[97]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_mod_expr_left_4 = mod_consts[98];
            CHECK_OBJECT(outline_0_var_song);
            tmp_expression_value_14 = outline_0_var_song;
            tmp_subscript_value_12 = mod_consts[26];
            tmp_mod_expr_right_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_12);
            if (tmp_mod_expr_right_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 257;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_args_element_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
            Py_DECREF(tmp_mod_expr_right_4);
            if (tmp_args_element_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 257;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_args_element_value_6 = mod_consts[99];
            CHECK_OBJECT(outline_0_var_song);
            tmp_expression_value_15 = outline_0_var_song;
            tmp_subscript_value_13 = mod_consts[26];
            tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_13);
            if (tmp_args_element_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);
                Py_DECREF(tmp_args_element_value_5);

                exception_lineno = 258;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            frame_2b3d8917416a5abd47bcf47c1b2d2220_2->m_frame.f_lineno = 257;
            {
                PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_6 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_6);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2b3d8917416a5abd47bcf47c1b2d2220_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_2b3d8917416a5abd47bcf47c1b2d2220_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2b3d8917416a5abd47bcf47c1b2d2220_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2b3d8917416a5abd47bcf47c1b2d2220_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2b3d8917416a5abd47bcf47c1b2d2220_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2b3d8917416a5abd47bcf47c1b2d2220_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2b3d8917416a5abd47bcf47c1b2d2220_2,
            type_description_2,
            outline_0_var_song,
            par_self
        );


        // Release cached frame if used for exception.
        if (frame_2b3d8917416a5abd47bcf47c1b2d2220_2 == cache_frame_2b3d8917416a5abd47bcf47c1b2d2220_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_2b3d8917416a5abd47bcf47c1b2d2220_2);
            cache_frame_2b3d8917416a5abd47bcf47c1b2d2220_2 = NULL;
        }

        assertFrameObject(frame_2b3d8917416a5abd47bcf47c1b2d2220_2);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_song);
        outline_0_var_song = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_song);
        outline_0_var_song = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 256;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_entries == NULL);
        var_entries = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 261;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_entries);
        tmp_args_element_value_8 = var_entries;
        CHECK_OBJECT(var_singer_id);
        tmp_args_element_value_9 = var_singer_id;
        CHECK_OBJECT(var_name);
        tmp_args_element_value_10 = var_name;
        frame_b6da38f8b2e4aad8a8de31a235a1557d->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_2,
                mod_consts[100],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6da38f8b2e4aad8a8de31a235a1557d);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6da38f8b2e4aad8a8de31a235a1557d);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6da38f8b2e4aad8a8de31a235a1557d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b6da38f8b2e4aad8a8de31a235a1557d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b6da38f8b2e4aad8a8de31a235a1557d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b6da38f8b2e4aad8a8de31a235a1557d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b6da38f8b2e4aad8a8de31a235a1557d,
        type_description_1,
        par_self,
        par_url,
        var_singer_id,
        var_info,
        var_name,
        var_entries
    );


    // Release cached frame if used for exception.
    if (frame_b6da38f8b2e4aad8a8de31a235a1557d == cache_frame_b6da38f8b2e4aad8a8de31a235a1557d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b6da38f8b2e4aad8a8de31a235a1557d);
        cache_frame_b6da38f8b2e4aad8a8de31a235a1557d = NULL;
    }

    assertFrameObject(frame_b6da38f8b2e4aad8a8de31a235a1557d);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_singer_id);
    Py_DECREF(var_singer_id);
    var_singer_id = NULL;
    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;
    CHECK_OBJECT(var_name);
    Py_DECREF(var_name);
    var_name = NULL;
    CHECK_OBJECT(var_entries);
    Py_DECREF(var_entries);
    var_entries = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_singer_id);
    var_singer_id = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_entries);
    var_entries = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$neteasemusic$$$function__9__real_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_list_id = NULL;
    PyObject *var_info = NULL;
    PyObject *var_name = NULL;
    PyObject *var_desc = NULL;
    PyObject *var_datestamp = NULL;
    PyObject *var_entries = NULL;
    PyObject *outline_0_var_song = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_7f63f154cb3b3b3e6279473bbffd93f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_a2d17d591e6fdcc37599c74dac36d789_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a2d17d591e6fdcc37599c74dac36d789_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7f63f154cb3b3b3e6279473bbffd93f3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7f63f154cb3b3b3e6279473bbffd93f3)) {
        Py_XDECREF(cache_frame_7f63f154cb3b3b3e6279473bbffd93f3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f63f154cb3b3b3e6279473bbffd93f3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f63f154cb3b3b3e6279473bbffd93f3 = MAKE_FUNCTION_FRAME(codeobj_7f63f154cb3b3b3e6279473bbffd93f3, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7f63f154cb3b3b3e6279473bbffd93f3->m_type_description == NULL);
    frame_7f63f154cb3b3b3e6279473bbffd93f3 = cache_frame_7f63f154cb3b3b3e6279473bbffd93f3;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_7f63f154cb3b3b3e6279473bbffd93f3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7f63f154cb3b3b3e6279473bbffd93f3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_value_1 = par_url;
        frame_7f63f154cb3b3b3e6279473bbffd93f3->m_frame.f_lineno = 290;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[63], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_list_id == NULL);
        var_list_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[66]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[109];
        CHECK_OBJECT(var_list_id);
        tmp_mod_expr_right_1 = var_list_id;
        tmp_args_element_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 293;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_list_id);
        tmp_args_element_value_3 = var_list_id;
        tmp_args_element_value_4 = mod_consts[110];
        frame_7f63f154cb3b3b3e6279473bbffd93f3->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[111];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_info == NULL);
        var_info = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_info);
        tmp_expression_value_3 = var_info;
        tmp_subscript_value_2 = mod_consts[80];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_info);
        tmp_expression_value_4 = var_info;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[17]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f63f154cb3b3b3e6279473bbffd93f3->m_frame.f_lineno = 297;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[96]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_desc == NULL);
        var_desc = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_info);
        tmp_expression_value_5 = var_info;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[17]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f63f154cb3b3b3e6279473bbffd93f3->m_frame.f_lineno = 299;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[112]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[113];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[115]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[86]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 301;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_info);
        tmp_expression_value_8 = var_info;
        tmp_subscript_value_3 = mod_consts[116];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 301;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f63f154cb3b3b3e6279473bbffd93f3->m_frame.f_lineno = 301;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 301;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f63f154cb3b3b3e6279473bbffd93f3->m_frame.f_lineno = 300;
        tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f63f154cb3b3b3e6279473bbffd93f3->m_frame.f_lineno = 300;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[117],
            PyTuple_GET_ITEM(mod_consts[118], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_datestamp == NULL);
        var_datestamp = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_1;
        tmp_mod_expr_left_2 = mod_consts[119];
        CHECK_OBJECT(var_name);
        tmp_tuple_element_1 = var_name;
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_datestamp);
        tmp_tuple_element_1 = var_datestamp;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_1);
        tmp_assign_source_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_name;
            assert(old != NULL);
            var_name = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_7;
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_4;
            CHECK_OBJECT(var_info);
            tmp_expression_value_9 = var_info;
            tmp_subscript_value_4 = mod_consts[120];
            tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_4);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_9;
        }
        if (isFrameUnusable(cache_frame_a2d17d591e6fdcc37599c74dac36d789_2)) {
            Py_XDECREF(cache_frame_a2d17d591e6fdcc37599c74dac36d789_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a2d17d591e6fdcc37599c74dac36d789_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a2d17d591e6fdcc37599c74dac36d789_2 = MAKE_FUNCTION_FRAME(codeobj_a2d17d591e6fdcc37599c74dac36d789, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_a2d17d591e6fdcc37599c74dac36d789_2->m_type_description == NULL);
        frame_a2d17d591e6fdcc37599c74dac36d789_2 = cache_frame_a2d17d591e6fdcc37599c74dac36d789_2;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_a2d17d591e6fdcc37599c74dac36d789_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_a2d17d591e6fdcc37599c74dac36d789_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_10 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 304;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_11 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_song;
                outline_0_var_song = tmp_assign_source_11;
                Py_INCREF(outline_0_var_song);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_mod_expr_left_3;
            PyObject *tmp_mod_expr_right_3;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_6;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            if (par_self == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[19]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 305;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }

            tmp_expression_value_10 = par_self;
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[97]);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_mod_expr_left_3 = mod_consts[98];
            CHECK_OBJECT(outline_0_var_song);
            tmp_expression_value_11 = outline_0_var_song;
            tmp_subscript_value_5 = mod_consts[26];
            tmp_mod_expr_right_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_5);
            if (tmp_mod_expr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 305;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_args_element_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
            Py_DECREF(tmp_mod_expr_right_3);
            if (tmp_args_element_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 305;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_args_element_value_8 = mod_consts[99];
            CHECK_OBJECT(outline_0_var_song);
            tmp_expression_value_12 = outline_0_var_song;
            tmp_subscript_value_6 = mod_consts[26];
            tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_6);
            if (tmp_args_element_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_args_element_value_7);

                exception_lineno = 306;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            frame_a2d17d591e6fdcc37599c74dac36d789_2->m_frame.f_lineno = 305;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
            }

            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_7 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_7);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a2d17d591e6fdcc37599c74dac36d789_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_a2d17d591e6fdcc37599c74dac36d789_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a2d17d591e6fdcc37599c74dac36d789_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a2d17d591e6fdcc37599c74dac36d789_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a2d17d591e6fdcc37599c74dac36d789_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a2d17d591e6fdcc37599c74dac36d789_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a2d17d591e6fdcc37599c74dac36d789_2,
            type_description_2,
            outline_0_var_song,
            par_self
        );


        // Release cached frame if used for exception.
        if (frame_a2d17d591e6fdcc37599c74dac36d789_2 == cache_frame_a2d17d591e6fdcc37599c74dac36d789_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_a2d17d591e6fdcc37599c74dac36d789_2);
            cache_frame_a2d17d591e6fdcc37599c74dac36d789_2 = NULL;
        }

        assertFrameObject(frame_a2d17d591e6fdcc37599c74dac36d789_2);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_song);
        outline_0_var_song = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_song);
        outline_0_var_song = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 304;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_entries == NULL);
        var_entries = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 309;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_entries);
        tmp_args_element_value_10 = var_entries;
        CHECK_OBJECT(var_list_id);
        tmp_args_element_value_11 = var_list_id;
        CHECK_OBJECT(var_name);
        tmp_args_element_value_12 = var_name;
        CHECK_OBJECT(var_desc);
        tmp_args_element_value_13 = var_desc;
        frame_7f63f154cb3b3b3e6279473bbffd93f3->m_frame.f_lineno = 309;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_return_value = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_3,
                mod_consts[100],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f63f154cb3b3b3e6279473bbffd93f3);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f63f154cb3b3b3e6279473bbffd93f3);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f63f154cb3b3b3e6279473bbffd93f3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f63f154cb3b3b3e6279473bbffd93f3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f63f154cb3b3b3e6279473bbffd93f3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f63f154cb3b3b3e6279473bbffd93f3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f63f154cb3b3b3e6279473bbffd93f3,
        type_description_1,
        par_self,
        par_url,
        var_list_id,
        var_info,
        var_name,
        var_desc,
        var_datestamp,
        var_entries
    );


    // Release cached frame if used for exception.
    if (frame_7f63f154cb3b3b3e6279473bbffd93f3 == cache_frame_7f63f154cb3b3b3e6279473bbffd93f3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7f63f154cb3b3b3e6279473bbffd93f3);
        cache_frame_7f63f154cb3b3b3e6279473bbffd93f3 = NULL;
    }

    assertFrameObject(frame_7f63f154cb3b3b3e6279473bbffd93f3);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_list_id);
    Py_DECREF(var_list_id);
    var_list_id = NULL;
    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;
    CHECK_OBJECT(var_name);
    Py_DECREF(var_name);
    var_name = NULL;
    CHECK_OBJECT(var_desc);
    Py_DECREF(var_desc);
    var_desc = NULL;
    Py_XDECREF(var_datestamp);
    var_datestamp = NULL;
    CHECK_OBJECT(var_entries);
    Py_DECREF(var_entries);
    var_entries = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_list_id);
    var_list_id = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_desc);
    var_desc = NULL;
    Py_XDECREF(var_datestamp);
    var_datestamp = NULL;
    Py_XDECREF(var_entries);
    var_entries = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$neteasemusic$$$function__10__real_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_mv_id = NULL;
    PyObject *var_info = NULL;
    PyObject *var_formats = NULL;
    PyObject *outline_0_var_brs = NULL;
    PyObject *outline_0_var_mv_url = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_dd97e0e85c194d144cf1c14658911cff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_965898d3fb2c7a7e960203849d5d935d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_965898d3fb2c7a7e960203849d5d935d_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dd97e0e85c194d144cf1c14658911cff = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dd97e0e85c194d144cf1c14658911cff)) {
        Py_XDECREF(cache_frame_dd97e0e85c194d144cf1c14658911cff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd97e0e85c194d144cf1c14658911cff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd97e0e85c194d144cf1c14658911cff = MAKE_FUNCTION_FRAME(codeobj_dd97e0e85c194d144cf1c14658911cff, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dd97e0e85c194d144cf1c14658911cff->m_type_description == NULL);
    frame_dd97e0e85c194d144cf1c14658911cff = cache_frame_dd97e0e85c194d144cf1c14658911cff;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_dd97e0e85c194d144cf1c14658911cff);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dd97e0e85c194d144cf1c14658911cff) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_value_1 = par_url;
        frame_dd97e0e85c194d144cf1c14658911cff->m_frame.f_lineno = 330;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[63], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mv_id == NULL);
        var_mv_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[66]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[121];
        CHECK_OBJECT(var_mv_id);
        tmp_mod_expr_right_1 = var_mv_id;
        tmp_args_element_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 333;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mv_id);
        tmp_args_element_value_3 = var_mv_id;
        tmp_args_element_value_4 = mod_consts[122];
        frame_dd97e0e85c194d144cf1c14658911cff->m_frame.f_lineno = 332;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[123];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_info == NULL);
        var_info = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_2;
            CHECK_OBJECT(var_info);
            tmp_expression_value_4 = var_info;
            tmp_subscript_value_2 = mod_consts[124];
            tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[125]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            frame_dd97e0e85c194d144cf1c14658911cff->m_frame.f_lineno = 338;
            tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
            Py_DECREF(tmp_called_value_2);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_5;
        }
        if (isFrameUnusable(cache_frame_965898d3fb2c7a7e960203849d5d935d_2)) {
            Py_XDECREF(cache_frame_965898d3fb2c7a7e960203849d5d935d_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_965898d3fb2c7a7e960203849d5d935d_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_965898d3fb2c7a7e960203849d5d935d_2 = MAKE_FUNCTION_FRAME(codeobj_965898d3fb2c7a7e960203849d5d935d, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_965898d3fb2c7a7e960203849d5d935d_2->m_type_description == NULL);
        frame_965898d3fb2c7a7e960203849d5d935d_2 = cache_frame_965898d3fb2c7a7e960203849d5d935d_2;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_965898d3fb2c7a7e960203849d5d935d_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_965898d3fb2c7a7e960203849d5d935d_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_6 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 336;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_2 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_8 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 336;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_9 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 336;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 336;
                        goto try_except_handler_5;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[57];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 336;
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_4;
        // End of try:
        try_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_10 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_brs;
                outline_0_var_brs = tmp_assign_source_10;
                Py_INCREF(outline_0_var_brs);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_11 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_mv_url;
                outline_0_var_mv_url = tmp_assign_source_11;
                Py_INCREF(outline_0_var_mv_url);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_dict_key_1 = mod_consts[30];
            CHECK_OBJECT(outline_0_var_mv_url);
            tmp_dict_value_1 = outline_0_var_mv_url;
            tmp_append_value_1 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_mod_expr_left_2;
                PyObject *tmp_mod_expr_right_2;
                PyObject *tmp_int_arg_1;
                tmp_res = PyDict_SetItem(tmp_append_value_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[31];
                tmp_dict_value_1 = mod_consts[126];
                tmp_res = PyDict_SetItem(tmp_append_value_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[37];
                tmp_mod_expr_left_2 = mod_consts[127];
                CHECK_OBJECT(outline_0_var_brs);
                tmp_mod_expr_right_2 = outline_0_var_brs;
                tmp_dict_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 337;
                    type_description_2 = "oo";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_append_value_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[128];
                CHECK_OBJECT(outline_0_var_brs);
                tmp_int_arg_1 = outline_0_var_brs;
                tmp_dict_value_1 = PyNumber_Int(tmp_int_arg_1);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 337;
                    type_description_2 = "oo";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_append_value_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_append_value_1);
            goto try_except_handler_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_3 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_3);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_965898d3fb2c7a7e960203849d5d935d_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_965898d3fb2c7a7e960203849d5d935d_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_965898d3fb2c7a7e960203849d5d935d_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_965898d3fb2c7a7e960203849d5d935d_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_965898d3fb2c7a7e960203849d5d935d_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_965898d3fb2c7a7e960203849d5d935d_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_965898d3fb2c7a7e960203849d5d935d_2,
            type_description_2,
            outline_0_var_brs,
            outline_0_var_mv_url
        );


        // Release cached frame if used for exception.
        if (frame_965898d3fb2c7a7e960203849d5d935d_2 == cache_frame_965898d3fb2c7a7e960203849d5d935d_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_965898d3fb2c7a7e960203849d5d935d_2);
            cache_frame_965898d3fb2c7a7e960203849d5d935d_2 = NULL;
        }

        assertFrameObject(frame_965898d3fb2c7a7e960203849d5d935d_2);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_brs);
        outline_0_var_brs = NULL;
        Py_XDECREF(outline_0_var_mv_url);
        outline_0_var_mv_url = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_brs);
        outline_0_var_brs = NULL;
        Py_XDECREF(outline_0_var_mv_url);
        outline_0_var_mv_url = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 336;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_formats == NULL);
        var_formats = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_formats);
        tmp_args_element_value_5 = var_formats;
        frame_dd97e0e85c194d144cf1c14658911cff->m_frame.f_lineno = 340;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[73], tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[26];
        CHECK_OBJECT(var_mv_id);
        tmp_dict_value_2 = var_mv_id;
        tmp_return_value = _PyDict_NewPresized( 8 );
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_3;
            int tmp_or_left_truth_1;
            PyObject *tmp_or_left_value_1;
            PyObject *tmp_or_right_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_13;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[79];
            CHECK_OBJECT(var_info);
            tmp_expression_value_5 = var_info;
            tmp_subscript_value_3 = mod_consts[80];
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_1 = "ooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[93];
            CHECK_OBJECT(var_info);
            tmp_expression_value_6 = var_info;
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[17]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "ooooo";
                goto dict_build_exception_2;
            }
            frame_dd97e0e85c194d144cf1c14658911cff->m_frame.f_lineno = 345;
            tmp_or_left_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[129]);

            Py_DECREF(tmp_called_value_3);
            if (tmp_or_left_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "ooooo";
                goto dict_build_exception_2;
            }
            tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
            if (tmp_or_left_truth_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_or_left_value_1);

                exception_lineno = 345;
                type_description_1 = "ooooo";
                goto dict_build_exception_2;
            }
            if (tmp_or_left_truth_1 == 1) {
                goto or_left_1;
            } else {
                goto or_right_1;
            }
            or_right_1:;
            Py_DECREF(tmp_or_left_value_1);
            CHECK_OBJECT(var_info);
            tmp_expression_value_7 = var_info;
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[17]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "ooooo";
                goto dict_build_exception_2;
            }
            frame_dd97e0e85c194d144cf1c14658911cff->m_frame.f_lineno = 345;
            tmp_or_right_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[130]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_or_right_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "ooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_dict_value_2 = tmp_or_left_value_1;
            or_end_1:;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[82];
            CHECK_OBJECT(var_info);
            tmp_expression_value_8 = var_info;
            tmp_subscript_value_4 = mod_consts[131];
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_4);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "ooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[132];
            CHECK_OBJECT(var_info);
            tmp_expression_value_10 = var_info;
            tmp_subscript_value_5 = mod_consts[133];
            tmp_expression_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_5);
            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_1 = "ooooo";
                goto dict_build_exception_2;
            }
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[12]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_1 = "ooooo";
                goto dict_build_exception_2;
            }
            frame_dd97e0e85c194d144cf1c14658911cff->m_frame.f_lineno = 347;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_5, mod_consts[134]);

            Py_DECREF(tmp_called_value_5);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_1 = "ooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[28];
            CHECK_OBJECT(var_formats);
            tmp_dict_value_2 = var_formats;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[89];
            CHECK_OBJECT(var_info);
            tmp_expression_value_11 = var_info;
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[17]);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_1 = "ooooo";
                goto dict_build_exception_2;
            }
            frame_dd97e0e85c194d144cf1c14658911cff->m_frame.f_lineno = 349;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[135]);

            Py_DECREF(tmp_called_value_6);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_1 = "ooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[91];
            CHECK_OBJECT(par_self);
            tmp_expression_value_12 = par_self;
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[86]);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;
                type_description_1 = "ooooo";
                goto dict_build_exception_2;
            }
            CHECK_OBJECT(var_info);
            tmp_expression_value_13 = var_info;
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[17]);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 350;
                type_description_1 = "ooooo";
                goto dict_build_exception_2;
            }
            frame_dd97e0e85c194d144cf1c14658911cff->m_frame.f_lineno = 350;
            tmp_args_element_value_6 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_8, mod_consts[92]);

            Py_DECREF(tmp_called_value_8);
            if (tmp_args_element_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 350;
                type_description_1 = "ooooo";
                goto dict_build_exception_2;
            }
            frame_dd97e0e85c194d144cf1c14658911cff->m_frame.f_lineno = 350;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;
                type_description_1 = "ooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dd97e0e85c194d144cf1c14658911cff);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_dd97e0e85c194d144cf1c14658911cff);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dd97e0e85c194d144cf1c14658911cff);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dd97e0e85c194d144cf1c14658911cff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd97e0e85c194d144cf1c14658911cff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd97e0e85c194d144cf1c14658911cff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd97e0e85c194d144cf1c14658911cff,
        type_description_1,
        par_self,
        par_url,
        var_mv_id,
        var_info,
        var_formats
    );


    // Release cached frame if used for exception.
    if (frame_dd97e0e85c194d144cf1c14658911cff == cache_frame_dd97e0e85c194d144cf1c14658911cff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_dd97e0e85c194d144cf1c14658911cff);
        cache_frame_dd97e0e85c194d144cf1c14658911cff = NULL;
    }

    assertFrameObject(frame_dd97e0e85c194d144cf1c14658911cff);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_mv_id);
    Py_DECREF(var_mv_id);
    var_mv_id = NULL;
    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;
    CHECK_OBJECT(var_formats);
    Py_DECREF(var_formats);
    var_formats = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_mv_id);
    var_mv_id = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_formats);
    var_formats = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$neteasemusic$$$function__11__real_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_program_id = NULL;
    PyObject *var_info = NULL;
    PyObject *var_name = NULL;
    PyObject *var_description = NULL;
    PyObject *var_formats = NULL;
    PyObject *var_song_ids = NULL;
    PyObject *var_entries = NULL;
    PyObject *outline_0_var_song = NULL;
    PyObject *outline_1_var_song_id = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_39e082618e59b1b1ce84dfc70bdf9848;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_a5de6959b354f654c4c92d233f63a045_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a5de6959b354f654c4c92d233f63a045_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_02b083e08058426fd0a389d0b949e995_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_02b083e08058426fd0a389d0b949e995_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_39e082618e59b1b1ce84dfc70bdf9848 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_39e082618e59b1b1ce84dfc70bdf9848)) {
        Py_XDECREF(cache_frame_39e082618e59b1b1ce84dfc70bdf9848);

#if _DEBUG_REFCOUNTS
        if (cache_frame_39e082618e59b1b1ce84dfc70bdf9848 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_39e082618e59b1b1ce84dfc70bdf9848 = MAKE_FUNCTION_FRAME(codeobj_39e082618e59b1b1ce84dfc70bdf9848, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_39e082618e59b1b1ce84dfc70bdf9848->m_type_description == NULL);
    frame_39e082618e59b1b1ce84dfc70bdf9848 = cache_frame_39e082618e59b1b1ce84dfc70bdf9848;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_39e082618e59b1b1ce84dfc70bdf9848);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_39e082618e59b1b1ce84dfc70bdf9848) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_value_1 = par_url;
        frame_39e082618e59b1b1ce84dfc70bdf9848->m_frame.f_lineno = 399;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[63], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_program_id == NULL);
        var_program_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[66]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[136];
        CHECK_OBJECT(var_program_id);
        tmp_mod_expr_right_1 = var_program_id;
        tmp_args_element_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 402;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_program_id);
        tmp_args_element_value_3 = var_program_id;
        tmp_args_element_value_4 = mod_consts[137];
        frame_39e082618e59b1b1ce84dfc70bdf9848->m_frame.f_lineno = 401;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[138];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_info == NULL);
        var_info = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_info);
        tmp_expression_value_3 = var_info;
        tmp_subscript_value_2 = mod_consts[80];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_info);
        tmp_expression_value_4 = var_info;
        tmp_subscript_value_3 = mod_consts[93];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_description == NULL);
        var_description = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_info);
        tmp_expression_value_5 = var_info;
        tmp_subscript_value_4 = mod_consts[70];
        tmp_operand_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_4);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[139]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[140]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[17]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_39e082618e59b1b1ce84dfc70bdf9848->m_frame.f_lineno = 408;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[141]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 408;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_info);
        tmp_expression_value_9 = var_info;
        tmp_subscript_value_5 = mod_consts[70];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_5);
        if (tmp_subscript_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 409;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[142]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_2 = mod_consts[143];
        CHECK_OBJECT(var_info);
        tmp_expression_value_12 = var_info;
        tmp_subscript_value_6 = mod_consts[144];
        tmp_expression_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_6);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 412;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = mod_consts[26];
        tmp_mod_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_7);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_mod_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 412;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 412;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_39e082618e59b1b1ce84dfc70bdf9848->m_frame.f_lineno = 410;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[72]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_info);
        tmp_expression_value_14 = var_info;
        tmp_subscript_value_8 = mod_consts[144];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_8);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 414;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_39e082618e59b1b1ce84dfc70bdf9848->m_frame.f_lineno = 414;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_formats == NULL);
        var_formats = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_formats);
        tmp_args_element_value_7 = var_formats;
        frame_39e082618e59b1b1ce84dfc70bdf9848->m_frame.f_lineno = 415;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[73], tmp_args_element_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[26];
        CHECK_OBJECT(var_program_id);
        tmp_dict_value_1 = var_program_id;
        tmp_return_value = _PyDict_NewPresized( 8 );
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_21;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[79];
            CHECK_OBJECT(var_name);
            tmp_dict_value_1 = var_name;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[93];
            CHECK_OBJECT(var_description);
            tmp_dict_value_1 = var_description;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[82];
            CHECK_OBJECT(var_info);
            tmp_expression_value_16 = var_info;
            tmp_subscript_value_9 = mod_consts[145];
            tmp_expression_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_9);
            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_10 = mod_consts[146];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[85];
            CHECK_OBJECT(par_self);
            tmp_expression_value_17 = par_self;
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[86]);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(var_info);
            tmp_expression_value_18 = var_info;
            tmp_subscript_value_11 = mod_consts[147];
            tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_11);
            if (tmp_args_element_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 422;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            frame_39e082618e59b1b1ce84dfc70bdf9848->m_frame.f_lineno = 422;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[89];
            CHECK_OBJECT(var_info);
            tmp_expression_value_19 = var_info;
            tmp_subscript_value_12 = mod_consts[148];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_12);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[91];
            CHECK_OBJECT(par_self);
            tmp_expression_value_20 = par_self;
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[86]);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(var_info);
            tmp_expression_value_21 = var_info;
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[17]);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 424;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            frame_39e082618e59b1b1ce84dfc70bdf9848->m_frame.f_lineno = 424;
            tmp_args_element_value_9 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_7, mod_consts[92]);

            Py_DECREF(tmp_called_value_7);
            if (tmp_args_element_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 424;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            frame_39e082618e59b1b1ce84dfc70bdf9848->m_frame.f_lineno = 424;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[28];
            CHECK_OBJECT(var_formats);
            tmp_dict_value_1 = var_formats;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_22 = par_self;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[142]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_3 = mod_consts[149];
        CHECK_OBJECT(var_program_id);
        tmp_tuple_element_1 = var_program_id;
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_23;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_subscript_value_14;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_info);
            tmp_expression_value_24 = var_info;
            tmp_subscript_value_13 = mod_consts[144];
            tmp_expression_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_13);
            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_subscript_value_14 = mod_consts[26];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_mod_expr_right_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 430;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_39e082618e59b1b1ce84dfc70bdf9848->m_frame.f_lineno = 428;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_subscript_value_16;
        CHECK_OBJECT(var_info);
        tmp_expression_value_26 = var_info;
        tmp_subscript_value_15 = mod_consts[144];
        tmp_expression_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_15);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = mod_consts[26];
        tmp_list_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_16);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_6, 0, tmp_list_element_1);
        assert(var_song_ids == NULL);
        var_song_ids = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(var_song_ids);
        tmp_expression_value_27 = var_song_ids;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[150]);
        assert(!(tmp_called_value_9 == NULL));
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_17;
            CHECK_OBJECT(var_info);
            tmp_expression_value_28 = var_info;
            tmp_subscript_value_17 = mod_consts[70];
            tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_17);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_8;
        }
        if (isFrameUnusable(cache_frame_a5de6959b354f654c4c92d233f63a045_2)) {
            Py_XDECREF(cache_frame_a5de6959b354f654c4c92d233f63a045_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a5de6959b354f654c4c92d233f63a045_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a5de6959b354f654c4c92d233f63a045_2 = MAKE_FUNCTION_FRAME(codeobj_a5de6959b354f654c4c92d233f63a045, module_youtube_dl$extractor$neteasemusic, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_a5de6959b354f654c4c92d233f63a045_2->m_type_description == NULL);
        frame_a5de6959b354f654c4c92d233f63a045_2 = cache_frame_a5de6959b354f654c4c92d233f63a045_2;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_a5de6959b354f654c4c92d233f63a045_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_a5de6959b354f654c4c92d233f63a045_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_9 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 433;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_10 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_song;
                outline_0_var_song = tmp_assign_source_10;
                Py_INCREF(outline_0_var_song);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_18;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_song);
            tmp_expression_value_29 = outline_0_var_song;
            tmp_subscript_value_18 = mod_consts[26];
            tmp_append_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_18);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_11 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_11);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a5de6959b354f654c4c92d233f63a045_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_a5de6959b354f654c4c92d233f63a045_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a5de6959b354f654c4c92d233f63a045_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a5de6959b354f654c4c92d233f63a045_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a5de6959b354f654c4c92d233f63a045_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a5de6959b354f654c4c92d233f63a045_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a5de6959b354f654c4c92d233f63a045_2,
            type_description_2,
            outline_0_var_song
        );


        // Release cached frame if used for exception.
        if (frame_a5de6959b354f654c4c92d233f63a045_2 == cache_frame_a5de6959b354f654c4c92d233f63a045_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_a5de6959b354f654c4c92d233f63a045_2);
            cache_frame_a5de6959b354f654c4c92d233f63a045_2 = NULL;
        }

        assertFrameObject(frame_a5de6959b354f654c4c92d233f63a045_2);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_song);
        outline_0_var_song = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_song);
        outline_0_var_song = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 433;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_39e082618e59b1b1ce84dfc70bdf9848->m_frame.f_lineno = 433;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_11;
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(var_song_ids);
            tmp_iter_arg_2 = var_song_ids;
            tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_1 = "ooooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_13;
        }
        if (isFrameUnusable(cache_frame_02b083e08058426fd0a389d0b949e995_3)) {
            Py_XDECREF(cache_frame_02b083e08058426fd0a389d0b949e995_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_02b083e08058426fd0a389d0b949e995_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_02b083e08058426fd0a389d0b949e995_3 = MAKE_FUNCTION_FRAME(codeobj_02b083e08058426fd0a389d0b949e995, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_02b083e08058426fd0a389d0b949e995_3->m_type_description == NULL);
        frame_02b083e08058426fd0a389d0b949e995_3 = cache_frame_02b083e08058426fd0a389d0b949e995_3;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_02b083e08058426fd0a389d0b949e995_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_02b083e08058426fd0a389d0b949e995_3) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_14 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 434;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_15 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_song_id;
                outline_1_var_song_id = tmp_assign_source_15;
                Py_INCREF(outline_1_var_song_id);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_mod_expr_left_4;
            PyObject *tmp_mod_expr_right_4;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_args_element_value_14;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            if (par_self == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[19]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 435;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }

            tmp_expression_value_30 = par_self;
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[97]);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_mod_expr_left_4 = mod_consts[98];
            CHECK_OBJECT(outline_1_var_song_id);
            tmp_mod_expr_right_4 = outline_1_var_song_id;
            tmp_args_element_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
            if (tmp_args_element_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);

                exception_lineno = 435;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_args_element_value_13 = mod_consts[99];
            CHECK_OBJECT(outline_1_var_song_id);
            tmp_args_element_value_14 = outline_1_var_song_id;
            frame_02b083e08058426fd0a389d0b949e995_3->m_frame.f_lineno = 435;
            {
                PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
                tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_10, call_args);
            }

            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            assert(PyList_Check(tmp_append_list_2));
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_2 = "oo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_11 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_11);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_02b083e08058426fd0a389d0b949e995_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_2;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_02b083e08058426fd0a389d0b949e995_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto try_return_handler_4;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_02b083e08058426fd0a389d0b949e995_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_02b083e08058426fd0a389d0b949e995_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_02b083e08058426fd0a389d0b949e995_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_02b083e08058426fd0a389d0b949e995_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_02b083e08058426fd0a389d0b949e995_3,
            type_description_2,
            outline_1_var_song_id,
            par_self
        );


        // Release cached frame if used for exception.
        if (frame_02b083e08058426fd0a389d0b949e995_3 == cache_frame_02b083e08058426fd0a389d0b949e995_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_02b083e08058426fd0a389d0b949e995_3);
            cache_frame_02b083e08058426fd0a389d0b949e995_3 = NULL;
        }

        assertFrameObject(frame_02b083e08058426fd0a389d0b949e995_3);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_song_id);
        outline_1_var_song_id = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_song_id);
        outline_1_var_song_id = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 434;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_entries == NULL);
        var_entries = tmp_assign_source_11;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 439;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_entries);
        tmp_args_element_value_15 = var_entries;
        CHECK_OBJECT(var_program_id);
        tmp_args_element_value_16 = var_program_id;
        CHECK_OBJECT(var_name);
        tmp_args_element_value_17 = var_name;
        CHECK_OBJECT(var_description);
        tmp_args_element_value_18 = var_description;
        frame_39e082618e59b1b1ce84dfc70bdf9848->m_frame.f_lineno = 439;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_return_value = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_3,
                mod_consts[100],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_39e082618e59b1b1ce84dfc70bdf9848);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_39e082618e59b1b1ce84dfc70bdf9848);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_39e082618e59b1b1ce84dfc70bdf9848);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_39e082618e59b1b1ce84dfc70bdf9848, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_39e082618e59b1b1ce84dfc70bdf9848->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_39e082618e59b1b1ce84dfc70bdf9848, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_39e082618e59b1b1ce84dfc70bdf9848,
        type_description_1,
        par_self,
        par_url,
        var_program_id,
        var_info,
        var_name,
        var_description,
        var_formats,
        var_song_ids,
        var_entries
    );


    // Release cached frame if used for exception.
    if (frame_39e082618e59b1b1ce84dfc70bdf9848 == cache_frame_39e082618e59b1b1ce84dfc70bdf9848) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_39e082618e59b1b1ce84dfc70bdf9848);
        cache_frame_39e082618e59b1b1ce84dfc70bdf9848 = NULL;
    }

    assertFrameObject(frame_39e082618e59b1b1ce84dfc70bdf9848);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_program_id);
    Py_DECREF(var_program_id);
    var_program_id = NULL;
    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_description);
    var_description = NULL;
    Py_XDECREF(var_formats);
    var_formats = NULL;
    Py_XDECREF(var_song_ids);
    var_song_ids = NULL;
    Py_XDECREF(var_entries);
    var_entries = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_program_id);
    var_program_id = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_description);
    var_description = NULL;
    Py_XDECREF(var_formats);
    var_formats = NULL;
    Py_XDECREF(var_song_ids);
    var_song_ids = NULL;
    Py_XDECREF(var_entries);
    var_entries = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$neteasemusic$$$function__12__real_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_dj_id = NULL;
    PyObject *var_name = NULL;
    PyObject *var_desc = NULL;
    PyObject *var_entries = NULL;
    PyObject *var_offset = NULL;
    PyObject *var_info = NULL;
    PyObject *var_radio = NULL;
    PyObject *outline_0_var_program = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_f9baefe9e4f4202f6b59a38b7b1dcad5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_3954ec2b80dbdb0e893ab9c6d59f2644_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_3954ec2b80dbdb0e893ab9c6d59f2644_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f9baefe9e4f4202f6b59a38b7b1dcad5 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f9baefe9e4f4202f6b59a38b7b1dcad5)) {
        Py_XDECREF(cache_frame_f9baefe9e4f4202f6b59a38b7b1dcad5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f9baefe9e4f4202f6b59a38b7b1dcad5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f9baefe9e4f4202f6b59a38b7b1dcad5 = MAKE_FUNCTION_FRAME(codeobj_f9baefe9e4f4202f6b59a38b7b1dcad5, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f9baefe9e4f4202f6b59a38b7b1dcad5->m_type_description == NULL);
    frame_f9baefe9e4f4202f6b59a38b7b1dcad5 = cache_frame_f9baefe9e4f4202f6b59a38b7b1dcad5;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_f9baefe9e4f4202f6b59a38b7b1dcad5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f9baefe9e4f4202f6b59a38b7b1dcad5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_value_1 = par_url;
        frame_f9baefe9e4f4202f6b59a38b7b1dcad5->m_frame.f_lineno = 459;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[63], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dj_id == NULL);
        var_dj_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert(var_name == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_name = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        assert(var_desc == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_desc = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
        assert(var_entries == NULL);
        var_entries = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[71];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[152]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f9baefe9e4f4202f6b59a38b7b1dcad5->m_frame.f_lineno = 464;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[153]);
        }

        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 464;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_offset;
            var_offset = tmp_assign_source_7;
            Py_INCREF(var_offset);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 465;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[66]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_mod_expr_left_1 = mod_consts[154];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[152]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 467;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        if (var_dj_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[155]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "ooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_dj_id;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_offset);
        tmp_tuple_element_1 = var_offset;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 467;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        if (var_dj_id == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[155]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 468;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = var_dj_id;
        tmp_mod_expr_left_2 = mod_consts[156];
        CHECK_OBJECT(var_offset);
        tmp_mod_expr_right_2 = var_offset;
        tmp_args_element_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 468;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_f9baefe9e4f4202f6b59a38b7b1dcad5->m_frame.f_lineno = 465;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_info;
            var_info = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        if (var_entries == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 470;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = var_entries;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[150]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_1;
            CHECK_OBJECT(var_info);
            tmp_expression_value_5 = var_info;
            tmp_subscript_value_1 = mod_consts[158];
            tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 470;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_listcomp_1__$0;
                tmp_listcomp_1__$0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_1__contraction;
                tmp_listcomp_1__contraction = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_3954ec2b80dbdb0e893ab9c6d59f2644_2)) {
            Py_XDECREF(cache_frame_3954ec2b80dbdb0e893ab9c6d59f2644_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3954ec2b80dbdb0e893ab9c6d59f2644_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3954ec2b80dbdb0e893ab9c6d59f2644_2 = MAKE_FUNCTION_FRAME(codeobj_3954ec2b80dbdb0e893ab9c6d59f2644, module_youtube_dl$extractor$neteasemusic, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_3954ec2b80dbdb0e893ab9c6d59f2644_2->m_type_description == NULL);
        frame_3954ec2b80dbdb0e893ab9c6d59f2644_2 = cache_frame_3954ec2b80dbdb0e893ab9c6d59f2644_2;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_3954ec2b80dbdb0e893ab9c6d59f2644_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_3954ec2b80dbdb0e893ab9c6d59f2644_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_11 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 470;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_12 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_program;
                outline_0_var_program = tmp_assign_source_12;
                Py_INCREF(outline_0_var_program);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_mod_expr_left_3;
            PyObject *tmp_mod_expr_right_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_3;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            if (par_self == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[19]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 471;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }

            tmp_expression_value_6 = par_self;
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[97]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 471;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            tmp_mod_expr_left_3 = mod_consts[159];
            CHECK_OBJECT(outline_0_var_program);
            tmp_expression_value_7 = outline_0_var_program;
            tmp_subscript_value_2 = mod_consts[26];
            tmp_mod_expr_right_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_2);
            if (tmp_mod_expr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 472;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            tmp_args_element_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
            Py_DECREF(tmp_mod_expr_right_3);
            if (tmp_args_element_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 472;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            tmp_args_element_value_7 = mod_consts[160];
            CHECK_OBJECT(outline_0_var_program);
            tmp_expression_value_8 = outline_0_var_program;
            tmp_subscript_value_3 = mod_consts[26];
            tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
            if (tmp_args_element_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);
                Py_DECREF(tmp_args_element_value_6);

                exception_lineno = 473;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            frame_3954ec2b80dbdb0e893ab9c6d59f2644_2->m_frame.f_lineno = 471;
            {
                PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
            }

            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 471;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 470;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_2 = "oo";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_5 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_5);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3954ec2b80dbdb0e893ab9c6d59f2644_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_3954ec2b80dbdb0e893ab9c6d59f2644_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto try_return_handler_3;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3954ec2b80dbdb0e893ab9c6d59f2644_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3954ec2b80dbdb0e893ab9c6d59f2644_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3954ec2b80dbdb0e893ab9c6d59f2644_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3954ec2b80dbdb0e893ab9c6d59f2644_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3954ec2b80dbdb0e893ab9c6d59f2644_2,
            type_description_2,
            outline_0_var_program,
            par_self
        );


        // Release cached frame if used for exception.
        if (frame_3954ec2b80dbdb0e893ab9c6d59f2644_2 == cache_frame_3954ec2b80dbdb0e893ab9c6d59f2644_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_3954ec2b80dbdb0e893ab9c6d59f2644_2);
            cache_frame_3954ec2b80dbdb0e893ab9c6d59f2644_2 = NULL;
        }

        assertFrameObject(frame_3954ec2b80dbdb0e893ab9c6d59f2644_2);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_program);
        outline_0_var_program = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_program);
        outline_0_var_program = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 470;
        goto try_except_handler_2;
        outline_result_1:;
        frame_f9baefe9e4f4202f6b59a38b7b1dcad5->m_frame.f_lineno = 470;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (var_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 477;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = var_name;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_info);
        tmp_expression_value_11 = var_info;
        tmp_subscript_value_4 = mod_consts[158];
        tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_4);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_5 = mod_consts[71];
        tmp_expression_value_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_5, 0);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_6 = mod_consts[161];
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_radio;
            var_radio = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_radio);
        tmp_expression_value_12 = var_radio;
        tmp_subscript_value_7 = mod_consts[80];
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_radio);
        tmp_expression_value_13 = var_radio;
        tmp_subscript_value_8 = mod_consts[162];
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_8);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_desc;
            var_desc = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(var_info);
        tmp_expression_value_14 = var_info;
        tmp_subscript_value_9 = mod_consts[163];
        tmp_operand_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_9);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 464;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 485;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[100]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_entries == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 485;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = var_entries;
        if (var_dj_id == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[155]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 485;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = var_dj_id;
        if (var_name == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 485;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_11 = var_name;
        if (var_desc == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[162]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 485;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_12 = var_desc;
        frame_f9baefe9e4f4202f6b59a38b7b1dcad5->m_frame.f_lineno = 485;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f9baefe9e4f4202f6b59a38b7b1dcad5);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f9baefe9e4f4202f6b59a38b7b1dcad5);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f9baefe9e4f4202f6b59a38b7b1dcad5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f9baefe9e4f4202f6b59a38b7b1dcad5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f9baefe9e4f4202f6b59a38b7b1dcad5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f9baefe9e4f4202f6b59a38b7b1dcad5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f9baefe9e4f4202f6b59a38b7b1dcad5,
        type_description_1,
        par_self,
        par_url,
        var_dj_id,
        var_name,
        var_desc,
        var_entries,
        var_offset,
        var_info,
        var_radio
    );


    // Release cached frame if used for exception.
    if (frame_f9baefe9e4f4202f6b59a38b7b1dcad5 == cache_frame_f9baefe9e4f4202f6b59a38b7b1dcad5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f9baefe9e4f4202f6b59a38b7b1dcad5);
        cache_frame_f9baefe9e4f4202f6b59a38b7b1dcad5 = NULL;
    }

    assertFrameObject(frame_f9baefe9e4f4202f6b59a38b7b1dcad5);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_dj_id);
    var_dj_id = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_desc);
    var_desc = NULL;
    Py_XDECREF(var_entries);
    var_entries = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_radio);
    var_radio = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_dj_id);
    var_dj_id = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_desc);
    var_desc = NULL;
    Py_XDECREF(var_entries);
    var_entries = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_radio);
    var_radio = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__10__real_extract() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$neteasemusic$$$function__10__real_extract,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        mod_consts[240],
#endif
        codeobj_dd97e0e85c194d144cf1c14658911cff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$neteasemusic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__11__real_extract() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$neteasemusic$$$function__11__real_extract,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        mod_consts[246],
#endif
        codeobj_39e082618e59b1b1ce84dfc70bdf9848,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$neteasemusic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__12__real_extract() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$neteasemusic$$$function__12__real_extract,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        codeobj_f9baefe9e4f4202f6b59a38b7b1dcad5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$neteasemusic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__1__encrypt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$neteasemusic$$$function__1__encrypt,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_4b0cfff01a0731a2df0413c1ae2e38a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$neteasemusic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__2_extract_formats() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$neteasemusic$$$function__2_extract_formats,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_cc4faf3178fbef3429f547b04fdf57e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$neteasemusic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__3_convert_milliseconds() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$neteasemusic$$$function__3_convert_milliseconds,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_fd4ab9fbf9bbc7a3bbff5bd1e6b5235d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$neteasemusic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__4_query_api() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$neteasemusic$$$function__4_query_api,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_f184d64cd96e85722c1291fae770aeb9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$neteasemusic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__5__process_lyrics() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$neteasemusic$$$function__5__process_lyrics,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[213],
#endif
        codeobj_54c65a155a01582a5bdb7c75fc2c0be2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$neteasemusic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__6__real_extract() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$neteasemusic$$$function__6__real_extract,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        mod_consts[215],
#endif
        codeobj_5bdd72333d7209be1624f2540e0a2261,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$neteasemusic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__7__real_extract() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$neteasemusic$$$function__7__real_extract,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        mod_consts[222],
#endif
        codeobj_367061a680212f105c009db0a633fd92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$neteasemusic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__8__real_extract() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$neteasemusic$$$function__8__real_extract,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        mod_consts[228],
#endif
        codeobj_b6da38f8b2e4aad8a8de31a235a1557d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$neteasemusic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__9__real_extract() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$neteasemusic$$$function__9__real_extract,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        mod_consts[234],
#endif
        codeobj_7f63f154cb3b3b3e6279473bbffd93f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$neteasemusic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_youtube_dl$extractor$neteasemusic[] = {
    impl_youtube_dl$extractor$neteasemusic$$$function__1__encrypt,
    impl_youtube_dl$extractor$neteasemusic$$$function__2_extract_formats,
    impl_youtube_dl$extractor$neteasemusic$$$function__3_convert_milliseconds,
    impl_youtube_dl$extractor$neteasemusic$$$function__4_query_api,
    impl_youtube_dl$extractor$neteasemusic$$$function__5__process_lyrics,
    impl_youtube_dl$extractor$neteasemusic$$$function__6__real_extract,
    impl_youtube_dl$extractor$neteasemusic$$$function__7__real_extract,
    impl_youtube_dl$extractor$neteasemusic$$$function__8__real_extract,
    impl_youtube_dl$extractor$neteasemusic$$$function__9__real_extract,
    impl_youtube_dl$extractor$neteasemusic$$$function__10__real_extract,
    impl_youtube_dl$extractor$neteasemusic$$$function__11__real_extract,
    impl_youtube_dl$extractor$neteasemusic$$$function__12__real_extract,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_youtube_dl$extractor$neteasemusic;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_youtube_dl$extractor$neteasemusic) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_youtube_dl$extractor$neteasemusic[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_youtube_dl$extractor$neteasemusic,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_youtube_dl$extractor$neteasemusic(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("youtube_dl.extractor.neteasemusic");

    // Store the module for future use.
    module_youtube_dl$extractor$neteasemusic = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl.extractor.neteasemusic: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl.extractor.neteasemusic: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl.extractor.neteasemusic: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inityoutube_dl$extractor$neteasemusic\n");

    moduledict_youtube_dl$extractor$neteasemusic = MODULE_DICT(module_youtube_dl$extractor$neteasemusic);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_youtube_dl$extractor$neteasemusic,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$neteasemusic,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[60]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$neteasemusic,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$neteasemusic,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$neteasemusic,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_youtube_dl$extractor$neteasemusic);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_youtube_dl$extractor$neteasemusic);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_5367fecf8c9ae49bdaeaa025226a3eb4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_9888ea7cf2a58e53c8e9f695bd75f420_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_9888ea7cf2a58e53c8e9f695bd75f420_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_youtube_dl$extractor$neteasemusic$$$class__2_NetEaseMusicIE_76 = NULL;
    struct Nuitka_FrameObject *frame_317b256ac09e1a696aa9cd5634a77c63_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_317b256ac09e1a696aa9cd5634a77c63_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_youtube_dl$extractor$neteasemusic$$$class__3_NetEaseMusicAlbumIE_188 = NULL;
    struct Nuitka_FrameObject *frame_46a20ba28d59af6f57b183a104f7c4b8_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_46a20ba28d59af6f57b183a104f7c4b8_4 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_youtube_dl$extractor$neteasemusic$$$class__4_NetEaseMusicSingerIE_219 = NULL;
    struct Nuitka_FrameObject *frame_fe2e4785224ee3ee6c072d67ccdd9443_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_fe2e4785224ee3ee6c072d67ccdd9443_5 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_youtube_dl$extractor$neteasemusic$$$class__5_NetEaseMusicListIE_264 = NULL;
    struct Nuitka_FrameObject *frame_59bc0c90168c1c2e4658b037a58df49a_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_59bc0c90168c1c2e4658b037a58df49a_6 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *locals_youtube_dl$extractor$neteasemusic$$$class__6_NetEaseMusicMvIE_312 = NULL;
    struct Nuitka_FrameObject *frame_3d82f6892b1ccc6cfd90881157d5edc0_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_3d82f6892b1ccc6cfd90881157d5edc0_7 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *locals_youtube_dl$extractor$neteasemusic$$$class__7_NetEaseMusicProgramIE_354 = NULL;
    struct Nuitka_FrameObject *frame_aaeec3598be91f5105a7da14f190b5f2_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_aaeec3598be91f5105a7da14f190b5f2_8 = NULL;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *locals_youtube_dl$extractor$neteasemusic$$$class__8_NetEaseMusicDjRadioIE_442 = NULL;
    struct Nuitka_FrameObject *frame_84cad546ded4c8cb7242e979d249c89e_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    static struct Nuitka_FrameObject *cache_frame_84cad546ded4c8cb7242e979d249c89e_9 = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_5367fecf8c9ae49bdaeaa025226a3eb4 = MAKE_MODULE_FRAME(codeobj_5367fecf8c9ae49bdaeaa025226a3eb4, module_youtube_dl$extractor$neteasemusic);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_5367fecf8c9ae49bdaeaa025226a3eb4);
    assert(Py_REFCNT(frame_5367fecf8c9ae49bdaeaa025226a3eb4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[167], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[168], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[170]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[171];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_youtube_dl$extractor$neteasemusic;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[172];
        tmp_level_value_1 = mod_consts[71];
        frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_youtube_dl$extractor$neteasemusic,
                mod_consts[7],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[7]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[173];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_youtube_dl$extractor$neteasemusic;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[174];
        tmp_level_value_2 = mod_consts[71];
        frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 5;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_youtube_dl$extractor$neteasemusic,
                mod_consts[9],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[9]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[114];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_youtube_dl$extractor$neteasemusic;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[175];
        tmp_level_value_3 = mod_consts[71];
        frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 6;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_youtube_dl$extractor$neteasemusic,
                mod_consts[114],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[114]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[53];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_youtube_dl$extractor$neteasemusic;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[71];
        frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 7;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[176];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_youtube_dl$extractor$neteasemusic;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[177];
        tmp_level_value_5 = mod_consts[178];
        frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 9;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_youtube_dl$extractor$neteasemusic,
                mod_consts[179],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[179]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[180];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_youtube_dl$extractor$neteasemusic;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[181];
        tmp_level_value_6 = mod_consts[182];
        frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 10;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_youtube_dl$extractor$neteasemusic,
                mod_consts[68],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[68]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_youtube_dl$extractor$neteasemusic,
                mod_consts[3],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[3]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_youtube_dl$extractor$neteasemusic,
                mod_consts[151],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[151]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_13);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[183];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_youtube_dl$extractor$neteasemusic;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[184];
        tmp_level_value_7 = mod_consts[182];
        frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 15;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_youtube_dl$extractor$neteasemusic,
                mod_consts[44],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[44]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_youtube_dl$extractor$neteasemusic,
                mod_consts[34],
                mod_consts[71]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[34]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_16);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_assign_source_17 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_17, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_18 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[185];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[185];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        Py_INCREF(tmp_metaclass_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[71];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_20 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[185];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[185];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 21;

        goto try_except_handler_3;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[186]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[186]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[187];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 21;
        tmp_assign_source_21 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[188]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[189];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[190];
        tmp_getattr_default_1 = mod_consts[191];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[190]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 21;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_22;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[192];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21, mod_consts[193], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[187];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21, mod_consts[194], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        if (isFrameUnusable(cache_frame_9888ea7cf2a58e53c8e9f695bd75f420_2)) {
            Py_XDECREF(cache_frame_9888ea7cf2a58e53c8e9f695bd75f420_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_9888ea7cf2a58e53c8e9f695bd75f420_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_9888ea7cf2a58e53c8e9f695bd75f420_2 = MAKE_CLASS_FRAME(codeobj_9888ea7cf2a58e53c8e9f695bd75f420, module_youtube_dl$extractor$neteasemusic, NULL, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_9888ea7cf2a58e53c8e9f695bd75f420_2->m_type_description == NULL);
        frame_9888ea7cf2a58e53c8e9f695bd75f420_2 = cache_frame_9888ea7cf2a58e53c8e9f695bd75f420_2;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_9888ea7cf2a58e53c8e9f695bd75f420_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_9888ea7cf2a58e53c8e9f695bd75f420_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = LIST_COPY(mod_consts[195]);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21, mod_consts[15], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[196];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21, mod_consts[0], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[197];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_classmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM(locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21, mod_consts[198]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_2 = PyObject_GetItem(locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21, mod_consts[198]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[198]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__1__encrypt();

            frame_9888ea7cf2a58e53c8e9f695bd75f420_2->m_frame.f_lineno = 26;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;


            tmp_classmethod_arg_1 = MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__1__encrypt();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__2_extract_formats();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_classmethod_arg_2;
            tmp_res = MAPPING_HAS_ITEM(locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21, mod_consts[198]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_3 = PyObject_GetItem(locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21, mod_consts[198]);

            if (unlikely(tmp_called_value_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[198]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_2 = MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__3_convert_milliseconds();

            frame_9888ea7cf2a58e53c8e9f695bd75f420_2->m_frame.f_lineno = 66;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;


            tmp_classmethod_arg_2 = MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__3_convert_milliseconds();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__4_query_api();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_9888ea7cf2a58e53c8e9f695bd75f420_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_9888ea7cf2a58e53c8e9f695bd75f420_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9888ea7cf2a58e53c8e9f695bd75f420_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9888ea7cf2a58e53c8e9f695bd75f420_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9888ea7cf2a58e53c8e9f695bd75f420_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9888ea7cf2a58e53c8e9f695bd75f420_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_9888ea7cf2a58e53c8e9f695bd75f420_2 == cache_frame_9888ea7cf2a58e53c8e9f695bd75f420_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_9888ea7cf2a58e53c8e9f695bd75f420_2);
            cache_frame_9888ea7cf2a58e53c8e9f695bd75f420_2 = NULL;
        }

        assertFrameObject(frame_9888ea7cf2a58e53c8e9f695bd75f420_2);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_5;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21, mod_consts[203], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[187];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 21;
            tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_23 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21);
        locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21);
        locals_youtube_dl$extractor$neteasemusic$$$class__1_NetEaseMusicBaseIE_21 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 21;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_23);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto try_except_handler_6;
        }
        tmp_assign_source_25 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_26 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_metaclass_value_2;
        bool tmp_condition_result_9;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        tmp_key_value_4 = mod_consts[185];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_value_5 = mod_consts[185];
        tmp_metaclass_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_metaclass_value_2 == NULL) {
            tmp_metaclass_value_2 = Py_None;
        }
        assert(!(tmp_metaclass_value_2 == NULL));
        Py_INCREF(tmp_metaclass_value_2);
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto try_except_handler_6;
        }
        tmp_condition_result_10 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[71];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto try_except_handler_6;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_28 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[185];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[185];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 76;

        goto try_except_handler_6;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[186]);
        tmp_condition_result_12 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[186]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto try_except_handler_6;
        }
        tmp_tuple_element_6 = mod_consts[204];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 76;
        tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[188]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto try_except_handler_6;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[189];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[190];
        tmp_getattr_default_2 = mod_consts[191];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[190]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 76;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_30;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_youtube_dl$extractor$neteasemusic$$$class__2_NetEaseMusicIE_76 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[192];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__2_NetEaseMusicIE_76, mod_consts[193], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[204];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__2_NetEaseMusicIE_76, mod_consts[194], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        if (isFrameUnusable(cache_frame_317b256ac09e1a696aa9cd5634a77c63_3)) {
            Py_XDECREF(cache_frame_317b256ac09e1a696aa9cd5634a77c63_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_317b256ac09e1a696aa9cd5634a77c63_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_317b256ac09e1a696aa9cd5634a77c63_3 = MAKE_CLASS_FRAME(codeobj_317b256ac09e1a696aa9cd5634a77c63, module_youtube_dl$extractor$neteasemusic, NULL, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_317b256ac09e1a696aa9cd5634a77c63_3->m_type_description == NULL);
        frame_317b256ac09e1a696aa9cd5634a77c63_3 = cache_frame_317b256ac09e1a696aa9cd5634a77c63_3;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_317b256ac09e1a696aa9cd5634a77c63_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_317b256ac09e1a696aa9cd5634a77c63_3) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[205];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__2_NetEaseMusicIE_76, mod_consts[206], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[207];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__2_NetEaseMusicIE_76, mod_consts[208], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[209];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__2_NetEaseMusicIE_76, mod_consts[210], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = DEEP_COPY_LIST_GUIDED(mod_consts[211], "DDDD");
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__2_NetEaseMusicIE_76, mod_consts[212], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__5__process_lyrics();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__2_NetEaseMusicIE_76, mod_consts[76], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__6__real_extract();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__2_NetEaseMusicIE_76, mod_consts[214], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_317b256ac09e1a696aa9cd5634a77c63_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_317b256ac09e1a696aa9cd5634a77c63_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_317b256ac09e1a696aa9cd5634a77c63_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_317b256ac09e1a696aa9cd5634a77c63_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_317b256ac09e1a696aa9cd5634a77c63_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_317b256ac09e1a696aa9cd5634a77c63_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_317b256ac09e1a696aa9cd5634a77c63_3 == cache_frame_317b256ac09e1a696aa9cd5634a77c63_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_317b256ac09e1a696aa9cd5634a77c63_3);
            cache_frame_317b256ac09e1a696aa9cd5634a77c63_3 = NULL;
        }

        assertFrameObject(frame_317b256ac09e1a696aa9cd5634a77c63_3);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__2_NetEaseMusicIE_76, mod_consts[203], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[204];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_youtube_dl$extractor$neteasemusic$$$class__2_NetEaseMusicIE_76;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 76;
            tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_31 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_youtube_dl$extractor$neteasemusic$$$class__2_NetEaseMusicIE_76);
        locals_youtube_dl$extractor$neteasemusic$$$class__2_NetEaseMusicIE_76 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_youtube_dl$extractor$neteasemusic$$$class__2_NetEaseMusicIE_76);
        locals_youtube_dl$extractor$neteasemusic$$$class__2_NetEaseMusicIE_76 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 76;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_31);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_9;
        }
        tmp_assign_source_33 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_34 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_metaclass_value_3;
        bool tmp_condition_result_15;
        PyObject *tmp_key_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        nuitka_bool tmp_condition_result_16;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        tmp_key_value_7 = mod_consts[185];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_7, tmp_key_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_value_8 = mod_consts[185];
        tmp_metaclass_value_3 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_metaclass_value_3 == NULL) {
            tmp_metaclass_value_3 = Py_None;
        }
        assert(!(tmp_metaclass_value_3 == NULL));
        Py_INCREF(tmp_metaclass_value_3);
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_9;
        }
        tmp_condition_result_16 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_11 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[71];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_9;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_8:;
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_36 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_36;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_key_value_9;
        PyObject *tmp_dict_arg_value_9;
        tmp_key_value_9 = mod_consts[185];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_9, tmp_key_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[185];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 188;

        goto try_except_handler_9;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_12 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[186]);
        tmp_condition_result_18 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_13 = tmp_class_creation_3__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[186]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_9;
        }
        tmp_tuple_element_10 = mod_consts[216];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 188;
        tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_37;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_14 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[188]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_9;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[189];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[190];
        tmp_getattr_default_3 = mod_consts[191];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[190]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 188;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_38;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_youtube_dl$extractor$neteasemusic$$$class__3_NetEaseMusicAlbumIE_188 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[192];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__3_NetEaseMusicAlbumIE_188, mod_consts[193], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[216];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__3_NetEaseMusicAlbumIE_188, mod_consts[194], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_11;
        }
        if (isFrameUnusable(cache_frame_46a20ba28d59af6f57b183a104f7c4b8_4)) {
            Py_XDECREF(cache_frame_46a20ba28d59af6f57b183a104f7c4b8_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_46a20ba28d59af6f57b183a104f7c4b8_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_46a20ba28d59af6f57b183a104f7c4b8_4 = MAKE_CLASS_FRAME(codeobj_46a20ba28d59af6f57b183a104f7c4b8, module_youtube_dl$extractor$neteasemusic, NULL, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_46a20ba28d59af6f57b183a104f7c4b8_4->m_type_description == NULL);
        frame_46a20ba28d59af6f57b183a104f7c4b8_4 = cache_frame_46a20ba28d59af6f57b183a104f7c4b8_4;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_46a20ba28d59af6f57b183a104f7c4b8_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_46a20ba28d59af6f57b183a104f7c4b8_4) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[217];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__3_NetEaseMusicAlbumIE_188, mod_consts[206], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[218];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__3_NetEaseMusicAlbumIE_188, mod_consts[208], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[219];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__3_NetEaseMusicAlbumIE_188, mod_consts[210], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = DEEP_COPY_DICT(mod_consts[220]);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__3_NetEaseMusicAlbumIE_188, mod_consts[221], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__7__real_extract();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__3_NetEaseMusicAlbumIE_188, mod_consts[214], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_46a20ba28d59af6f57b183a104f7c4b8_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_46a20ba28d59af6f57b183a104f7c4b8_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_46a20ba28d59af6f57b183a104f7c4b8_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_46a20ba28d59af6f57b183a104f7c4b8_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_46a20ba28d59af6f57b183a104f7c4b8_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_46a20ba28d59af6f57b183a104f7c4b8_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_46a20ba28d59af6f57b183a104f7c4b8_4 == cache_frame_46a20ba28d59af6f57b183a104f7c4b8_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_46a20ba28d59af6f57b183a104f7c4b8_4);
            cache_frame_46a20ba28d59af6f57b183a104f7c4b8_4 = NULL;
        }

        assertFrameObject(frame_46a20ba28d59af6f57b183a104f7c4b8_4);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__3_NetEaseMusicAlbumIE_188, mod_consts[203], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_11;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_8 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = mod_consts[216];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_youtube_dl$extractor$neteasemusic$$$class__3_NetEaseMusicAlbumIE_188;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 188;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_39 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_youtube_dl$extractor$neteasemusic$$$class__3_NetEaseMusicAlbumIE_188);
        locals_youtube_dl$extractor$neteasemusic$$$class__3_NetEaseMusicAlbumIE_188 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_youtube_dl$extractor$neteasemusic$$$class__3_NetEaseMusicAlbumIE_188);
        locals_youtube_dl$extractor$neteasemusic$$$class__3_NetEaseMusicAlbumIE_188 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 188;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_39);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_tuple_element_13;
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_tuple_element_13 == NULL)) {
            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
        }

        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_12;
        }
        tmp_assign_source_41 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_13);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_42 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_metaclass_value_4;
        bool tmp_condition_result_21;
        PyObject *tmp_key_value_10;
        PyObject *tmp_dict_arg_value_10;
        PyObject *tmp_dict_arg_value_11;
        PyObject *tmp_key_value_11;
        nuitka_bool tmp_condition_result_22;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        tmp_key_value_10 = mod_consts[185];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_10, tmp_key_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_value_11 = mod_consts[185];
        tmp_metaclass_value_4 = DICT_GET_ITEM0(tmp_dict_arg_value_11, tmp_key_value_11);
        if (tmp_metaclass_value_4 == NULL) {
            tmp_metaclass_value_4 = Py_None;
        }
        assert(!(tmp_metaclass_value_4 == NULL));
        Py_INCREF(tmp_metaclass_value_4);
        goto condexpr_end_9;
        condexpr_false_9:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_12;
        }
        tmp_condition_result_22 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_16 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[71];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_12;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_12;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_10:;
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_44 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_44;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_key_value_12;
        PyObject *tmp_dict_arg_value_12;
        tmp_key_value_12 = mod_consts[185];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_12, tmp_key_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = mod_consts[185];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 219;

        goto try_except_handler_12;
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_17 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[186]);
        tmp_condition_result_24 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_18 = tmp_class_creation_4__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[186]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_12;
        }
        tmp_tuple_element_14 = mod_consts[223];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_14 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 219;
        tmp_assign_source_45 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_45;
    }
    {
        bool tmp_condition_result_25;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_19 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[188]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_12;
        }
        tmp_condition_result_25 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[189];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[190];
        tmp_getattr_default_4 = mod_consts[191];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_12;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_20 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[190]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_12;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 219;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_12;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_46;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_47;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_youtube_dl$extractor$neteasemusic$$$class__4_NetEaseMusicSingerIE_219 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[192];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__4_NetEaseMusicSingerIE_219, mod_consts[193], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[223];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__4_NetEaseMusicSingerIE_219, mod_consts[194], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_14;
        }
        if (isFrameUnusable(cache_frame_fe2e4785224ee3ee6c072d67ccdd9443_5)) {
            Py_XDECREF(cache_frame_fe2e4785224ee3ee6c072d67ccdd9443_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_fe2e4785224ee3ee6c072d67ccdd9443_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_fe2e4785224ee3ee6c072d67ccdd9443_5 = MAKE_CLASS_FRAME(codeobj_fe2e4785224ee3ee6c072d67ccdd9443, module_youtube_dl$extractor$neteasemusic, NULL, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_fe2e4785224ee3ee6c072d67ccdd9443_5->m_type_description == NULL);
        frame_fe2e4785224ee3ee6c072d67ccdd9443_5 = cache_frame_fe2e4785224ee3ee6c072d67ccdd9443_5;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_fe2e4785224ee3ee6c072d67ccdd9443_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_fe2e4785224ee3ee6c072d67ccdd9443_5) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[224];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__4_NetEaseMusicSingerIE_219, mod_consts[206], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = mod_consts[225];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__4_NetEaseMusicSingerIE_219, mod_consts[208], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = mod_consts[226];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__4_NetEaseMusicSingerIE_219, mod_consts[210], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = DEEP_COPY_LIST_GUIDED(mod_consts[227], "DD");
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__4_NetEaseMusicSingerIE_219, mod_consts[212], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__8__real_extract();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__4_NetEaseMusicSingerIE_219, mod_consts[214], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fe2e4785224ee3ee6c072d67ccdd9443_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fe2e4785224ee3ee6c072d67ccdd9443_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fe2e4785224ee3ee6c072d67ccdd9443_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fe2e4785224ee3ee6c072d67ccdd9443_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fe2e4785224ee3ee6c072d67ccdd9443_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fe2e4785224ee3ee6c072d67ccdd9443_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_fe2e4785224ee3ee6c072d67ccdd9443_5 == cache_frame_fe2e4785224ee3ee6c072d67ccdd9443_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_fe2e4785224ee3ee6c072d67ccdd9443_5);
            cache_frame_fe2e4785224ee3ee6c072d67ccdd9443_5 = NULL;
        }

        assertFrameObject(frame_fe2e4785224ee3ee6c072d67ccdd9443_5);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_14;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_26 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto try_except_handler_14;
            }
            if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__4_NetEaseMusicSingerIE_219, mod_consts[203], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_14;
        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_10 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_16 = mod_consts[223];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_16 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_youtube_dl$extractor$neteasemusic$$$class__4_NetEaseMusicSingerIE_219;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 219;
            tmp_assign_source_48 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto try_except_handler_14;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_48;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_47 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_47);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_youtube_dl$extractor$neteasemusic$$$class__4_NetEaseMusicSingerIE_219);
        locals_youtube_dl$extractor$neteasemusic$$$class__4_NetEaseMusicSingerIE_219 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_youtube_dl$extractor$neteasemusic$$$class__4_NetEaseMusicSingerIE_219);
        locals_youtube_dl$extractor$neteasemusic$$$class__4_NetEaseMusicSingerIE_219 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 219;
        goto try_except_handler_12;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_47);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_tuple_element_17;
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_15;
        }
        tmp_assign_source_49 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_49, 0, tmp_tuple_element_17);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_50 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_metaclass_value_5;
        bool tmp_condition_result_27;
        PyObject *tmp_key_value_13;
        PyObject *tmp_dict_arg_value_13;
        PyObject *tmp_dict_arg_value_14;
        PyObject *tmp_key_value_14;
        nuitka_bool tmp_condition_result_28;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        tmp_key_value_13 = mod_consts[185];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_13, tmp_key_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_value_14 = mod_consts[185];
        tmp_metaclass_value_5 = DICT_GET_ITEM0(tmp_dict_arg_value_14, tmp_key_value_14);
        if (tmp_metaclass_value_5 == NULL) {
            tmp_metaclass_value_5 = Py_None;
        }
        assert(!(tmp_metaclass_value_5 == NULL));
        Py_INCREF(tmp_metaclass_value_5);
        goto condexpr_end_11;
        condexpr_false_11:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_15;
        }
        tmp_condition_result_28 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_21 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[71];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_15;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_15;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_12:;
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_52 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_52;
    }
    {
        bool tmp_condition_result_29;
        PyObject *tmp_key_value_15;
        PyObject *tmp_dict_arg_value_15;
        tmp_key_value_15 = mod_consts[185];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_15, tmp_key_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_29 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = mod_consts[185];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 264;

        goto try_except_handler_15;
    }
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_22 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[186]);
        tmp_condition_result_30 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_23 = tmp_class_creation_5__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[186]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_15;
        }
        tmp_tuple_element_18 = mod_consts[229];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_18 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 264;
        tmp_assign_source_53 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_53;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_24 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_24, mod_consts[188]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_15;
        }
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[189];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[190];
        tmp_getattr_default_5 = mod_consts[191];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_15;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[190]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_15;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_15;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 264;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_15;
    }
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_54;
    }
    branch_end_18:;
    {
        PyObject *tmp_assign_source_55;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_youtube_dl$extractor$neteasemusic$$$class__5_NetEaseMusicListIE_264 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[192];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__5_NetEaseMusicListIE_264, mod_consts[193], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[229];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__5_NetEaseMusicListIE_264, mod_consts[194], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_17;
        }
        if (isFrameUnusable(cache_frame_59bc0c90168c1c2e4658b037a58df49a_6)) {
            Py_XDECREF(cache_frame_59bc0c90168c1c2e4658b037a58df49a_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_59bc0c90168c1c2e4658b037a58df49a_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_59bc0c90168c1c2e4658b037a58df49a_6 = MAKE_CLASS_FRAME(codeobj_59bc0c90168c1c2e4658b037a58df49a, module_youtube_dl$extractor$neteasemusic, NULL, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_59bc0c90168c1c2e4658b037a58df49a_6->m_type_description == NULL);
        frame_59bc0c90168c1c2e4658b037a58df49a_6 = cache_frame_59bc0c90168c1c2e4658b037a58df49a_6;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_59bc0c90168c1c2e4658b037a58df49a_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_59bc0c90168c1c2e4658b037a58df49a_6) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[230];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__5_NetEaseMusicListIE_264, mod_consts[206], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = mod_consts[231];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__5_NetEaseMusicListIE_264, mod_consts[208], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = mod_consts[232];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__5_NetEaseMusicListIE_264, mod_consts[210], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = DEEP_COPY_LIST_GUIDED(mod_consts[233], "DD");
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__5_NetEaseMusicListIE_264, mod_consts[212], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__9__real_extract();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__5_NetEaseMusicListIE_264, mod_consts[214], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_59bc0c90168c1c2e4658b037a58df49a_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_59bc0c90168c1c2e4658b037a58df49a_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_59bc0c90168c1c2e4658b037a58df49a_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_59bc0c90168c1c2e4658b037a58df49a_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_59bc0c90168c1c2e4658b037a58df49a_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_59bc0c90168c1c2e4658b037a58df49a_6,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_59bc0c90168c1c2e4658b037a58df49a_6 == cache_frame_59bc0c90168c1c2e4658b037a58df49a_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_59bc0c90168c1c2e4658b037a58df49a_6);
            cache_frame_59bc0c90168c1c2e4658b037a58df49a_6 = NULL;
        }

        assertFrameObject(frame_59bc0c90168c1c2e4658b037a58df49a_6);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_17;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto try_except_handler_17;
            }
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
        }
        branch_yes_20:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__5_NetEaseMusicListIE_264, mod_consts[203], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_17;
        }
        branch_no_20:;
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_12 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_20 = mod_consts[229];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_20 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_youtube_dl$extractor$neteasemusic$$$class__5_NetEaseMusicListIE_264;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 264;
            tmp_assign_source_56 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto try_except_handler_17;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_56;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_55 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_55);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_youtube_dl$extractor$neteasemusic$$$class__5_NetEaseMusicListIE_264);
        locals_youtube_dl$extractor$neteasemusic$$$class__5_NetEaseMusicListIE_264 = NULL;
        goto try_return_handler_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_youtube_dl$extractor$neteasemusic$$$class__5_NetEaseMusicListIE_264);
        locals_youtube_dl$extractor$neteasemusic$$$class__5_NetEaseMusicListIE_264 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 264;
        goto try_except_handler_15;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_55);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_tuple_element_21;
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_tuple_element_21 == NULL)) {
            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
        }

        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_18;
        }
        tmp_assign_source_57 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_57, 0, tmp_tuple_element_21);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_58 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_metaclass_value_6;
        bool tmp_condition_result_33;
        PyObject *tmp_key_value_16;
        PyObject *tmp_dict_arg_value_16;
        PyObject *tmp_dict_arg_value_17;
        PyObject *tmp_key_value_17;
        nuitka_bool tmp_condition_result_34;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        tmp_key_value_16 = mod_consts[185];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_16, tmp_key_value_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_33 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_value_17 = mod_consts[185];
        tmp_metaclass_value_6 = DICT_GET_ITEM0(tmp_dict_arg_value_17, tmp_key_value_17);
        if (tmp_metaclass_value_6 == NULL) {
            tmp_metaclass_value_6 = Py_None;
        }
        assert(!(tmp_metaclass_value_6 == NULL));
        Py_INCREF(tmp_metaclass_value_6);
        goto condexpr_end_13;
        condexpr_false_13:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_18;
        }
        tmp_condition_result_34 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_26 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[71];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_26, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_18;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_18;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_14:;
        condexpr_end_13:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_60 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_60;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_key_value_18;
        PyObject *tmp_dict_arg_value_18;
        tmp_key_value_18 = mod_consts[185];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_18, tmp_key_value_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_35 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
    tmp_dictdel_key = mod_consts[185];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 312;

        goto try_except_handler_18;
    }
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_36;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_27 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_27, mod_consts[186]);
        tmp_condition_result_36 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_28 = tmp_class_creation_6__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[186]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_18;
        }
        tmp_tuple_element_22 = mod_consts[235];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_22 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 312;
        tmp_assign_source_61 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_61;
    }
    {
        bool tmp_condition_result_37;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_29 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_29, mod_consts[188]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_18;
        }
        tmp_condition_result_37 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[189];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[190];
        tmp_getattr_default_6 = mod_consts[191];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_18;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_30 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[190]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_18;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_18;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 312;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_18;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_62;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_63;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_youtube_dl$extractor$neteasemusic$$$class__6_NetEaseMusicMvIE_312 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[192];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__6_NetEaseMusicMvIE_312, mod_consts[193], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_20;
        }
        tmp_dictset_value = mod_consts[235];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__6_NetEaseMusicMvIE_312, mod_consts[194], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_20;
        }
        if (isFrameUnusable(cache_frame_3d82f6892b1ccc6cfd90881157d5edc0_7)) {
            Py_XDECREF(cache_frame_3d82f6892b1ccc6cfd90881157d5edc0_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3d82f6892b1ccc6cfd90881157d5edc0_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3d82f6892b1ccc6cfd90881157d5edc0_7 = MAKE_CLASS_FRAME(codeobj_3d82f6892b1ccc6cfd90881157d5edc0, module_youtube_dl$extractor$neteasemusic, NULL, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_3d82f6892b1ccc6cfd90881157d5edc0_7->m_type_description == NULL);
        frame_3d82f6892b1ccc6cfd90881157d5edc0_7 = cache_frame_3d82f6892b1ccc6cfd90881157d5edc0_7;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_3d82f6892b1ccc6cfd90881157d5edc0_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_3d82f6892b1ccc6cfd90881157d5edc0_7) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[236];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__6_NetEaseMusicMvIE_312, mod_consts[206], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }
        tmp_dictset_value = mod_consts[237];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__6_NetEaseMusicMvIE_312, mod_consts[208], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }
        tmp_dictset_value = mod_consts[238];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__6_NetEaseMusicMvIE_312, mod_consts[210], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }
        tmp_dictset_value = DEEP_COPY_DICT(mod_consts[239]);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__6_NetEaseMusicMvIE_312, mod_consts[221], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__10__real_extract();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__6_NetEaseMusicMvIE_312, mod_consts[214], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3d82f6892b1ccc6cfd90881157d5edc0_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3d82f6892b1ccc6cfd90881157d5edc0_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3d82f6892b1ccc6cfd90881157d5edc0_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3d82f6892b1ccc6cfd90881157d5edc0_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3d82f6892b1ccc6cfd90881157d5edc0_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3d82f6892b1ccc6cfd90881157d5edc0_7,
            type_description_2,
            outline_5_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_3d82f6892b1ccc6cfd90881157d5edc0_7 == cache_frame_3d82f6892b1ccc6cfd90881157d5edc0_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_3d82f6892b1ccc6cfd90881157d5edc0_7);
            cache_frame_3d82f6892b1ccc6cfd90881157d5edc0_7 = NULL;
        }

        assertFrameObject(frame_3d82f6892b1ccc6cfd90881157d5edc0_7);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_20;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_38;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_38 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_38 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto try_except_handler_20;
            }
            if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__6_NetEaseMusicMvIE_312, mod_consts[203], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_20;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_14 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_24 = mod_consts[235];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_24 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_youtube_dl$extractor$neteasemusic$$$class__6_NetEaseMusicMvIE_312;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 312;
            tmp_assign_source_64 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto try_except_handler_20;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_64;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_63 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_63);
        goto try_return_handler_20;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF(locals_youtube_dl$extractor$neteasemusic$$$class__6_NetEaseMusicMvIE_312);
        locals_youtube_dl$extractor$neteasemusic$$$class__6_NetEaseMusicMvIE_312 = NULL;
        goto try_return_handler_19;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_youtube_dl$extractor$neteasemusic$$$class__6_NetEaseMusicMvIE_312);
        locals_youtube_dl$extractor$neteasemusic$$$class__6_NetEaseMusicMvIE_312 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 312;
        goto try_except_handler_18;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_63);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_tuple_element_25;
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_tuple_element_25 == NULL)) {
            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
        }

        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto try_except_handler_21;
        }
        tmp_assign_source_65 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_65, 0, tmp_tuple_element_25);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_66 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_metaclass_value_7;
        bool tmp_condition_result_39;
        PyObject *tmp_key_value_19;
        PyObject *tmp_dict_arg_value_19;
        PyObject *tmp_dict_arg_value_20;
        PyObject *tmp_key_value_20;
        nuitka_bool tmp_condition_result_40;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        tmp_key_value_19 = mod_consts[185];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_19, tmp_key_value_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_value_20 = mod_consts[185];
        tmp_metaclass_value_7 = DICT_GET_ITEM0(tmp_dict_arg_value_20, tmp_key_value_20);
        if (tmp_metaclass_value_7 == NULL) {
            tmp_metaclass_value_7 = Py_None;
        }
        assert(!(tmp_metaclass_value_7 == NULL));
        Py_INCREF(tmp_metaclass_value_7);
        goto condexpr_end_15;
        condexpr_false_15:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto try_except_handler_21;
        }
        tmp_condition_result_40 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_16;
        } else {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_31 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[71];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_31, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto try_except_handler_21;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto try_except_handler_21;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_16:;
        condexpr_end_15:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_68 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_68;
    }
    {
        bool tmp_condition_result_41;
        PyObject *tmp_key_value_21;
        PyObject *tmp_dict_arg_value_21;
        tmp_key_value_21 = mod_consts[185];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_21, tmp_key_value_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_41 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
    tmp_dictdel_key = mod_consts[185];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 354;

        goto try_except_handler_21;
    }
    branch_no_25:;
    {
        nuitka_bool tmp_condition_result_42;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_32 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_32, mod_consts[186]);
        tmp_condition_result_42 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_33 = tmp_class_creation_7__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[186]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto try_except_handler_21;
        }
        tmp_tuple_element_26 = mod_consts[241];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_26 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 354;
        tmp_assign_source_69 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_69;
    }
    {
        bool tmp_condition_result_43;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_34 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_34, mod_consts[188]);
        tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto try_except_handler_21;
        }
        tmp_condition_result_43 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[189];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_7 = mod_consts[190];
        tmp_getattr_default_7 = mod_consts[191];
        tmp_tuple_element_27 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto try_except_handler_21;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_35;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_35 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_35 == NULL));
            tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[190]);
            Py_DECREF(tmp_expression_value_35);
            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_21;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto try_except_handler_21;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 354;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_21;
    }
    branch_no_27:;
    goto branch_end_26;
    branch_no_26:;
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_70;
    }
    branch_end_26:;
    {
        PyObject *tmp_assign_source_71;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_youtube_dl$extractor$neteasemusic$$$class__7_NetEaseMusicProgramIE_354 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[192];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__7_NetEaseMusicProgramIE_354, mod_consts[193], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto try_except_handler_23;
        }
        tmp_dictset_value = mod_consts[241];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__7_NetEaseMusicProgramIE_354, mod_consts[194], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto try_except_handler_23;
        }
        if (isFrameUnusable(cache_frame_aaeec3598be91f5105a7da14f190b5f2_8)) {
            Py_XDECREF(cache_frame_aaeec3598be91f5105a7da14f190b5f2_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_aaeec3598be91f5105a7da14f190b5f2_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_aaeec3598be91f5105a7da14f190b5f2_8 = MAKE_CLASS_FRAME(codeobj_aaeec3598be91f5105a7da14f190b5f2, module_youtube_dl$extractor$neteasemusic, NULL, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_aaeec3598be91f5105a7da14f190b5f2_8->m_type_description == NULL);
        frame_aaeec3598be91f5105a7da14f190b5f2_8 = cache_frame_aaeec3598be91f5105a7da14f190b5f2_8;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_aaeec3598be91f5105a7da14f190b5f2_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_aaeec3598be91f5105a7da14f190b5f2_8) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[242];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__7_NetEaseMusicProgramIE_354, mod_consts[206], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }
        tmp_dictset_value = mod_consts[243];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__7_NetEaseMusicProgramIE_354, mod_consts[208], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }
        tmp_dictset_value = mod_consts[244];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__7_NetEaseMusicProgramIE_354, mod_consts[210], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }
        tmp_dictset_value = DEEP_COPY_LIST_GUIDED(mod_consts[245], "DDD");
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__7_NetEaseMusicProgramIE_354, mod_consts[212], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__11__real_extract();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__7_NetEaseMusicProgramIE_354, mod_consts[214], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_aaeec3598be91f5105a7da14f190b5f2_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_aaeec3598be91f5105a7da14f190b5f2_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_aaeec3598be91f5105a7da14f190b5f2_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_aaeec3598be91f5105a7da14f190b5f2_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_aaeec3598be91f5105a7da14f190b5f2_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_aaeec3598be91f5105a7da14f190b5f2_8,
            type_description_2,
            outline_6_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_aaeec3598be91f5105a7da14f190b5f2_8 == cache_frame_aaeec3598be91f5105a7da14f190b5f2_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_aaeec3598be91f5105a7da14f190b5f2_8);
            cache_frame_aaeec3598be91f5105a7da14f190b5f2_8 = NULL;
        }

        assertFrameObject(frame_aaeec3598be91f5105a7da14f190b5f2_8);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_23;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_44;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;

                goto try_except_handler_23;
            }
            if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
                goto branch_yes_28;
            } else {
                goto branch_no_28;
            }
        }
        branch_yes_28:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__7_NetEaseMusicProgramIE_354, mod_consts[203], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto try_except_handler_23;
        }
        branch_no_28:;
        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_16 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_28 = mod_consts[241];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_28 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_28);
            tmp_tuple_element_28 = locals_youtube_dl$extractor$neteasemusic$$$class__7_NetEaseMusicProgramIE_354;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 354;
            tmp_assign_source_72 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;

                goto try_except_handler_23;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_72;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_71 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_71);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_youtube_dl$extractor$neteasemusic$$$class__7_NetEaseMusicProgramIE_354);
        locals_youtube_dl$extractor$neteasemusic$$$class__7_NetEaseMusicProgramIE_354 = NULL;
        goto try_return_handler_22;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_youtube_dl$extractor$neteasemusic$$$class__7_NetEaseMusicProgramIE_354);
        locals_youtube_dl$extractor$neteasemusic$$$class__7_NetEaseMusicProgramIE_354 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 354;
        goto try_except_handler_21;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_71);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_tuple_element_29;
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_tuple_element_29 == NULL)) {
            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
        }

        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_24;
        }
        tmp_assign_source_73 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_73, 0, tmp_tuple_element_29);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_74 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_74;
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_metaclass_value_8;
        bool tmp_condition_result_45;
        PyObject *tmp_key_value_22;
        PyObject *tmp_dict_arg_value_22;
        PyObject *tmp_dict_arg_value_23;
        PyObject *tmp_key_value_23;
        nuitka_bool tmp_condition_result_46;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        tmp_key_value_22 = mod_consts[185];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_22 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_22, tmp_key_value_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_45 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_45 != false) {
            goto condexpr_true_17;
        } else {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_23 = tmp_class_creation_8__class_decl_dict;
        tmp_key_value_23 = mod_consts[185];
        tmp_metaclass_value_8 = DICT_GET_ITEM0(tmp_dict_arg_value_23, tmp_key_value_23);
        if (tmp_metaclass_value_8 == NULL) {
            tmp_metaclass_value_8 = Py_None;
        }
        assert(!(tmp_metaclass_value_8 == NULL));
        Py_INCREF(tmp_metaclass_value_8);
        goto condexpr_end_17;
        condexpr_false_17:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_24;
        }
        tmp_condition_result_46 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_18;
        } else {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_36 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[71];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_36, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_24;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_24;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_18:;
        condexpr_end_17:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_76 = SELECT_METACLASS(tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_76;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_key_value_24;
        PyObject *tmp_dict_arg_value_24;
        tmp_key_value_24 = mod_consts[185];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_24 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_24, tmp_key_value_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_47 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;
    tmp_dictdel_key = mod_consts[185];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 442;

        goto try_except_handler_24;
    }
    branch_no_29:;
    {
        nuitka_bool tmp_condition_result_48;
        PyObject *tmp_expression_value_37;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_37 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_37, mod_consts[186]);
        tmp_condition_result_48 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_38 = tmp_class_creation_8__metaclass;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[186]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_24;
        }
        tmp_tuple_element_30 = mod_consts[247];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_30 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 442;
        tmp_assign_source_77 = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_77;
    }
    {
        bool tmp_condition_result_49;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_39;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_39 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_39, mod_consts[188]);
        tmp_operand_value_8 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_24;
        }
        tmp_condition_result_49 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_49 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[189];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_8 = mod_consts[190];
        tmp_getattr_default_8 = mod_consts[191];
        tmp_tuple_element_31 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
        if (tmp_tuple_element_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_24;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_40;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_40 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_40 == NULL));
            tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[190]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_tuple_element_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_24;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_24;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 442;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_24;
    }
    branch_no_31:;
    goto branch_end_30;
    branch_no_30:;
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_78;
    }
    branch_end_30:;
    {
        PyObject *tmp_assign_source_79;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_youtube_dl$extractor$neteasemusic$$$class__8_NetEaseMusicDjRadioIE_442 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[192];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__8_NetEaseMusicDjRadioIE_442, mod_consts[193], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_26;
        }
        tmp_dictset_value = mod_consts[247];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__8_NetEaseMusicDjRadioIE_442, mod_consts[194], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_26;
        }
        if (isFrameUnusable(cache_frame_84cad546ded4c8cb7242e979d249c89e_9)) {
            Py_XDECREF(cache_frame_84cad546ded4c8cb7242e979d249c89e_9);

#if _DEBUG_REFCOUNTS
            if (cache_frame_84cad546ded4c8cb7242e979d249c89e_9 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_84cad546ded4c8cb7242e979d249c89e_9 = MAKE_CLASS_FRAME(codeobj_84cad546ded4c8cb7242e979d249c89e, module_youtube_dl$extractor$neteasemusic, NULL, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_84cad546ded4c8cb7242e979d249c89e_9->m_type_description == NULL);
        frame_84cad546ded4c8cb7242e979d249c89e_9 = cache_frame_84cad546ded4c8cb7242e979d249c89e_9;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_84cad546ded4c8cb7242e979d249c89e_9);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_84cad546ded4c8cb7242e979d249c89e_9) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[248];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__8_NetEaseMusicDjRadioIE_442, mod_consts[206], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }
        tmp_dictset_value = mod_consts[249];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__8_NetEaseMusicDjRadioIE_442, mod_consts[208], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }
        tmp_dictset_value = mod_consts[250];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__8_NetEaseMusicDjRadioIE_442, mod_consts[210], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }
        tmp_dictset_value = DEEP_COPY_DICT(mod_consts[251]);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__8_NetEaseMusicDjRadioIE_442, mod_consts[221], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }
        tmp_dictset_value = mod_consts[252];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__8_NetEaseMusicDjRadioIE_442, mod_consts[152], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$neteasemusic$$$function__12__real_extract();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__8_NetEaseMusicDjRadioIE_442, mod_consts[214], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_84cad546ded4c8cb7242e979d249c89e_9);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_8;

        frame_exception_exit_9:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_84cad546ded4c8cb7242e979d249c89e_9);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_84cad546ded4c8cb7242e979d249c89e_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_84cad546ded4c8cb7242e979d249c89e_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_84cad546ded4c8cb7242e979d249c89e_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_84cad546ded4c8cb7242e979d249c89e_9,
            type_description_2,
            outline_7_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_84cad546ded4c8cb7242e979d249c89e_9 == cache_frame_84cad546ded4c8cb7242e979d249c89e_9) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_84cad546ded4c8cb7242e979d249c89e_9);
            cache_frame_84cad546ded4c8cb7242e979d249c89e_9 = NULL;
        }

        assertFrameObject(frame_84cad546ded4c8cb7242e979d249c89e_9);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_8;

        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_26;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_50;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_50 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_50 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;

                goto try_except_handler_26;
            }
            if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
                goto branch_yes_32;
            } else {
                goto branch_no_32;
            }
        }
        branch_yes_32:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$neteasemusic$$$class__8_NetEaseMusicDjRadioIE_442, mod_consts[203], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_26;
        }
        branch_no_32:;
        {
            PyObject *tmp_assign_source_80;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_18 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_32 = mod_consts[247];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_32 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_32);
            tmp_tuple_element_32 = locals_youtube_dl$extractor$neteasemusic$$$class__8_NetEaseMusicDjRadioIE_442;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame.f_lineno = 442;
            tmp_assign_source_80 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;

                goto try_except_handler_26;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_80;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_79 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_79);
        goto try_return_handler_26;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        Py_DECREF(locals_youtube_dl$extractor$neteasemusic$$$class__8_NetEaseMusicDjRadioIE_442);
        locals_youtube_dl$extractor$neteasemusic$$$class__8_NetEaseMusicDjRadioIE_442 = NULL;
        goto try_return_handler_25;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_youtube_dl$extractor$neteasemusic$$$class__8_NetEaseMusicDjRadioIE_442);
        locals_youtube_dl$extractor$neteasemusic$$$class__8_NetEaseMusicDjRadioIE_442 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto try_except_handler_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 442;
        goto try_except_handler_24;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_79);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5367fecf8c9ae49bdaeaa025226a3eb4);
#endif
    popFrameStack();

    goto frame_no_exception_9;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5367fecf8c9ae49bdaeaa025226a3eb4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5367fecf8c9ae49bdaeaa025226a3eb4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5367fecf8c9ae49bdaeaa025226a3eb4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5367fecf8c9ae49bdaeaa025226a3eb4, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_9:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("youtube_dl.extractor.neteasemusic", false);

    Py_INCREF(module_youtube_dl$extractor$neteasemusic);
    return module_youtube_dl$extractor$neteasemusic;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$neteasemusic, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("youtube_dl$extractor$neteasemusic", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
