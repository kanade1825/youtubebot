/* Generated code for Python module 'youtube_dl.extractor.peertube'
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

/* The "module_youtube_dl$extractor$peertube" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_youtube_dl$extractor$peertube;
PyDictObject *moduledict_youtube_dl$extractor$peertube;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[203];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[203];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("youtube_dl.extractor.peertube"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 203; i++) {
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
void checkModuleConstants_youtube_dl$extractor$peertube(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 203; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_798b8b8409ade7cb339aa2807c5c5ada;
static PyCodeObject *codeobj_9131ea4cd5b3cd3fc6c5ac4334240881;
static PyCodeObject *codeobj_309848181a1d57c25bb9c1bf0cafca9d;
static PyCodeObject *codeobj_b1251dda4277be9b4864df7463f06abd;
static PyCodeObject *codeobj_f7a9f6ecf756af848fb43d40d82434bd;
static PyCodeObject *codeobj_aa5e312046edaeaef1689f10c8d93d36;
static PyCodeObject *codeobj_6a0ba6a09d4758030e37d7ac85fed675;
static PyCodeObject *codeobj_39d43a73db99e3cb1658debe396b83a0;
static PyCodeObject *codeobj_b9d40e0b0c87a4f4193635392f78aa3f;
static PyCodeObject *codeobj_e8eb961805124e74910ab429199a8d32;
static PyCodeObject *codeobj_d024303b592e07f09274531445b8b736;
static PyCodeObject *codeobj_aa7c4e973fa1eed762fdd4d30920860c;
static PyCodeObject *codeobj_a67ea5fb4d02b23210881de0570c0601;
static PyCodeObject *codeobj_2fcb20e504c972c82232b643a6d7fcef;
static PyCodeObject *codeobj_525e79109662290b175892fb1d748b00;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[188]); CHECK_OBJECT(module_filename_obj);
    codeobj_798b8b8409ade7cb339aa2807c5c5ada = MAKE_CODE_OBJECT(module_filename_obj, 489, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[10], mod_consts[10], mod_consts[189], NULL, 1, 0, 0);
    codeobj_9131ea4cd5b3cd3fc6c5ac4334240881 = MAKE_CODE_OBJECT(module_filename_obj, 522, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[25], mod_consts[25], mod_consts[190], NULL, 1, 0, 0);
    codeobj_309848181a1d57c25bb9c1bf0cafca9d = MAKE_CODE_OBJECT(module_filename_obj, 558, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[25], mod_consts[25], mod_consts[190], NULL, 1, 0, 0);
    codeobj_b1251dda4277be9b4864df7463f06abd = MAKE_CODE_OBJECT(module_filename_obj, 623, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[25], mod_consts[25], mod_consts[190], NULL, 1, 0, 0);
    codeobj_f7a9f6ecf756af848fb43d40d82434bd = MAKE_CODE_OBJECT(module_filename_obj, 585, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, mod_consts[25], mod_consts[25], mod_consts[191], mod_consts[192], 1, 0, 0);
    codeobj_aa5e312046edaeaef1689f10c8d93d36 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[193], mod_consts[193], NULL, NULL, 0, 0, 0);
    codeobj_6a0ba6a09d4758030e37d7ac85fed675 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[3], mod_consts[3], mod_consts[194], NULL, 0, 0, 0);
    codeobj_39d43a73db99e3cb1658debe396b83a0 = MAKE_CODE_OBJECT(module_filename_obj, 506, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[19], mod_consts[19], mod_consts[195], NULL, 7, 0, 0);
    codeobj_b9d40e0b0c87a4f4193635392f78aa3f = MAKE_CODE_OBJECT(module_filename_obj, 485, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[15], mod_consts[15], mod_consts[196], NULL, 2, 0, 0);
    codeobj_e8eb961805124e74910ab429199a8d32 = MAKE_CODE_OBJECT(module_filename_obj, 496, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[179], mod_consts[179], mod_consts[197], NULL, 2, 0, 0);
    codeobj_d024303b592e07f09274531445b8b736 = MAKE_CODE_OBJECT(module_filename_obj, 511, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[183], mod_consts[183], mod_consts[198], NULL, 3, 0, 0);
    codeobj_aa7c4e973fa1eed762fdd4d30920860c = MAKE_CODE_OBJECT(module_filename_obj, 531, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[185], mod_consts[185], mod_consts[199], NULL, 2, 0, 0);
    codeobj_a67ea5fb4d02b23210881de0570c0601 = MAKE_CODE_OBJECT(module_filename_obj, 587, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, mod_consts[73], mod_consts[73], mod_consts[200], mod_consts[23], 2, 0, 0);
    codeobj_2fcb20e504c972c82232b643a6d7fcef = MAKE_CODE_OBJECT(module_filename_obj, 590, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, mod_consts[75], mod_consts[75], mod_consts[200], mod_consts[23], 2, 0, 0);
    codeobj_525e79109662290b175892fb1d748b00 = MAKE_CODE_OBJECT(module_filename_obj, 584, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, mod_consts[71], mod_consts[71], mod_consts[201], mod_consts[202], 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_youtube_dl$extractor$peertube$$$function__1__extract_peertube_url$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__1__extract_peertube_url();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__2__extract_urls();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__3__call_api(PyObject *defaults);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__4__get_subtitles();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__4__get_subtitles$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__2_data(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__2_data$$$function__1_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__3_account_data(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__4_channel_data(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__5_lambda();


// The module function definitions.
static PyObject *impl_youtube_dl$extractor$peertube$$$function__1__extract_peertube_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_webpage = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_source_url = python_pars[1];
    PyObject *var_mobj = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_b9d40e0b0c87a4f4193635392f78aa3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b9d40e0b0c87a4f4193635392f78aa3f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b9d40e0b0c87a4f4193635392f78aa3f)) {
        Py_XDECREF(cache_frame_b9d40e0b0c87a4f4193635392f78aa3f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b9d40e0b0c87a4f4193635392f78aa3f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b9d40e0b0c87a4f4193635392f78aa3f = MAKE_FUNCTION_FRAME(codeobj_b9d40e0b0c87a4f4193635392f78aa3f, module_youtube_dl$extractor$peertube, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b9d40e0b0c87a4f4193635392f78aa3f->m_type_description == NULL);
    frame_b9d40e0b0c87a4f4193635392f78aa3f = cache_frame_b9d40e0b0c87a4f4193635392f78aa3f;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_b9d40e0b0c87a4f4193635392f78aa3f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b9d40e0b0c87a4f4193635392f78aa3f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[2];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 488;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 488;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 488;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_source_url);
        tmp_args_element_value_2 = par_source_url;
        frame_b9d40e0b0c87a4f4193635392f78aa3f->m_frame.f_lineno = 486;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        assert(var_mobj == NULL);
        var_mobj = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_mobj);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_mobj);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = mod_consts[5];
            tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
            assert(!(tmp_assign_source_2 == NULL));
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = par_webpage;
            Py_INCREF(tmp_closure_1[1]);

            tmp_any_arg_1 = MAKE_GENERATOR_youtube_dl$extractor$peertube$$$function__1__extract_peertube_url$$$genexpr__1_genexpr(tmp_closure_1);

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
        tmp_capi_result_1 = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_capi_result_1);
        assert(!(tmp_truth_name_2 == -1));
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_called_instance_1;
        tmp_mod_expr_left_2 = mod_consts[6];
        CHECK_OBJECT(var_mobj);
        tmp_called_instance_1 = var_mobj;
        frame_b9d40e0b0c87a4f4193635392f78aa3f->m_frame.f_lineno = 493;
        tmp_mod_expr_right_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[7],
            &PyTuple_GET_ITEM(mod_consts[8], 0)
        );

        if (tmp_mod_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b9d40e0b0c87a4f4193635392f78aa3f);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b9d40e0b0c87a4f4193635392f78aa3f);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b9d40e0b0c87a4f4193635392f78aa3f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b9d40e0b0c87a4f4193635392f78aa3f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b9d40e0b0c87a4f4193635392f78aa3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9d40e0b0c87a4f4193635392f78aa3f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b9d40e0b0c87a4f4193635392f78aa3f,
        type_description_1,
        par_webpage,
        par_source_url,
        var_mobj
    );


    // Release cached frame if used for exception.
    if (frame_b9d40e0b0c87a4f4193635392f78aa3f == cache_frame_b9d40e0b0c87a4f4193635392f78aa3f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b9d40e0b0c87a4f4193635392f78aa3f);
        cache_frame_b9d40e0b0c87a4f4193635392f78aa3f = NULL;
    }

    assertFrameObject(frame_b9d40e0b0c87a4f4193635392f78aa3f);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_mobj);
    Py_DECREF(var_mobj);
    var_mobj = NULL;
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

    Py_XDECREF(var_mobj);
    var_mobj = NULL;
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
    CHECK_OBJECT(par_webpage);
    Py_DECREF(par_webpage);
    CHECK_OBJECT(par_source_url);
    Py_DECREF(par_source_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_webpage);
    Py_DECREF(par_webpage);
    CHECK_OBJECT(par_source_url);
    Py_DECREF(par_source_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct youtube_dl$extractor$peertube$$$function__1__extract_peertube_url$$$genexpr__1_genexpr_locals {
    PyObject *var_p;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *youtube_dl$extractor$peertube$$$function__1__extract_peertube_url$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct youtube_dl$extractor$peertube$$$function__1__extract_peertube_url$$$genexpr__1_genexpr_locals *generator_heap = (struct youtube_dl$extractor$peertube$$$function__1__extract_peertube_url$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_p = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_798b8b8409ade7cb339aa2807c5c5ada, module_youtube_dl$extractor$peertube, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 489;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_p;
            generator_heap->var_p = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_p);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_p);
        tmp_cmp_expr_left_1 = generator_heap->var_p;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[9]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 489;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 489;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = (generator_heap->tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_expression_value_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 489;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 489;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            generator_heap->var_p,
            generator->m_closure[1]
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_youtube_dl$extractor$peertube$$$function__1__extract_peertube_url$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        youtube_dl$extractor$peertube$$$function__1__extract_peertube_url$$$genexpr__1_genexpr_context,
        module_youtube_dl$extractor$peertube,
        mod_consts[10],
#if PYTHON_VERSION >= 0x350
        mod_consts[11],
#endif
        codeobj_798b8b8409ade7cb339aa2807c5c5ada,
        closure,
        2,
        sizeof(struct youtube_dl$extractor$peertube$$$function__1__extract_peertube_url$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_youtube_dl$extractor$peertube$$$function__2__extract_urls(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_webpage = python_pars[0];
    PyObject *par_source_url = python_pars[1];
    PyObject *var_entries = NULL;
    PyObject *var_peertube_url = NULL;
    struct Nuitka_FrameObject *frame_e8eb961805124e74910ab429199a8d32;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e8eb961805124e74910ab429199a8d32 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e8eb961805124e74910ab429199a8d32)) {
        Py_XDECREF(cache_frame_e8eb961805124e74910ab429199a8d32);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e8eb961805124e74910ab429199a8d32 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e8eb961805124e74910ab429199a8d32 = MAKE_FUNCTION_FRAME(codeobj_e8eb961805124e74910ab429199a8d32, module_youtube_dl$extractor$peertube, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e8eb961805124e74910ab429199a8d32->m_type_description == NULL);
    frame_e8eb961805124e74910ab429199a8d32 = cache_frame_e8eb961805124e74910ab429199a8d32;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_e8eb961805124e74910ab429199a8d32);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e8eb961805124e74910ab429199a8d32) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[13];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 499;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 499;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 499;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 499;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 499;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_webpage);
        tmp_args_element_value_2 = par_webpage;
        frame_e8eb961805124e74910ab429199a8d32->m_frame.f_lineno = 497;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_entries == NULL);
        var_entries = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_entries);
        tmp_operand_value_1 = var_entries;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oooo";
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
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_webpage);
        tmp_args_element_value_3 = par_webpage;
        CHECK_OBJECT(par_source_url);
        tmp_args_element_value_4 = par_source_url;
        frame_e8eb961805124e74910ab429199a8d32->m_frame.f_lineno = 501;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_peertube_url == NULL);
        var_peertube_url = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_peertube_url);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_peertube_url);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_peertube_url);
        tmp_list_element_1 = var_peertube_url;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assign_source_3, 0, tmp_list_element_1);
        {
            PyObject *old = var_entries;
            assert(old != NULL);
            var_entries = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e8eb961805124e74910ab429199a8d32);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e8eb961805124e74910ab429199a8d32);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e8eb961805124e74910ab429199a8d32, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e8eb961805124e74910ab429199a8d32->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e8eb961805124e74910ab429199a8d32, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e8eb961805124e74910ab429199a8d32,
        type_description_1,
        par_webpage,
        par_source_url,
        var_entries,
        var_peertube_url
    );


    // Release cached frame if used for exception.
    if (frame_e8eb961805124e74910ab429199a8d32 == cache_frame_e8eb961805124e74910ab429199a8d32) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e8eb961805124e74910ab429199a8d32);
        cache_frame_e8eb961805124e74910ab429199a8d32 = NULL;
    }

    assertFrameObject(frame_e8eb961805124e74910ab429199a8d32);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_entries);
    tmp_return_value = var_entries;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_entries);
    Py_DECREF(var_entries);
    var_entries = NULL;
    Py_XDECREF(var_peertube_url);
    var_peertube_url = NULL;
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

    Py_XDECREF(var_entries);
    var_entries = NULL;
    Py_XDECREF(var_peertube_url);
    var_peertube_url = NULL;
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
    CHECK_OBJECT(par_webpage);
    Py_DECREF(par_webpage);
    CHECK_OBJECT(par_source_url);
    Py_DECREF(par_source_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_webpage);
    Py_DECREF(par_webpage);
    CHECK_OBJECT(par_source_url);
    Py_DECREF(par_source_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$peertube$$$function__3__call_api(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_video_id = python_pars[2];
    PyObject *par_path = python_pars[3];
    PyObject *par_note = python_pars[4];
    PyObject *par_errnote = python_pars[5];
    PyObject *par_fatal = python_pars[6];
    struct Nuitka_FrameObject *frame_39d43a73db99e3cb1658debe396b83a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_39d43a73db99e3cb1658debe396b83a0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_39d43a73db99e3cb1658debe396b83a0)) {
        Py_XDECREF(cache_frame_39d43a73db99e3cb1658debe396b83a0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_39d43a73db99e3cb1658debe396b83a0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_39d43a73db99e3cb1658debe396b83a0 = MAKE_FUNCTION_FRAME(codeobj_39d43a73db99e3cb1658debe396b83a0, module_youtube_dl$extractor$peertube, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_39d43a73db99e3cb1658debe396b83a0->m_type_description == NULL);
    frame_39d43a73db99e3cb1658debe396b83a0 = cache_frame_39d43a73db99e3cb1658debe396b83a0;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_39d43a73db99e3cb1658debe396b83a0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_39d43a73db99e3cb1658debe396b83a0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_mod_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        if (tmp_mod_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 508;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_host);
        tmp_tuple_element_1 = par_host;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_video_id);
        tmp_tuple_element_1 = par_video_id;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_path);
        tmp_tuple_element_1 = par_path;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_left_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 508;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_video_id);
        tmp_kw_call_arg_value_1_1 = par_video_id;
        CHECK_OBJECT(par_note);
        tmp_kw_call_dict_value_0_1 = par_note;
        CHECK_OBJECT(par_errnote);
        tmp_kw_call_dict_value_1_1 = par_errnote;
        CHECK_OBJECT(par_fatal);
        tmp_kw_call_dict_value_2_1 = par_fatal;
        frame_39d43a73db99e3cb1658debe396b83a0->m_frame.f_lineno = 507;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[18]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_39d43a73db99e3cb1658debe396b83a0);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_39d43a73db99e3cb1658debe396b83a0);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_39d43a73db99e3cb1658debe396b83a0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_39d43a73db99e3cb1658debe396b83a0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_39d43a73db99e3cb1658debe396b83a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_39d43a73db99e3cb1658debe396b83a0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_39d43a73db99e3cb1658debe396b83a0,
        type_description_1,
        par_self,
        par_host,
        par_video_id,
        par_path,
        par_note,
        par_errnote,
        par_fatal
    );


    // Release cached frame if used for exception.
    if (frame_39d43a73db99e3cb1658debe396b83a0 == cache_frame_39d43a73db99e3cb1658debe396b83a0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_39d43a73db99e3cb1658debe396b83a0);
        cache_frame_39d43a73db99e3cb1658debe396b83a0 = NULL;
    }

    assertFrameObject(frame_39d43a73db99e3cb1658debe396b83a0);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_video_id);
    Py_DECREF(par_video_id);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_note);
    Py_DECREF(par_note);
    CHECK_OBJECT(par_errnote);
    Py_DECREF(par_errnote);
    CHECK_OBJECT(par_fatal);
    Py_DECREF(par_fatal);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_video_id);
    Py_DECREF(par_video_id);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_note);
    Py_DECREF(par_note);
    CHECK_OBJECT(par_errnote);
    Py_DECREF(par_errnote);
    CHECK_OBJECT(par_fatal);
    Py_DECREF(par_fatal);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$peertube$$$function__4__get_subtitles(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_video_id = python_pars[2];
    PyObject *var_captions = NULL;
    PyObject *var_data = NULL;
    PyObject *var_subtitles = NULL;
    PyObject *var_e = NULL;
    PyObject *var_language_id = NULL;
    PyObject *var_caption_url = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_d024303b592e07f09274531445b8b736;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_d024303b592e07f09274531445b8b736 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d024303b592e07f09274531445b8b736)) {
        Py_XDECREF(cache_frame_d024303b592e07f09274531445b8b736);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d024303b592e07f09274531445b8b736 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d024303b592e07f09274531445b8b736 = MAKE_FUNCTION_FRAME(codeobj_d024303b592e07f09274531445b8b736, module_youtube_dl$extractor$peertube, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d024303b592e07f09274531445b8b736->m_type_description == NULL);
    frame_d024303b592e07f09274531445b8b736 = cache_frame_d024303b592e07f09274531445b8b736;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_d024303b592e07f09274531445b8b736);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d024303b592e07f09274531445b8b736) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_host);
        tmp_tuple_element_1 = par_host;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_video_id);
        tmp_tuple_element_1 = par_video_id;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[20];
        PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[21]);
        frame_d024303b592e07f09274531445b8b736->m_frame.f_lineno = 512;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_captions == NULL);
        var_captions = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_captions);
        tmp_isinstance_inst_1 = var_captions;
        tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooooooooo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_captions);
        tmp_expression_value_2 = var_captions;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d024303b592e07f09274531445b8b736->m_frame.f_lineno = 517;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[23]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_data);
        tmp_isinstance_inst_2 = var_data;
        tmp_isinstance_cls_2 = (PyObject *)&PyList_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_DICT_EMPTY();
        assert(var_subtitles == NULL);
        var_subtitles = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_data);
        tmp_iter_arg_1 = var_data;
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "ooooooooo";
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
                type_description_1 = "ooooooooo";
                exception_lineno = 521;
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
            PyObject *old = var_e;
            var_e = tmp_assign_source_6;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_e);
        tmp_args_element_value_1 = var_e;


        tmp_args_element_value_2 = MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__4__get_subtitles$$$function__1_lambda();

        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 522;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_d024303b592e07f09274531445b8b736->m_frame.f_lineno = 522;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_language_id;
            var_language_id = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_mod_expr_left_1 = mod_consts[29];
        if (par_host == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 523;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_mod_expr_right_1 = par_host;
        tmp_args_element_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_e);
        tmp_expression_value_3 = var_e;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 523;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_d024303b592e07f09274531445b8b736->m_frame.f_lineno = 523;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[31]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 523;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_d024303b592e07f09274531445b8b736->m_frame.f_lineno = 523;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_caption_url;
            var_caption_url = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_3;
        CHECK_OBJECT(var_caption_url);
        tmp_operand_value_3 = var_caption_url;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_start_1;
    branch_no_3:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_6;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        if (var_subtitles == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 526;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = var_subtitles;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[33]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_language_id);
        tmp_or_left_value_1 = var_language_id;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 526;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = mod_consts[34];
        tmp_args_element_value_6 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_value_6 = tmp_or_left_value_1;
        or_end_1:;
        tmp_args_element_value_7 = MAKE_LIST_EMPTY(0);
        frame_d024303b592e07f09274531445b8b736->m_frame.f_lineno = 526;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_1 = mod_consts[36];
        CHECK_OBJECT(var_caption_url);
        tmp_dict_value_1 = var_caption_url;
        tmp_args_element_value_8 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_8, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_d024303b592e07f09274531445b8b736->m_frame.f_lineno = 526;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[35], tmp_args_element_value_8);
        Py_DECREF(tmp_called_instance_1);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 521;
        type_description_1 = "ooooooooo";
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
    if (var_subtitles == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 529;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_subtitles;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d024303b592e07f09274531445b8b736);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d024303b592e07f09274531445b8b736);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d024303b592e07f09274531445b8b736);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d024303b592e07f09274531445b8b736, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d024303b592e07f09274531445b8b736->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d024303b592e07f09274531445b8b736, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d024303b592e07f09274531445b8b736,
        type_description_1,
        par_self,
        par_host,
        par_video_id,
        var_captions,
        var_data,
        var_subtitles,
        var_e,
        var_language_id,
        var_caption_url
    );


    // Release cached frame if used for exception.
    if (frame_d024303b592e07f09274531445b8b736 == cache_frame_d024303b592e07f09274531445b8b736) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d024303b592e07f09274531445b8b736);
        cache_frame_d024303b592e07f09274531445b8b736 = NULL;
    }

    assertFrameObject(frame_d024303b592e07f09274531445b8b736);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_captions);
    Py_DECREF(var_captions);
    var_captions = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_subtitles);
    var_subtitles = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_language_id);
    var_language_id = NULL;
    Py_XDECREF(var_caption_url);
    var_caption_url = NULL;
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

    Py_XDECREF(var_captions);
    var_captions = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_subtitles);
    var_subtitles = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_language_id);
    var_language_id = NULL;
    Py_XDECREF(var_caption_url);
    var_caption_url = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_video_id);
    Py_DECREF(par_video_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_video_id);
    Py_DECREF(par_video_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$peertube$$$function__4__get_subtitles$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_9131ea4cd5b3cd3fc6c5ac4334240881;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9131ea4cd5b3cd3fc6c5ac4334240881 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9131ea4cd5b3cd3fc6c5ac4334240881)) {
        Py_XDECREF(cache_frame_9131ea4cd5b3cd3fc6c5ac4334240881);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9131ea4cd5b3cd3fc6c5ac4334240881 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9131ea4cd5b3cd3fc6c5ac4334240881 = MAKE_FUNCTION_FRAME(codeobj_9131ea4cd5b3cd3fc6c5ac4334240881, module_youtube_dl$extractor$peertube, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9131ea4cd5b3cd3fc6c5ac4334240881->m_type_description == NULL);
    frame_9131ea4cd5b3cd3fc6c5ac4334240881 = cache_frame_9131ea4cd5b3cd3fc6c5ac4334240881;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_9131ea4cd5b3cd3fc6c5ac4334240881);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9131ea4cd5b3cd3fc6c5ac4334240881) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_x);
        tmp_expression_value_2 = par_x;
        tmp_subscript_value_1 = mod_consts[37];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[38];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9131ea4cd5b3cd3fc6c5ac4334240881);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9131ea4cd5b3cd3fc6c5ac4334240881);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9131ea4cd5b3cd3fc6c5ac4334240881);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9131ea4cd5b3cd3fc6c5ac4334240881, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9131ea4cd5b3cd3fc6c5ac4334240881->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9131ea4cd5b3cd3fc6c5ac4334240881, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9131ea4cd5b3cd3fc6c5ac4334240881,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_9131ea4cd5b3cd3fc6c5ac4334240881 == cache_frame_9131ea4cd5b3cd3fc6c5ac4334240881) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9131ea4cd5b3cd3fc6c5ac4334240881);
        cache_frame_9131ea4cd5b3cd3fc6c5ac4334240881 = NULL;
    }

    assertFrameObject(frame_9131ea4cd5b3cd3fc6c5ac4334240881);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$peertube$$$function__5__real_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_mobj = NULL;
    PyObject *var_host = NULL;
    PyObject *var_video_id = NULL;
    struct Nuitka_CellObject *var_video = Nuitka_Cell_Empty();
    PyObject *var_title = NULL;
    PyObject *var_formats = NULL;
    PyObject *var_files = NULL;
    PyObject *var_playlist = NULL;
    PyObject *var_playlist_files = NULL;
    PyObject *var_file_ = NULL;
    PyObject *var_file_url = NULL;
    PyObject *var_file_size = NULL;
    PyObject *var_format_id = NULL;
    PyObject *var_f = NULL;
    PyObject *var_description = NULL;
    PyObject *var_full_description = NULL;
    PyObject *var_subtitles = NULL;
    struct Nuitka_CellObject *var_data = Nuitka_Cell_Empty();
    PyObject *var_account_data = NULL;
    PyObject *var_channel_data = NULL;
    PyObject *var_category = NULL;
    PyObject *var_categories = NULL;
    PyObject *var_nsfw = NULL;
    PyObject *var_age_limit = NULL;
    PyObject *var_webpage_url = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_aa7c4e973fa1eed762fdd4d30920860c;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_aa7c4e973fa1eed762fdd4d30920860c = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_aa7c4e973fa1eed762fdd4d30920860c)) {
        Py_XDECREF(cache_frame_aa7c4e973fa1eed762fdd4d30920860c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa7c4e973fa1eed762fdd4d30920860c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa7c4e973fa1eed762fdd4d30920860c = MAKE_FUNCTION_FRAME(codeobj_aa7c4e973fa1eed762fdd4d30920860c, module_youtube_dl$extractor$peertube, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_aa7c4e973fa1eed762fdd4d30920860c->m_type_description == NULL);
    frame_aa7c4e973fa1eed762fdd4d30920860c = cache_frame_aa7c4e973fa1eed762fdd4d30920860c;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_aa7c4e973fa1eed762fdd4d30920860c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_aa7c4e973fa1eed762fdd4d30920860c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 532;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_url);
        tmp_args_element_value_2 = par_url;
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 532;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mobj == NULL);
        var_mobj = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_mobj);
        tmp_called_instance_1 = var_mobj;
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 533;
        tmp_or_left_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[7],
            PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 533;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(var_mobj);
        tmp_called_instance_2 = var_mobj;
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 533;
        tmp_or_right_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[7],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_2 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_host == NULL);
        var_host = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_mobj);
        tmp_called_instance_3 = var_mobj;
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 534;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[7],
            PyTuple_GET_ITEM(mod_consts[42], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_video_id == NULL);
        var_video_id = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[19]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_host);
        tmp_tuple_element_1 = var_host;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_video_id);
        tmp_tuple_element_1 = var_video_id;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[43];
        PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[44]);
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 536;
        tmp_assign_source_4 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_video) == NULL);
        PyCell_SET(var_video, tmp_assign_source_4);

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_video));
        tmp_expression_value_4 = Nuitka_Cell_GET(var_video);
        tmp_subscript_value_1 = mod_consts[45];
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_title == NULL);
        var_title = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_LIST_EMPTY(0);
        assert(var_formats == NULL);
        var_formats = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(Nuitka_Cell_GET(var_video));
        tmp_expression_value_5 = Nuitka_Cell_GET(var_video);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[22]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 542;
        tmp_or_left_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[46]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 542;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        tmp_or_right_value_2 = MAKE_LIST_EMPTY(0);
        tmp_assign_source_7 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_assign_source_7 = tmp_or_left_value_2;
        or_end_2:;
        assert(var_files == NULL);
        var_files = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(Nuitka_Cell_GET(var_video));
        tmp_expression_value_6 = Nuitka_Cell_GET(var_video);
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[22]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 543;
        tmp_or_left_value_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[47]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_or_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_3);

            exception_lineno = 543;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        Py_DECREF(tmp_or_left_value_3);
        tmp_or_right_value_3 = MAKE_LIST_EMPTY(0);
        tmp_iter_arg_1 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_iter_arg_1 = tmp_or_left_value_3;
        or_end_3:;
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "ooooocooooooooooooocooooooo";
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
                type_description_1 = "ooooocooooooooooooocooooooo";
                exception_lineno = 543;
                goto try_except_handler_2;
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
            PyObject *old = var_playlist;
            var_playlist = tmp_assign_source_10;
            Py_INCREF(var_playlist);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_playlist);
        tmp_isinstance_inst_1 = var_playlist;
        tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "ooooocooooooooooooocooooooo";
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_playlist);
        tmp_expression_value_7 = var_playlist;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[22]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_2;
        }
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 546;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[46]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_playlist_files;
            var_playlist_files = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_playlist_files);
        tmp_and_left_value_1 = var_playlist_files;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_playlist_files);
        tmp_isinstance_inst_2 = var_playlist_files;
        tmp_isinstance_cls_2 = (PyObject *)&PyList_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_operand_value_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_operand_value_2 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "ooooocooooooooooooocooooooo";
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
    goto loop_start_1;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        if (var_files == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 549;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_4 = var_files;
        CHECK_OBJECT(var_playlist_files);
        tmp_args_element_value_3 = var_playlist_files;
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 549;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[49], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 543;
        type_description_1 = "ooooocooooooooooooocooooooo";
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        if (var_files == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 550;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_2 = var_files;
        tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooocooooooooooooocooooooo";
                exception_lineno = 550;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_14 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_file_;
            var_file_ = tmp_assign_source_14;
            Py_INCREF(var_file_);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(var_file_);
        tmp_isinstance_inst_3 = var_file_;
        tmp_isinstance_cls_3 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_start_2;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_8;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_file_);
        tmp_expression_value_8 = var_file_;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[22]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 553;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[51]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 553;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_file_url;
            var_file_url = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_4;
        CHECK_OBJECT(var_file_url);
        tmp_operand_value_4 = var_file_url;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    goto loop_start_2;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_9;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_file_);
        tmp_expression_value_9 = var_file_;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[22]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 556;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[53]);

        Py_DECREF(tmp_called_value_9);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 556;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_file_size;
            var_file_size = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_file_);
        tmp_args_element_value_6 = var_file_;


        tmp_args_element_value_7 = MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__1_lambda();

        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 558;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 557;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_format_id;
            var_format_id = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_format_id);
        tmp_args_element_value_9 = var_format_id;
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 559;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_9);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_f;
            var_f = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(var_f);
        tmp_expression_value_10 = var_f;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[56]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        tmp_dict_key_1 = mod_consts[36];
        CHECK_OBJECT(var_file_url);
        tmp_dict_value_1 = var_file_url;
        tmp_args_element_value_10 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_10, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[57];
        CHECK_OBJECT(var_format_id);
        tmp_dict_value_1 = var_format_id;
        tmp_res = PyDict_SetItem(tmp_args_element_value_10, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[58];
        CHECK_OBJECT(var_file_size);
        tmp_dict_value_1 = var_file_size;
        tmp_res = PyDict_SetItem(tmp_args_element_value_10, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 560;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_format_id);
        tmp_cmp_expr_left_1 = var_format_id;
        tmp_cmp_expr_right_1 = mod_consts[59];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = mod_consts[60];
        CHECK_OBJECT(var_f);
        tmp_ass_subscribed_1 = var_f;
        tmp_ass_subscript_1 = mod_consts[61];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_file_);
        tmp_expression_value_11 = var_file_;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[22]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 568;
        tmp_args_element_value_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_14, mod_consts[62]);

        Py_DECREF(tmp_called_value_14);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 568;
        tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_f);
        tmp_ass_subscribed_2 = var_f;
        tmp_ass_subscript_2 = mod_consts[63];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
    }
    branch_end_5:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_12;
        if (var_formats == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 569;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_5 = var_formats;
        CHECK_OBJECT(var_f);
        tmp_args_element_value_12 = var_f;
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 569;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[35], tmp_args_element_value_12);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 550;
        type_description_1 = "ooooocooooooooooooocooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[65]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        if (var_formats == NULL) {
            Py_DECREF(tmp_called_value_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 570;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_13 = var_formats;
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 570;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(Nuitka_Cell_GET(var_video));
        tmp_expression_value_13 = Nuitka_Cell_GET(var_video);
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[22]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 572;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_16, mod_consts[66]);

        Py_DECREF(tmp_called_value_16);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_description == NULL);
        var_description = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_description);
        tmp_len_arg_1 = var_description;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 250;
        tmp_condition_result_6 = RICH_COMPARE_GE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[19]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_host);
        tmp_tuple_element_2 = var_host;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_video_id);
        tmp_tuple_element_2 = var_video_id;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[67];
        PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[68]);
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 575;
        tmp_assign_source_20 = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_full_description == NULL);
        var_full_description = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        CHECK_OBJECT(var_full_description);
        tmp_isinstance_inst_4 = var_full_description;
        tmp_isinstance_cls_4 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_21;
        int tmp_or_left_truth_4;
        PyObject *tmp_or_left_value_4;
        PyObject *tmp_or_right_value_4;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_15;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_full_description);
        tmp_expression_value_15 = var_full_description;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[22]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 580;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_19, mod_consts[66]);

        Py_DECREF(tmp_called_value_19);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 580;
        tmp_or_left_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_or_left_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
        if (tmp_or_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_4);

            exception_lineno = 580;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        Py_DECREF(tmp_or_left_value_4);
        CHECK_OBJECT(var_description);
        tmp_or_right_value_4 = var_description;
        Py_INCREF(tmp_or_right_value_4);
        tmp_assign_source_21 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_assign_source_21 = tmp_or_left_value_4;
        or_end_4:;
        {
            PyObject *old = var_description;
            assert(old != NULL);
            var_description = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    branch_no_7:;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(var_host);
        tmp_args_element_value_15 = var_host;
        CHECK_OBJECT(var_video_id);
        tmp_args_element_value_16 = var_video_id;
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 582;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_assign_source_22 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_6,
                mod_consts[70],
                call_args
            );
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_subtitles == NULL);
        var_subtitles = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_video;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_23 = MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__2_data(tmp_closure_1);

        assert(Nuitka_Cell_GET(var_data) == NULL);
        PyCell_SET(var_data, tmp_assign_source_23);

    }
    {
        PyObject *tmp_assign_source_24;
        struct Nuitka_CellObject *tmp_closure_2[1];

        tmp_closure_2[0] = var_data;
        Py_INCREF(tmp_closure_2[0]);

        tmp_assign_source_24 = MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__3_account_data(tmp_closure_2);

        assert(var_account_data == NULL);
        var_account_data = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        struct Nuitka_CellObject *tmp_closure_3[1];

        tmp_closure_3[0] = var_data;
        Py_INCREF(tmp_closure_3[0]);

        tmp_assign_source_25 = MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__4_channel_data(tmp_closure_3);

        assert(var_channel_data == NULL);
        var_channel_data = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        CHECK_OBJECT(Nuitka_Cell_GET(var_data));
        tmp_called_value_20 = Nuitka_Cell_GET(var_data);
        tmp_args_element_value_17 = mod_consts[77];
        tmp_args_element_value_18 = mod_consts[78];
        tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_args_element_value_19 == NULL)) {
            tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 593;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_20, call_args);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_category == NULL);
        var_category = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_1;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_category);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_category);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_category);
        tmp_list_element_1 = var_category;
        tmp_assign_source_27 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assign_source_27, 0, tmp_list_element_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_27 = Py_None;
        Py_INCREF(tmp_assign_source_27);
        condexpr_end_1:;
        assert(var_categories == NULL);
        var_categories = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(Nuitka_Cell_GET(var_video));
        tmp_expression_value_16 = Nuitka_Cell_GET(var_video);
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[22]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 596;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_21, mod_consts[79]);

        Py_DECREF(tmp_called_value_21);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nsfw == NULL);
        var_nsfw = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_nsfw);
        tmp_cmp_expr_left_3 = var_nsfw;
        tmp_cmp_expr_right_3 = (PyObject *)&PyBool_Type;
        tmp_condition_result_9 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_29;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_nsfw);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_nsfw);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_assign_source_29 = mod_consts[80];
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_29 = mod_consts[81];
        condexpr_end_2:;
        assert(var_age_limit == NULL);
        Py_INCREF(tmp_assign_source_29);
        var_age_limit = tmp_assign_source_29;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = Py_None;
        assert(var_age_limit == NULL);
        Py_INCREF(tmp_assign_source_30);
        var_age_limit = tmp_assign_source_30;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        tmp_mod_expr_left_1 = mod_consts[82];
        CHECK_OBJECT(var_host);
        tmp_tuple_element_3 = var_host;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_video_id);
        tmp_tuple_element_3 = var_video_id;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        tmp_assign_source_31 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "ooooocooooooooooooocooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_webpage_url == NULL);
        var_webpage_url = tmp_assign_source_31;
    }
    {
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[38];
        CHECK_OBJECT(var_video_id);
        tmp_dict_value_2 = var_video_id;
        tmp_return_value = _PyDict_NewPresized( 23 );
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_called_value_23;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_called_value_25;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_called_value_28;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_called_value_33;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_called_value_39;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_called_value_41;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_called_value_43;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_called_value_45;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_args_element_value_47;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[83];
            CHECK_OBJECT(var_title);
            tmp_dict_value_2 = var_title;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[67];
            if (var_description == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 607;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }

            tmp_dict_value_2 = var_description;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[84];
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(var_webpage_url);
            tmp_args_element_value_20 = var_webpage_url;
            CHECK_OBJECT(Nuitka_Cell_GET(var_video));
            tmp_expression_value_17 = Nuitka_Cell_GET(var_video);
            tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[22]);
            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 608;
            tmp_args_element_value_21 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_23, mod_consts[85]);

            Py_DECREF(tmp_called_value_23);
            if (tmp_args_element_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 608;
            {
                PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
                tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_22, call_args);
            }

            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[86];
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 609;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(Nuitka_Cell_GET(var_video));
            tmp_expression_value_18 = Nuitka_Cell_GET(var_video);
            tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[22]);
            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 609;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 609;
            tmp_args_element_value_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_25, mod_consts[88]);

            Py_DECREF(tmp_called_value_25);
            if (tmp_args_element_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 609;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 609;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 609;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[89];
            CHECK_OBJECT(var_account_data);
            tmp_called_value_26 = var_account_data;
            tmp_args_element_value_23 = mod_consts[90];
            tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[27]);

            if (unlikely(tmp_args_element_value_24 == NULL)) {
                tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
            }

            if (tmp_args_element_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 610;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 610;
            {
                PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
                tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_26, call_args);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 610;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[91];
            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_called_value_27 == NULL)) {
                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
            }

            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 611;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(var_account_data);
            tmp_called_value_28 = var_account_data;
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 611;
            tmp_args_element_value_25 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_28, mod_consts[92]);

            if (tmp_args_element_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 611;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 611;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 611;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[93];
            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_called_value_29 == NULL)) {
                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 612;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(var_account_data);
            tmp_called_value_30 = var_account_data;
            tmp_args_element_value_27 = mod_consts[36];
            tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[27]);

            if (unlikely(tmp_args_element_value_28 == NULL)) {
                tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
            }

            if (tmp_args_element_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 612;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 612;
            {
                PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
                tmp_args_element_value_26 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_30, call_args);
            }

            if (tmp_args_element_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 612;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 612;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 612;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[94];
            CHECK_OBJECT(var_channel_data);
            tmp_called_value_31 = var_channel_data;
            tmp_args_element_value_29 = mod_consts[90];
            tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[27]);

            if (unlikely(tmp_args_element_value_30 == NULL)) {
                tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
            }

            if (tmp_args_element_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 613;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 613;
            {
                PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
                tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_31, call_args);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 613;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[95];
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(var_channel_data);
            tmp_called_value_33 = var_channel_data;
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 614;
            tmp_args_element_value_31 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_33, mod_consts[92]);

            if (tmp_args_element_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 614;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[96];
            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_called_value_34 == NULL)) {
                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 615;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(var_channel_data);
            tmp_called_value_35 = var_channel_data;
            tmp_args_element_value_33 = mod_consts[36];
            tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[27]);

            if (unlikely(tmp_args_element_value_34 == NULL)) {
                tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
            }

            if (tmp_args_element_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 615;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 615;
            {
                PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
                tmp_args_element_value_32 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_35, call_args);
            }

            if (tmp_args_element_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 615;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 615;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 615;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[37];
            CHECK_OBJECT(Nuitka_Cell_GET(var_data));
            tmp_called_value_36 = Nuitka_Cell_GET(var_data);
            tmp_args_element_value_35 = mod_consts[37];
            tmp_args_element_value_36 = mod_consts[38];
            tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[27]);

            if (unlikely(tmp_args_element_value_37 == NULL)) {
                tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
            }

            if (tmp_args_element_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 616;
            {
                PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37};
                tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_36, call_args);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[97];
            CHECK_OBJECT(Nuitka_Cell_GET(var_data));
            tmp_called_value_37 = Nuitka_Cell_GET(var_data);
            tmp_args_element_value_38 = mod_consts[98];
            tmp_args_element_value_39 = mod_consts[78];
            tmp_args_element_value_40 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[27]);

            if (unlikely(tmp_args_element_value_40 == NULL)) {
                tmp_args_element_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
            }

            if (tmp_args_element_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 617;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 617;
            {
                PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
                tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_37, call_args);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 617;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[99];
            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_called_value_38 == NULL)) {
                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 618;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(Nuitka_Cell_GET(var_video));
            tmp_expression_value_19 = Nuitka_Cell_GET(var_video);
            tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[22]);
            if (tmp_called_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 618;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 618;
            tmp_args_element_value_41 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_39, mod_consts[100]);

            Py_DECREF(tmp_called_value_39);
            if (tmp_args_element_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 618;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 618;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 618;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[101];
            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_called_value_40 == NULL)) {
                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_called_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 619;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(Nuitka_Cell_GET(var_video));
            tmp_expression_value_20 = Nuitka_Cell_GET(var_video);
            tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[22]);
            if (tmp_called_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 619;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 619;
            tmp_args_element_value_42 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_41, mod_consts[102]);

            Py_DECREF(tmp_called_value_41);
            if (tmp_args_element_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 619;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 619;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 619;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[103];
            tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_called_value_42 == NULL)) {
                tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_called_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 620;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(Nuitka_Cell_GET(var_video));
            tmp_expression_value_21 = Nuitka_Cell_GET(var_video);
            tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[22]);
            if (tmp_called_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 620;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 620;
            tmp_args_element_value_43 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_43, mod_consts[104]);

            Py_DECREF(tmp_called_value_43);
            if (tmp_args_element_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 620;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 620;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 620;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[105];
            tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_called_value_44 == NULL)) {
                tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_called_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 621;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(Nuitka_Cell_GET(var_video));
            tmp_expression_value_22 = Nuitka_Cell_GET(var_video);
            tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[22]);
            if (tmp_called_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 621;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 621;
            tmp_args_element_value_44 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_45, mod_consts[106]);

            Py_DECREF(tmp_called_value_45);
            if (tmp_args_element_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 621;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 621;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 621;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[107];
            CHECK_OBJECT(var_age_limit);
            tmp_dict_value_2 = var_age_limit;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[108];
            tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_46 == NULL)) {
                tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
            }

            if (tmp_called_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(Nuitka_Cell_GET(var_video));
            tmp_args_element_value_45 = Nuitka_Cell_GET(var_video);


            tmp_args_element_value_46 = MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__5_lambda();

            tmp_args_element_value_47 = (PyObject *)&PyList_Type;
            frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame.f_lineno = 623;
            {
                PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
                tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_46, call_args);
            }

            Py_DECREF(tmp_args_element_value_46);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[109];
            CHECK_OBJECT(var_categories);
            tmp_dict_value_2 = var_categories;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[64];
            if (var_formats == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 625;
                type_description_1 = "ooooocooooooooooooocooooooo";
                goto dict_build_exception_1;
            }

            tmp_dict_value_2 = var_formats;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[32];
            CHECK_OBJECT(var_subtitles);
            tmp_dict_value_2 = var_subtitles;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[110];
            CHECK_OBJECT(var_webpage_url);
            tmp_dict_value_2 = var_webpage_url;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
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

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa7c4e973fa1eed762fdd4d30920860c);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa7c4e973fa1eed762fdd4d30920860c);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa7c4e973fa1eed762fdd4d30920860c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa7c4e973fa1eed762fdd4d30920860c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa7c4e973fa1eed762fdd4d30920860c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa7c4e973fa1eed762fdd4d30920860c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa7c4e973fa1eed762fdd4d30920860c,
        type_description_1,
        par_self,
        par_url,
        var_mobj,
        var_host,
        var_video_id,
        var_video,
        var_title,
        var_formats,
        var_files,
        var_playlist,
        var_playlist_files,
        var_file_,
        var_file_url,
        var_file_size,
        var_format_id,
        var_f,
        var_description,
        var_full_description,
        var_subtitles,
        var_data,
        var_account_data,
        var_channel_data,
        var_category,
        var_categories,
        var_nsfw,
        var_age_limit,
        var_webpage_url
    );


    // Release cached frame if used for exception.
    if (frame_aa7c4e973fa1eed762fdd4d30920860c == cache_frame_aa7c4e973fa1eed762fdd4d30920860c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_aa7c4e973fa1eed762fdd4d30920860c);
        cache_frame_aa7c4e973fa1eed762fdd4d30920860c = NULL;
    }

    assertFrameObject(frame_aa7c4e973fa1eed762fdd4d30920860c);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_mobj);
    Py_DECREF(var_mobj);
    var_mobj = NULL;
    CHECK_OBJECT(var_host);
    Py_DECREF(var_host);
    var_host = NULL;
    CHECK_OBJECT(var_video_id);
    Py_DECREF(var_video_id);
    var_video_id = NULL;
    CHECK_OBJECT(var_video);
    Py_DECREF(var_video);
    var_video = NULL;
    CHECK_OBJECT(var_title);
    Py_DECREF(var_title);
    var_title = NULL;
    Py_XDECREF(var_formats);
    var_formats = NULL;
    Py_XDECREF(var_files);
    var_files = NULL;
    Py_XDECREF(var_playlist);
    var_playlist = NULL;
    Py_XDECREF(var_playlist_files);
    var_playlist_files = NULL;
    Py_XDECREF(var_file_);
    var_file_ = NULL;
    Py_XDECREF(var_file_url);
    var_file_url = NULL;
    Py_XDECREF(var_file_size);
    var_file_size = NULL;
    Py_XDECREF(var_format_id);
    var_format_id = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_description);
    var_description = NULL;
    Py_XDECREF(var_full_description);
    var_full_description = NULL;
    CHECK_OBJECT(var_subtitles);
    Py_DECREF(var_subtitles);
    var_subtitles = NULL;
    CHECK_OBJECT(var_data);
    Py_DECREF(var_data);
    var_data = NULL;
    CHECK_OBJECT(var_account_data);
    Py_DECREF(var_account_data);
    var_account_data = NULL;
    CHECK_OBJECT(var_channel_data);
    Py_DECREF(var_channel_data);
    var_channel_data = NULL;
    CHECK_OBJECT(var_category);
    Py_DECREF(var_category);
    var_category = NULL;
    CHECK_OBJECT(var_categories);
    Py_DECREF(var_categories);
    var_categories = NULL;
    CHECK_OBJECT(var_nsfw);
    Py_DECREF(var_nsfw);
    var_nsfw = NULL;
    CHECK_OBJECT(var_age_limit);
    Py_DECREF(var_age_limit);
    var_age_limit = NULL;
    CHECK_OBJECT(var_webpage_url);
    Py_DECREF(var_webpage_url);
    var_webpage_url = NULL;
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

    Py_XDECREF(var_mobj);
    var_mobj = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_video_id);
    var_video_id = NULL;
    CHECK_OBJECT(var_video);
    Py_DECREF(var_video);
    var_video = NULL;
    Py_XDECREF(var_title);
    var_title = NULL;
    Py_XDECREF(var_formats);
    var_formats = NULL;
    Py_XDECREF(var_files);
    var_files = NULL;
    Py_XDECREF(var_playlist);
    var_playlist = NULL;
    Py_XDECREF(var_playlist_files);
    var_playlist_files = NULL;
    Py_XDECREF(var_file_);
    var_file_ = NULL;
    Py_XDECREF(var_file_url);
    var_file_url = NULL;
    Py_XDECREF(var_file_size);
    var_file_size = NULL;
    Py_XDECREF(var_format_id);
    var_format_id = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_description);
    var_description = NULL;
    Py_XDECREF(var_full_description);
    var_full_description = NULL;
    Py_XDECREF(var_subtitles);
    var_subtitles = NULL;
    CHECK_OBJECT(var_data);
    Py_DECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_account_data);
    var_account_data = NULL;
    Py_XDECREF(var_channel_data);
    var_channel_data = NULL;
    Py_XDECREF(var_category);
    var_category = NULL;
    Py_XDECREF(var_categories);
    var_categories = NULL;
    Py_XDECREF(var_nsfw);
    var_nsfw = NULL;
    Py_XDECREF(var_age_limit);
    var_age_limit = NULL;
    Py_XDECREF(var_webpage_url);
    var_webpage_url = NULL;
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


static PyObject *impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_309848181a1d57c25bb9c1bf0cafca9d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_309848181a1d57c25bb9c1bf0cafca9d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_309848181a1d57c25bb9c1bf0cafca9d)) {
        Py_XDECREF(cache_frame_309848181a1d57c25bb9c1bf0cafca9d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_309848181a1d57c25bb9c1bf0cafca9d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_309848181a1d57c25bb9c1bf0cafca9d = MAKE_FUNCTION_FRAME(codeobj_309848181a1d57c25bb9c1bf0cafca9d, module_youtube_dl$extractor$peertube, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_309848181a1d57c25bb9c1bf0cafca9d->m_type_description == NULL);
    frame_309848181a1d57c25bb9c1bf0cafca9d = cache_frame_309848181a1d57c25bb9c1bf0cafca9d;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_309848181a1d57c25bb9c1bf0cafca9d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_309848181a1d57c25bb9c1bf0cafca9d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_x);
        tmp_expression_value_2 = par_x;
        tmp_subscript_value_1 = mod_consts[111];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[78];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_309848181a1d57c25bb9c1bf0cafca9d);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_309848181a1d57c25bb9c1bf0cafca9d);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_309848181a1d57c25bb9c1bf0cafca9d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_309848181a1d57c25bb9c1bf0cafca9d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_309848181a1d57c25bb9c1bf0cafca9d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_309848181a1d57c25bb9c1bf0cafca9d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_309848181a1d57c25bb9c1bf0cafca9d,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_309848181a1d57c25bb9c1bf0cafca9d == cache_frame_309848181a1d57c25bb9c1bf0cafca9d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_309848181a1d57c25bb9c1bf0cafca9d);
        cache_frame_309848181a1d57c25bb9c1bf0cafca9d = NULL;
    }

    assertFrameObject(frame_309848181a1d57c25bb9c1bf0cafca9d);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__2_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_section = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_field = Nuitka_Cell_New1(python_pars[1]);
    PyObject *par_type_ = python_pars[2];
    struct Nuitka_FrameObject *frame_525e79109662290b175892fb1d748b00;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_525e79109662290b175892fb1d748b00 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_525e79109662290b175892fb1d748b00)) {
        Py_XDECREF(cache_frame_525e79109662290b175892fb1d748b00);

#if _DEBUG_REFCOUNTS
        if (cache_frame_525e79109662290b175892fb1d748b00 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_525e79109662290b175892fb1d748b00 = MAKE_FUNCTION_FRAME(codeobj_525e79109662290b175892fb1d748b00, module_youtube_dl$extractor$peertube, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_525e79109662290b175892fb1d748b00->m_type_description == NULL);
    frame_525e79109662290b175892fb1d748b00 = cache_frame_525e79109662290b175892fb1d748b00;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_525e79109662290b175892fb1d748b00);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_525e79109662290b175892fb1d748b00) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        struct Nuitka_CellObject *tmp_closure_1[2];
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "ccoc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 585;
            type_description_1 = "ccoc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);

        tmp_closure_1[0] = par_field;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_section;
        Py_INCREF(tmp_closure_1[1]);

        tmp_args_element_value_2 = MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__2_data$$$function__1_lambda(tmp_closure_1);

        CHECK_OBJECT(par_type_);
        tmp_args_element_value_3 = par_type_;
        frame_525e79109662290b175892fb1d748b00->m_frame.f_lineno = 585;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "ccoc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_525e79109662290b175892fb1d748b00);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_525e79109662290b175892fb1d748b00);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_525e79109662290b175892fb1d748b00);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_525e79109662290b175892fb1d748b00, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_525e79109662290b175892fb1d748b00->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_525e79109662290b175892fb1d748b00, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_525e79109662290b175892fb1d748b00,
        type_description_1,
        par_section,
        par_field,
        par_type_,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_525e79109662290b175892fb1d748b00 == cache_frame_525e79109662290b175892fb1d748b00) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_525e79109662290b175892fb1d748b00);
        cache_frame_525e79109662290b175892fb1d748b00 = NULL;
    }

    assertFrameObject(frame_525e79109662290b175892fb1d748b00);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_section);
    Py_DECREF(par_section);
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_section);
    Py_DECREF(par_section);
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__2_data$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_f7a9f6ecf756af848fb43d40d82434bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f7a9f6ecf756af848fb43d40d82434bd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f7a9f6ecf756af848fb43d40d82434bd)) {
        Py_XDECREF(cache_frame_f7a9f6ecf756af848fb43d40d82434bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f7a9f6ecf756af848fb43d40d82434bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f7a9f6ecf756af848fb43d40d82434bd = MAKE_FUNCTION_FRAME(codeobj_f7a9f6ecf756af848fb43d40d82434bd, module_youtube_dl$extractor$peertube, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f7a9f6ecf756af848fb43d40d82434bd->m_type_description == NULL);
    frame_f7a9f6ecf756af848fb43d40d82434bd = cache_frame_f7a9f6ecf756af848fb43d40d82434bd;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_f7a9f6ecf756af848fb43d40d82434bd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f7a9f6ecf756af848fb43d40d82434bd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_x);
        tmp_expression_value_2 = par_x;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 585;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_expression_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 585;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f7a9f6ecf756af848fb43d40d82434bd);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f7a9f6ecf756af848fb43d40d82434bd);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f7a9f6ecf756af848fb43d40d82434bd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f7a9f6ecf756af848fb43d40d82434bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f7a9f6ecf756af848fb43d40d82434bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f7a9f6ecf756af848fb43d40d82434bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f7a9f6ecf756af848fb43d40d82434bd,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_f7a9f6ecf756af848fb43d40d82434bd == cache_frame_f7a9f6ecf756af848fb43d40d82434bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f7a9f6ecf756af848fb43d40d82434bd);
        cache_frame_f7a9f6ecf756af848fb43d40d82434bd = NULL;
    }

    assertFrameObject(frame_f7a9f6ecf756af848fb43d40d82434bd);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__3_account_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field = python_pars[0];
    PyObject *par_type_ = python_pars[1];
    struct Nuitka_FrameObject *frame_a67ea5fb4d02b23210881de0570c0601;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a67ea5fb4d02b23210881de0570c0601 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a67ea5fb4d02b23210881de0570c0601)) {
        Py_XDECREF(cache_frame_a67ea5fb4d02b23210881de0570c0601);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a67ea5fb4d02b23210881de0570c0601 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a67ea5fb4d02b23210881de0570c0601 = MAKE_FUNCTION_FRAME(codeobj_a67ea5fb4d02b23210881de0570c0601, module_youtube_dl$extractor$peertube, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a67ea5fb4d02b23210881de0570c0601->m_type_description == NULL);
    frame_a67ea5fb4d02b23210881de0570c0601 = cache_frame_a67ea5fb4d02b23210881de0570c0601;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_a67ea5fb4d02b23210881de0570c0601);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a67ea5fb4d02b23210881de0570c0601) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 588;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_value_1 = mod_consts[116];
        CHECK_OBJECT(par_field);
        tmp_args_element_value_2 = par_field;
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_3 = par_type_;
        frame_a67ea5fb4d02b23210881de0570c0601->m_frame.f_lineno = 588;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a67ea5fb4d02b23210881de0570c0601);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a67ea5fb4d02b23210881de0570c0601);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a67ea5fb4d02b23210881de0570c0601);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a67ea5fb4d02b23210881de0570c0601, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a67ea5fb4d02b23210881de0570c0601->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a67ea5fb4d02b23210881de0570c0601, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a67ea5fb4d02b23210881de0570c0601,
        type_description_1,
        par_field,
        par_type_,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_a67ea5fb4d02b23210881de0570c0601 == cache_frame_a67ea5fb4d02b23210881de0570c0601) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a67ea5fb4d02b23210881de0570c0601);
        cache_frame_a67ea5fb4d02b23210881de0570c0601 = NULL;
    }

    assertFrameObject(frame_a67ea5fb4d02b23210881de0570c0601);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__4_channel_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field = python_pars[0];
    PyObject *par_type_ = python_pars[1];
    struct Nuitka_FrameObject *frame_2fcb20e504c972c82232b643a6d7fcef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2fcb20e504c972c82232b643a6d7fcef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2fcb20e504c972c82232b643a6d7fcef)) {
        Py_XDECREF(cache_frame_2fcb20e504c972c82232b643a6d7fcef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2fcb20e504c972c82232b643a6d7fcef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2fcb20e504c972c82232b643a6d7fcef = MAKE_FUNCTION_FRAME(codeobj_2fcb20e504c972c82232b643a6d7fcef, module_youtube_dl$extractor$peertube, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2fcb20e504c972c82232b643a6d7fcef->m_type_description == NULL);
    frame_2fcb20e504c972c82232b643a6d7fcef = cache_frame_2fcb20e504c972c82232b643a6d7fcef;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_2fcb20e504c972c82232b643a6d7fcef);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2fcb20e504c972c82232b643a6d7fcef) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 591;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_value_1 = mod_consts[94];
        CHECK_OBJECT(par_field);
        tmp_args_element_value_2 = par_field;
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_3 = par_type_;
        frame_2fcb20e504c972c82232b643a6d7fcef->m_frame.f_lineno = 591;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2fcb20e504c972c82232b643a6d7fcef);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2fcb20e504c972c82232b643a6d7fcef);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2fcb20e504c972c82232b643a6d7fcef);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2fcb20e504c972c82232b643a6d7fcef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2fcb20e504c972c82232b643a6d7fcef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2fcb20e504c972c82232b643a6d7fcef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2fcb20e504c972c82232b643a6d7fcef,
        type_description_1,
        par_field,
        par_type_,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_2fcb20e504c972c82232b643a6d7fcef == cache_frame_2fcb20e504c972c82232b643a6d7fcef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2fcb20e504c972c82232b643a6d7fcef);
        cache_frame_2fcb20e504c972c82232b643a6d7fcef = NULL;
    }

    assertFrameObject(frame_2fcb20e504c972c82232b643a6d7fcef);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__5_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_b1251dda4277be9b4864df7463f06abd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b1251dda4277be9b4864df7463f06abd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b1251dda4277be9b4864df7463f06abd)) {
        Py_XDECREF(cache_frame_b1251dda4277be9b4864df7463f06abd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b1251dda4277be9b4864df7463f06abd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b1251dda4277be9b4864df7463f06abd = MAKE_FUNCTION_FRAME(codeobj_b1251dda4277be9b4864df7463f06abd, module_youtube_dl$extractor$peertube, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b1251dda4277be9b4864df7463f06abd->m_type_description == NULL);
    frame_b1251dda4277be9b4864df7463f06abd = cache_frame_b1251dda4277be9b4864df7463f06abd;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_b1251dda4277be9b4864df7463f06abd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b1251dda4277be9b4864df7463f06abd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_x);
        tmp_expression_value_1 = par_x;
        tmp_subscript_value_1 = mod_consts[108];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b1251dda4277be9b4864df7463f06abd);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b1251dda4277be9b4864df7463f06abd);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b1251dda4277be9b4864df7463f06abd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b1251dda4277be9b4864df7463f06abd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b1251dda4277be9b4864df7463f06abd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b1251dda4277be9b4864df7463f06abd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b1251dda4277be9b4864df7463f06abd,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_b1251dda4277be9b4864df7463f06abd == cache_frame_b1251dda4277be9b4864df7463f06abd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b1251dda4277be9b4864df7463f06abd);
        cache_frame_b1251dda4277be9b4864df7463f06abd = NULL;
    }

    assertFrameObject(frame_b1251dda4277be9b4864df7463f06abd);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__1__extract_peertube_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$peertube$$$function__1__extract_peertube_url,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_b9d40e0b0c87a4f4193635392f78aa3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$peertube,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__2__extract_urls() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$peertube$$$function__2__extract_urls,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_e8eb961805124e74910ab429199a8d32,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$peertube,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__3__call_api(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$peertube$$$function__3__call_api,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_39d43a73db99e3cb1658debe396b83a0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$peertube,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__4__get_subtitles() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$peertube$$$function__4__get_subtitles,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_d024303b592e07f09274531445b8b736,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$peertube,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__4__get_subtitles$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$peertube$$$function__4__get_subtitles$$$function__1_lambda,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[26],
#endif
        codeobj_9131ea4cd5b3cd3fc6c5ac4334240881,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$peertube,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$peertube$$$function__5__real_extract,
        mod_consts[185],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_aa7c4e973fa1eed762fdd4d30920860c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$peertube,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__1_lambda,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[54],
#endif
        codeobj_309848181a1d57c25bb9c1bf0cafca9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$peertube,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__2_data(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__2_data,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        codeobj_525e79109662290b175892fb1d748b00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$peertube,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__2_data$$$function__1_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__2_data$$$function__1_lambda,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_f7a9f6ecf756af848fb43d40d82434bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$peertube,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__3_account_data(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__3_account_data,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_a67ea5fb4d02b23210881de0570c0601,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$peertube,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__4_channel_data(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__4_channel_data,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_2fcb20e504c972c82232b643a6d7fcef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$peertube,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__5_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__5_lambda,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[54],
#endif
        codeobj_b1251dda4277be9b4864df7463f06abd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$peertube,
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

function_impl_code functable_youtube_dl$extractor$peertube[] = {
    impl_youtube_dl$extractor$peertube$$$function__4__get_subtitles$$$function__1_lambda,
    impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__1_lambda,
    impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__2_data,
    impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__3_account_data,
    impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__4_channel_data,
    impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__5_lambda,
    impl_youtube_dl$extractor$peertube$$$function__5__real_extract$$$function__2_data$$$function__1_lambda,
    impl_youtube_dl$extractor$peertube$$$function__1__extract_peertube_url,
    impl_youtube_dl$extractor$peertube$$$function__2__extract_urls,
    impl_youtube_dl$extractor$peertube$$$function__3__call_api,
    impl_youtube_dl$extractor$peertube$$$function__4__get_subtitles,
    impl_youtube_dl$extractor$peertube$$$function__5__real_extract,
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

    function_impl_code *current = functable_youtube_dl$extractor$peertube;
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

    if (offset > sizeof(functable_youtube_dl$extractor$peertube) || offset < 0) {
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
        functable_youtube_dl$extractor$peertube[offset],
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
        module_youtube_dl$extractor$peertube,
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
PyObject *modulecode_youtube_dl$extractor$peertube(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("youtube_dl.extractor.peertube");

    // Store the module for future use.
    module_youtube_dl$extractor$peertube = module;

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
        PRINT_STRING("youtube_dl.extractor.peertube: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl.extractor.peertube: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl.extractor.peertube: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inityoutube_dl$extractor$peertube\n");

    moduledict_youtube_dl$extractor$peertube = MODULE_DICT(module_youtube_dl$extractor$peertube);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_youtube_dl$extractor$peertube,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$peertube,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[43]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$peertube,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$peertube,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$peertube,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_youtube_dl$extractor$peertube);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_youtube_dl$extractor$peertube);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_aa5e312046edaeaef1689f10c8d93d36;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_6a0ba6a09d4758030e37d7ac85fed675_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6a0ba6a09d4758030e37d7ac85fed675_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_aa5e312046edaeaef1689f10c8d93d36 = MAKE_MODULE_FRAME(codeobj_aa5e312046edaeaef1689f10c8d93d36, module_youtube_dl$extractor$peertube);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_aa5e312046edaeaef1689f10c8d93d36);
    assert(Py_REFCNT(frame_aa5e312046edaeaef1689f10c8d93d36) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[120], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[121], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[123]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_youtube_dl$extractor$peertube;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[81];
        frame_aa5e312046edaeaef1689f10c8d93d36->m_frame.f_lineno = 4;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[124];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_youtube_dl$extractor$peertube;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[125];
        tmp_level_value_2 = mod_consts[126];
        frame_aa5e312046edaeaef1689f10c8d93d36->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_youtube_dl$extractor$peertube,
                mod_consts[127],
                mod_consts[81]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[127]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[128];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_youtube_dl$extractor$peertube;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[129];
        tmp_level_value_3 = mod_consts[130];
        frame_aa5e312046edaeaef1689f10c8d93d36->m_frame.f_lineno = 7;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_youtube_dl$extractor$peertube,
                mod_consts[27],
                mod_consts[81]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[27]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[131];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_youtube_dl$extractor$peertube;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[132];
        tmp_level_value_4 = mod_consts[130];
        frame_aa5e312046edaeaef1689f10c8d93d36->m_frame.f_lineno = 8;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_youtube_dl$extractor$peertube,
                mod_consts[52],
                mod_consts[81]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[52]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_youtube_dl$extractor$peertube,
                mod_consts[55],
                mod_consts[81]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[55]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_youtube_dl$extractor$peertube,
                mod_consts[69],
                mod_consts[81]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[69]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_youtube_dl$extractor$peertube,
                mod_consts[24],
                mod_consts[81]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[24]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_youtube_dl$extractor$peertube,
                mod_consts[87],
                mod_consts[81]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[87]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_youtube_dl$extractor$peertube,
                mod_consts[50],
                mod_consts[81]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[50]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_youtube_dl$extractor$peertube,
                mod_consts[28],
                mod_consts[81]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[28]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_15);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        tmp_assign_source_16 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_16, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_17 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
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
        tmp_key_value_1 = mod_consts[133];
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
        tmp_key_value_2 = mod_consts[133];
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


            exception_lineno = 19;

            goto try_except_handler_2;
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
        tmp_subscript_value_1 = mod_consts[81];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_19 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[133];
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
    tmp_dictdel_key = mod_consts[133];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 19;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[134]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[134]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[3];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_aa5e312046edaeaef1689f10c8d93d36->m_frame.f_lineno = 19;
        tmp_assign_source_20 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[135]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
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
        tmp_mod_expr_left_1 = mod_consts[136];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[137];
        tmp_getattr_default_1 = mod_consts[138];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[137]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 19;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[3];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_6a0ba6a09d4758030e37d7ac85fed675_2)) {
            Py_XDECREF(cache_frame_6a0ba6a09d4758030e37d7ac85fed675_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6a0ba6a09d4758030e37d7ac85fed675_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6a0ba6a09d4758030e37d7ac85fed675_2 = MAKE_CLASS_FRAME(codeobj_6a0ba6a09d4758030e37d7ac85fed675, module_youtube_dl$extractor$peertube, NULL, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6a0ba6a09d4758030e37d7ac85fed675_2->m_type_description == NULL);
        frame_6a0ba6a09d4758030e37d7ac85fed675_2 = cache_frame_6a0ba6a09d4758030e37d7ac85fed675_2;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_6a0ba6a09d4758030e37d7ac85fed675_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6a0ba6a09d4758030e37d7ac85fed675_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[142];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[14], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[143];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[144];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[17], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_mod_expr_left_2;
            PyObject *tmp_mod_expr_right_2;
            PyObject *tmp_tuple_element_4;
            tmp_mod_expr_left_2 = mod_consts[145];
            tmp_tuple_element_4 = PyObject_GetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[14]);

            if (unlikely(tmp_tuple_element_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[14]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 427;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyObject_GetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[4]);

            if (unlikely(tmp_tuple_element_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 427;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_4);
            tmp_dictset_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
            Py_DECREF(tmp_mod_expr_right_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_dict_key_1 = mod_consts[36];
            tmp_dict_value_1 = mod_consts[146];
            tmp_list_element_1 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[147];
                tmp_dict_value_1 = mod_consts[148];
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[149];
                tmp_dict_key_2 = mod_consts[38];
                tmp_dict_value_2 = mod_consts[150];
                tmp_dict_value_1 = _PyDict_NewPresized( 21 );
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[151];
                tmp_dict_value_2 = mod_consts[152];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[83];
                tmp_dict_value_2 = mod_consts[153];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[67];
                tmp_dict_value_2 = mod_consts[154];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[84];
                tmp_dict_value_2 = mod_consts[155];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[86];
                tmp_dict_value_2 = mod_consts[156];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[157];
                tmp_dict_value_2 = mod_consts[158];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[89];
                tmp_dict_value_2 = mod_consts[159];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[91];
                tmp_dict_value_2 = mod_consts[160];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[93];
                tmp_dict_value_2 = mod_consts[161];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[94];
                tmp_dict_value_2 = mod_consts[162];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[95];
                tmp_dict_value_2 = mod_consts[163];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[96];
                tmp_dict_value_2 = mod_consts[164];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[37];
                tmp_dict_value_2 = mod_consts[34];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[97];
                tmp_dict_value_2 = mod_consts[165];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[99];
                tmp_dict_value_2 = mod_consts[166];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[101];
                tmp_dict_value_2 = PyObject_GetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[167]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto frame_exception_exit_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[103];
                tmp_dict_value_2 = PyObject_GetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[167]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto frame_exception_exit_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[105];
                tmp_dict_value_2 = PyObject_GetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[167]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto frame_exception_exit_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[108];
                tmp_dict_value_2 = LIST_COPY(mod_consts[168]);
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[109];
                tmp_dict_value_2 = LIST_COPY(mod_consts[169]);
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            tmp_dictset_value = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
            tmp_list_element_1 = DEEP_COPY_DICT(mod_consts[170]);
            PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
            tmp_list_element_1 = DICT_COPY(mod_consts[171]);
            PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
            tmp_list_element_1 = DICT_COPY(mod_consts[172]);
            PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_1);
            tmp_list_element_1 = DICT_COPY(mod_consts[173]);
            PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_1);
            tmp_list_element_1 = DICT_COPY(mod_consts[174]);
            PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_1);
            tmp_list_element_1 = DICT_COPY(mod_consts[175]);
            PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_1);
            tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[176], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_staticmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[177]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;
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
            tmp_called_value_2 = PyObject_GetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[177]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[177]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 484;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__1__extract_peertube_url();

            frame_6a0ba6a09d4758030e37d7ac85fed675_2->m_frame.f_lineno = 484;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;


            tmp_staticmethod_arg_1 = MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__1__extract_peertube_url();

            tmp_dictset_value = BUILTIN_STATICMETHOD(tmp_staticmethod_arg_1);
            Py_DECREF(tmp_staticmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_staticmethod_arg_2;
            tmp_res = MAPPING_HAS_ITEM(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[177]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 495;
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
            tmp_called_value_3 = PyObject_GetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[177]);

            if (unlikely(tmp_called_value_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[177]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 495;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 495;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_2 = MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__2__extract_urls();

            frame_6a0ba6a09d4758030e37d7ac85fed675_2->m_frame.f_lineno = 495;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 495;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;


            tmp_staticmethod_arg_2 = MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__2__extract_urls();

            tmp_dictset_value = BUILTIN_STATICMETHOD(tmp_staticmethod_arg_2);
            Py_DECREF(tmp_staticmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[179], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 496;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[181];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__3__call_api(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 506;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__4__get_subtitles();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[183], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$peertube$$$function__5__real_extract();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[185], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6a0ba6a09d4758030e37d7ac85fed675_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6a0ba6a09d4758030e37d7ac85fed675_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6a0ba6a09d4758030e37d7ac85fed675_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6a0ba6a09d4758030e37d7ac85fed675_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6a0ba6a09d4758030e37d7ac85fed675_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6a0ba6a09d4758030e37d7ac85fed675_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_6a0ba6a09d4758030e37d7ac85fed675_2 == cache_frame_6a0ba6a09d4758030e37d7ac85fed675_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_6a0ba6a09d4758030e37d7ac85fed675_2);
            cache_frame_6a0ba6a09d4758030e37d7ac85fed675_2 = NULL;
        }

        assertFrameObject(frame_6a0ba6a09d4758030e37d7ac85fed675_2);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
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


                exception_lineno = 19;

                goto try_except_handler_4;
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
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19, mod_consts[187], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[3];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_aa5e312046edaeaef1689f10c8d93d36->m_frame.f_lineno = 19;
            tmp_assign_source_23 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_22 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19);
        locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19 = NULL;
        goto try_return_handler_3;
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

        Py_DECREF(locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19);
        locals_youtube_dl$extractor$peertube$$$class__1_PeerTubeIE_19 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 19;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_22);
    }
    goto try_end_2;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa5e312046edaeaef1689f10c8d93d36);
#endif
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa5e312046edaeaef1689f10c8d93d36);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa5e312046edaeaef1689f10c8d93d36, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa5e312046edaeaef1689f10c8d93d36->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa5e312046edaeaef1689f10c8d93d36, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("youtube_dl.extractor.peertube", false);

    Py_INCREF(module_youtube_dl$extractor$peertube);
    return module_youtube_dl$extractor$peertube;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$peertube, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("youtube_dl$extractor$peertube", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
