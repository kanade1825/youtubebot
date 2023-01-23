/* Generated code for Python module 'youtube_dl'
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

/* The "module_youtube_dl" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_youtube_dl;
PyDictObject *moduledict_youtube_dl;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[381];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[381];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("youtube_dl"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 381; i++) {
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
void checkModuleConstants_youtube_dl(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 381; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_14f00a832963d29b398d3177a433f4f7;
static PyCodeObject *codeobj_c06d6fdb1fe02e92640224f383fa62e2;
static PyCodeObject *codeobj_8148f186a5ed99aafb9e73f89c31478e;
static PyCodeObject *codeobj_b71f5b80def794031d2251d337f3d699;
static PyCodeObject *codeobj_0e443d43754b18a03a9aeaadee183611;
static PyCodeObject *codeobj_48f53f953750280b5d6d23a42840dcbe;
static PyCodeObject *codeobj_a2986ad488eacc9a126fd793104f6f45;
static PyCodeObject *codeobj_141f4d490190fce208d978775d369cbb;
static PyCodeObject *codeobj_069374bc659200c074f90c7d4bc23e8c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[369]); CHECK_OBJECT(module_filename_obj);
    codeobj_14f00a832963d29b398d3177a433f4f7 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[2], mod_consts[2], mod_consts[370], NULL, 1, 0, 0);
    codeobj_c06d6fdb1fe02e92640224f383fa62e2 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[371], mod_consts[371], mod_consts[372], NULL, 1, 0, 0);
    codeobj_8148f186a5ed99aafb9e73f89c31478e = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[371], mod_consts[371], mod_consts[373], NULL, 1, 0, 0);
    codeobj_b71f5b80def794031d2251d337f3d699 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[371], mod_consts[371], mod_consts[374], NULL, 1, 0, 0);
    codeobj_0e443d43754b18a03a9aeaadee183611 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[371], mod_consts[371], mod_consts[375], NULL, 1, 0, 0);
    codeobj_48f53f953750280b5d6d23a42840dcbe = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[376], mod_consts[376], NULL, NULL, 0, 0, 0);
    codeobj_a2986ad488eacc9a126fd793104f6f45 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[326], mod_consts[326], mod_consts[377], NULL, 1, 0, 0);
    codeobj_141f4d490190fce208d978775d369cbb = MAKE_CODE_OBJECT(module_filename_obj, 473, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[366], mod_consts[366], mod_consts[378], NULL, 1, 0, 0);
    codeobj_069374bc659200c074f90c7d4bc23e8c = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, mod_consts[114], mod_consts[114], mod_consts[379], mod_consts[380], 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_youtube_dl$$$function__1__real_main(PyObject *defaults);


static PyObject *MAKE_FUNCTION_youtube_dl$$$function__1__real_main$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_youtube_dl$$$function__1__real_main$$$function__2_parse_retries(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_youtube_dl$$$function__2_main(PyObject *defaults);


// The module function definitions.
static PyObject *impl_youtube_dl$$$function__1__real_main(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_argv = python_pars[0];
    struct Nuitka_CellObject *var_parser = Nuitka_Cell_Empty();
    PyObject *var_opts = NULL;
    PyObject *var_args = NULL;
    PyObject *var_h = NULL;
    PyObject *var_key = NULL;
    PyObject *var_value = NULL;
    PyObject *var_batch_urls = NULL;
    PyObject *var_batchfd = NULL;
    PyObject *var_all_urls = NULL;
    PyObject *var__enc = NULL;
    PyObject *var_ie = NULL;
    PyObject *var_matchedUrls = NULL;
    PyObject *var_mu = NULL;
    PyObject *var_desc = NULL;
    PyObject *var__SEARCHES = NULL;
    PyObject *var__COUNTS = NULL;
    PyObject *var_table = NULL;
    PyObject *var_numeric_limit = NULL;
    PyObject *var_parse_retries = NULL;
    PyObject *var_numeric_buffersize = NULL;
    PyObject *var_numeric_chunksize = NULL;
    PyObject *var_date = NULL;
    PyObject *var_outtmpl = NULL;
    PyObject *var_any_getting = NULL;
    PyObject *var_any_printing = NULL;
    PyObject *var_download_archive_fn = NULL;
    PyObject *var_postprocessors = NULL;
    PyObject *var_already_have_thumbnail = NULL;
    PyObject *var_external_downloader_args = NULL;
    PyObject *var_postprocessor_args = NULL;
    PyObject *var_match_filter = NULL;
    PyObject *var_ydl_opts = NULL;
    PyObject *var_ydl = NULL;
    PyObject *var_retcode = NULL;
    PyObject *outline_0_var_url = NULL;
    PyObject *outline_1_var_url = NULL;
    PyObject *outline_2_var_url = NULL;
    PyObject *outline_3_var_mso_id = NULL;
    PyObject *outline_3_var_mso_info = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_listcomp_4__$0 = NULL;
    PyObject *tmp_listcomp_4__contraction = NULL;
    PyObject *tmp_listcomp_4__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_a2986ad488eacc9a126fd793104f6f45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    int tmp_res;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_FrameObject *frame_8148f186a5ed99aafb9e73f89c31478e_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_8148f186a5ed99aafb9e73f89c31478e_2 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_FrameObject *frame_b71f5b80def794031d2251d337f3d699_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_b71f5b80def794031d2251d337f3d699_3 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_FrameObject *frame_0e443d43754b18a03a9aeaadee183611_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    static struct Nuitka_FrameObject *cache_frame_0e443d43754b18a03a9aeaadee183611_4 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    struct Nuitka_FrameObject *frame_c06d6fdb1fe02e92640224f383fa62e2_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    static struct Nuitka_FrameObject *cache_frame_c06d6fdb1fe02e92640224f383fa62e2_5 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
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
    static struct Nuitka_FrameObject *cache_frame_a2986ad488eacc9a126fd793104f6f45 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a2986ad488eacc9a126fd793104f6f45)) {
        Py_XDECREF(cache_frame_a2986ad488eacc9a126fd793104f6f45);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a2986ad488eacc9a126fd793104f6f45 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a2986ad488eacc9a126fd793104f6f45 = MAKE_FUNCTION_FRAME(codeobj_a2986ad488eacc9a126fd793104f6f45, module_youtube_dl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a2986ad488eacc9a126fd793104f6f45->m_type_description == NULL);
    frame_a2986ad488eacc9a126fd793104f6f45 = cache_frame_a2986ad488eacc9a126fd793104f6f45;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_a2986ad488eacc9a126fd793104f6f45);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a2986ad488eacc9a126fd793104f6f45) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }


        tmp_args_element_value_1 = MAKE_FUNCTION_youtube_dl$$$function__1__real_main$$$function__1_lambda();

        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 52;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 54;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 56;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[6]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_argv);
        tmp_args_element_value_2 = par_argv;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 58;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            exception_lineno = 58;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            exception_lineno = 58;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            exception_lineno = 58;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
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

                    type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                    exception_lineno = 58;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            exception_lineno = 58;
            goto try_except_handler_3;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(Nuitka_Cell_GET(var_parser) == NULL);
        Py_INCREF(tmp_assign_source_5);
        PyCell_SET(var_parser, tmp_assign_source_5);

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_opts == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_opts = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert(var_args == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_args = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_opts);
        tmp_expression_value_1 = var_opts;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_opts);
        tmp_expression_value_2 = var_opts;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 62;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[11];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_opts);
        tmp_expression_value_3 = var_opts;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[12]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_opts);
        tmp_expression_value_4 = var_opts;
        tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[12]);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 66;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[13];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_opts);
        tmp_expression_value_5 = var_opts;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[14]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_opts);
        tmp_expression_value_6 = var_opts;
        tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[14]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                exception_lineno = 70;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_h;
            var_h = tmp_assign_source_10;
            Py_INCREF(var_h);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = mod_consts[15];
        CHECK_OBJECT(var_h);
        tmp_cmp_expr_right_4 = var_h;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 72;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(var_parser);
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[17]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_mod_expr_left_1 = mod_consts[18];
        CHECK_OBJECT(var_h);
        tmp_mod_expr_right_1 = var_h;
        tmp_args_element_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 72;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 72;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        if (var_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_8 = var_h;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[20]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 73;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_5, mod_consts[21]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_4, 0, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            exception_lineno = 73;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_5, 1, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            exception_lineno = 73;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                    exception_lineno = 73;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[22];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            exception_lineno = 73;
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_14;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_15;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_9 = var_opts;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[24]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 74;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_mod_expr_left_2 = mod_consts[26];
        CHECK_OBJECT(var_key);
        tmp_tuple_element_1 = var_key;
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_value);
        tmp_tuple_element_1 = var_value;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_1);
        tmp_args_element_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 75;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_5:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(var_value);
        tmp_ass_subvalue_3 = var_value;
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_ass_subscribed_3 == NULL)) {
            tmp_ass_subscribed_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_key);
        tmp_ass_subscript_3 = var_key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 70;
        type_description_1 = "ocooooooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = var_opts;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[27]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 79;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[11];
        tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[28];
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_kw_call_dict_value_0_1 == NULL));
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 80;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[29]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_7;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_called_instance_2 == NULL));
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 81;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[32], 0)
        );

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_LIST_EMPTY(0);
        assert(var_batch_urls == NULL);
        var_batch_urls = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_12;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = var_opts;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[33]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    // Tried code:
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_13;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_13 = var_opts;
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[33]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_cmp_expr_right_6 = mod_consts[34];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_14;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[35]);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert(var_batchfd == NULL);
        var_batchfd = tmp_assign_source_17;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        assert(!(tmp_expression_value_15 == NULL));
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[37]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 91;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 91;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_16 = var_opts;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[33]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 91;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 91;
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 91;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[39];
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[40]);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 90;
        tmp_assign_source_18 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert(var_batchfd == NULL);
        var_batchfd = tmp_assign_source_18;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_batchfd);
        tmp_args_element_value_6 = var_batchfd;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 93;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_6);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_batch_urls;
            assert(old != NULL);
            var_batch_urls = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_17 = var_opts;
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[24]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 94;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_operand_value_1;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_add_expr_left_3 = mod_consts[42];
        CHECK_OBJECT(var_batch_urls);
        tmp_operand_value_1 = var_batch_urls;
        tmp_add_expr_right_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_add_expr_right_2 = mod_consts[28];
        tmp_args_element_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 95;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_9:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_6 == NULL) {
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_a2986ad488eacc9a126fd793104f6f45, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_a2986ad488eacc9a126fd793104f6f45, exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_IOError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_expression_value_19;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[31]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_mod_expr_left_3 = mod_consts[43];
        if (var_opts == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_19 = var_opts;
        tmp_mod_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[33]);
        if (tmp_mod_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 97;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 97;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 97;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_9);
    }
    goto branch_end_10;
    branch_no_10:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 86;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a2986ad488eacc9a126fd793104f6f45->m_frame) frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ocooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
    branch_end_10:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_6;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_6:;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        if (var_batch_urls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_4 = var_batch_urls;
        // Tried code:
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(var_args);
            tmp_iter_arg_4 = var_args;
            tmp_assign_source_21 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_22;
        }
        if (isFrameUnusable(cache_frame_8148f186a5ed99aafb9e73f89c31478e_2)) {
            Py_XDECREF(cache_frame_8148f186a5ed99aafb9e73f89c31478e_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_8148f186a5ed99aafb9e73f89c31478e_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_8148f186a5ed99aafb9e73f89c31478e_2 = MAKE_FUNCTION_FRAME(codeobj_8148f186a5ed99aafb9e73f89c31478e, module_youtube_dl, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_8148f186a5ed99aafb9e73f89c31478e_2->m_type_description == NULL);
        frame_8148f186a5ed99aafb9e73f89c31478e_2 = cache_frame_8148f186a5ed99aafb9e73f89c31478e_2;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_8148f186a5ed99aafb9e73f89c31478e_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_8148f186a5ed99aafb9e73f89c31478e_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_23 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 98;
                    goto try_except_handler_10;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_23;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_24 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_url;
                outline_0_var_url = tmp_assign_source_24;
                Py_INCREF(outline_0_var_url);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_20;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_url);
            tmp_expression_value_20 = outline_0_var_url;
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[45]);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            frame_8148f186a5ed99aafb9e73f89c31478e_2->m_frame.f_lineno = 98;
            tmp_append_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_13);
            Py_DECREF(tmp_called_value_13);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_add_expr_right_4 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_add_expr_right_4);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
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
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8148f186a5ed99aafb9e73f89c31478e_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_8148f186a5ed99aafb9e73f89c31478e_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto try_return_handler_9;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8148f186a5ed99aafb9e73f89c31478e_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8148f186a5ed99aafb9e73f89c31478e_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8148f186a5ed99aafb9e73f89c31478e_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8148f186a5ed99aafb9e73f89c31478e_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8148f186a5ed99aafb9e73f89c31478e_2,
            type_description_2,
            outline_0_var_url
        );


        // Release cached frame if used for exception.
        if (frame_8148f186a5ed99aafb9e73f89c31478e_2 == cache_frame_8148f186a5ed99aafb9e73f89c31478e_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_8148f186a5ed99aafb9e73f89c31478e_2);
            cache_frame_8148f186a5ed99aafb9e73f89c31478e_2 = NULL;
        }

        assertFrameObject(frame_8148f186a5ed99aafb9e73f89c31478e_2);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ocooooooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_XDECREF(outline_0_var_url);
        outline_0_var_url = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_url);
        outline_0_var_url = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 98;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_assign_source_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_all_urls == NULL);
        var_all_urls = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 99;
        tmp_assign_source_25 = CALL_FUNCTION_NO_ARGS(tmp_called_value_14);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__enc == NULL);
        var__enc = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        // Tried code:
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(var_all_urls);
            tmp_iter_arg_5 = var_all_urls;
            tmp_assign_source_27 = MAKE_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_28;
        }
        if (isFrameUnusable(cache_frame_b71f5b80def794031d2251d337f3d699_3)) {
            Py_XDECREF(cache_frame_b71f5b80def794031d2251d337f3d699_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b71f5b80def794031d2251d337f3d699_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b71f5b80def794031d2251d337f3d699_3 = MAKE_FUNCTION_FRAME(codeobj_b71f5b80def794031d2251d337f3d699, module_youtube_dl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_b71f5b80def794031d2251d337f3d699_3->m_type_description == NULL);
        frame_b71f5b80def794031d2251d337f3d699_3 = cache_frame_b71f5b80def794031d2251d337f3d699_3;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_b71f5b80def794031d2251d337f3d699_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_b71f5b80def794031d2251d337f3d699_3) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_29;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_3 = tmp_listcomp_2__$0;
            tmp_assign_source_29 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_29 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 100;
                    goto try_except_handler_12;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_29;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_30 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_url;
                outline_1_var_url = tmp_assign_source_30;
                Py_INCREF(outline_1_var_url);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_args_element_value_10;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_url);
            tmp_isinstance_inst_1 = outline_1_var_url;
            tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
            tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "oo";
                goto try_except_handler_12;
            }
            tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            CHECK_OBJECT(outline_1_var_url);
            tmp_expression_value_21 = outline_1_var_url;
            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[47]);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "oo";
                goto try_except_handler_12;
            }
            if (var__enc == NULL) {
                Py_DECREF(tmp_called_value_15);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[48]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 100;
                type_description_2 = "oo";
                goto try_except_handler_12;
            }

            tmp_args_element_value_9 = var__enc;
            tmp_args_element_value_10 = mod_consts[49];
            frame_b71f5b80def794031d2251d337f3d699_3->m_frame.f_lineno = 100;
            {
                PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
                tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_15, call_args);
            }

            Py_DECREF(tmp_called_value_15);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "oo";
                goto try_except_handler_12;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT(outline_1_var_url);
            tmp_append_value_2 = outline_1_var_url;
            Py_INCREF(tmp_append_value_2);
            condexpr_end_1:;
            assert(PyList_Check(tmp_append_list_2));
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "oo";
                goto try_except_handler_12;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_2 = "oo";
            goto try_except_handler_12;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_26 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_26);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
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
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b71f5b80def794031d2251d337f3d699_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_2;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_b71f5b80def794031d2251d337f3d699_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto try_return_handler_11;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b71f5b80def794031d2251d337f3d699_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b71f5b80def794031d2251d337f3d699_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b71f5b80def794031d2251d337f3d699_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b71f5b80def794031d2251d337f3d699_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b71f5b80def794031d2251d337f3d699_3,
            type_description_2,
            outline_1_var_url,
            var__enc
        );


        // Release cached frame if used for exception.
        if (frame_b71f5b80def794031d2251d337f3d699_3 == cache_frame_b71f5b80def794031d2251d337f3d699_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_b71f5b80def794031d2251d337f3d699_3);
            cache_frame_b71f5b80def794031d2251d337f3d699_3 = NULL;
        }

        assertFrameObject(frame_b71f5b80def794031d2251d337f3d699_3);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ocooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_XDECREF(outline_1_var_url);
        outline_1_var_url = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_url);
        outline_1_var_url = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 100;
        goto frame_exception_exit_1;
        outline_result_2:;
        {
            PyObject *old = var_all_urls;
            assert(old != NULL);
            var_all_urls = tmp_assign_source_26;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_attribute_value_4;
        int tmp_truth_name_4;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = var_opts;
        tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[50]);
        if (tmp_attribute_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_4);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_4);

            exception_lineno = 102;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_4);
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_23;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_23 = var_opts;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[51]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 103;
        tmp_iter_arg_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_iter_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_31 = MAKE_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_31;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_4 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_32 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_32 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                exception_lineno = 103;
                goto try_except_handler_13;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_33 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_ie;
            var_ie = tmp_assign_source_33;
            Py_INCREF(var_ie);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_10;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_expression_value_24;
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_26;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT(var_ie);
        tmp_expression_value_24 = var_ie;
        tmp_add_expr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[52]);
        if (tmp_add_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT(var_ie);
        tmp_expression_value_25 = var_ie;
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[53]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_6);

            exception_lineno = 104;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_6);

            exception_lineno = 104;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_add_expr_right_6 = mod_consts[54];
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_add_expr_right_6 = mod_consts[55];
        condexpr_end_2:;
        tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_left_6);
        if (tmp_add_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_add_expr_right_5 = mod_consts[28];
        tmp_kw_call_arg_value_0_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 104;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[56]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 104;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 104;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_17, args, kw_values, mod_consts[29]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_assign_source_34;
        // Tried code:
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_iter_arg_7;
            if (var_all_urls == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[57]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 105;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }

            tmp_iter_arg_7 = var_all_urls;
            tmp_assign_source_35 = MAKE_ITERATOR(tmp_iter_arg_7);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_listcomp_3__$0;
                tmp_listcomp_3__$0 = tmp_assign_source_35;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_36;
            tmp_assign_source_36 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_3__contraction;
                tmp_listcomp_3__contraction = tmp_assign_source_36;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_0e443d43754b18a03a9aeaadee183611_4)) {
            Py_XDECREF(cache_frame_0e443d43754b18a03a9aeaadee183611_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0e443d43754b18a03a9aeaadee183611_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0e443d43754b18a03a9aeaadee183611_4 = MAKE_FUNCTION_FRAME(codeobj_0e443d43754b18a03a9aeaadee183611, module_youtube_dl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_0e443d43754b18a03a9aeaadee183611_4->m_type_description == NULL);
        frame_0e443d43754b18a03a9aeaadee183611_4 = cache_frame_0e443d43754b18a03a9aeaadee183611_4;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_0e443d43754b18a03a9aeaadee183611_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0e443d43754b18a03a9aeaadee183611_4) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_37;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_5 = tmp_listcomp_3__$0;
            tmp_assign_source_37 = ITERATOR_NEXT(tmp_next_source_5);
            if (tmp_assign_source_37 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_5;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 105;
                    goto try_except_handler_15;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_37;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_38;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_38 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_url;
                outline_2_var_url = tmp_assign_source_38;
                Py_INCREF(outline_2_var_url);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_11;
            PyObject *tmp_args_element_value_12;
            int tmp_truth_name_5;
            if (var_ie == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[58]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 105;
                type_description_2 = "oo";
                goto try_except_handler_15;
            }

            tmp_called_instance_3 = var_ie;
            CHECK_OBJECT(outline_2_var_url);
            tmp_args_element_value_12 = outline_2_var_url;
            frame_0e443d43754b18a03a9aeaadee183611_4->m_frame.f_lineno = 105;
            tmp_call_result_11 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[59], tmp_args_element_value_12);
            if (tmp_call_result_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "oo";
                goto try_except_handler_15;
            }
            tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_11);
            if (tmp_truth_name_5 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_11);

                exception_lineno = 105;
                type_description_2 = "oo";
                goto try_except_handler_15;
            }
            tmp_condition_result_14 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_call_result_11);
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            CHECK_OBJECT(outline_2_var_url);
            tmp_append_value_3 = outline_2_var_url;
            assert(PyList_Check(tmp_append_list_3));
            tmp_result = LIST_APPEND0(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "oo";
                goto try_except_handler_15;
            }
        }
        branch_no_12:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_2 = "oo";
            goto try_except_handler_15;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_assign_source_34 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto frame_exception_exit_4;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0e443d43754b18a03a9aeaadee183611_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_3;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_0e443d43754b18a03a9aeaadee183611_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto try_return_handler_14;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0e443d43754b18a03a9aeaadee183611_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0e443d43754b18a03a9aeaadee183611_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0e443d43754b18a03a9aeaadee183611_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0e443d43754b18a03a9aeaadee183611_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0e443d43754b18a03a9aeaadee183611_4,
            type_description_2,
            outline_2_var_url,
            var_ie
        );


        // Release cached frame if used for exception.
        if (frame_0e443d43754b18a03a9aeaadee183611_4 == cache_frame_0e443d43754b18a03a9aeaadee183611_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_0e443d43754b18a03a9aeaadee183611_4);
            cache_frame_0e443d43754b18a03a9aeaadee183611_4 = NULL;
        }

        assertFrameObject(frame_0e443d43754b18a03a9aeaadee183611_4);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "ocooooooooooooooooooooooooooooooooo";
        goto try_except_handler_14;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_XDECREF(outline_2_var_url);
        outline_2_var_url = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_2_var_url);
        outline_2_var_url = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 105;
        goto try_except_handler_13;
        outline_result_3:;
        {
            PyObject *old = var_matchedUrls;
            var_matchedUrls = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_iter_arg_8;
        CHECK_OBJECT(var_matchedUrls);
        tmp_iter_arg_8 = var_matchedUrls;
        tmp_assign_source_39 = MAKE_ITERATOR(tmp_iter_arg_8);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_6 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_40 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_40 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                exception_lineno = 106;
                goto try_except_handler_16;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_41 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_mu;
            var_mu = tmp_assign_source_41;
            Py_INCREF(var_mu);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_12;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_27;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_add_expr_left_8 = mod_consts[60];
        CHECK_OBJECT(var_mu);
        tmp_add_expr_right_8 = var_mu;
        tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_add_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_add_expr_right_7 = mod_consts[28];
        tmp_kw_call_arg_value_0_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_left_7);
        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 107;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[56]);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 107;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 107;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_18, args, kw_values, mod_consts[29]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_12);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 106;
        type_description_1 = "ocooooooooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_13;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 103;
        type_description_1 = "ocooooooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_13;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 108;
        tmp_call_result_13 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[32], 0)
        );

        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_attribute_value_5;
        int tmp_truth_name_6;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 109;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_28 = var_opts;
        tmp_attribute_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[61]);
        if (tmp_attribute_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_attribute_value_5);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_5);

            exception_lineno = 109;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_5);
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_29;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_29 = var_opts;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[51]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 110;
        tmp_iter_arg_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_iter_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_42 = MAKE_ITERATOR(tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_4__for_iterator == NULL);
        tmp_for_loop_4__for_iterator = tmp_assign_source_42;
    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_7 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_43 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_43 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                exception_lineno = 110;
                goto try_except_handler_17;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_44 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_ie;
            var_ie = tmp_assign_source_44;
            Py_INCREF(var_ie);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(var_ie);
        tmp_expression_value_30 = var_ie;
        tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[53]);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    goto loop_start_7;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(var_ie);
        tmp_getattr_target_1 = var_ie;
        tmp_getattr_attr_1 = mod_consts[62];
        CHECK_OBJECT(var_ie);
        tmp_expression_value_31 = var_ie;
        tmp_getattr_default_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[52]);
        if (tmp_getattr_default_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_45 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        Py_DECREF(tmp_getattr_default_1);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = var_desc;
            var_desc = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_desc);
        tmp_cmp_expr_left_8 = var_desc;
        tmp_cmp_expr_right_8 = Py_False;
        tmp_condition_result_17 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    goto loop_start_7;
    branch_no_15:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_attribute_value_6;
        CHECK_OBJECT(var_ie);
        tmp_expression_value_32 = var_ie;
        tmp_attribute_value_6 = mod_consts[63];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_32, tmp_attribute_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[64];
        {
            PyObject *old = var__SEARCHES;
            var__SEARCHES = tmp_assign_source_46;
            Py_INCREF(var__SEARCHES);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[65];
        {
            PyObject *old = var__COUNTS;
            var__COUNTS = tmp_assign_source_47;
            Py_INCREF(var__COUNTS);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(var_desc);
        tmp_iadd_expr_left_1 = var_desc;
        tmp_mod_expr_left_4 = mod_consts[66];
        CHECK_OBJECT(var_ie);
        tmp_expression_value_33 = var_ie;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[63]);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_15;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_3);
            tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_called_instance_5 == NULL)) {
                tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var__COUNTS);
            tmp_args_element_value_14 = var__COUNTS;
            frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 119;
            tmp_tuple_element_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[68], tmp_args_element_value_14);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_3);
            tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_called_instance_6 == NULL)) {
                tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var__SEARCHES);
            tmp_args_element_value_15 = var__SEARCHES;
            frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 119;
            tmp_tuple_element_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[68], tmp_args_element_value_15);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_iadd_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_48 = tmp_iadd_expr_left_1;
        var_desc = tmp_assign_source_48;

    }
    branch_no_16:;
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_14;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_expression_value_34;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        CHECK_OBJECT(var_desc);
        tmp_add_expr_left_9 = var_desc;
        tmp_add_expr_right_9 = mod_consts[28];
        tmp_kw_call_arg_value_0_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_9, tmp_add_expr_right_9);
        if (tmp_kw_call_arg_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_4);

            exception_lineno = 120;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[56]);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_4);

            exception_lineno = 120;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 120;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_20, args, kw_values, mod_consts[29]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_4);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        Py_DECREF(tmp_call_result_14);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 110;
        type_description_1 = "ocooooooooooooooooooooooooooooooooo";
        goto try_except_handler_17;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_15;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 121;
        tmp_call_result_15 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[32], 0)
        );

        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_attribute_value_7;
        int tmp_truth_name_7;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_35 = var_opts;
        tmp_attribute_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[69]);
        if (tmp_attribute_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_attribute_value_7);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_7);

            exception_lineno = 122;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_7);
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_49;
        // Tried code:
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_iter_arg_10;
            PyObject *tmp_called_value_21;
            PyObject *tmp_expression_value_36;
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[71]);
            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 123;
            tmp_iter_arg_10 = CALL_FUNCTION_NO_ARGS(tmp_called_value_21);
            Py_DECREF(tmp_called_value_21);
            if (tmp_iter_arg_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            tmp_assign_source_50 = MAKE_ITERATOR(tmp_iter_arg_10);
            Py_DECREF(tmp_iter_arg_10);
            if (tmp_assign_source_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            assert(tmp_listcomp_4__$0 == NULL);
            tmp_listcomp_4__$0 = tmp_assign_source_50;
        }
        {
            PyObject *tmp_assign_source_51;
            tmp_assign_source_51 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_4__contraction == NULL);
            tmp_listcomp_4__contraction = tmp_assign_source_51;
        }
        if (isFrameUnusable(cache_frame_c06d6fdb1fe02e92640224f383fa62e2_5)) {
            Py_XDECREF(cache_frame_c06d6fdb1fe02e92640224f383fa62e2_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c06d6fdb1fe02e92640224f383fa62e2_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c06d6fdb1fe02e92640224f383fa62e2_5 = MAKE_FUNCTION_FRAME(codeobj_c06d6fdb1fe02e92640224f383fa62e2, module_youtube_dl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c06d6fdb1fe02e92640224f383fa62e2_5->m_type_description == NULL);
        frame_c06d6fdb1fe02e92640224f383fa62e2_5 = cache_frame_c06d6fdb1fe02e92640224f383fa62e2_5;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_c06d6fdb1fe02e92640224f383fa62e2_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c06d6fdb1fe02e92640224f383fa62e2_5) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_8:;
        {
            PyObject *tmp_next_source_8;
            PyObject *tmp_assign_source_52;
            CHECK_OBJECT(tmp_listcomp_4__$0);
            tmp_next_source_8 = tmp_listcomp_4__$0;
            tmp_assign_source_52 = ITERATOR_NEXT(tmp_next_source_8);
            if (tmp_assign_source_52 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_8;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 123;
                    goto try_except_handler_19;
                }
            }

            {
                PyObject *old = tmp_listcomp_4__iter_value_0;
                tmp_listcomp_4__iter_value_0 = tmp_assign_source_52;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_iter_arg_11;
            CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
            tmp_iter_arg_11 = tmp_listcomp_4__iter_value_0;
            tmp_assign_source_53 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
            if (tmp_assign_source_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "oo";
                goto try_except_handler_20;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_53;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_6 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_54 = UNPACK_NEXT(tmp_unpack_6, 0, 2);
            if (tmp_assign_source_54 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 123;
                goto try_except_handler_21;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_54;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_7 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_55 = UNPACK_NEXT(tmp_unpack_7, 1, 2);
            if (tmp_assign_source_55 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 123;
                goto try_except_handler_21;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_55;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_3 = tmp_listcomp$tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 123;
                        goto try_except_handler_21;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[22];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 123;
                goto try_except_handler_21;
            }
        }
        goto try_end_11;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_20;
        // End of try:
        try_end_11:;
        goto try_end_12;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_19;
        // End of try:
        try_end_12:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_56;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_56 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_3_var_mso_id;
                outline_3_var_mso_id = tmp_assign_source_56;
                Py_INCREF(outline_3_var_mso_id);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_57;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_57 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_3_var_mso_info;
                outline_3_var_mso_info = tmp_assign_source_57;
                Py_INCREF(outline_3_var_mso_info);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_4;
            PyObject *tmp_append_value_4;
            PyObject *tmp_list_element_1;
            CHECK_OBJECT(tmp_listcomp_4__contraction);
            tmp_append_list_4 = tmp_listcomp_4__contraction;
            CHECK_OBJECT(outline_3_var_mso_id);
            tmp_list_element_1 = outline_3_var_mso_id;
            tmp_append_value_4 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_2;
                PyList_SET_ITEM0(tmp_append_value_4, 0, tmp_list_element_1);
                CHECK_OBJECT(outline_3_var_mso_info);
                tmp_expression_value_37 = outline_3_var_mso_info;
                tmp_subscript_value_2 = mod_consts[72];
                tmp_list_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_2);
                if (tmp_list_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 123;
                    type_description_2 = "oo";
                    goto list_build_exception_1;
                }
                PyList_SET_ITEM(tmp_append_value_4, 1, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_append_value_4);
            goto try_except_handler_19;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            assert(PyList_Check(tmp_append_list_4));
            tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "oo";
                goto try_except_handler_19;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_2 = "oo";
            goto try_except_handler_19;
        }
        goto loop_start_8;
        loop_end_8:;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        tmp_assign_source_49 = tmp_listcomp_4__contraction;
        Py_INCREF(tmp_assign_source_49);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        goto frame_return_exit_4;
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

        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto frame_exception_exit_5;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c06d6fdb1fe02e92640224f383fa62e2_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_4;

        frame_return_exit_4:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_c06d6fdb1fe02e92640224f383fa62e2_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto try_return_handler_18;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c06d6fdb1fe02e92640224f383fa62e2_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c06d6fdb1fe02e92640224f383fa62e2_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c06d6fdb1fe02e92640224f383fa62e2_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c06d6fdb1fe02e92640224f383fa62e2_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c06d6fdb1fe02e92640224f383fa62e2_5,
            type_description_2,
            outline_3_var_mso_id,
            outline_3_var_mso_info
        );


        // Release cached frame if used for exception.
        if (frame_c06d6fdb1fe02e92640224f383fa62e2_5 == cache_frame_c06d6fdb1fe02e92640224f383fa62e2_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c06d6fdb1fe02e92640224f383fa62e2_5);
            cache_frame_c06d6fdb1fe02e92640224f383fa62e2_5 = NULL;
        }

        assertFrameObject(frame_c06d6fdb1fe02e92640224f383fa62e2_5);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;
        type_description_1 = "ocooooooooooooooooooooooooooooooooo";
        goto try_except_handler_18;
        skip_nested_handling_4:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_XDECREF(outline_3_var_mso_id);
        outline_3_var_mso_id = NULL;
        Py_XDECREF(outline_3_var_mso_info);
        outline_3_var_mso_info = NULL;
        goto outline_result_4;
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

        Py_XDECREF(outline_3_var_mso_id);
        outline_3_var_mso_id = NULL;
        Py_XDECREF(outline_3_var_mso_info);
        outline_3_var_mso_info = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 123;
        goto frame_exception_exit_1;
        outline_result_4:;
        assert(var_table == NULL);
        var_table = tmp_assign_source_49;
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_result_16;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_expression_value_38;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_11 = mod_consts[73];
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = LIST_COPY(mod_consts[75]);
        CHECK_OBJECT(var_table);
        tmp_args_element_value_17 = var_table;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_add_expr_right_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_args_element_value_16);
        if (tmp_add_expr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_10 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_right_11);
        if (tmp_add_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_10 = mod_consts[28];
        tmp_kw_call_arg_value_0_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_10, tmp_add_expr_right_10);
        Py_DECREF(tmp_add_expr_left_10);
        if (tmp_kw_call_arg_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_5);

            exception_lineno = 124;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[56]);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_5);

            exception_lineno = 124;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 124;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_22, args, kw_values, mod_consts[29]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_5);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_17;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 125;
        tmp_call_result_17 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[32], 0)
        );

        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_20;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_attribute_value_8;
        int tmp_truth_name_8;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_expression_value_41;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 128;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_39 = var_opts;
        tmp_attribute_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[76]);
        if (tmp_attribute_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_attribute_value_8);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_8);

            exception_lineno = 128;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_8);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 128;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_40 = var_opts;
        tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[77]);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_9 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_9);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 128;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_41 = var_opts;
        tmp_cmp_expr_left_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[78]);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_10 = Py_None;
        tmp_or_right_value_1 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_10);
        tmp_and_right_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_right_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_condition_result_20 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_20 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_18;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 129;
        tmp_call_result_18 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_9,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[79], 0)
        );

        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    branch_no_18:;
    {
        bool tmp_condition_result_21;
        int tmp_and_left_truth_2;
        bool tmp_and_left_value_2;
        bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_expression_value_43;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_42 = var_opts;
        tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[78]);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_11 = Py_None;
        tmp_and_left_value_2 = (tmp_cmp_expr_left_11 != tmp_cmp_expr_right_11) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_11);
        tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_43 = var_opts;
        tmp_cmp_expr_left_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[77]);
        if (tmp_cmp_expr_left_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_12 = Py_None;
        tmp_and_right_value_2 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_12);
        tmp_condition_result_21 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_21 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_19;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 131;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_10 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 131;
        tmp_call_result_19 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[80], 0)
        );

        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    branch_no_19:;
    {
        bool tmp_condition_result_22;
        int tmp_and_left_truth_3;
        bool tmp_and_left_value_3;
        bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        PyObject *tmp_expression_value_45;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_44 = var_opts;
        tmp_cmp_expr_left_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[81]);
        if (tmp_cmp_expr_left_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_13 = Py_None;
        tmp_and_left_value_3 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_13);
        tmp_and_left_truth_3 = tmp_and_left_value_3 != false ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_45 = var_opts;
        tmp_cmp_expr_left_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[82]);
        if (tmp_cmp_expr_left_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_14 = Py_None;
        tmp_and_right_value_3 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_14);
        tmp_condition_result_22 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_22 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_20;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 133;
        tmp_call_result_20 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[83], 0)
        );

        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    branch_no_20:;
    {
        nuitka_bool tmp_condition_result_23;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        PyObject *tmp_expression_value_46;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_attribute_value_9;
        int tmp_truth_name_9;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_attribute_value_10;
        int tmp_truth_name_10;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_attribute_value_11;
        int tmp_truth_name_11;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_46 = var_opts;
        tmp_cmp_expr_left_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[84]);
        if (tmp_cmp_expr_left_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_15 = Py_None;
        tmp_and_left_value_4 = (tmp_cmp_expr_left_15 != tmp_cmp_expr_right_15) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_15);
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_47 = var_opts;
        tmp_attribute_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[85]);
        if (tmp_attribute_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_attribute_value_9);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_9);

            exception_lineno = 134;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_9);
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_48 = var_opts;
        tmp_attribute_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[86]);
        if (tmp_attribute_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_attribute_value_10);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_10);

            exception_lineno = 134;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_3 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_10);
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_49 = var_opts;
        tmp_attribute_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[87]);
        if (tmp_attribute_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_attribute_value_11);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_11);

            exception_lineno = 134;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_3 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_11);
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_and_right_value_4 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_and_right_value_4 = tmp_or_left_value_2;
        or_end_2:;
        tmp_condition_result_23 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_23 = tmp_and_left_value_4;
        and_end_4:;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_21;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 135;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_12 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 135;
        tmp_call_result_21 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_12,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[88], 0)
        );

        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    branch_no_21:;
    {
        bool tmp_condition_result_24;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_expression_value_50;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_50 = var_opts;
        tmp_cmp_expr_left_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[89]);
        if (tmp_cmp_expr_left_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_16 = Py_None;
        tmp_condition_result_24 = (tmp_cmp_expr_left_16 != tmp_cmp_expr_right_16) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_16);
        if (tmp_condition_result_24 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        PyObject *tmp_expression_value_51;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_51 = var_opts;
        tmp_cmp_expr_left_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[89]);
        if (tmp_cmp_expr_left_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_17 = mod_consts[90];
        tmp_condition_result_25 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        Py_DECREF(tmp_cmp_expr_left_17);
        if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_22;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 138;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_13 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 138;
        tmp_call_result_22 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_13,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[91], 0)
        );

        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    branch_no_23:;
    branch_no_22:;
    {
        bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        PyObject *tmp_expression_value_52;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_52 = var_opts;
        tmp_cmp_expr_left_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[92]);
        if (tmp_cmp_expr_left_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_18 = Py_None;
        tmp_condition_result_26 = (tmp_cmp_expr_left_18 != tmp_cmp_expr_right_18) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_18);
        if (tmp_condition_result_26 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        PyObject *tmp_expression_value_53;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 140;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_53 = var_opts;
        tmp_cmp_expr_left_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[92]);
        if (tmp_cmp_expr_left_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_19 = mod_consts[90];
        tmp_condition_result_27 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        Py_DECREF(tmp_cmp_expr_left_19);
        if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_call_result_23;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 141;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_14 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 141;
        tmp_call_result_23 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_14,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[93], 0)
        );

        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    branch_no_25:;
    branch_no_24:;
    {
        nuitka_bool tmp_condition_result_28;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_attribute_value_12;
        int tmp_truth_name_12;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_attribute_value_13;
        int tmp_truth_name_13;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 142;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_54 = var_opts;
        tmp_attribute_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[85]);
        if (tmp_attribute_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_attribute_value_12);
        if (tmp_truth_name_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_12);

            exception_lineno = 142;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_5 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_12);
        tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_5 == 1) {
            goto and_right_5;
        } else {
            goto and_left_5;
        }
        and_right_5:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 142;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_55 = var_opts;
        tmp_attribute_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[87]);
        if (tmp_attribute_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_attribute_value_13);
        if (tmp_truth_name_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_13);

            exception_lineno = 142;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_5 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_13);
        tmp_condition_result_28 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_condition_result_28 = tmp_and_left_value_5;
        and_end_5:;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_call_result_24;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 143;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_15 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 143;
        tmp_call_result_24 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_15,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[94], 0)
        );

        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    branch_no_26:;
    {
        bool tmp_condition_result_29;
        int tmp_and_left_truth_6;
        bool tmp_and_left_value_6;
        bool tmp_and_right_value_6;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        PyObject *tmp_expression_value_57;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 144;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_56 = var_opts;
        tmp_cmp_expr_left_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[77]);
        if (tmp_cmp_expr_left_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_20 = Py_None;
        tmp_and_left_value_6 = (tmp_cmp_expr_left_20 != tmp_cmp_expr_right_20) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_20);
        tmp_and_left_truth_6 = tmp_and_left_value_6 != false ? 1 : 0;
        if (tmp_and_left_truth_6 == 1) {
            goto and_right_6;
        } else {
            goto and_left_6;
        }
        and_right_6:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 144;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_57 = var_opts;
        tmp_cmp_expr_left_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[78]);
        if (tmp_cmp_expr_left_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_21 = Py_None;
        tmp_and_right_value_6 = (tmp_cmp_expr_left_21 == tmp_cmp_expr_right_21) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_21);
        tmp_condition_result_29 = tmp_and_right_value_6;
        goto and_end_6;
        and_left_6:;
        tmp_condition_result_29 = tmp_and_left_value_6;
        and_end_6:;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_24;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 145;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_24, mod_consts[96]);

        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = var_opts;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[78], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_27:;
    {
        bool tmp_condition_result_30;
        int tmp_and_left_truth_7;
        bool tmp_and_left_value_7;
        bool tmp_and_right_value_7;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        PyObject *tmp_expression_value_59;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_58 = var_opts;
        tmp_cmp_expr_left_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[82]);
        if (tmp_cmp_expr_left_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_22 = Py_None;
        tmp_and_left_value_7 = (tmp_cmp_expr_left_22 != tmp_cmp_expr_right_22) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_22);
        tmp_and_left_truth_7 = tmp_and_left_value_7 != false ? 1 : 0;
        if (tmp_and_left_truth_7 == 1) {
            goto and_right_7;
        } else {
            goto and_left_7;
        }
        and_right_7:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_59 = var_opts;
        tmp_cmp_expr_left_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[81]);
        if (tmp_cmp_expr_left_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_23 = Py_None;
        tmp_and_right_value_7 = (tmp_cmp_expr_left_23 == tmp_cmp_expr_right_23) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_23);
        tmp_condition_result_30 = tmp_and_right_value_7;
        goto and_end_7;
        and_left_7:;
        tmp_condition_result_30 = tmp_and_left_value_7;
        and_end_7:;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_25;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 147;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_25, mod_consts[97]);

        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 147;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = var_opts;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[81], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_28:;
    {
        bool tmp_condition_result_31;
        PyObject *tmp_cmp_expr_left_24;
        PyObject *tmp_cmp_expr_right_24;
        PyObject *tmp_expression_value_60;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 148;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_60 = var_opts;
        tmp_cmp_expr_left_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[98]);
        if (tmp_cmp_expr_left_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_24 = Py_None;
        tmp_condition_result_31 = (tmp_cmp_expr_left_24 != tmp_cmp_expr_right_24) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_24);
        if (tmp_condition_result_31 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_62;
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[100]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_called_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_62 = var_opts;
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[98]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 149;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 149;
        tmp_assign_source_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_numeric_limit == NULL);
        var_numeric_limit = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_32;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        CHECK_OBJECT(var_numeric_limit);
        tmp_cmp_expr_left_25 = var_numeric_limit;
        tmp_cmp_expr_right_25 = Py_None;
        tmp_condition_result_32 = (tmp_cmp_expr_left_25 == tmp_cmp_expr_right_25) ? true : false;
        if (tmp_condition_result_32 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_called_instance_16;
        PyObject *tmp_call_result_25;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 151;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_16 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 151;
        tmp_call_result_25 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_16,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[101], 0)
        );

        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    branch_no_30:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_numeric_limit);
        tmp_assattr_value_3 = var_numeric_limit;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = var_opts;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[98], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_29:;
    {
        bool tmp_condition_result_33;
        PyObject *tmp_cmp_expr_left_26;
        PyObject *tmp_cmp_expr_right_26;
        PyObject *tmp_expression_value_63;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_63 = var_opts;
        tmp_cmp_expr_left_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[102]);
        if (tmp_cmp_expr_left_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_26 = Py_None;
        tmp_condition_result_33 = (tmp_cmp_expr_left_26 != tmp_cmp_expr_right_26) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_26);
        if (tmp_condition_result_33 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_65;
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[100]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_called_value_27);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 154;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_65 = var_opts;
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[102]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 154;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 154;
        tmp_assign_source_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_numeric_limit;
            var_numeric_limit = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_cmp_expr_left_27;
        PyObject *tmp_cmp_expr_right_27;
        CHECK_OBJECT(var_numeric_limit);
        tmp_cmp_expr_left_27 = var_numeric_limit;
        tmp_cmp_expr_right_27 = Py_None;
        tmp_condition_result_34 = (tmp_cmp_expr_left_27 == tmp_cmp_expr_right_27) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_call_result_26;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_17 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 156;
        tmp_call_result_26 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_17,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[103], 0)
        );

        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    branch_no_32:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(var_numeric_limit);
        tmp_assattr_value_4 = var_numeric_limit;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = var_opts;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[102], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_31:;
    {
        bool tmp_condition_result_35;
        PyObject *tmp_cmp_expr_left_28;
        PyObject *tmp_cmp_expr_right_28;
        PyObject *tmp_expression_value_66;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_66 = var_opts;
        tmp_cmp_expr_left_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[104]);
        if (tmp_cmp_expr_left_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_28 = Py_None;
        tmp_condition_result_35 = (tmp_cmp_expr_left_28 != tmp_cmp_expr_right_28) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_28);
        if (tmp_condition_result_35 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_68;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[100]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_called_value_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 159;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_68 = var_opts;
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[104]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 159;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 159;
        tmp_assign_source_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_numeric_limit;
            var_numeric_limit = tmp_assign_source_60;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_36;
        PyObject *tmp_cmp_expr_left_29;
        PyObject *tmp_cmp_expr_right_29;
        CHECK_OBJECT(var_numeric_limit);
        tmp_cmp_expr_left_29 = var_numeric_limit;
        tmp_cmp_expr_right_29 = Py_None;
        tmp_condition_result_36 = (tmp_cmp_expr_left_29 == tmp_cmp_expr_right_29) ? true : false;
        if (tmp_condition_result_36 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_called_instance_18;
        PyObject *tmp_call_result_27;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 161;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_18 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 161;
        tmp_call_result_27 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_18,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[105], 0)
        );

        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    branch_no_34:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(var_numeric_limit);
        tmp_assattr_value_5 = var_numeric_limit;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = var_opts;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[104], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_33:;
    {
        bool tmp_condition_result_37;
        PyObject *tmp_cmp_expr_left_30;
        PyObject *tmp_cmp_expr_right_30;
        PyObject *tmp_expression_value_69;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_69 = var_opts;
        tmp_cmp_expr_left_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[106]);
        if (tmp_cmp_expr_left_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_30 = Py_None;
        tmp_condition_result_37 = (tmp_cmp_expr_left_30 != tmp_cmp_expr_right_30) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_30);
        if (tmp_condition_result_37 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        nuitka_bool tmp_condition_result_38;
        PyObject *tmp_cmp_expr_left_31;
        PyObject *tmp_cmp_expr_right_31;
        PyObject *tmp_expression_value_70;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_70 = var_opts;
        tmp_cmp_expr_left_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[106]);
        if (tmp_cmp_expr_left_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_31 = mod_consts[90];
        tmp_condition_result_38 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_31, tmp_cmp_expr_right_31);
        Py_DECREF(tmp_cmp_expr_left_31);
        if (tmp_condition_result_38 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_call_result_28;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_19 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 165;
        tmp_call_result_28 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_19,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[107], 0)
        );

        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    branch_no_36:;
    branch_no_35:;
    {
        bool tmp_condition_result_39;
        PyObject *tmp_cmp_expr_left_32;
        PyObject *tmp_cmp_expr_right_32;
        PyObject *tmp_expression_value_71;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_71 = var_opts;
        tmp_cmp_expr_left_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[108]);
        if (tmp_cmp_expr_left_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_32 = Py_None;
        tmp_condition_result_39 = (tmp_cmp_expr_left_32 != tmp_cmp_expr_right_32) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_32);
        if (tmp_condition_result_39 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_cmp_expr_left_33;
        PyObject *tmp_cmp_expr_right_33;
        PyObject *tmp_expression_value_72;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 167;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_72 = var_opts;
        tmp_cmp_expr_left_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[108]);
        if (tmp_cmp_expr_left_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_33 = mod_consts[90];
        tmp_condition_result_40 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_33, tmp_cmp_expr_right_33);
        Py_DECREF(tmp_cmp_expr_left_33);
        if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_called_instance_20;
        PyObject *tmp_call_result_29;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_20 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 168;
        tmp_call_result_29 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_20,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[109], 0)
        );

        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    branch_no_38:;
    {
        bool tmp_condition_result_41;
        PyObject *tmp_cmp_expr_left_34;
        PyObject *tmp_cmp_expr_right_34;
        PyObject *tmp_expression_value_73;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_73 = var_opts;
        tmp_cmp_expr_left_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[106]);
        if (tmp_cmp_expr_left_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_34 = Py_None;
        tmp_condition_result_41 = (tmp_cmp_expr_left_34 == tmp_cmp_expr_right_34) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_34);
        if (tmp_condition_result_41 != false) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_called_instance_21;
        PyObject *tmp_call_result_30;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_21 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 170;
        tmp_call_result_30 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_21,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[110], 0)
        );

        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    branch_no_39:;
    {
        nuitka_bool tmp_condition_result_42;
        PyObject *tmp_cmp_expr_left_35;
        PyObject *tmp_cmp_expr_right_35;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_expression_value_75;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_74 = var_opts;
        tmp_cmp_expr_left_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[108]);
        if (tmp_cmp_expr_left_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_cmp_expr_left_35);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_75 = var_opts;
        tmp_cmp_expr_right_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[106]);
        if (tmp_cmp_expr_right_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_35);

            exception_lineno = 171;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_42 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_35, tmp_cmp_expr_right_35);
        Py_DECREF(tmp_cmp_expr_left_35);
        Py_DECREF(tmp_cmp_expr_right_35);
        if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_called_instance_22;
        PyObject *tmp_call_result_31;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 172;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_22 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 172;
        tmp_call_result_31 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_22,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[111], 0)
        );

        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    branch_no_40:;
    goto branch_end_37;
    branch_no_37:;
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_assattr_target_6;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_76 = var_opts;
        tmp_assattr_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[106]);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_assattr_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = var_opts;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[108], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_37:;
    {
        nuitka_bool tmp_condition_result_43;
        int tmp_and_left_truth_8;
        nuitka_bool tmp_and_left_value_8;
        nuitka_bool tmp_and_right_value_8;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_attribute_value_14;
        int tmp_truth_name_14;
        PyObject *tmp_cmp_expr_left_36;
        PyObject *tmp_cmp_expr_right_36;
        PyObject *tmp_expression_value_78;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_77 = var_opts;
        tmp_attribute_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[112]);
        if (tmp_attribute_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_14 = CHECK_IF_TRUE(tmp_attribute_value_14);
        if (tmp_truth_name_14 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_14);

            exception_lineno = 175;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_8 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_14);
        tmp_and_left_truth_8 = tmp_and_left_value_8 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_8 == 1) {
            goto and_right_8;
        } else {
            goto and_left_8;
        }
        and_right_8:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_78 = var_opts;
        tmp_cmp_expr_left_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[112]);
        if (tmp_cmp_expr_left_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_36 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_cmp_expr_right_36 == NULL)) {
            tmp_cmp_expr_right_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_cmp_expr_right_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_36);

            exception_lineno = 175;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_36, tmp_cmp_expr_left_36);
        Py_DECREF(tmp_cmp_expr_left_36);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_43 = tmp_and_right_value_8;
        goto and_end_8;
        and_left_8:;
        tmp_condition_result_43 = tmp_and_left_value_8;
        and_end_8:;
        if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_called_instance_23;
        PyObject *tmp_call_result_32;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 176;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_23 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 176;
        tmp_call_result_32 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_23,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[113], 0)
        );

        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    branch_no_41:;
    {
        PyObject *tmp_assign_source_61;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_parser;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_61 = MAKE_FUNCTION_youtube_dl$$$function__1__real_main$$$function__2_parse_retries(tmp_closure_1);

        assert(var_parse_retries == NULL);
        var_parse_retries = tmp_assign_source_61;
    }
    {
        bool tmp_condition_result_44;
        PyObject *tmp_cmp_expr_left_37;
        PyObject *tmp_cmp_expr_right_37;
        PyObject *tmp_expression_value_79;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_79 = var_opts;
        tmp_cmp_expr_left_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[116]);
        if (tmp_cmp_expr_left_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_37 = Py_None;
        tmp_condition_result_44 = (tmp_cmp_expr_left_37 != tmp_cmp_expr_right_37) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_37);
        if (tmp_condition_result_44 != false) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(var_parse_retries);
        tmp_called_value_29 = var_parse_retries;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_80 = var_opts;
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[116]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 188;
        tmp_assattr_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_assattr_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_7 = var_opts;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[116], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_42:;
    {
        bool tmp_condition_result_45;
        PyObject *tmp_cmp_expr_left_38;
        PyObject *tmp_cmp_expr_right_38;
        PyObject *tmp_expression_value_81;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_81 = var_opts;
        tmp_cmp_expr_left_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[117]);
        if (tmp_cmp_expr_left_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_38 = Py_None;
        tmp_condition_result_45 = (tmp_cmp_expr_left_38 != tmp_cmp_expr_right_38) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_38);
        if (tmp_condition_result_45 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_assattr_target_8;
        if (var_parse_retries == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_30 = var_parse_retries;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_82 = var_opts;
        tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[117]);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 190;
        tmp_assattr_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_assattr_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_8 = var_opts;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[117], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_43:;
    {
        bool tmp_condition_result_46;
        PyObject *tmp_cmp_expr_left_39;
        PyObject *tmp_cmp_expr_right_39;
        PyObject *tmp_expression_value_83;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_83 = var_opts;
        tmp_cmp_expr_left_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[118]);
        if (tmp_cmp_expr_left_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_39 = Py_None;
        tmp_condition_result_46 = (tmp_cmp_expr_left_39 != tmp_cmp_expr_right_39) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_39);
        if (tmp_condition_result_46 != false) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_expression_value_85;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[100]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_called_value_31);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_85 = var_opts;
        tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[118]);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 192;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 192;
        tmp_assign_source_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_numeric_buffersize == NULL);
        var_numeric_buffersize = tmp_assign_source_62;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_cmp_expr_left_40;
        PyObject *tmp_cmp_expr_right_40;
        CHECK_OBJECT(var_numeric_buffersize);
        tmp_cmp_expr_left_40 = var_numeric_buffersize;
        tmp_cmp_expr_right_40 = Py_None;
        tmp_condition_result_47 = (tmp_cmp_expr_left_40 == tmp_cmp_expr_right_40) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    {
        PyObject *tmp_called_instance_24;
        PyObject *tmp_call_result_33;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 194;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_24 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 194;
        tmp_call_result_33 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_24,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[119], 0)
        );

        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    branch_no_45:;
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(var_numeric_buffersize);
        tmp_assattr_value_9 = var_numeric_buffersize;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_9 = var_opts;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[118], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_44:;
    {
        bool tmp_condition_result_48;
        PyObject *tmp_cmp_expr_left_41;
        PyObject *tmp_cmp_expr_right_41;
        PyObject *tmp_expression_value_86;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 196;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_86 = var_opts;
        tmp_cmp_expr_left_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[120]);
        if (tmp_cmp_expr_left_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_41 = Py_None;
        tmp_condition_result_48 = (tmp_cmp_expr_left_41 != tmp_cmp_expr_right_41) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_41);
        if (tmp_condition_result_48 != false) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_88;
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[100]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_called_value_32);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_88 = var_opts;
        tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[120]);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 197;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 197;
        tmp_assign_source_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_numeric_chunksize == NULL);
        var_numeric_chunksize = tmp_assign_source_63;
    }
    {
        bool tmp_condition_result_49;
        PyObject *tmp_operand_value_4;
        CHECK_OBJECT(var_numeric_chunksize);
        tmp_operand_value_4 = var_numeric_chunksize;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_49 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_49 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    {
        PyObject *tmp_called_instance_25;
        PyObject *tmp_call_result_34;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 199;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_25 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 199;
        tmp_call_result_34 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_25,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[121], 0)
        );

        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    branch_no_47:;
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(var_numeric_chunksize);
        tmp_assattr_value_10 = var_numeric_chunksize;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 200;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_10 = var_opts;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[120], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_46:;
    {
        nuitka_bool tmp_condition_result_50;
        PyObject *tmp_cmp_expr_left_42;
        PyObject *tmp_cmp_expr_right_42;
        PyObject *tmp_expression_value_89;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 201;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_89 = var_opts;
        tmp_cmp_expr_left_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[122]);
        if (tmp_cmp_expr_left_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_42 = mod_consts[90];
        tmp_condition_result_50 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_42, tmp_cmp_expr_right_42);
        Py_DECREF(tmp_cmp_expr_left_42);
        if (tmp_condition_result_50 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
            goto branch_yes_48;
        } else {
            goto branch_no_48;
        }
    }
    branch_yes_48:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[123];
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 202;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 202;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ocooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_48:;
    {
        nuitka_bool tmp_condition_result_51;
        int tmp_and_left_truth_9;
        nuitka_bool tmp_and_left_value_9;
        nuitka_bool tmp_and_right_value_9;
        PyObject *tmp_cmp_expr_left_43;
        PyObject *tmp_cmp_expr_right_43;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_cmp_expr_left_44;
        PyObject *tmp_cmp_expr_right_44;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_expression_value_92;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 203;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_90 = var_opts;
        tmp_cmp_expr_left_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[124]);
        if (tmp_cmp_expr_left_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_43 = mod_consts[125];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_43, tmp_cmp_expr_left_43);
        Py_DECREF(tmp_cmp_expr_left_43);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_9 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_9 = tmp_and_left_value_9 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_9 == 1) {
            goto and_right_9;
        } else {
            goto and_left_9;
        }
        and_right_9:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 203;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_91 = var_opts;
        tmp_cmp_expr_left_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[124]);
        if (tmp_cmp_expr_left_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_cmp_expr_left_44);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 203;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_92 = var_opts;
        tmp_cmp_expr_right_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[122]);
        if (tmp_cmp_expr_right_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_44);

            exception_lineno = 203;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_9 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_44, tmp_cmp_expr_right_44);
        Py_DECREF(tmp_cmp_expr_left_44);
        Py_DECREF(tmp_cmp_expr_right_44);
        if (tmp_and_right_value_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_51 = tmp_and_right_value_9;
        goto and_end_9;
        and_left_9:;
        tmp_condition_result_51 = tmp_and_left_value_9;
        and_end_9:;
        if (tmp_condition_result_51 == NUITKA_BOOL_TRUE) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[126];
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 204;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 204;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ocooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_49:;
    {
        nuitka_bool tmp_condition_result_52;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_attribute_value_15;
        int tmp_truth_name_15;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_93 = var_opts;
        tmp_attribute_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[127]);
        if (tmp_attribute_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_15 = CHECK_IF_TRUE(tmp_attribute_value_15);
        if (tmp_truth_name_15 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_15);

            exception_lineno = 205;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_52 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_15);
        if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
    }
    branch_yes_50:;
    {
        bool tmp_condition_result_53;
        PyObject *tmp_cmp_expr_left_45;
        PyObject *tmp_cmp_expr_right_45;
        PyObject *tmp_expression_value_94;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_94 = var_opts;
        tmp_cmp_expr_left_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[128]);
        if (tmp_cmp_expr_left_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_45 = LIST_COPY(mod_consts[129]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_45, tmp_cmp_expr_left_45);
        Py_DECREF(tmp_cmp_expr_left_45);
        Py_DECREF(tmp_cmp_expr_right_45);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_53 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_53 != false) {
            goto branch_yes_51;
        } else {
            goto branch_no_51;
        }
    }
    branch_yes_51:;
    {
        PyObject *tmp_called_instance_26;
        PyObject *tmp_call_result_35;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_26 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 207;
        tmp_call_result_35 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_26,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[130], 0)
        );

        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    branch_no_51:;
    branch_no_50:;
    {
        nuitka_bool tmp_condition_result_54;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_attribute_value_16;
        int tmp_truth_name_16;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_95 = var_opts;
        tmp_attribute_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[131]);
        if (tmp_attribute_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_16 = CHECK_IF_TRUE(tmp_attribute_value_16);
        if (tmp_truth_name_16 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_16);

            exception_lineno = 208;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_54 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_16);
        if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
            goto branch_yes_52;
        } else {
            goto branch_no_52;
        }
    }
    branch_yes_52:;
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_assattr_target_11;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 209;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_98 = var_opts;
        tmp_expression_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[131]);
        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[45]);
        Py_DECREF(tmp_expression_value_97);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 209;
        tmp_expression_value_96 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_34, mod_consts[132]);

        Py_DECREF(tmp_called_value_34);
        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[45]);
        Py_DECREF(tmp_expression_value_96);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 209;
        tmp_assattr_value_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_33, mod_consts[133]);

        Py_DECREF(tmp_called_value_33);
        if (tmp_assattr_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_assattr_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 209;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_11 = var_opts;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[131], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_55;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_expression_value_100;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_100 = var_opts;
        tmp_expression_value_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[131]);
        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[134]);
        Py_DECREF(tmp_expression_value_99);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 210;
        tmp_operand_value_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_35);
        Py_DECREF(tmp_called_value_35);
        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_55 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_55 != false) {
            goto branch_yes_53;
        } else {
            goto branch_no_53;
        }
    }
    branch_yes_53:;
    {
        PyObject *tmp_called_instance_27;
        PyObject *tmp_call_result_36;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 211;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_27 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 211;
        tmp_call_result_36 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_27,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[135], 0)
        );

        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    branch_no_53:;
    branch_no_52:;
    {
        bool tmp_condition_result_56;
        PyObject *tmp_cmp_expr_left_46;
        PyObject *tmp_cmp_expr_right_46;
        PyObject *tmp_expression_value_101;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_101 = var_opts;
        tmp_cmp_expr_left_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[136]);
        if (tmp_cmp_expr_left_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_46 = Py_None;
        tmp_condition_result_56 = (tmp_cmp_expr_left_46 != tmp_cmp_expr_right_46) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_46);
        if (tmp_condition_result_56 != false) {
            goto branch_yes_54;
        } else {
            goto branch_no_54;
        }
    }
    branch_yes_54:;
    {
        bool tmp_condition_result_57;
        PyObject *tmp_cmp_expr_left_47;
        PyObject *tmp_cmp_expr_right_47;
        PyObject *tmp_expression_value_102;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_102 = var_opts;
        tmp_cmp_expr_left_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[136]);
        if (tmp_cmp_expr_left_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_47 = LIST_COPY(mod_consts[137]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_47, tmp_cmp_expr_left_47);
        Py_DECREF(tmp_cmp_expr_left_47);
        Py_DECREF(tmp_cmp_expr_right_47);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_57 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_57 != false) {
            goto branch_yes_55;
        } else {
            goto branch_no_55;
        }
    }
    branch_yes_55:;
    {
        PyObject *tmp_called_instance_28;
        PyObject *tmp_call_result_37;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 214;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_28 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 214;
        tmp_call_result_37 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_28,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[138], 0)
        );

        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    branch_no_55:;
    branch_no_54:;
    {
        bool tmp_condition_result_58;
        PyObject *tmp_cmp_expr_left_48;
        PyObject *tmp_cmp_expr_right_48;
        PyObject *tmp_expression_value_103;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 215;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_103 = var_opts;
        tmp_cmp_expr_left_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[139]);
        if (tmp_cmp_expr_left_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_48 = Py_None;
        tmp_condition_result_58 = (tmp_cmp_expr_left_48 != tmp_cmp_expr_right_48) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_48);
        if (tmp_condition_result_58 != false) {
            goto branch_yes_56;
        } else {
            goto branch_no_56;
        }
    }
    branch_yes_56:;
    {
        bool tmp_condition_result_59;
        PyObject *tmp_cmp_expr_left_49;
        PyObject *tmp_cmp_expr_right_49;
        PyObject *tmp_expression_value_104;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 216;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_104 = var_opts;
        tmp_cmp_expr_left_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[139]);
        if (tmp_cmp_expr_left_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_49 = LIST_COPY(mod_consts[140]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_49, tmp_cmp_expr_left_49);
        Py_DECREF(tmp_cmp_expr_left_49);
        Py_DECREF(tmp_cmp_expr_right_49);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_59 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_59 != false) {
            goto branch_yes_57;
        } else {
            goto branch_no_57;
        }
    }
    branch_yes_57:;
    {
        PyObject *tmp_called_instance_29;
        PyObject *tmp_call_result_38;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_29 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 217;
        tmp_call_result_38 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_29,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[141], 0)
        );

        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    branch_no_57:;
    branch_no_56:;
    {
        bool tmp_condition_result_60;
        PyObject *tmp_cmp_expr_left_50;
        PyObject *tmp_cmp_expr_right_50;
        PyObject *tmp_expression_value_105;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 219;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_105 = var_opts;
        tmp_cmp_expr_left_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[142]);
        if (tmp_cmp_expr_left_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_50 = Py_None;
        tmp_condition_result_60 = (tmp_cmp_expr_left_50 != tmp_cmp_expr_right_50) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_50);
        if (tmp_condition_result_60 != false) {
            goto branch_yes_58;
        } else {
            goto branch_no_58;
        }
    }
    branch_yes_58:;
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_107;
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[144]);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_called_value_36);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_107 = var_opts;
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[142]);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 220;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 220;
        tmp_assign_source_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_date == NULL);
        var_date = tmp_assign_source_64;
    }
    goto branch_end_58;
    branch_no_58:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_expression_value_109;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 222;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_108 = var_opts;
        tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[145]);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_args_element_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 222;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_109 = var_opts;
        tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[146]);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_26);

            exception_lineno = 222;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 222;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_assign_source_65 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_37, call_args);
        }

        Py_DECREF(tmp_args_element_value_26);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_date == NULL);
        var_date = tmp_assign_source_65;
    }
    branch_end_58:;
    {
        nuitka_bool tmp_condition_result_61;
        int tmp_and_left_truth_10;
        nuitka_bool tmp_and_left_value_10;
        nuitka_bool tmp_and_right_value_10;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_attribute_value_17;
        int tmp_truth_name_17;
        int tmp_and_left_truth_11;
        nuitka_bool tmp_and_left_value_11;
        nuitka_bool tmp_and_right_value_11;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_cmp_expr_left_51;
        PyObject *tmp_cmp_expr_right_51;
        PyObject *tmp_expression_value_112;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 225;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_110 = var_opts;
        tmp_attribute_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[127]);
        if (tmp_attribute_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_17 = CHECK_IF_TRUE(tmp_attribute_value_17);
        if (tmp_truth_name_17 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_17);

            exception_lineno = 225;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_10 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_17);
        tmp_and_left_truth_10 = tmp_and_left_value_10 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_10 == 1) {
            goto and_right_10;
        } else {
            goto and_left_10;
        }
        and_right_10:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 225;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_111 = var_opts;
        tmp_operand_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[147]);
        if (tmp_operand_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_11 = tmp_and_left_value_11 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_11 == 1) {
            goto and_right_11;
        } else {
            goto and_left_11;
        }
        and_right_11:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 225;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_112 = var_opts;
        tmp_cmp_expr_left_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[148]);
        if (tmp_cmp_expr_left_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_51 = Py_None;
        tmp_and_right_value_11 = (tmp_cmp_expr_left_51 == tmp_cmp_expr_right_51) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_51);
        tmp_and_right_value_10 = tmp_and_right_value_11;
        goto and_end_11;
        and_left_11:;
        tmp_and_right_value_10 = tmp_and_left_value_11;
        and_end_11:;
        tmp_condition_result_61 = tmp_and_right_value_10;
        goto and_end_10;
        and_left_10:;
        tmp_condition_result_61 = tmp_and_left_value_10;
        and_end_10:;
        if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
            goto branch_yes_59;
        } else {
            goto branch_no_59;
        }
    }
    branch_yes_59:;
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        tmp_assattr_value_12 = mod_consts[149];
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 226;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_12 = var_opts;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[148], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_59:;
    {
        nuitka_bool tmp_condition_result_62;
        int tmp_and_left_truth_12;
        nuitka_bool tmp_and_left_value_12;
        nuitka_bool tmp_and_right_value_12;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_attribute_value_18;
        int tmp_truth_name_18;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_114;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 230;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_113 = var_opts;
        tmp_attribute_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[150]);
        if (tmp_attribute_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_18 = CHECK_IF_TRUE(tmp_attribute_value_18);
        if (tmp_truth_name_18 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_18);

            exception_lineno = 230;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_12 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_18);
        tmp_and_left_truth_12 = tmp_and_left_value_12 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_12 == 1) {
            goto and_right_12;
        } else {
            goto and_left_12;
        }
        and_right_12:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 230;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_114 = var_opts;
        tmp_operand_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[151]);
        if (tmp_operand_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        Py_DECREF(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_12 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_62 = tmp_and_right_value_12;
        goto and_end_12;
        and_left_12:;
        tmp_condition_result_62 = tmp_and_left_value_12;
        and_end_12:;
        if (tmp_condition_result_62 == NUITKA_BOOL_TRUE) {
            goto branch_yes_60;
        } else {
            goto branch_no_60;
        }
    }
    branch_yes_60:;
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        tmp_assattr_value_13 = Py_True;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 231;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_13 = var_opts;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[152], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_60:;
    {
        PyObject *tmp_assign_source_66;
        int tmp_or_left_truth_4;
        PyObject *tmp_or_left_value_4;
        PyObject *tmp_or_right_value_4;
        int tmp_and_left_truth_13;
        PyObject *tmp_and_left_value_13;
        PyObject *tmp_and_right_value_13;
        PyObject *tmp_cmp_expr_left_52;
        PyObject *tmp_cmp_expr_right_52;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_expression_value_116;
        int tmp_or_left_truth_5;
        PyObject *tmp_or_left_value_5;
        PyObject *tmp_or_right_value_5;
        int tmp_and_left_truth_14;
        PyObject *tmp_and_left_value_14;
        PyObject *tmp_and_right_value_14;
        PyObject *tmp_cmp_expr_left_53;
        PyObject *tmp_cmp_expr_right_53;
        PyObject *tmp_expression_value_117;
        int tmp_and_left_truth_15;
        PyObject *tmp_and_left_value_15;
        PyObject *tmp_and_right_value_15;
        PyObject *tmp_expression_value_118;
        int tmp_or_left_truth_6;
        PyObject *tmp_or_left_value_6;
        PyObject *tmp_or_right_value_6;
        int tmp_and_left_truth_16;
        PyObject *tmp_and_left_value_16;
        PyObject *tmp_and_right_value_16;
        PyObject *tmp_cmp_expr_left_54;
        PyObject *tmp_cmp_expr_right_54;
        PyObject *tmp_expression_value_119;
        int tmp_or_left_truth_7;
        PyObject *tmp_or_left_value_7;
        PyObject *tmp_or_right_value_7;
        int tmp_and_left_truth_17;
        PyObject *tmp_and_left_value_17;
        PyObject *tmp_and_right_value_17;
        PyObject *tmp_expression_value_120;
        int tmp_and_left_truth_18;
        PyObject *tmp_and_left_value_18;
        PyObject *tmp_and_right_value_18;
        PyObject *tmp_expression_value_121;
        int tmp_or_left_truth_8;
        PyObject *tmp_or_left_value_8;
        PyObject *tmp_or_right_value_8;
        int tmp_and_left_truth_19;
        PyObject *tmp_and_left_value_19;
        PyObject *tmp_and_right_value_19;
        PyObject *tmp_expression_value_122;
        int tmp_or_left_truth_9;
        PyObject *tmp_or_left_value_9;
        PyObject *tmp_or_right_value_9;
        int tmp_and_left_truth_20;
        PyObject *tmp_and_left_value_20;
        PyObject *tmp_and_right_value_20;
        PyObject *tmp_expression_value_123;
        int tmp_or_left_truth_10;
        PyObject *tmp_or_left_value_10;
        PyObject *tmp_or_right_value_10;
        int tmp_and_left_truth_21;
        PyObject *tmp_and_left_value_21;
        PyObject *tmp_and_right_value_21;
        PyObject *tmp_expression_value_124;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 233;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_115 = var_opts;
        tmp_cmp_expr_left_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[84]);
        if (tmp_cmp_expr_left_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_52 = Py_None;
        tmp_and_left_value_13 = (tmp_cmp_expr_left_52 != tmp_cmp_expr_right_52) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_52);
        tmp_and_left_truth_13 = CHECK_IF_TRUE(tmp_and_left_value_13);
        if (tmp_and_left_truth_13 == 1) {
            goto and_right_13;
        } else {
            goto and_left_13;
        }
        and_right_13:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 233;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_116 = var_opts;
        tmp_and_right_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[84]);
        if (tmp_and_right_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_4 = tmp_and_right_value_13;
        goto and_end_13;
        and_left_13:;
        Py_INCREF(tmp_and_left_value_13);
        tmp_or_left_value_4 = tmp_and_left_value_13;
        and_end_13:;
        tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
        if (tmp_or_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_4);

            exception_lineno = 233;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        Py_DECREF(tmp_or_left_value_4);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 234;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_117 = var_opts;
        tmp_cmp_expr_left_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[148]);
        if (tmp_cmp_expr_left_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_53 = mod_consts[153];
        tmp_and_left_value_14 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_53, tmp_cmp_expr_right_53);
        Py_DECREF(tmp_cmp_expr_left_53);
        if (tmp_and_left_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_14 = CHECK_IF_TRUE(tmp_and_left_value_14);
        if (tmp_and_left_truth_14 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_14);

            exception_lineno = 234;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_14 == 1) {
            goto and_right_14;
        } else {
            goto and_left_14;
        }
        and_right_14:;
        Py_DECREF(tmp_and_left_value_14);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 234;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_118 = var_opts;
        tmp_and_left_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[85]);
        if (tmp_and_left_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_15 = CHECK_IF_TRUE(tmp_and_left_value_15);
        if (tmp_and_left_truth_15 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_15);

            exception_lineno = 234;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_15 == 1) {
            goto and_right_15;
        } else {
            goto and_left_15;
        }
        and_right_15:;
        Py_DECREF(tmp_and_left_value_15);
        tmp_and_right_value_15 = mod_consts[154];
        Py_INCREF(tmp_and_right_value_15);
        tmp_and_right_value_14 = tmp_and_right_value_15;
        goto and_end_15;
        and_left_15:;
        tmp_and_right_value_14 = tmp_and_left_value_15;
        and_end_15:;
        tmp_or_left_value_5 = tmp_and_right_value_14;
        goto and_end_14;
        and_left_14:;
        tmp_or_left_value_5 = tmp_and_left_value_14;
        and_end_14:;
        tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
        if (tmp_or_left_truth_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_5);

            exception_lineno = 234;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_5 == 1) {
            goto or_left_5;
        } else {
            goto or_right_5;
        }
        or_right_5:;
        Py_DECREF(tmp_or_left_value_5);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 235;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_119 = var_opts;
        tmp_cmp_expr_left_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[148]);
        if (tmp_cmp_expr_left_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_54 = mod_consts[153];
        tmp_and_left_value_16 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_54, tmp_cmp_expr_right_54);
        Py_DECREF(tmp_cmp_expr_left_54);
        if (tmp_and_left_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_16 = CHECK_IF_TRUE(tmp_and_left_value_16);
        if (tmp_and_left_truth_16 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_16);

            exception_lineno = 235;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_16 == 1) {
            goto and_right_16;
        } else {
            goto and_left_16;
        }
        and_right_16:;
        Py_DECREF(tmp_and_left_value_16);
        tmp_and_right_value_16 = mod_consts[155];
        Py_INCREF(tmp_and_right_value_16);
        tmp_or_left_value_6 = tmp_and_right_value_16;
        goto and_end_16;
        and_left_16:;
        tmp_or_left_value_6 = tmp_and_left_value_16;
        and_end_16:;
        tmp_or_left_truth_6 = CHECK_IF_TRUE(tmp_or_left_value_6);
        if (tmp_or_left_truth_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_6);

            exception_lineno = 235;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_6 == 1) {
            goto or_left_6;
        } else {
            goto or_right_6;
        }
        or_right_6:;
        Py_DECREF(tmp_or_left_value_6);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 236;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_120 = var_opts;
        tmp_and_left_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[85]);
        if (tmp_and_left_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_17 = CHECK_IF_TRUE(tmp_and_left_value_17);
        if (tmp_and_left_truth_17 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_17);

            exception_lineno = 236;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_17 == 1) {
            goto and_right_17;
        } else {
            goto and_left_17;
        }
        and_right_17:;
        Py_DECREF(tmp_and_left_value_17);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 236;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_121 = var_opts;
        tmp_and_left_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[86]);
        if (tmp_and_left_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_18 = CHECK_IF_TRUE(tmp_and_left_value_18);
        if (tmp_and_left_truth_18 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_18);

            exception_lineno = 236;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_18 == 1) {
            goto and_right_18;
        } else {
            goto and_left_18;
        }
        and_right_18:;
        Py_DECREF(tmp_and_left_value_18);
        tmp_and_right_value_18 = mod_consts[156];
        Py_INCREF(tmp_and_right_value_18);
        tmp_and_right_value_17 = tmp_and_right_value_18;
        goto and_end_18;
        and_left_18:;
        tmp_and_right_value_17 = tmp_and_left_value_18;
        and_end_18:;
        tmp_or_left_value_7 = tmp_and_right_value_17;
        goto and_end_17;
        and_left_17:;
        tmp_or_left_value_7 = tmp_and_left_value_17;
        and_end_17:;
        tmp_or_left_truth_7 = CHECK_IF_TRUE(tmp_or_left_value_7);
        if (tmp_or_left_truth_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_7);

            exception_lineno = 236;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_7 == 1) {
            goto or_left_7;
        } else {
            goto or_right_7;
        }
        or_right_7:;
        Py_DECREF(tmp_or_left_value_7);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 237;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_122 = var_opts;
        tmp_and_left_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[85]);
        if (tmp_and_left_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_19 = CHECK_IF_TRUE(tmp_and_left_value_19);
        if (tmp_and_left_truth_19 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_19);

            exception_lineno = 237;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_19 == 1) {
            goto and_right_19;
        } else {
            goto and_left_19;
        }
        and_right_19:;
        Py_DECREF(tmp_and_left_value_19);
        tmp_and_right_value_19 = mod_consts[157];
        Py_INCREF(tmp_and_right_value_19);
        tmp_or_left_value_8 = tmp_and_right_value_19;
        goto and_end_19;
        and_left_19:;
        tmp_or_left_value_8 = tmp_and_left_value_19;
        and_end_19:;
        tmp_or_left_truth_8 = CHECK_IF_TRUE(tmp_or_left_value_8);
        if (tmp_or_left_truth_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_8);

            exception_lineno = 237;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_8 == 1) {
            goto or_left_8;
        } else {
            goto or_right_8;
        }
        or_right_8:;
        Py_DECREF(tmp_or_left_value_8);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 238;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_123 = var_opts;
        tmp_and_left_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[87]);
        if (tmp_and_left_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_20 = CHECK_IF_TRUE(tmp_and_left_value_20);
        if (tmp_and_left_truth_20 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_20);

            exception_lineno = 238;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_20 == 1) {
            goto and_right_20;
        } else {
            goto and_left_20;
        }
        and_right_20:;
        Py_DECREF(tmp_and_left_value_20);
        tmp_and_right_value_20 = mod_consts[158];
        Py_INCREF(tmp_and_right_value_20);
        tmp_or_left_value_9 = tmp_and_right_value_20;
        goto and_end_20;
        and_left_20:;
        tmp_or_left_value_9 = tmp_and_left_value_20;
        and_end_20:;
        tmp_or_left_truth_9 = CHECK_IF_TRUE(tmp_or_left_value_9);
        if (tmp_or_left_truth_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_9);

            exception_lineno = 238;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_9 == 1) {
            goto or_left_9;
        } else {
            goto or_right_9;
        }
        or_right_9:;
        Py_DECREF(tmp_or_left_value_9);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_124 = var_opts;
        tmp_and_left_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[86]);
        if (tmp_and_left_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_21 = CHECK_IF_TRUE(tmp_and_left_value_21);
        if (tmp_and_left_truth_21 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_21);

            exception_lineno = 239;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_21 == 1) {
            goto and_right_21;
        } else {
            goto and_left_21;
        }
        and_right_21:;
        Py_DECREF(tmp_and_left_value_21);
        tmp_and_right_value_21 = mod_consts[159];
        Py_INCREF(tmp_and_right_value_21);
        tmp_or_left_value_10 = tmp_and_right_value_21;
        goto and_end_21;
        and_left_21:;
        tmp_or_left_value_10 = tmp_and_left_value_21;
        and_end_21:;
        tmp_or_left_truth_10 = CHECK_IF_TRUE(tmp_or_left_value_10);
        if (tmp_or_left_truth_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_10);

            exception_lineno = 239;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_10 == 1) {
            goto or_left_10;
        } else {
            goto or_right_10;
        }
        or_right_10:;
        Py_DECREF(tmp_or_left_value_10);
        tmp_or_right_value_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_or_right_value_10 == NULL)) {
            tmp_or_right_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
        }

        if (tmp_or_right_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_or_right_value_10);
        tmp_or_right_value_9 = tmp_or_right_value_10;
        goto or_end_10;
        or_left_10:;
        tmp_or_right_value_9 = tmp_or_left_value_10;
        or_end_10:;
        tmp_or_right_value_8 = tmp_or_right_value_9;
        goto or_end_9;
        or_left_9:;
        tmp_or_right_value_8 = tmp_or_left_value_9;
        or_end_9:;
        tmp_or_right_value_7 = tmp_or_right_value_8;
        goto or_end_8;
        or_left_8:;
        tmp_or_right_value_7 = tmp_or_left_value_8;
        or_end_8:;
        tmp_or_right_value_6 = tmp_or_right_value_7;
        goto or_end_7;
        or_left_7:;
        tmp_or_right_value_6 = tmp_or_left_value_7;
        or_end_7:;
        tmp_or_right_value_5 = tmp_or_right_value_6;
        goto or_end_6;
        or_left_6:;
        tmp_or_right_value_5 = tmp_or_left_value_6;
        or_end_6:;
        tmp_or_right_value_4 = tmp_or_right_value_5;
        goto or_end_5;
        or_left_5:;
        tmp_or_right_value_4 = tmp_or_left_value_5;
        or_end_5:;
        tmp_assign_source_66 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_assign_source_66 = tmp_or_left_value_4;
        or_end_4:;
        assert(var_outtmpl == NULL);
        var_outtmpl = tmp_assign_source_66;
    }
    {
        nuitka_bool tmp_condition_result_63;
        int tmp_and_left_truth_22;
        nuitka_bool tmp_and_left_value_22;
        nuitka_bool tmp_and_right_value_22;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_called_instance_30;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_attribute_value_19;
        int tmp_truth_name_19;
        tmp_called_instance_30 = IMPORT_HARD_NTPATH();
        assert(!(tmp_called_instance_30 == NULL));
        CHECK_OBJECT(var_outtmpl);
        tmp_args_element_value_28 = var_outtmpl;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 241;
        tmp_expression_value_125 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_30, mod_consts[161], tmp_args_element_value_28);
        if (tmp_expression_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[162];
        tmp_operand_value_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_125, tmp_subscript_value_3, 1);
        Py_DECREF(tmp_expression_value_125);
        if (tmp_operand_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        Py_DECREF(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_22 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_22 = tmp_and_left_value_22 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_22 == 1) {
            goto and_right_22;
        } else {
            goto and_left_22;
        }
        and_right_22:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 241;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_126 = var_opts;
        tmp_attribute_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[127]);
        if (tmp_attribute_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_19 = CHECK_IF_TRUE(tmp_attribute_value_19);
        if (tmp_truth_name_19 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_19);

            exception_lineno = 241;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_22 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_19);
        tmp_condition_result_63 = tmp_and_right_value_22;
        goto and_end_22;
        and_left_22:;
        tmp_condition_result_63 = tmp_and_left_value_22;
        and_end_22:;
        if (tmp_condition_result_63 == NUITKA_BOOL_TRUE) {
            goto branch_yes_61;
        } else {
            goto branch_no_61;
        }
    }
    branch_yes_61:;
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_call_result_39;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_arg_value_1_1;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 242;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_127 = Nuitka_Cell_GET(var_parser);
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[17]);
        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_6 = mod_consts[163];
        CHECK_OBJECT(var_outtmpl);
        tmp_kw_call_arg_value_1_1 = var_outtmpl;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_1};
            tmp_args_element_value_29 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 242;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 242;
        tmp_call_result_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    branch_no_61:;
    {
        PyObject *tmp_assign_source_67;
        int tmp_or_left_truth_11;
        PyObject *tmp_or_left_value_11;
        PyObject *tmp_or_right_value_11;
        PyObject *tmp_expression_value_128;
        int tmp_or_left_truth_12;
        PyObject *tmp_or_left_value_12;
        PyObject *tmp_or_right_value_12;
        PyObject *tmp_expression_value_129;
        int tmp_or_left_truth_13;
        PyObject *tmp_or_left_value_13;
        PyObject *tmp_or_right_value_13;
        PyObject *tmp_expression_value_130;
        int tmp_or_left_truth_14;
        PyObject *tmp_or_left_value_14;
        PyObject *tmp_or_right_value_14;
        PyObject *tmp_expression_value_131;
        int tmp_or_left_truth_15;
        PyObject *tmp_or_left_value_15;
        PyObject *tmp_or_right_value_15;
        PyObject *tmp_expression_value_132;
        int tmp_or_left_truth_16;
        PyObject *tmp_or_left_value_16;
        PyObject *tmp_or_right_value_16;
        PyObject *tmp_expression_value_133;
        int tmp_or_left_truth_17;
        PyObject *tmp_or_left_value_17;
        PyObject *tmp_or_right_value_17;
        PyObject *tmp_expression_value_134;
        int tmp_or_left_truth_18;
        PyObject *tmp_or_left_value_18;
        PyObject *tmp_or_right_value_18;
        PyObject *tmp_expression_value_135;
        int tmp_or_left_truth_19;
        PyObject *tmp_or_left_value_19;
        PyObject *tmp_or_right_value_19;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_expression_value_137;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_128 = var_opts;
        tmp_or_left_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[164]);
        if (tmp_or_left_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_11 = CHECK_IF_TRUE(tmp_or_left_value_11);
        if (tmp_or_left_truth_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_11);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_11 == 1) {
            goto or_left_11;
        } else {
            goto or_right_11;
        }
        or_right_11:;
        Py_DECREF(tmp_or_left_value_11);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_129 = var_opts;
        tmp_or_left_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[165]);
        if (tmp_or_left_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_12 = CHECK_IF_TRUE(tmp_or_left_value_12);
        if (tmp_or_left_truth_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_12);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_12 == 1) {
            goto or_left_12;
        } else {
            goto or_right_12;
        }
        or_right_12:;
        Py_DECREF(tmp_or_left_value_12);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_130 = var_opts;
        tmp_or_left_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[166]);
        if (tmp_or_left_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_13 = CHECK_IF_TRUE(tmp_or_left_value_13);
        if (tmp_or_left_truth_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_13);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_13 == 1) {
            goto or_left_13;
        } else {
            goto or_right_13;
        }
        or_right_13:;
        Py_DECREF(tmp_or_left_value_13);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_131 = var_opts;
        tmp_or_left_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[167]);
        if (tmp_or_left_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_14 = CHECK_IF_TRUE(tmp_or_left_value_14);
        if (tmp_or_left_truth_14 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_14);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_14 == 1) {
            goto or_left_14;
        } else {
            goto or_right_14;
        }
        or_right_14:;
        Py_DECREF(tmp_or_left_value_14);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_132 = var_opts;
        tmp_or_left_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[168]);
        if (tmp_or_left_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_15 = CHECK_IF_TRUE(tmp_or_left_value_15);
        if (tmp_or_left_truth_15 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_15);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_15 == 1) {
            goto or_left_15;
        } else {
            goto or_right_15;
        }
        or_right_15:;
        Py_DECREF(tmp_or_left_value_15);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_133 = var_opts;
        tmp_or_left_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[169]);
        if (tmp_or_left_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_16 = CHECK_IF_TRUE(tmp_or_left_value_16);
        if (tmp_or_left_truth_16 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_16);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_16 == 1) {
            goto or_left_16;
        } else {
            goto or_right_16;
        }
        or_right_16:;
        Py_DECREF(tmp_or_left_value_16);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_134 = var_opts;
        tmp_or_left_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[170]);
        if (tmp_or_left_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_17 = CHECK_IF_TRUE(tmp_or_left_value_17);
        if (tmp_or_left_truth_17 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_17);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_17 == 1) {
            goto or_left_17;
        } else {
            goto or_right_17;
        }
        or_right_17:;
        Py_DECREF(tmp_or_left_value_17);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_135 = var_opts;
        tmp_or_left_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[171]);
        if (tmp_or_left_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_18 = CHECK_IF_TRUE(tmp_or_left_value_18);
        if (tmp_or_left_truth_18 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_18);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_18 == 1) {
            goto or_left_18;
        } else {
            goto or_right_18;
        }
        or_right_18:;
        Py_DECREF(tmp_or_left_value_18);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_136 = var_opts;
        tmp_or_left_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[172]);
        if (tmp_or_left_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_19 = CHECK_IF_TRUE(tmp_or_left_value_19);
        if (tmp_or_left_truth_19 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_19);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_19 == 1) {
            goto or_left_19;
        } else {
            goto or_right_19;
        }
        or_right_19:;
        Py_DECREF(tmp_or_left_value_19);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_137 = var_opts;
        tmp_or_right_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[173]);
        if (tmp_or_right_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_18 = tmp_or_right_value_19;
        goto or_end_19;
        or_left_19:;
        tmp_or_right_value_18 = tmp_or_left_value_19;
        or_end_19:;
        tmp_or_right_value_17 = tmp_or_right_value_18;
        goto or_end_18;
        or_left_18:;
        tmp_or_right_value_17 = tmp_or_left_value_18;
        or_end_18:;
        tmp_or_right_value_16 = tmp_or_right_value_17;
        goto or_end_17;
        or_left_17:;
        tmp_or_right_value_16 = tmp_or_left_value_17;
        or_end_17:;
        tmp_or_right_value_15 = tmp_or_right_value_16;
        goto or_end_16;
        or_left_16:;
        tmp_or_right_value_15 = tmp_or_left_value_16;
        or_end_16:;
        tmp_or_right_value_14 = tmp_or_right_value_15;
        goto or_end_15;
        or_left_15:;
        tmp_or_right_value_14 = tmp_or_left_value_15;
        or_end_15:;
        tmp_or_right_value_13 = tmp_or_right_value_14;
        goto or_end_14;
        or_left_14:;
        tmp_or_right_value_13 = tmp_or_left_value_14;
        or_end_14:;
        tmp_or_right_value_12 = tmp_or_right_value_13;
        goto or_end_13;
        or_left_13:;
        tmp_or_right_value_12 = tmp_or_left_value_13;
        or_end_13:;
        tmp_or_right_value_11 = tmp_or_right_value_12;
        goto or_end_12;
        or_left_12:;
        tmp_or_right_value_11 = tmp_or_left_value_12;
        or_end_12:;
        tmp_assign_source_67 = tmp_or_right_value_11;
        goto or_end_11;
        or_left_11:;
        tmp_assign_source_67 = tmp_or_left_value_11;
        or_end_11:;
        assert(var_any_getting == NULL);
        var_any_getting = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_expression_value_138;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 247;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_138 = var_opts;
        tmp_assign_source_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[174]);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_any_printing == NULL);
        var_any_printing = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        bool tmp_condition_result_64;
        PyObject *tmp_cmp_expr_left_55;
        PyObject *tmp_cmp_expr_right_55;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_expression_value_141;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 248;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_139 = var_opts;
        tmp_cmp_expr_left_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[175]);
        if (tmp_cmp_expr_left_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_55 = Py_None;
        tmp_condition_result_64 = (tmp_cmp_expr_left_55 != tmp_cmp_expr_right_55) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_55);
        if (tmp_condition_result_64 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 248;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_140 = var_opts;
        tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[175]);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 248;
        tmp_assign_source_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_30);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 248;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_141 = var_opts;
        tmp_assign_source_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[175]);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_3:;
        assert(var_download_archive_fn == NULL);
        var_download_archive_fn = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = MAKE_LIST_EMPTY(0);
        assert(var_postprocessors == NULL);
        var_postprocessors = tmp_assign_source_70;
    }
    {
        nuitka_bool tmp_condition_result_65;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_attribute_value_20;
        int tmp_truth_name_20;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 252;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_142 = var_opts;
        tmp_attribute_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[176]);
        if (tmp_attribute_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_20 = CHECK_IF_TRUE(tmp_attribute_value_20);
        if (tmp_truth_name_20 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_20);

            exception_lineno = 252;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_65 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_20);
        if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
            goto branch_yes_62;
        } else {
            goto branch_no_62;
        }
    }
    branch_yes_62:;
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_call_result_40;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(var_postprocessors);
        tmp_expression_value_143 = var_postprocessors;
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[177]);
        assert(!(tmp_called_value_40 == NULL));
        tmp_dict_key_1 = mod_consts[178];
        tmp_dict_value_1 = mod_consts[179];
        tmp_args_element_value_31 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_144;
            tmp_res = PyDict_SetItem(tmp_args_element_value_31, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[180];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 255;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_144 = var_opts;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[176]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_31, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_31);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 253;
        tmp_call_result_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    branch_no_62:;
    {
        nuitka_bool tmp_condition_result_66;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_attribute_value_21;
        int tmp_truth_name_21;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_145 = var_opts;
        tmp_attribute_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[127]);
        if (tmp_attribute_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_21 = CHECK_IF_TRUE(tmp_attribute_value_21);
        if (tmp_truth_name_21 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_21);

            exception_lineno = 257;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_66 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_21);
        if (tmp_condition_result_66 == NUITKA_BOOL_TRUE) {
            goto branch_yes_63;
        } else {
            goto branch_no_63;
        }
    }
    branch_yes_63:;
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_call_result_41;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        if (var_postprocessors == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[181]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 258;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_146 = var_postprocessors;
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[177]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = mod_consts[178];
        tmp_dict_value_2 = mod_consts[182];
        tmp_args_element_value_32 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_147;
            PyObject *tmp_expression_value_148;
            PyObject *tmp_expression_value_149;
            tmp_res = PyDict_SetItem(tmp_args_element_value_32, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[183];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 260;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_expression_value_147 = var_opts;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[128]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_32, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[184];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 261;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_expression_value_148 = var_opts;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[131]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_32, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[185];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 262;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_expression_value_149 = var_opts;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[185]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_32, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_32);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 258;
        tmp_call_result_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    branch_no_63:;
    {
        nuitka_bool tmp_condition_result_67;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_attribute_value_22;
        int tmp_truth_name_22;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 264;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_150 = var_opts;
        tmp_attribute_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[136]);
        if (tmp_attribute_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_22 = CHECK_IF_TRUE(tmp_attribute_value_22);
        if (tmp_truth_name_22 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_22);

            exception_lineno = 264;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_67 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_22);
        if (tmp_condition_result_67 == NUITKA_BOOL_TRUE) {
            goto branch_yes_64;
        } else {
            goto branch_no_64;
        }
    }
    branch_yes_64:;
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_call_result_42;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        if (var_postprocessors == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[181]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 265;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_151 = var_postprocessors;
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[177]);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = mod_consts[178];
        tmp_dict_value_3 = mod_consts[186];
        tmp_args_element_value_33 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_152;
            tmp_res = PyDict_SetItem(tmp_args_element_value_33, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[187];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 267;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_3;
            }

            tmp_expression_value_152 = var_opts;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[136]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_33, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_33);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 265;
        tmp_call_result_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    branch_no_64:;
    {
        nuitka_bool tmp_condition_result_68;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_attribute_value_23;
        int tmp_truth_name_23;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 277;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_153 = var_opts;
        tmp_attribute_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[188]);
        if (tmp_attribute_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_23 = CHECK_IF_TRUE(tmp_attribute_value_23);
        if (tmp_truth_name_23 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_23);

            exception_lineno = 277;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_68 = tmp_truth_name_23 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_23);
        if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
            goto branch_yes_65;
        } else {
            goto branch_no_65;
        }
    }
    branch_yes_65:;
    {
        PyObject *tmp_called_instance_31;
        PyObject *tmp_call_result_43;
        PyObject *tmp_call_arg_element_1;
        if (var_postprocessors == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[181]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 278;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_31 = var_postprocessors;
        tmp_call_arg_element_1 = DICT_COPY(mod_consts[189]);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 278;
        tmp_call_result_43 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_31, mod_consts[177], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    branch_no_65:;
    {
        nuitka_bool tmp_condition_result_69;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_attribute_value_24;
        int tmp_truth_name_24;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_154 = var_opts;
        tmp_attribute_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[139]);
        if (tmp_attribute_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_24 = CHECK_IF_TRUE(tmp_attribute_value_24);
        if (tmp_truth_name_24 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_24);

            exception_lineno = 279;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_69 = tmp_truth_name_24 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_24);
        if (tmp_condition_result_69 == NUITKA_BOOL_TRUE) {
            goto branch_yes_66;
        } else {
            goto branch_no_66;
        }
    }
    branch_yes_66:;
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_call_result_44;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        if (var_postprocessors == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[181]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 280;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_155 = var_postprocessors;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[177]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = mod_consts[178];
        tmp_dict_value_4 = mod_consts[190];
        tmp_args_element_value_34 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_156;
            tmp_res = PyDict_SetItem(tmp_args_element_value_34, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[148];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 282;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_4;
            }

            tmp_expression_value_156 = var_opts;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[139]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_34, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_34);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 280;
        tmp_call_result_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_34);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    branch_no_66:;
    {
        nuitka_bool tmp_condition_result_70;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_attribute_value_25;
        int tmp_truth_name_25;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 284;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_157 = var_opts;
        tmp_attribute_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[191]);
        if (tmp_attribute_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_25 = CHECK_IF_TRUE(tmp_attribute_value_25);
        if (tmp_truth_name_25 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_25);

            exception_lineno = 284;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_70 = tmp_truth_name_25 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_25);
        if (tmp_condition_result_70 == NUITKA_BOOL_TRUE) {
            goto branch_yes_67;
        } else {
            goto branch_no_67;
        }
    }
    branch_yes_67:;
    {
        PyObject *tmp_called_instance_32;
        PyObject *tmp_call_result_45;
        PyObject *tmp_call_arg_element_2;
        if (var_postprocessors == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[181]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 285;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_32 = var_postprocessors;
        tmp_call_arg_element_2 = DICT_COPY(mod_consts[192]);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 285;
        tmp_call_result_45 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_32, mod_consts[177], tmp_call_arg_element_2);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    branch_no_67:;
    {
        nuitka_bool tmp_condition_result_71;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_attribute_value_26;
        int tmp_truth_name_26;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 288;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_158 = var_opts;
        tmp_attribute_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[193]);
        if (tmp_attribute_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_26 = CHECK_IF_TRUE(tmp_attribute_value_26);
        if (tmp_truth_name_26 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_26);

            exception_lineno = 288;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_71 = tmp_truth_name_26 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_26);
        if (tmp_condition_result_71 == NUITKA_BOOL_TRUE) {
            goto branch_yes_68;
        } else {
            goto branch_no_68;
        }
    }
    branch_yes_68:;
    {
        PyObject *tmp_assign_source_71;
        int tmp_or_left_truth_20;
        PyObject *tmp_or_left_value_20;
        PyObject *tmp_or_right_value_20;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_expression_value_160;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_159 = var_opts;
        tmp_or_left_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[194]);
        if (tmp_or_left_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_20 = CHECK_IF_TRUE(tmp_or_left_value_20);
        if (tmp_or_left_truth_20 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_20);

            exception_lineno = 289;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_20 == 1) {
            goto or_left_20;
        } else {
            goto or_right_20;
        }
        or_right_20:;
        Py_DECREF(tmp_or_left_value_20);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_160 = var_opts;
        tmp_or_right_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[195]);
        if (tmp_or_right_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_71 = tmp_or_right_value_20;
        goto or_end_20;
        or_left_20:;
        tmp_assign_source_71 = tmp_or_left_value_20;
        or_end_20:;
        assert(var_already_have_thumbnail == NULL);
        var_already_have_thumbnail = tmp_assign_source_71;
    }
    {
        PyObject *tmp_called_instance_33;
        PyObject *tmp_call_result_46;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        if (var_postprocessors == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[181]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 290;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_33 = var_postprocessors;
        tmp_dict_key_5 = mod_consts[178];
        tmp_dict_value_5 = mod_consts[196];
        tmp_args_element_value_35 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_35, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[197];
        CHECK_OBJECT(var_already_have_thumbnail);
        tmp_dict_value_5 = var_already_have_thumbnail;
        tmp_res = PyDict_SetItem(tmp_args_element_value_35, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 290;
        tmp_call_result_46 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_33, mod_consts[177], tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        bool tmp_condition_result_72;
        PyObject *tmp_operand_value_9;
        CHECK_OBJECT(var_already_have_thumbnail);
        tmp_operand_value_9 = var_already_have_thumbnail;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_72 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_72 != false) {
            goto branch_yes_69;
        } else {
            goto branch_no_69;
        }
    }
    branch_yes_69:;
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        tmp_assattr_value_14 = Py_True;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 295;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_14 = var_opts;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[194], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_69:;
    branch_no_68:;
    {
        nuitka_bool tmp_condition_result_73;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_attribute_value_27;
        int tmp_truth_name_27;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 298;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_161 = var_opts;
        tmp_attribute_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[198]);
        if (tmp_attribute_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_27 = CHECK_IF_TRUE(tmp_attribute_value_27);
        if (tmp_truth_name_27 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_27);

            exception_lineno = 298;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_73 = tmp_truth_name_27 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_27);
        if (tmp_condition_result_73 == NUITKA_BOOL_TRUE) {
            goto branch_yes_70;
        } else {
            goto branch_no_70;
        }
    }
    branch_yes_70:;
    {
        PyObject *tmp_called_instance_34;
        PyObject *tmp_call_result_47;
        PyObject *tmp_call_arg_element_3;
        if (var_postprocessors == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[181]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 299;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_34 = var_postprocessors;
        tmp_call_arg_element_3 = DICT_COPY(mod_consts[199]);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 299;
        tmp_call_result_47 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_34, mod_consts[177], tmp_call_arg_element_3);
        Py_DECREF(tmp_call_arg_element_3);
        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    branch_no_70:;
    {
        nuitka_bool tmp_condition_result_74;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_attribute_value_28;
        int tmp_truth_name_28;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 302;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_162 = var_opts;
        tmp_attribute_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[200]);
        if (tmp_attribute_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_28 = CHECK_IF_TRUE(tmp_attribute_value_28);
        if (tmp_truth_name_28 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_28);

            exception_lineno = 302;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_74 = tmp_truth_name_28 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_28);
        if (tmp_condition_result_74 == NUITKA_BOOL_TRUE) {
            goto branch_yes_71;
        } else {
            goto branch_no_71;
        }
    }
    branch_yes_71:;
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_call_result_48;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        if (var_postprocessors == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[181]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 303;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_163 = var_postprocessors;
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[177]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_6 = mod_consts[178];
        tmp_dict_value_6 = mod_consts[201];
        tmp_args_element_value_36 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_164;
            tmp_res = PyDict_SetItem(tmp_args_element_value_36, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[200];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 305;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_5;
            }

            tmp_expression_value_164 = var_opts;
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[200]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_36, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_36);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 303;
        tmp_call_result_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    branch_no_71:;
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = Py_None;
        assert(var_external_downloader_args == NULL);
        Py_INCREF(tmp_assign_source_72);
        var_external_downloader_args = tmp_assign_source_72;
    }
    {
        nuitka_bool tmp_condition_result_75;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_attribute_value_29;
        int tmp_truth_name_29;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 308;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_165 = var_opts;
        tmp_attribute_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[202]);
        if (tmp_attribute_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_29 = CHECK_IF_TRUE(tmp_attribute_value_29);
        if (tmp_truth_name_29 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_29);

            exception_lineno = 308;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_75 = tmp_truth_name_29 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_29);
        if (tmp_condition_result_75 == NUITKA_BOOL_TRUE) {
            goto branch_yes_72;
        } else {
            goto branch_no_72;
        }
    }
    branch_yes_72:;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_expression_value_166;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 309;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_166 = var_opts;
        tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[202]);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 309;
        tmp_assign_source_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_external_downloader_args;
            assert(old != NULL);
            var_external_downloader_args = tmp_assign_source_73;
            Py_DECREF(old);
        }

    }
    branch_no_72:;
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = Py_None;
        assert(var_postprocessor_args == NULL);
        Py_INCREF(tmp_assign_source_74);
        var_postprocessor_args = tmp_assign_source_74;
    }
    {
        nuitka_bool tmp_condition_result_76;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_attribute_value_30;
        int tmp_truth_name_30;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 311;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_167 = var_opts;
        tmp_attribute_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[204]);
        if (tmp_attribute_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_30 = CHECK_IF_TRUE(tmp_attribute_value_30);
        if (tmp_truth_name_30 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_30);

            exception_lineno = 311;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_76 = tmp_truth_name_30 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_30);
        if (tmp_condition_result_76 == NUITKA_BOOL_TRUE) {
            goto branch_yes_73;
        } else {
            goto branch_no_73;
        }
    }
    branch_yes_73:;
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_expression_value_168;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 312;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_168 = var_opts;
        tmp_args_element_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[204]);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 312;
        tmp_assign_source_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_postprocessor_args;
            assert(old != NULL);
            var_postprocessor_args = tmp_assign_source_75;
            Py_DECREF(old);
        }

    }
    branch_no_73:;
    {
        PyObject *tmp_assign_source_76;
        bool tmp_condition_result_77;
        PyObject *tmp_cmp_expr_left_56;
        PyObject *tmp_cmp_expr_right_56;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_expression_value_170;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 314;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_169 = var_opts;
        tmp_cmp_expr_left_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[205]);
        if (tmp_cmp_expr_left_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_56 = Py_None;
        tmp_condition_result_77 = (tmp_cmp_expr_left_56 == tmp_cmp_expr_right_56) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_56);
        if (tmp_condition_result_77 != false) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        tmp_assign_source_76 = Py_None;
        Py_INCREF(tmp_assign_source_76);
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 315;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_170 = var_opts;
        tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[205]);
        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 315;
        tmp_assign_source_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_39);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_4:;
        assert(var_match_filter == NULL);
        var_match_filter = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_171;
        tmp_dict_key_7 = mod_consts[76];
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 318;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_171 = var_opts;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[76]);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_77 = _PyDict_NewPresized( 121 );
        {
            PyObject *tmp_expression_value_172;
            PyObject *tmp_expression_value_173;
            PyObject *tmp_expression_value_174;
            PyObject *tmp_expression_value_175;
            PyObject *tmp_expression_value_176;
            PyObject *tmp_expression_value_177;
            PyObject *tmp_expression_value_178;
            int tmp_or_left_truth_21;
            PyObject *tmp_or_left_value_21;
            PyObject *tmp_or_right_value_21;
            PyObject *tmp_expression_value_179;
            int tmp_or_left_truth_22;
            PyObject *tmp_or_left_value_22;
            PyObject *tmp_or_right_value_22;
            PyObject *tmp_expression_value_180;
            PyObject *tmp_expression_value_181;
            PyObject *tmp_expression_value_182;
            PyObject *tmp_expression_value_183;
            PyObject *tmp_expression_value_184;
            PyObject *tmp_expression_value_185;
            PyObject *tmp_expression_value_186;
            PyObject *tmp_expression_value_187;
            PyObject *tmp_expression_value_188;
            int tmp_or_left_truth_23;
            PyObject *tmp_or_left_value_23;
            PyObject *tmp_or_right_value_23;
            PyObject *tmp_expression_value_189;
            PyObject *tmp_expression_value_190;
            PyObject *tmp_expression_value_191;
            int tmp_or_left_truth_24;
            PyObject *tmp_or_left_value_24;
            PyObject *tmp_or_right_value_24;
            PyObject *tmp_expression_value_192;
            PyObject *tmp_expression_value_193;
            PyObject *tmp_expression_value_194;
            PyObject *tmp_expression_value_195;
            PyObject *tmp_expression_value_196;
            PyObject *tmp_expression_value_197;
            PyObject *tmp_expression_value_198;
            PyObject *tmp_expression_value_199;
            PyObject *tmp_expression_value_200;
            PyObject *tmp_expression_value_201;
            PyObject *tmp_expression_value_202;
            PyObject *tmp_expression_value_203;
            PyObject *tmp_expression_value_204;
            PyObject *tmp_expression_value_205;
            PyObject *tmp_expression_value_206;
            PyObject *tmp_expression_value_207;
            PyObject *tmp_expression_value_208;
            PyObject *tmp_expression_value_209;
            PyObject *tmp_expression_value_210;
            PyObject *tmp_expression_value_211;
            PyObject *tmp_expression_value_212;
            PyObject *tmp_expression_value_213;
            PyObject *tmp_expression_value_214;
            PyObject *tmp_expression_value_215;
            PyObject *tmp_expression_value_216;
            PyObject *tmp_expression_value_217;
            PyObject *tmp_expression_value_218;
            PyObject *tmp_cmp_expr_left_57;
            PyObject *tmp_cmp_expr_right_57;
            PyObject *tmp_expression_value_219;
            PyObject *tmp_expression_value_220;
            PyObject *tmp_expression_value_221;
            PyObject *tmp_expression_value_222;
            PyObject *tmp_expression_value_223;
            PyObject *tmp_expression_value_224;
            PyObject *tmp_expression_value_225;
            PyObject *tmp_expression_value_226;
            PyObject *tmp_expression_value_227;
            PyObject *tmp_expression_value_228;
            PyObject *tmp_expression_value_229;
            PyObject *tmp_expression_value_230;
            PyObject *tmp_expression_value_231;
            PyObject *tmp_expression_value_232;
            PyObject *tmp_expression_value_233;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_expression_value_234;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_expression_value_235;
            PyObject *tmp_expression_value_236;
            PyObject *tmp_expression_value_237;
            PyObject *tmp_expression_value_238;
            PyObject *tmp_expression_value_239;
            PyObject *tmp_expression_value_240;
            PyObject *tmp_expression_value_241;
            PyObject *tmp_expression_value_242;
            PyObject *tmp_expression_value_243;
            PyObject *tmp_expression_value_244;
            PyObject *tmp_expression_value_245;
            PyObject *tmp_expression_value_246;
            PyObject *tmp_expression_value_247;
            PyObject *tmp_expression_value_248;
            PyObject *tmp_expression_value_249;
            PyObject *tmp_expression_value_250;
            PyObject *tmp_expression_value_251;
            PyObject *tmp_expression_value_252;
            PyObject *tmp_expression_value_253;
            PyObject *tmp_expression_value_254;
            PyObject *tmp_expression_value_255;
            PyObject *tmp_expression_value_256;
            PyObject *tmp_expression_value_257;
            PyObject *tmp_expression_value_258;
            PyObject *tmp_expression_value_259;
            PyObject *tmp_expression_value_260;
            PyObject *tmp_expression_value_261;
            PyObject *tmp_expression_value_262;
            PyObject *tmp_expression_value_263;
            PyObject *tmp_expression_value_264;
            PyObject *tmp_expression_value_265;
            PyObject *tmp_expression_value_266;
            PyObject *tmp_expression_value_267;
            PyObject *tmp_expression_value_268;
            PyObject *tmp_expression_value_269;
            PyObject *tmp_expression_value_270;
            PyObject *tmp_expression_value_271;
            PyObject *tmp_expression_value_272;
            PyObject *tmp_expression_value_273;
            PyObject *tmp_expression_value_274;
            PyObject *tmp_expression_value_275;
            PyObject *tmp_expression_value_276;
            PyObject *tmp_expression_value_277;
            PyObject *tmp_expression_value_278;
            PyObject *tmp_expression_value_279;
            PyObject *tmp_expression_value_280;
            PyObject *tmp_expression_value_281;
            PyObject *tmp_expression_value_282;
            PyObject *tmp_expression_value_283;
            bool tmp_condition_result_78;
            PyObject *tmp_cmp_expr_left_58;
            PyObject *tmp_cmp_expr_right_58;
            PyObject *tmp_expression_value_284;
            PyObject *tmp_expression_value_285;
            bool tmp_condition_result_79;
            PyObject *tmp_cmp_expr_left_59;
            PyObject *tmp_cmp_expr_right_59;
            PyObject *tmp_expression_value_286;
            PyObject *tmp_expression_value_287;
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[77];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 319;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_172 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[77]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[78];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 320;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_173 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[78]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[207];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 321;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_174 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[207]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[208];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 322;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_175 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[208]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[112];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 323;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_176 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[112]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[82];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 324;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_177 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[82]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[81];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 325;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_178 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[81]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[209];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 326;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_179 = var_opts;
            tmp_or_left_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[209]);
            if (tmp_or_left_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_or_left_truth_21 = CHECK_IF_TRUE(tmp_or_left_value_21);
            if (tmp_or_left_truth_21 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_or_left_value_21);

                exception_lineno = 326;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            if (tmp_or_left_truth_21 == 1) {
                goto or_left_21;
            } else {
                goto or_right_21;
            }
            or_right_21:;
            Py_DECREF(tmp_or_left_value_21);
            CHECK_OBJECT(var_any_getting);
            tmp_or_left_value_22 = var_any_getting;
            tmp_or_left_truth_22 = CHECK_IF_TRUE(tmp_or_left_value_22);
            if (tmp_or_left_truth_22 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            if (tmp_or_left_truth_22 == 1) {
                goto or_left_22;
            } else {
                goto or_right_22;
            }
            or_right_22:;
            CHECK_OBJECT(var_any_printing);
            tmp_or_right_value_22 = var_any_printing;
            tmp_or_right_value_21 = tmp_or_right_value_22;
            goto or_end_22;
            or_left_22:;
            tmp_or_right_value_21 = tmp_or_left_value_22;
            or_end_22:;
            Py_INCREF(tmp_or_right_value_21);
            tmp_dict_value_7 = tmp_or_right_value_21;
            goto or_end_21;
            or_left_21:;
            tmp_dict_value_7 = tmp_or_left_value_21;
            or_end_21:;
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[210];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 327;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_180 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_180, mod_consts[210]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[211];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 328;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_181 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[164]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[212];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 329;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_182 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[165]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[213];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 330;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_183 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[166]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[214];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 331;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_184 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_184, mod_consts[167]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[215];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 332;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_185 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[168]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[216];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 333;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_186 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[171]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[217];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 334;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_187 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_187, mod_consts[169]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[218];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 335;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_188 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[170]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[219];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 336;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_189 = var_opts;
            tmp_or_left_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_189, mod_consts[172]);
            if (tmp_or_left_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_or_left_truth_23 = CHECK_IF_TRUE(tmp_or_left_value_23);
            if (tmp_or_left_truth_23 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_or_left_value_23);

                exception_lineno = 336;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            if (tmp_or_left_truth_23 == 1) {
                goto or_left_23;
            } else {
                goto or_right_23;
            }
            or_right_23:;
            Py_DECREF(tmp_or_left_value_23);
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 336;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_190 = var_opts;
            tmp_or_right_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_190, mod_consts[174]);
            if (tmp_or_right_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_dict_value_7 = tmp_or_right_value_23;
            goto or_end_23;
            or_left_23:;
            tmp_dict_value_7 = tmp_or_left_value_23;
            or_end_23:;
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[173];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 337;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_191 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_191, mod_consts[173]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[220];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 338;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_192 = var_opts;
            tmp_or_left_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_192, mod_consts[220]);
            if (tmp_or_left_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_or_left_truth_24 = CHECK_IF_TRUE(tmp_or_left_value_24);
            if (tmp_or_left_truth_24 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_or_left_value_24);

                exception_lineno = 338;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            if (tmp_or_left_truth_24 == 1) {
                goto or_left_24;
            } else {
                goto or_right_24;
            }
            or_right_24:;
            Py_DECREF(tmp_or_left_value_24);
            CHECK_OBJECT(var_any_getting);
            tmp_or_right_value_24 = var_any_getting;
            Py_INCREF(tmp_or_right_value_24);
            tmp_dict_value_7 = tmp_or_right_value_24;
            goto or_end_24;
            or_left_24:;
            tmp_dict_value_7 = tmp_or_left_value_24;
            or_end_24:;
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[221];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 339;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_193 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_193, mod_consts[221]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[148];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 340;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_194 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_194, mod_consts[148]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[222];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 341;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_195 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_195, mod_consts[222]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[84];
            CHECK_OBJECT(var_outtmpl);
            tmp_dict_value_7 = var_outtmpl;
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[223];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 343;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_196 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_196, mod_consts[223]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[89];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 344;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_197 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_197, mod_consts[89]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[92];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 345;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_198 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_198, mod_consts[92]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[224];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 346;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_199 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_199, mod_consts[224]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[225];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 347;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_200 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_200, mod_consts[225]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[226];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 348;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_201 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_201, mod_consts[226]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[98];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 349;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_202 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_202, mod_consts[98]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[227];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 350;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_203 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_203, mod_consts[227]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[116];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 351;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_204 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_204, mod_consts[116]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[117];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 352;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_205 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_205, mod_consts[117]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[228];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 353;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_206 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_206, mod_consts[228]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[229];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 354;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_207 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_207, mod_consts[229]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[118];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 355;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_208 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_208, mod_consts[118]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[230];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 356;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_209 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_209, mod_consts[230]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[120];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 357;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_210 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_210, mod_consts[120]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 357;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[231];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 358;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_211 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_211, mod_consts[232]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[233];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 359;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_212 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_212, mod_consts[233]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[234];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 360;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_213 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_213, mod_consts[234]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 360;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[122];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 361;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_214 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_214, mod_consts[122]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[124];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 362;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_215 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_215, mod_consts[124]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[235];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 363;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_216 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_216, mod_consts[236]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[237];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 364;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_217 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_217, mod_consts[238]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[239];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 365;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_218 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_218, mod_consts[239]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[240];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 366;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_219 = var_opts;
            tmp_cmp_expr_left_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_219, mod_consts[84]);
            if (tmp_cmp_expr_left_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_cmp_expr_right_57 = mod_consts[34];
            tmp_dict_value_7 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_57, tmp_cmp_expr_right_57);
            Py_DECREF(tmp_cmp_expr_left_57);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[241];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 367;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_220 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_220, mod_consts[241]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[242];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 368;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_221 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_221, mod_consts[242]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[243];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 369;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_222 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_222, mod_consts[243]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[244];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 370;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_223 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_223, mod_consts[244]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[245];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 371;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_224 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_224, mod_consts[245]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[246];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 372;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_225 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_225, mod_consts[246]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[194];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 373;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_226 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_226, mod_consts[194]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[195];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 374;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_227 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_227, mod_consts[195]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[152];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 375;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_228 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_228, mod_consts[152]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[151];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 376;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_229 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_229, mod_consts[151]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[150];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 377;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_230 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_230, mod_consts[150]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[247];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 378;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_231 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_231, mod_consts[247]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[248];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 379;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_232 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_232, mod_consts[248]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[249];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 380;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_233 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_233, mod_consts[249]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[250];
            tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[251]);

            if (unlikely(tmp_called_value_48 == NULL)) {
                tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[251]);
            }

            if (tmp_called_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 381;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_234 = var_opts;
            tmp_args_element_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_234, mod_consts[250]);
            if (tmp_args_element_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 381;
            tmp_dict_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_40);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[252];
            tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[251]);

            if (unlikely(tmp_called_value_49 == NULL)) {
                tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[251]);
            }

            if (tmp_called_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 382;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_235 = var_opts;
            tmp_args_element_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_235, mod_consts[252]);
            if (tmp_args_element_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 382;
            tmp_dict_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[253];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 383;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_236 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_236, mod_consts[253]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[254];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 384;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_237 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_237, mod_consts[254]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[24];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 385;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_238 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_238, mod_consts[24]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[255];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 386;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_239 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_239, mod_consts[255]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[256];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 387;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_240 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_240, mod_consts[256]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[257];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 388;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_241 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_241, mod_consts[257]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[147];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 389;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_242 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_242, mod_consts[147]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 389;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[102];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 390;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_243 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_243, mod_consts[102]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[104];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 391;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_244 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_244, mod_consts[104]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[258];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 392;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_245 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_245, mod_consts[258]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[259];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 393;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_246 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_246, mod_consts[259]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[260];
            CHECK_OBJECT(var_date);
            tmp_dict_value_7 = var_date;
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[261];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 395;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_247 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_247, mod_consts[261]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[262];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 396;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_248 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_248, mod_consts[262]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[51];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 397;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_249 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_249, mod_consts[51]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 397;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[175];
            CHECK_OBJECT(var_download_archive_fn);
            tmp_dict_value_7 = var_download_archive_fn;
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[263];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 399;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_250 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_250, mod_consts[263]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[264];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 400;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_251 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_251, mod_consts[265]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 400;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[266];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 401;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_252 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_252, mod_consts[266]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 401;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[267];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 402;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_253 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_253, mod_consts[267]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[268];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 403;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_254 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_254, mod_consts[268]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 403;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[269];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 404;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_255 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_255, mod_consts[269]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[270];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 405;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_256 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_256, mod_consts[270]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 405;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[271];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 406;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_257 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_257, mod_consts[271]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 406;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[272];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 407;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_258 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_258, mod_consts[272]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 407;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[273];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 408;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_259 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_259, mod_consts[273]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[274];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 409;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_260 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_260, mod_consts[274]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[275];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 410;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_261 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_261, mod_consts[275]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 410;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[276];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 411;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_262 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_262, mod_consts[276]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[277];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 412;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_263 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_263, mod_consts[277]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[278];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 413;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_264 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_264, mod_consts[278]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[181];
            if (var_postprocessors == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[181]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 414;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_dict_value_7 = var_postprocessors;
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[279];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 415;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_265 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_265, mod_consts[279]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 415;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[280];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 416;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_266 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_266, mod_consts[280]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[281];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 417;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_267 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_267, mod_consts[281]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[106];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 418;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_268 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_268, mod_consts[106]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[108];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 419;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_269 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_269, mod_consts[108]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[282];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 420;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_270 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_270, mod_consts[282]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[283];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 421;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_271 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_271, mod_consts[283]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[284];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 422;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_272 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_272, mod_consts[284]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[285];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 423;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_273 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_273, mod_consts[285]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[205];
            CHECK_OBJECT(var_match_filter);
            tmp_dict_value_7 = var_match_filter;
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[286];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 425;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_274 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_274, mod_consts[286]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[287];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 426;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_275 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_275, mod_consts[287]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[288];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 427;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_276 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_276, mod_consts[288]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[289];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 428;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_277 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_277, mod_consts[289]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[202];
            CHECK_OBJECT(var_external_downloader_args);
            tmp_dict_value_7 = var_external_downloader_args;
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[204];
            CHECK_OBJECT(var_postprocessor_args);
            tmp_dict_value_7 = var_postprocessor_args;
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[290];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 431;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_278 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_278, mod_consts[290]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[291];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 432;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_279 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_279, mod_consts[291]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[292];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 433;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_280 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_280, mod_consts[292]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[293];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 434;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_281 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_281, mod_consts[293]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[294];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 435;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_282 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_282, mod_consts[294]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[295];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 436;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_283 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_283, mod_consts[295]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[86];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 438;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_284 = var_opts;
            tmp_cmp_expr_left_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_284, mod_consts[86]);
            if (tmp_cmp_expr_left_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 438;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_cmp_expr_right_58 = Py_True;
            tmp_condition_result_78 = (tmp_cmp_expr_left_58 == tmp_cmp_expr_right_58) ? true : false;
            Py_DECREF(tmp_cmp_expr_left_58);
            if (tmp_condition_result_78 != false) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 438;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_285 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_285, mod_consts[86]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 438;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_dict_value_7 = Py_None;
            Py_INCREF(tmp_dict_value_7);
            condexpr_end_5:;
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[85];
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 439;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_286 = var_opts;
            tmp_cmp_expr_left_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_286, mod_consts[85]);
            if (tmp_cmp_expr_left_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 439;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_cmp_expr_right_59 = Py_True;
            tmp_condition_result_79 = (tmp_cmp_expr_left_59 == tmp_cmp_expr_right_59) ? true : false;
            Py_DECREF(tmp_cmp_expr_left_59);
            if (tmp_condition_result_79 != false) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            if (var_opts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 439;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }

            tmp_expression_value_287 = var_opts;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_287, mod_consts[85]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 439;
                type_description_1 = "ocooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_6;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_dict_value_7 = Py_None;
            Py_INCREF(tmp_dict_value_7);
            condexpr_end_6:;
            tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_assign_source_77);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        assert(var_ydl_opts == NULL);
        var_ydl_opts = tmp_assign_source_77;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_50;
        PyObject *tmp_args_element_value_42;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[296]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[296]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_ydl_opts);
        tmp_args_element_value_42 = var_ydl_opts;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 442;
        tmp_assign_source_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_42);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_288;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_288 = tmp_with_1__source;
        tmp_called_value_51 = LOOKUP_SPECIAL(tmp_expression_value_288, mod_consts[297]);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 442;
        tmp_assign_source_79 = CALL_FUNCTION_NO_ARGS(tmp_called_value_51);
        Py_DECREF(tmp_called_value_51);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_expression_value_289;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_289 = tmp_with_1__source;
        tmp_assign_source_80 = LOOKUP_SPECIAL(tmp_expression_value_289, mod_consts[298]);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_80;
    }
    {
        nuitka_bool tmp_assign_source_81;
        tmp_assign_source_81 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_82 = tmp_with_1__enter;
        assert(var_ydl == NULL);
        Py_INCREF(tmp_assign_source_82);
        var_ydl = tmp_assign_source_82;
    }
    // Tried code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_80;
        PyObject *tmp_expression_value_290;
        PyObject *tmp_attribute_value_31;
        int tmp_truth_name_31;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 444;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_expression_value_290 = var_opts;
        tmp_attribute_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_290, mod_consts[299]);
        if (tmp_attribute_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        tmp_truth_name_31 = CHECK_IF_TRUE(tmp_attribute_value_31);
        if (tmp_truth_name_31 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_31);

            exception_lineno = 444;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        tmp_condition_result_80 = tmp_truth_name_31 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_31);
        if (tmp_condition_result_80 == NUITKA_BOOL_TRUE) {
            goto branch_yes_74;
        } else {
            goto branch_no_74;
        }
    }
    branch_yes_74:;
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_call_result_49;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_expression_value_291;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_expression_value_292;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_expression_value_293;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[299]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(var_ydl);
        tmp_expression_value_291 = var_ydl;
        tmp_args_element_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_291, mod_consts[300]);
        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_args_element_value_43);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 445;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_expression_value_292 = var_opts;
        tmp_args_element_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_292, mod_consts[24]);
        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_43);

            exception_lineno = 445;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(var_ydl);
        tmp_expression_value_293 = var_ydl;
        tmp_args_element_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_293, mod_consts[301]);
        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);

            exception_lineno = 445;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 445;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_call_result_49 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_52, call_args);
        }

        Py_DECREF(tmp_args_element_value_43);
        Py_DECREF(tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        Py_DECREF(tmp_call_result_49);
    }
    branch_no_74:;
    {
        nuitka_bool tmp_condition_result_81;
        PyObject *tmp_expression_value_294;
        PyObject *tmp_attribute_value_32;
        int tmp_truth_name_32;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 448;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_expression_value_294 = var_opts;
        tmp_attribute_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_294, mod_consts[302]);
        if (tmp_attribute_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        tmp_truth_name_32 = CHECK_IF_TRUE(tmp_attribute_value_32);
        if (tmp_truth_name_32 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_32);

            exception_lineno = 448;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        tmp_condition_result_81 = tmp_truth_name_32 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_32);
        if (tmp_condition_result_81 == NUITKA_BOOL_TRUE) {
            goto branch_yes_75;
        } else {
            goto branch_no_75;
        }
    }
    branch_yes_75:;
    {
        PyObject *tmp_called_instance_35;
        PyObject *tmp_expression_value_295;
        PyObject *tmp_call_result_50;
        if (var_ydl == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[303]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 449;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_expression_value_295 = var_ydl;
        tmp_called_instance_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_295, mod_consts[304]);
        if (tmp_called_instance_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 449;
        tmp_call_result_50 = CALL_METHOD_NO_ARGS(tmp_called_instance_35, mod_consts[305]);
        Py_DECREF(tmp_called_instance_35);
        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        Py_DECREF(tmp_call_result_50);
    }
    branch_no_75:;
    {
        bool tmp_condition_result_82;
        int tmp_and_left_truth_23;
        bool tmp_and_left_value_23;
        bool tmp_and_right_value_23;
        PyObject *tmp_cmp_expr_left_60;
        nuitka_digit tmp_cmp_expr_right_60;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_cmp_expr_left_61;
        PyObject *tmp_cmp_expr_right_61;
        PyObject *tmp_expression_value_296;
        if (var_all_urls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 452;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_len_arg_1 = var_all_urls;
        tmp_cmp_expr_left_60 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        tmp_cmp_expr_right_60 = 1;
        tmp_and_left_value_23 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_60, tmp_cmp_expr_right_60);
        Py_DECREF(tmp_cmp_expr_left_60);
        tmp_and_left_truth_23 = tmp_and_left_value_23 != false ? 1 : 0;
        if (tmp_and_left_truth_23 == 1) {
            goto and_right_23;
        } else {
            goto and_left_23;
        }
        and_right_23:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 452;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_expression_value_296 = var_opts;
        tmp_cmp_expr_left_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_296, mod_consts[306]);
        if (tmp_cmp_expr_left_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        tmp_cmp_expr_right_61 = Py_None;
        tmp_and_right_value_23 = (tmp_cmp_expr_left_61 == tmp_cmp_expr_right_61) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_61);
        tmp_condition_result_82 = tmp_and_right_value_23;
        goto and_end_23;
        and_left_23:;
        tmp_condition_result_82 = tmp_and_left_value_23;
        and_end_23:;
        if (tmp_condition_result_82 != false) {
            goto branch_yes_76;
        } else {
            goto branch_no_76;
        }
    }
    branch_yes_76:;
    {
        nuitka_bool tmp_condition_result_83;
        int tmp_or_left_truth_25;
        nuitka_bool tmp_or_left_value_25;
        nuitka_bool tmp_or_right_value_25;
        PyObject *tmp_expression_value_297;
        PyObject *tmp_attribute_value_33;
        int tmp_truth_name_33;
        PyObject *tmp_expression_value_298;
        PyObject *tmp_attribute_value_34;
        int tmp_truth_name_34;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 453;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_expression_value_297 = var_opts;
        tmp_attribute_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_297, mod_consts[299]);
        if (tmp_attribute_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        tmp_truth_name_33 = CHECK_IF_TRUE(tmp_attribute_value_33);
        if (tmp_truth_name_33 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_33);

            exception_lineno = 453;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        tmp_or_left_value_25 = tmp_truth_name_33 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_33);
        tmp_or_left_truth_25 = tmp_or_left_value_25 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_25 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        if (tmp_or_left_truth_25 == 1) {
            goto or_left_25;
        } else {
            goto or_right_25;
        }
        or_right_25:;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 453;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_expression_value_298 = var_opts;
        tmp_attribute_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_298, mod_consts[302]);
        if (tmp_attribute_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        tmp_truth_name_34 = CHECK_IF_TRUE(tmp_attribute_value_34);
        if (tmp_truth_name_34 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_34);

            exception_lineno = 453;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        tmp_or_right_value_25 = tmp_truth_name_34 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_34);
        tmp_condition_result_83 = tmp_or_right_value_25;
        goto or_end_25;
        or_left_25:;
        tmp_condition_result_83 = tmp_or_left_value_25;
        or_end_25:;
        if (tmp_condition_result_83 == NUITKA_BOOL_TRUE) {
            goto branch_yes_77;
        } else {
            goto branch_no_77;
        }
    }
    branch_yes_77:;
    {
        PyObject *tmp_called_instance_36;
        PyObject *tmp_call_result_51;
        tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_36 == NULL)) {
            tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 454;
        tmp_call_result_51 = CALL_METHOD_NO_ARGS(tmp_called_instance_36, mod_consts[31]);
        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        Py_DECREF(tmp_call_result_51);
    }
    branch_no_77:;
    {
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_299;
        PyObject *tmp_call_result_52;
        PyObject *tmp_args_element_value_46;
        bool tmp_condition_result_84;
        PyObject *tmp_cmp_expr_left_62;
        PyObject *tmp_cmp_expr_right_62;
        PyObject *tmp_expression_value_300;
        PyObject *tmp_expression_value_301;
        PyObject *tmp_subscript_value_4;
        if (var_ydl == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[303]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 456;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_expression_value_299 = var_ydl;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_299, mod_consts[307]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(par_argv);
        tmp_cmp_expr_left_62 = par_argv;
        tmp_cmp_expr_right_62 = Py_None;
        tmp_condition_result_84 = (tmp_cmp_expr_left_62 == tmp_cmp_expr_right_62) ? true : false;
        if (tmp_condition_result_84 != false) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        tmp_expression_value_301 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_301 == NULL)) {
            tmp_expression_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 456;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        tmp_expression_value_300 = LOOKUP_ATTRIBUTE(tmp_expression_value_301, mod_consts[308]);
        if (tmp_expression_value_300 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 456;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        tmp_subscript_value_4 = mod_consts[309];
        tmp_args_element_value_46 = LOOKUP_SUBSCRIPT(tmp_expression_value_300, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_300);
        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 456;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT(par_argv);
        tmp_args_element_value_46 = par_argv;
        Py_INCREF(tmp_args_element_value_46);
        condexpr_end_7:;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 456;
        tmp_call_result_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_46);
        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_instance_37;
        PyObject *tmp_call_result_53;
        if (Nuitka_Cell_GET(var_parser) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 457;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_called_instance_37 = Nuitka_Cell_GET(var_parser);
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 457;
        tmp_call_result_53 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_37,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[310], 0)
        );

        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        Py_DECREF(tmp_call_result_53);
    }
    branch_no_76:;
    // Tried code:
    {
        bool tmp_condition_result_85;
        PyObject *tmp_cmp_expr_left_63;
        PyObject *tmp_cmp_expr_right_63;
        PyObject *tmp_expression_value_302;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 462;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }

        tmp_expression_value_302 = var_opts;
        tmp_cmp_expr_left_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_302, mod_consts[306]);
        if (tmp_cmp_expr_left_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        tmp_cmp_expr_right_63 = Py_None;
        tmp_condition_result_85 = (tmp_cmp_expr_left_63 != tmp_cmp_expr_right_63) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_63);
        if (tmp_condition_result_85 != false) {
            goto branch_yes_78;
        } else {
            goto branch_no_78;
        }
    }
    branch_yes_78:;
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_303;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_called_value_55;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_expression_value_304;
        if (var_ydl == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[303]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 463;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }

        tmp_expression_value_303 = var_ydl;
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_303, mod_consts[311]);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 463;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        if (var_opts == NULL) {
            Py_DECREF(tmp_called_value_54);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 463;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }

        tmp_expression_value_304 = var_opts;
        tmp_args_element_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_304, mod_consts[306]);
        if (tmp_args_element_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 463;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 463;
        tmp_args_element_value_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_55, tmp_args_element_value_48);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 463;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 463;
        tmp_assign_source_83 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_47);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        assert(var_retcode == NULL);
        var_retcode = tmp_assign_source_83;
    }
    goto branch_end_78;
    branch_no_78:;
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_305;
        PyObject *tmp_args_element_value_49;
        if (var_ydl == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[303]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 465;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }

        tmp_expression_value_305 = var_ydl;
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_305, mod_consts[312]);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        if (var_all_urls == NULL) {
            Py_DECREF(tmp_called_value_56);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 465;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }

        tmp_args_element_value_49 = var_all_urls;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 465;
        tmp_assign_source_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_49);
        Py_DECREF(tmp_called_value_56);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        assert(var_retcode == NULL);
        var_retcode = tmp_assign_source_84;
    }
    branch_end_78:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_21 == NULL) {
        exception_keeper_tb_21 = MAKE_TRACEBACK(frame_a2986ad488eacc9a126fd793104f6f45, exception_keeper_lineno_21);
    } else if (exception_keeper_lineno_21 != 0) {
        exception_keeper_tb_21 = ADD_TRACEBACK(exception_keeper_tb_21, frame_a2986ad488eacc9a126fd793104f6f45, exception_keeper_lineno_21);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_21, &exception_keeper_value_21, &exception_keeper_tb_21);
    // Tried code:
    {
        bool tmp_condition_result_86;
        PyObject *tmp_cmp_expr_left_64;
        PyObject *tmp_cmp_expr_right_64;
        tmp_cmp_expr_left_64 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_64 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[313]);

        if (unlikely(tmp_cmp_expr_right_64 == NULL)) {
            tmp_cmp_expr_right_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[313]);
        }

        if (tmp_cmp_expr_right_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_64, tmp_cmp_expr_right_64);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_condition_result_86 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_86 != false) {
            goto branch_yes_79;
        } else {
            goto branch_no_79;
        }
    }
    branch_yes_79:;
    {
        PyObject *tmp_called_instance_38;
        PyObject *tmp_call_result_54;
        if (var_ydl == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[303]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_called_instance_38 = var_ydl;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 467;
        tmp_call_result_54 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_38,
            mod_consts[300],
            PyTuple_GET_ITEM(mod_consts[314], 0)
        );

        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[315];
        assert(var_retcode == NULL);
        Py_INCREF(tmp_assign_source_85);
        var_retcode = tmp_assign_source_85;
    }
    goto branch_end_79;
    branch_no_79:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 461;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a2986ad488eacc9a126fd793104f6f45->m_frame) frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ocooooooooooooooooooooooooooooooooo";
    goto try_except_handler_26;
    branch_end_79:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_24;
    // End of try:
    try_end_14:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_13;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_13:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_23 == NULL) {
        exception_keeper_tb_23 = MAKE_TRACEBACK(frame_a2986ad488eacc9a126fd793104f6f45, exception_keeper_lineno_23);
    } else if (exception_keeper_lineno_23 != 0) {
        exception_keeper_tb_23 = ADD_TRACEBACK(exception_keeper_tb_23, frame_a2986ad488eacc9a126fd793104f6f45, exception_keeper_lineno_23);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_23, &exception_keeper_value_23, &exception_keeper_tb_23);
    // Tried code:
    {
        bool tmp_condition_result_87;
        PyObject *tmp_cmp_expr_left_65;
        PyObject *tmp_cmp_expr_right_65;
        tmp_cmp_expr_left_65 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_65 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_65, tmp_cmp_expr_right_65);
        assert(!(tmp_res == -1));
        tmp_condition_result_87 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_87 != false) {
            goto branch_yes_80;
        } else {
            goto branch_no_80;
        }
    }
    branch_yes_80:;
    {
        nuitka_bool tmp_assign_source_86;
        tmp_assign_source_86 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_86;
    }
    {
        bool tmp_condition_result_88;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_called_value_57;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_57 = tmp_with_1__exit;
        tmp_args_element_value_50 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_51 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_52 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 461;
        {
            PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52};
            tmp_operand_value_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_57, call_args);
        }

        if (tmp_operand_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        Py_DECREF(tmp_operand_value_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_condition_result_88 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_88 != false) {
            goto branch_yes_81;
        } else {
            goto branch_no_81;
        }
    }
    branch_yes_81:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 461;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a2986ad488eacc9a126fd793104f6f45->m_frame) frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ocooooooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
    branch_no_81:;
    goto branch_end_80;
    branch_no_80:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 442;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a2986ad488eacc9a126fd793104f6f45->m_frame) frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ocooooooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
    branch_end_80:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_23;
    // End of try:
    try_end_16:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    goto try_end_15;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_15:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_89;
        nuitka_bool tmp_cmp_expr_left_66;
        nuitka_bool tmp_cmp_expr_right_66;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_66 = tmp_with_1__indicator;
        tmp_cmp_expr_right_66 = NUITKA_BOOL_TRUE;
        tmp_condition_result_89 = (tmp_cmp_expr_left_66 == tmp_cmp_expr_right_66) ? true : false;
        if (tmp_condition_result_89 != false) {
            goto branch_yes_82;
        } else {
            goto branch_no_82;
        }
    }
    branch_yes_82:;
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_call_result_55;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_58 = tmp_with_1__exit;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 461;
        tmp_call_result_55 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_58, mod_consts[316]);

        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_25);
            Py_XDECREF(exception_keeper_value_25);
            Py_XDECREF(exception_keeper_tb_25);

            exception_lineno = 461;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_55);
    }
    branch_no_82:;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto try_except_handler_22;
    // End of try:
    try_end_17:;
    {
        bool tmp_condition_result_90;
        nuitka_bool tmp_cmp_expr_left_67;
        nuitka_bool tmp_cmp_expr_right_67;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_67 = tmp_with_1__indicator;
        tmp_cmp_expr_right_67 = NUITKA_BOOL_TRUE;
        tmp_condition_result_90 = (tmp_cmp_expr_left_67 == tmp_cmp_expr_right_67) ? true : false;
        if (tmp_condition_result_90 != false) {
            goto branch_yes_83;
        } else {
            goto branch_no_83;
        }
    }
    branch_yes_83:;
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_call_result_56;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_59 = tmp_with_1__exit;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 461;
        tmp_call_result_56 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_59, mod_consts[316]);

        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_56);
    }
    branch_no_83:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_306;
        PyObject *tmp_call_result_57;
        PyObject *tmp_args_element_value_53;
        tmp_expression_value_306 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_306 == NULL)) {
            tmp_expression_value_306 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_value_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_306, mod_consts[31]);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_retcode == NULL) {
            Py_DECREF(tmp_called_value_60);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[317]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 470;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_53 = var_retcode;
        frame_a2986ad488eacc9a126fd793104f6f45->m_frame.f_lineno = 470;
        tmp_call_result_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_53);
        Py_DECREF(tmp_called_value_60);
        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ocooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_57);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a2986ad488eacc9a126fd793104f6f45);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_5;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a2986ad488eacc9a126fd793104f6f45);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a2986ad488eacc9a126fd793104f6f45, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a2986ad488eacc9a126fd793104f6f45->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a2986ad488eacc9a126fd793104f6f45, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a2986ad488eacc9a126fd793104f6f45,
        type_description_1,
        par_argv,
        var_parser,
        var_opts,
        var_args,
        var_h,
        var_key,
        var_value,
        var_batch_urls,
        var_batchfd,
        var_all_urls,
        var__enc,
        var_ie,
        var_matchedUrls,
        var_mu,
        var_desc,
        var__SEARCHES,
        var__COUNTS,
        var_table,
        var_numeric_limit,
        var_parse_retries,
        var_numeric_buffersize,
        var_numeric_chunksize,
        var_date,
        var_outtmpl,
        var_any_getting,
        var_any_printing,
        var_download_archive_fn,
        var_postprocessors,
        var_already_have_thumbnail,
        var_external_downloader_args,
        var_postprocessor_args,
        var_match_filter,
        var_ydl_opts,
        var_ydl,
        var_retcode
    );


    // Release cached frame if used for exception.
    if (frame_a2986ad488eacc9a126fd793104f6f45 == cache_frame_a2986ad488eacc9a126fd793104f6f45) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a2986ad488eacc9a126fd793104f6f45);
        cache_frame_a2986ad488eacc9a126fd793104f6f45 = NULL;
    }

    assertFrameObject(frame_a2986ad488eacc9a126fd793104f6f45);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_5:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_parser);
    Py_DECREF(var_parser);
    var_parser = NULL;
    Py_XDECREF(var_opts);
    var_opts = NULL;
    CHECK_OBJECT(var_args);
    Py_DECREF(var_args);
    var_args = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_batch_urls);
    var_batch_urls = NULL;
    Py_XDECREF(var_batchfd);
    var_batchfd = NULL;
    Py_XDECREF(var_all_urls);
    var_all_urls = NULL;
    Py_XDECREF(var__enc);
    var__enc = NULL;
    Py_XDECREF(var_ie);
    var_ie = NULL;
    Py_XDECREF(var_matchedUrls);
    var_matchedUrls = NULL;
    Py_XDECREF(var_mu);
    var_mu = NULL;
    Py_XDECREF(var_desc);
    var_desc = NULL;
    Py_XDECREF(var__SEARCHES);
    var__SEARCHES = NULL;
    Py_XDECREF(var__COUNTS);
    var__COUNTS = NULL;
    Py_XDECREF(var_table);
    var_table = NULL;
    Py_XDECREF(var_numeric_limit);
    var_numeric_limit = NULL;
    Py_XDECREF(var_parse_retries);
    var_parse_retries = NULL;
    Py_XDECREF(var_numeric_buffersize);
    var_numeric_buffersize = NULL;
    Py_XDECREF(var_numeric_chunksize);
    var_numeric_chunksize = NULL;
    CHECK_OBJECT(var_date);
    Py_DECREF(var_date);
    var_date = NULL;
    CHECK_OBJECT(var_outtmpl);
    Py_DECREF(var_outtmpl);
    var_outtmpl = NULL;
    CHECK_OBJECT(var_any_getting);
    Py_DECREF(var_any_getting);
    var_any_getting = NULL;
    CHECK_OBJECT(var_any_printing);
    Py_DECREF(var_any_printing);
    var_any_printing = NULL;
    CHECK_OBJECT(var_download_archive_fn);
    Py_DECREF(var_download_archive_fn);
    var_download_archive_fn = NULL;
    Py_XDECREF(var_postprocessors);
    var_postprocessors = NULL;
    Py_XDECREF(var_already_have_thumbnail);
    var_already_have_thumbnail = NULL;
    CHECK_OBJECT(var_external_downloader_args);
    Py_DECREF(var_external_downloader_args);
    var_external_downloader_args = NULL;
    CHECK_OBJECT(var_postprocessor_args);
    Py_DECREF(var_postprocessor_args);
    var_postprocessor_args = NULL;
    CHECK_OBJECT(var_match_filter);
    Py_DECREF(var_match_filter);
    var_match_filter = NULL;
    CHECK_OBJECT(var_ydl_opts);
    Py_DECREF(var_ydl_opts);
    var_ydl_opts = NULL;
    Py_XDECREF(var_ydl);
    var_ydl = NULL;
    Py_XDECREF(var_retcode);
    var_retcode = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_parser);
    Py_DECREF(var_parser);
    var_parser = NULL;
    Py_XDECREF(var_opts);
    var_opts = NULL;
    Py_XDECREF(var_args);
    var_args = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_batch_urls);
    var_batch_urls = NULL;
    Py_XDECREF(var_batchfd);
    var_batchfd = NULL;
    Py_XDECREF(var_all_urls);
    var_all_urls = NULL;
    Py_XDECREF(var__enc);
    var__enc = NULL;
    Py_XDECREF(var_ie);
    var_ie = NULL;
    Py_XDECREF(var_matchedUrls);
    var_matchedUrls = NULL;
    Py_XDECREF(var_mu);
    var_mu = NULL;
    Py_XDECREF(var_desc);
    var_desc = NULL;
    Py_XDECREF(var__SEARCHES);
    var__SEARCHES = NULL;
    Py_XDECREF(var__COUNTS);
    var__COUNTS = NULL;
    Py_XDECREF(var_table);
    var_table = NULL;
    Py_XDECREF(var_numeric_limit);
    var_numeric_limit = NULL;
    Py_XDECREF(var_parse_retries);
    var_parse_retries = NULL;
    Py_XDECREF(var_numeric_buffersize);
    var_numeric_buffersize = NULL;
    Py_XDECREF(var_numeric_chunksize);
    var_numeric_chunksize = NULL;
    Py_XDECREF(var_date);
    var_date = NULL;
    Py_XDECREF(var_outtmpl);
    var_outtmpl = NULL;
    Py_XDECREF(var_any_getting);
    var_any_getting = NULL;
    Py_XDECREF(var_any_printing);
    var_any_printing = NULL;
    Py_XDECREF(var_download_archive_fn);
    var_download_archive_fn = NULL;
    Py_XDECREF(var_postprocessors);
    var_postprocessors = NULL;
    Py_XDECREF(var_already_have_thumbnail);
    var_already_have_thumbnail = NULL;
    Py_XDECREF(var_external_downloader_args);
    var_external_downloader_args = NULL;
    Py_XDECREF(var_postprocessor_args);
    var_postprocessor_args = NULL;
    Py_XDECREF(var_match_filter);
    var_match_filter = NULL;
    Py_XDECREF(var_ydl_opts);
    var_ydl_opts = NULL;
    Py_XDECREF(var_ydl);
    var_ydl = NULL;
    Py_XDECREF(var_retcode);
    var_retcode = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_argv);
    Py_DECREF(par_argv);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_argv);
    Py_DECREF(par_argv);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$$$function__1__real_main$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    struct Nuitka_FrameObject *frame_14f00a832963d29b398d3177a433f4f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_14f00a832963d29b398d3177a433f4f7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_14f00a832963d29b398d3177a433f4f7)) {
        Py_XDECREF(cache_frame_14f00a832963d29b398d3177a433f4f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_14f00a832963d29b398d3177a433f4f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_14f00a832963d29b398d3177a433f4f7 = MAKE_FUNCTION_FRAME(codeobj_14f00a832963d29b398d3177a433f4f7, module_youtube_dl, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_14f00a832963d29b398d3177a433f4f7->m_type_description == NULL);
    frame_14f00a832963d29b398d3177a433f4f7 = cache_frame_14f00a832963d29b398d3177a433f4f7;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_14f00a832963d29b398d3177a433f4f7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_14f00a832963d29b398d3177a433f4f7) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_name);
        tmp_cmp_expr_left_1 = par_name;
        tmp_cmp_expr_right_1 = mod_consts[318];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_14f00a832963d29b398d3177a433f4f7->m_frame.f_lineno = 52;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[319],
            PyTuple_GET_ITEM(mod_consts[320], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        condexpr_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_14f00a832963d29b398d3177a433f4f7);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_14f00a832963d29b398d3177a433f4f7);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_14f00a832963d29b398d3177a433f4f7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_14f00a832963d29b398d3177a433f4f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_14f00a832963d29b398d3177a433f4f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_14f00a832963d29b398d3177a433f4f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_14f00a832963d29b398d3177a433f4f7,
        type_description_1,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_14f00a832963d29b398d3177a433f4f7 == cache_frame_14f00a832963d29b398d3177a433f4f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_14f00a832963d29b398d3177a433f4f7);
        cache_frame_14f00a832963d29b398d3177a433f4f7 = NULL;
    }

    assertFrameObject(frame_14f00a832963d29b398d3177a433f4f7);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$$$function__1__real_main$$$function__2_parse_retries(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_retries = python_pars[0];
    PyObject *var_parsed_retries = NULL;
    struct Nuitka_FrameObject *frame_069374bc659200c074f90c7d4bc23e8c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_069374bc659200c074f90c7d4bc23e8c = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_069374bc659200c074f90c7d4bc23e8c)) {
        Py_XDECREF(cache_frame_069374bc659200c074f90c7d4bc23e8c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_069374bc659200c074f90c7d4bc23e8c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_069374bc659200c074f90c7d4bc23e8c = MAKE_FUNCTION_FRAME(codeobj_069374bc659200c074f90c7d4bc23e8c, module_youtube_dl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_069374bc659200c074f90c7d4bc23e8c->m_type_description == NULL);
    frame_069374bc659200c074f90c7d4bc23e8c = cache_frame_069374bc659200c074f90c7d4bc23e8c;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_069374bc659200c074f90c7d4bc23e8c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_069374bc659200c074f90c7d4bc23e8c) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_retries);
        tmp_cmp_expr_left_1 = par_retries;
        tmp_cmp_expr_right_1 = mod_consts[321];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[322];
        assert(var_parsed_retries == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_parsed_retries = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(par_retries);
        tmp_int_arg_1 = par_retries;
        tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        assert(var_parsed_retries == NULL);
        var_parsed_retries = tmp_assign_source_2;
    }
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_069374bc659200c074f90c7d4bc23e8c, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_069374bc659200c074f90c7d4bc23e8c, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = mod_consts[323];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooc";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "ooc";
            goto try_except_handler_3;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_069374bc659200c074f90c7d4bc23e8c->m_frame.f_lineno = 185;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[324], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 182;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_069374bc659200c074f90c7d4bc23e8c->m_frame) frame_069374bc659200c074f90c7d4bc23e8c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooc";
    goto try_except_handler_3;
    branch_end_2:;
    goto try_end_2;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    branch_end_1:;
    if (var_parsed_retries == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[325]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 186;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_parsed_retries;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_069374bc659200c074f90c7d4bc23e8c);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_069374bc659200c074f90c7d4bc23e8c);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_069374bc659200c074f90c7d4bc23e8c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_069374bc659200c074f90c7d4bc23e8c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_069374bc659200c074f90c7d4bc23e8c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_069374bc659200c074f90c7d4bc23e8c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_069374bc659200c074f90c7d4bc23e8c,
        type_description_1,
        par_retries,
        var_parsed_retries,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_069374bc659200c074f90c7d4bc23e8c == cache_frame_069374bc659200c074f90c7d4bc23e8c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_069374bc659200c074f90c7d4bc23e8c);
        cache_frame_069374bc659200c074f90c7d4bc23e8c = NULL;
    }

    assertFrameObject(frame_069374bc659200c074f90c7d4bc23e8c);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_parsed_retries);
    var_parsed_retries = NULL;
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

    Py_XDECREF(var_parsed_retries);
    var_parsed_retries = NULL;
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
    CHECK_OBJECT(par_retries);
    Py_DECREF(par_retries);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_retries);
    Py_DECREF(par_retries);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$$$function__2_main(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_argv = python_pars[0];
    struct Nuitka_FrameObject *frame_141f4d490190fce208d978775d369cbb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_141f4d490190fce208d978775d369cbb = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_141f4d490190fce208d978775d369cbb)) {
        Py_XDECREF(cache_frame_141f4d490190fce208d978775d369cbb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_141f4d490190fce208d978775d369cbb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_141f4d490190fce208d978775d369cbb = MAKE_FUNCTION_FRAME(codeobj_141f4d490190fce208d978775d369cbb, module_youtube_dl, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_141f4d490190fce208d978775d369cbb->m_type_description == NULL);
    frame_141f4d490190fce208d978775d369cbb = cache_frame_141f4d490190fce208d978775d369cbb;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_141f4d490190fce208d978775d369cbb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_141f4d490190fce208d978775d369cbb) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[326]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[326]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_argv);
        tmp_args_element_value_1 = par_argv;
        frame_141f4d490190fce208d978775d369cbb->m_frame.f_lineno = 475;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_141f4d490190fce208d978775d369cbb, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_141f4d490190fce208d978775d369cbb, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[327]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[327]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_141f4d490190fce208d978775d369cbb->m_frame.f_lineno = 477;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[328], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[329]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[329]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        frame_141f4d490190fce208d978775d369cbb->m_frame.f_lineno = 479;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[330], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_KeyboardInterrupt;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        frame_141f4d490190fce208d978775d369cbb->m_frame.f_lineno = 481;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[331], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 474;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_141f4d490190fce208d978775d369cbb->m_frame) frame_141f4d490190fce208d978775d369cbb->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_141f4d490190fce208d978775d369cbb);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_141f4d490190fce208d978775d369cbb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_141f4d490190fce208d978775d369cbb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_141f4d490190fce208d978775d369cbb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_141f4d490190fce208d978775d369cbb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_141f4d490190fce208d978775d369cbb,
        type_description_1,
        par_argv
    );


    // Release cached frame if used for exception.
    if (frame_141f4d490190fce208d978775d369cbb == cache_frame_141f4d490190fce208d978775d369cbb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_141f4d490190fce208d978775d369cbb);
        cache_frame_141f4d490190fce208d978775d369cbb = NULL;
    }

    assertFrameObject(frame_141f4d490190fce208d978775d369cbb);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_argv);
    Py_DECREF(par_argv);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_argv);
    Py_DECREF(par_argv);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_youtube_dl$$$function__1__real_main(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$$$function__1__real_main,
        mod_consts[326],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a2986ad488eacc9a126fd793104f6f45,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$$$function__1__real_main$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$$$function__1__real_main$$$function__1_lambda,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[3],
#endif
        codeobj_14f00a832963d29b398d3177a433f4f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$$$function__1__real_main$$$function__2_parse_retries(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$$$function__1__real_main$$$function__2_parse_retries,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_069374bc659200c074f90c7d4bc23e8c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$$$function__2_main(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$$$function__2_main,
        mod_consts[366],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_141f4d490190fce208d978775d369cbb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl,
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

function_impl_code functable_youtube_dl[] = {
    impl_youtube_dl$$$function__1__real_main$$$function__1_lambda,
    impl_youtube_dl$$$function__1__real_main$$$function__2_parse_retries,
    impl_youtube_dl$$$function__1__real_main,
    impl_youtube_dl$$$function__2_main,
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

    function_impl_code *current = functable_youtube_dl;
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

    if (offset > sizeof(functable_youtube_dl) || offset < 0) {
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
        functable_youtube_dl[offset],
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
        module_youtube_dl,
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
PyObject *modulecode_youtube_dl(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("youtube_dl");

    // Store the module for future use.
    module_youtube_dl = module;

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
        PRINT_STRING("youtube_dl: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inityoutube_dl\n");

    moduledict_youtube_dl = MODULE_DICT(module_youtube_dl);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_youtube_dl,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_youtube_dl,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[55]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_youtube_dl,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_youtube_dl);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_youtube_dl, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_youtube_dl, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_youtube_dl, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_youtube_dl);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_48f53f953750280b5d6d23a42840dcbe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[333], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_48f53f953750280b5d6d23a42840dcbe = MAKE_MODULE_FRAME(codeobj_48f53f953750280b5d6d23a42840dcbe, module_youtube_dl);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_48f53f953750280b5d6d23a42840dcbe);
    assert(Py_REFCNT(frame_48f53f953750280b5d6d23a42840dcbe) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_48f53f953750280b5d6d23a42840dcbe->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            if (likely(hard_module != NULL)) {
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[334]);
            } else {
                tmp_expression_value_1 = NULL;
            }
        }
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[335]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_48f53f953750280b5d6d23a42840dcbe->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_48f53f953750280b5d6d23a42840dcbe->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_2 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[336]);
                } else {
                    tmp_expression_value_2 = NULL;
                }
            }
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[337]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_48f53f953750280b5d6d23a42840dcbe->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[338]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[339], tmp_assign_source_3);
    }
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_dictset_value = Nuitka_Loader_New(loader_entry);
        tmp_dictset_dict = Nuitka_SysGetObject("path_importer_cache");
        if (tmp_dictset_dict == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[339]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[339]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_subscript_value_1 = mod_consts[90];
        tmp_dictset_key = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[340]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[340]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[341], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[340]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[340]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[342], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[339]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[339]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[340]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[340]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[343], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[345]);
        }
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[346];
        UPDATE_STRING_DICT0(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[347], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_youtube_dl;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[90];
        frame_48f53f953750280b5d6d23a42840dcbe->m_frame.f_lineno = 8;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = IMPORT_HARD_IO();
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT0(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT0(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[67];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_youtube_dl;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[90];
        frame_48f53f953750280b5d6d23a42840dcbe->m_frame.f_lineno = 11;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT0(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[349];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_youtube_dl;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[350];
        tmp_level_value_3 = mod_consts[162];
        frame_48f53f953750280b5d6d23a42840dcbe->m_frame.f_lineno = 15;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[7],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[7]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[351];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_youtube_dl;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[352];
        tmp_level_value_4 = mod_consts[162];
        frame_48f53f953750280b5d6d23a42840dcbe->m_frame.f_lineno = 18;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[95],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[95]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[203],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[203]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[4],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[4]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[353];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_youtube_dl;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[354];
        tmp_level_value_5 = mod_consts[162];
        frame_48f53f953750280b5d6d23a42840dcbe->m_frame.f_lineno = 23;
        tmp_assign_source_17 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[143],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[143]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[251],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[251]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[160],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[160]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[327],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[327]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[327], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[38],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[38]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[206],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[206]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[313],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[313]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[46],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[46]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[41],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[41]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[329],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[329]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[5],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[5]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[10],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[10]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_17 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[25],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[25]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_18 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[74],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[74]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_31);
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
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[355];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_youtube_dl;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[356];
        tmp_level_value_6 = mod_consts[162];
        frame_48f53f953750280b5d6d23a42840dcbe->m_frame.f_lineno = 39;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[299],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[299]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[357];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_youtube_dl;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[358];
        tmp_level_value_7 = mod_consts[162];
        frame_48f53f953750280b5d6d23a42840dcbe->m_frame.f_lineno = 40;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[99],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[99]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[359];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_youtube_dl;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[360];
        tmp_level_value_8 = mod_consts[162];
        frame_48f53f953750280b5d6d23a42840dcbe->m_frame.f_lineno = 43;
        tmp_assign_source_34 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_34;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_21 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[361],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[361]);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[361], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_22 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[50],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[50]);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_36);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[362];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_youtube_dl;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[363];
        tmp_level_value_9 = mod_consts[162];
        frame_48f53f953750280b5d6d23a42840dcbe->m_frame.f_lineno = 44;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[70],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[70]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[296];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_youtube_dl;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[364];
        tmp_level_value_10 = mod_consts[162];
        frame_48f53f953750280b5d6d23a42840dcbe->m_frame.f_lineno = 45;
        tmp_import_name_from_24 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_youtube_dl,
                mod_consts[296],
                mod_consts[90]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[296]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_38);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_48f53f953750280b5d6d23a42840dcbe);
#endif
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_48f53f953750280b5d6d23a42840dcbe);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_48f53f953750280b5d6d23a42840dcbe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_48f53f953750280b5d6d23a42840dcbe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_48f53f953750280b5d6d23a42840dcbe, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[365];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_39 = MAKE_FUNCTION_youtube_dl$$$function__1__real_main(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[365];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_40 = MAKE_FUNCTION_youtube_dl$$$function__2_main(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = LIST_COPY(mod_consts[367]);
        UPDATE_STRING_DICT1(moduledict_youtube_dl, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_41);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("youtube_dl", false);

    Py_INCREF(module_youtube_dl);
    return module_youtube_dl;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("youtube_dl", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
