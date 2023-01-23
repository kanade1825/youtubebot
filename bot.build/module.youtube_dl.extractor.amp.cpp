/* Generated code for Python module 'youtube_dl.extractor.amp'
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

/* The "module_youtube_dl$extractor$amp" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_youtube_dl$extractor$amp;
PyDictObject *moduledict_youtube_dl$extractor$amp;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[110];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[110];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("youtube_dl.extractor.amp"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 110; i++) {
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
void checkModuleConstants_youtube_dl$extractor$amp(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 110; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f11cf461e72df566df17a0b52bc752a6;
static PyCodeObject *codeobj_966dcac1f605d21563733d1a91f808fb;
static PyCodeObject *codeobj_5363c0f7ce685f07426734651e4c32de;
static PyCodeObject *codeobj_47eaf8d95e8b80b8a5ba3f7b61c70904;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[104]); CHECK_OBJECT(module_filename_obj);
    codeobj_f11cf461e72df566df17a0b52bc752a6 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[105], mod_consts[105], NULL, NULL, 0, 0, 0);
    codeobj_966dcac1f605d21563733d1a91f808fb = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[93], mod_consts[93], mod_consts[106], NULL, 0, 0, 0);
    codeobj_5363c0f7ce685f07426734651e4c32de = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[101], mod_consts[101], mod_consts[107], NULL, 2, 0, 0);
    codeobj_47eaf8d95e8b80b8a5ba3f7b61c70904 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, mod_consts[12], mod_consts[12], mod_consts[108], mod_consts[5], 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$amp$$$function__1__extract_feed_info();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$amp$$$function__1__extract_feed_info$$$function__1_get_media_node(PyObject *defaults, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_youtube_dl$extractor$amp$$$function__1__extract_feed_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_feed = NULL;
    struct Nuitka_CellObject *var_item = Nuitka_Cell_Empty();
    PyObject *var_video_id = NULL;
    PyObject *var_get_media_node = NULL;
    PyObject *var_thumbnails = NULL;
    PyObject *var_media_thumbnail = NULL;
    PyObject *var_thumbnail_data = NULL;
    PyObject *var_thumbnail = NULL;
    PyObject *var_thumbnail_url = NULL;
    PyObject *var_subtitles = NULL;
    PyObject *var_media_subtitle = NULL;
    PyObject *var_subtitle_data = NULL;
    PyObject *var_subtitle = NULL;
    PyObject *var_subtitle_href = NULL;
    PyObject *var_formats = NULL;
    PyObject *var_media_content = NULL;
    PyObject *var_media_data = NULL;
    PyObject *var_media = NULL;
    PyObject *var_media_url = NULL;
    PyObject *var_ext = NULL;
    PyObject *var_timestamp = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    struct Nuitka_FrameObject *frame_5363c0f7ce685f07426734651e4c32de;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5363c0f7ce685f07426734651e4c32de = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5363c0f7ce685f07426734651e4c32de)) {
        Py_XDECREF(cache_frame_5363c0f7ce685f07426734651e4c32de);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5363c0f7ce685f07426734651e4c32de == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5363c0f7ce685f07426734651e4c32de = MAKE_FUNCTION_FRAME(codeobj_5363c0f7ce685f07426734651e4c32de, module_youtube_dl$extractor$amp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5363c0f7ce685f07426734651e4c32de->m_type_description == NULL);
    frame_5363c0f7ce685f07426734651e4c32de = cache_frame_5363c0f7ce685f07426734651e4c32de;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_5363c0f7ce685f07426734651e4c32de);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5363c0f7ce685f07426734651e4c32de) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_value_1 = par_url;
        tmp_args_element_value_2 = Py_None;
        tmp_args_element_value_3 = mod_consts[1];
        tmp_args_element_value_4 = mod_consts[2];
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 19;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_1,
                mod_consts[0],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_feed == NULL);
        var_feed = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(var_feed);
        tmp_expression_value_2 = var_feed;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[4];
        tmp_call_arg_element_2 = MAKE_DICT_EMPTY();
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 22;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[5]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_item) == NULL);
        PyCell_SET(var_item, tmp_assign_source_2);

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_item));
        tmp_operand_value_1 = Nuitka_Cell_GET(var_item);
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooocooooooooooooooooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[7];
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[8]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_1;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_feed);
            tmp_expression_value_4 = var_feed;
            tmp_subscript_value_1 = mod_consts[9];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_1 = "ooocooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 24;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 24;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooocooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(var_item));
        tmp_expression_value_5 = Nuitka_Cell_GET(var_item);
        tmp_subscript_value_2 = mod_consts[10];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_video_id == NULL);
        var_video_id = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_defaults_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_defaults_1 = mod_consts[11];
        Py_INCREF(tmp_defaults_1);

        tmp_closure_1[0] = var_item;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_4 = MAKE_FUNCTION_youtube_dl$extractor$amp$$$function__1__extract_feed_info$$$function__1_get_media_node(tmp_defaults_1, tmp_closure_1);

        assert(var_get_media_node == NULL);
        var_get_media_node = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_LIST_EMPTY(0);
        assert(var_thumbnails == NULL);
        var_thumbnails = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_4;
        CHECK_OBJECT(var_get_media_node);
        tmp_called_value_4 = var_get_media_node;
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 34;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[14]);

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_media_thumbnail == NULL);
        var_media_thumbnail = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_media_thumbnail);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_media_thumbnail);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooocooooooooooooooooooo";
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
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_media_thumbnail);
        tmp_isinstance_inst_1 = var_media_thumbnail;
        tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_media_thumbnail);
        tmp_list_element_1 = var_media_thumbnail;
        tmp_assign_source_7 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assign_source_7, 0, tmp_list_element_1);
        {
            PyObject *old = var_media_thumbnail;
            assert(old != NULL);
            var_media_thumbnail = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_media_thumbnail);
        tmp_iter_arg_1 = var_media_thumbnail;
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooocooooooooooooooooooo";
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
                type_description_1 = "ooocooooooooooooooooooo";
                exception_lineno = 38;
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
            PyObject *old = var_thumbnail_data;
            var_thumbnail_data = tmp_assign_source_10;
            Py_INCREF(var_thumbnail_data);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_arg_element_3;
        PyObject *tmp_call_arg_element_4;
        CHECK_OBJECT(var_thumbnail_data);
        tmp_expression_value_6 = var_thumbnail_data;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[3]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_call_arg_element_3 = mod_consts[15];
        tmp_call_arg_element_4 = MAKE_DICT_EMPTY();
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = {tmp_call_arg_element_3, tmp_call_arg_element_4};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_call_arg_element_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_thumbnail;
            var_thumbnail = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_thumbnail);
        tmp_expression_value_7 = var_thumbnail;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[3]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 40;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[17]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 40;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_thumbnail_url;
            var_thumbnail_url = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_thumbnail_url);
        tmp_operand_value_2 = var_thumbnail_url;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    goto loop_start_1;
    branch_no_4:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        if (var_thumbnails == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = var_thumbnails;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[19]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_1 = mod_consts[20];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_thumbnail_url);
        tmp_args_element_value_8 = var_thumbnail_url;
        tmp_args_element_value_9 = mod_consts[23];
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_dict_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[22],
                call_args
            );
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 44;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_7 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_10;
            tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[24];
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(var_thumbnail);
            tmp_expression_value_9 = var_thumbnail;
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[3]);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 45;
            tmp_args_element_value_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[26]);

            Py_DECREF(tmp_called_value_10);
            if (tmp_args_element_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 45;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[27];
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(var_thumbnail);
            tmp_expression_value_10 = var_thumbnail;
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[3]);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 46;
            tmp_args_element_value_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_12, mod_consts[28]);

            Py_DECREF(tmp_called_value_12);
            if (tmp_args_element_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 46;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_7);
        goto try_except_handler_2;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 43;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 38;
        type_description_1 = "ooocooooooooooooooooooo";
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
    branch_no_2:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY();
        assert(var_subtitles == NULL);
        var_subtitles = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_13;
        CHECK_OBJECT(var_get_media_node);
        tmp_called_value_13 = var_get_media_node;
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 50;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[29]);

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_media_subtitle == NULL);
        var_media_subtitle = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_media_subtitle);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_media_subtitle);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_media_subtitle);
        tmp_isinstance_inst_2 = var_media_subtitle;
        tmp_isinstance_cls_2 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_list_element_2;
        CHECK_OBJECT(var_media_subtitle);
        tmp_list_element_2 = var_media_subtitle;
        tmp_assign_source_15 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assign_source_15, 0, tmp_list_element_2);
        {
            PyObject *old = var_media_subtitle;
            assert(old != NULL);
            var_media_subtitle = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_media_subtitle);
        tmp_iter_arg_2 = var_media_subtitle;
        tmp_assign_source_16 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_16;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_17 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooocooooooooooooooooooo";
                exception_lineno = 54;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_18 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_subtitle_data;
            var_subtitle_data = tmp_assign_source_18;
            Py_INCREF(var_subtitle_data);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_arg_element_5;
        PyObject *tmp_call_arg_element_6;
        CHECK_OBJECT(var_subtitle_data);
        tmp_expression_value_11 = var_subtitle_data;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[3]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_call_arg_element_5 = mod_consts[15];
        tmp_call_arg_element_6 = MAKE_DICT_EMPTY();
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_call_arg_element_5, tmp_call_arg_element_6};
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_call_arg_element_6);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_subtitle;
            var_subtitle = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_12;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_subtitle);
        tmp_expression_value_12 = var_subtitle;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[3]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 56;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_16, mod_consts[30]);

        Py_DECREF(tmp_called_value_16);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 56;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_subtitle_href;
            var_subtitle_href = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_3;
        CHECK_OBJECT(var_subtitle_href);
        tmp_operand_value_3 = var_subtitle_href;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    goto loop_start_2;
    branch_no_7:;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_13;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        if (var_subtitles == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_14 = var_subtitles;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[32]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_subtitle);
        tmp_expression_value_15 = var_subtitle;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[3]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 59;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 59;
        tmp_or_left_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_19, mod_consts[33]);

        Py_DECREF(tmp_called_value_19);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 59;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 59;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[34];
        Py_INCREF(tmp_or_right_value_1);
        tmp_args_element_value_13 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_value_13 = tmp_or_left_value_1;
        or_end_1:;
        tmp_args_element_value_14 = MAKE_LIST_EMPTY(0);
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_expression_value_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[19]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_dict_key_2 = mod_consts[20];
        CHECK_OBJECT(var_subtitle_href);
        tmp_dict_value_2 = var_subtitle_href;
        tmp_args_element_value_15 = _PyDict_NewPresized( 2 );
        {
            int tmp_or_left_truth_2;
            PyObject *tmp_or_left_value_2;
            PyObject *tmp_or_right_value_2;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_called_value_21;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_17;
            tmp_res = PyDict_SetItem(tmp_args_element_value_15, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[35];
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            CHECK_OBJECT(var_subtitle);
            tmp_expression_value_16 = var_subtitle;
            tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[3]);
            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 61;
            tmp_args_element_value_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_21, mod_consts[37]);

            Py_DECREF(tmp_called_value_21);
            if (tmp_args_element_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 61;
            tmp_or_left_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_or_left_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
            if (tmp_or_left_truth_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_or_left_value_2);

                exception_lineno = 61;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            if (tmp_or_left_truth_2 == 1) {
                goto or_left_2;
            } else {
                goto or_right_2;
            }
            or_right_2:;
            Py_DECREF(tmp_or_left_value_2);
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            CHECK_OBJECT(var_subtitle_href);
            tmp_args_element_value_17 = var_subtitle_href;
            frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 61;
            tmp_or_right_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_17);
            if (tmp_or_right_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            tmp_dict_value_2 = tmp_or_left_value_2;
            or_end_2:;
            tmp_res = PyDict_SetItem(tmp_args_element_value_15, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_15);
        goto try_except_handler_3;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 59;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 54;
        type_description_1 = "ooocooooooooooooooooooo";
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
    branch_no_5:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_LIST_EMPTY(0);
        assert(var_formats == NULL);
        var_formats = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_23;
        CHECK_OBJECT(var_get_media_node);
        tmp_called_value_23 = var_get_media_node;
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 65;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_23, mod_consts[39]);

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_media_content == NULL);
        var_media_content = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(var_media_content);
        tmp_isinstance_inst_3 = var_media_content;
        tmp_isinstance_cls_3 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_list_element_3;
        CHECK_OBJECT(var_media_content);
        tmp_list_element_3 = var_media_content;
        tmp_assign_source_23 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assign_source_23, 0, tmp_list_element_3);
        {
            PyObject *old = var_media_content;
            assert(old != NULL);
            var_media_content = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(var_media_content);
        tmp_iter_arg_3 = var_media_content;
        tmp_assign_source_24 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_24;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_25 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooocooooooooooooooooooo";
                exception_lineno = 68;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_26 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_media_data;
            var_media_data = tmp_assign_source_26;
            Py_INCREF(var_media_data);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_arg_element_7;
        PyObject *tmp_call_arg_element_8;
        CHECK_OBJECT(var_media_data);
        tmp_expression_value_17 = var_media_data;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[3]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_call_arg_element_7 = mod_consts[15];
        tmp_call_arg_element_8 = MAKE_DICT_EMPTY();
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_call_arg_element_7, tmp_call_arg_element_8};
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_24, call_args);
        }

        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_call_arg_element_8);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_media;
            var_media = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_18;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_media);
        tmp_expression_value_18 = var_media;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[3]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 70;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_26, mod_consts[17]);

        Py_DECREF(tmp_called_value_26);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 70;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_media_url;
            var_media_url = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_4;
        CHECK_OBJECT(var_media_url);
        tmp_operand_value_4 = var_media_url;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    goto loop_start_3;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_29;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_20;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_media);
        tmp_expression_value_19 = var_media;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[3]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 73;
        tmp_args_element_value_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_28, mod_consts[37]);

        Py_DECREF(tmp_called_value_28);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 73;
        tmp_or_left_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_or_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_3);

            exception_lineno = 73;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        Py_DECREF(tmp_or_left_value_3);
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_media_url);
        tmp_args_element_value_20 = var_media_url;
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 73;
        tmp_or_right_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_20);
        if (tmp_or_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_29 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_assign_source_29 = tmp_or_left_value_3;
        or_end_3:;
        {
            PyObject *old = var_ext;
            var_ext = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_ext);
        tmp_cmp_expr_left_1 = var_ext;
        tmp_cmp_expr_right_1 = mod_consts[40];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_kwargs_value_1;
        if (var_formats == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_20 = var_formats;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[42]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_30);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_21 = par_self;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[43]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 75;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_media_url == NULL) {
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_31);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_add_expr_left_1 = var_media_url;
        tmp_add_expr_right_1 = mod_consts[45];
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 76;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_2);
        if (var_video_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 77;
            type_description_1 = "ooocooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = var_video_id;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_value_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[47]);
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 75;
        tmp_args_element_value_21 = CALL_FUNCTION(tmp_called_value_31, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 75;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 75;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_ext);
        tmp_cmp_expr_left_2 = var_ext;
        tmp_cmp_expr_right_2 = mod_consts[48];
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_2;
        if (var_formats == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_22 = var_formats;
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[42]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_32);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_23 = par_self;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[49]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 79;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_media_url == NULL) {
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_33);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_tuple_element_3 = var_media_url;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
        if (var_video_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;
            type_description_1 = "ooocooooooooooooooooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_3 = var_video_id;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[50];
        PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_value_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[51]);
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 79;
        tmp_args_element_value_22 = CALL_FUNCTION(tmp_called_value_33, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 79;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 79;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_arg_element_9;
        PyObject *tmp_call_arg_element_10;
        PyObject *tmp_call_arg_element_11;
        PyObject *tmp_call_arg_element_12;
        if (var_formats == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_24 = var_formats;
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[19]);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_dict_key_3 = mod_consts[52];
        CHECK_OBJECT(var_media_data);
        tmp_expression_value_27 = var_media_data;
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[3]);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 83;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_call_arg_element_9 = mod_consts[53];
        tmp_call_arg_element_10 = MAKE_DICT_EMPTY();
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_call_arg_element_9, tmp_call_arg_element_10};
            tmp_expression_value_26 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_37, call_args);
        }

        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_call_arg_element_10);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 83;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[3]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 83;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_call_arg_element_11 = mod_consts[15];
        tmp_call_arg_element_12 = MAKE_DICT_EMPTY();
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_call_arg_element_11, tmp_call_arg_element_12};
            tmp_expression_value_25 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_36, call_args);
        }

        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_call_arg_element_12);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 83;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[3]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 83;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 83;
        tmp_dict_value_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_35, mod_consts[54]);

        Py_DECREF(tmp_called_value_35);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 83;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_23 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_called_value_39;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_called_value_41;
            PyObject *tmp_expression_value_29;
            tmp_res = PyDict_SetItem(tmp_args_element_value_23, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[20];
            if (var_media_url == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 84;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_3;
            }

            tmp_dict_value_3 = var_media_url;
            tmp_res = PyDict_SetItem(tmp_args_element_value_23, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[55];
            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_38 == NULL)) {
                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_3;
            }
            CHECK_OBJECT(var_media);
            tmp_expression_value_28 = var_media;
            tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[3]);
            if (tmp_called_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_3;
            }
            frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 85;
            tmp_args_element_value_24 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_39, mod_consts[56]);

            Py_DECREF(tmp_called_value_39);
            if (tmp_args_element_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_3;
            }
            frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 85;
            tmp_dict_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_23, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[57];
            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_40 == NULL)) {
                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_called_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_3;
            }
            CHECK_OBJECT(var_media);
            tmp_expression_value_29 = var_media;
            tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[3]);
            if (tmp_called_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_3;
            }
            frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 86;
            tmp_args_element_value_25 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_41, mod_consts[58]);

            Py_DECREF(tmp_called_value_41);
            if (tmp_args_element_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_3;
            }
            frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 86;
            tmp_dict_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_23, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[35];
            CHECK_OBJECT(var_ext);
            tmp_dict_value_3 = var_ext;
            tmp_res = PyDict_SetItem(tmp_args_element_value_23, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_23);
        goto try_except_handler_4;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 82;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_end_11:;
    branch_end_10:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 68;
        type_description_1 = "ooocooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
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

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_26;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_30 = par_self;
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[59]);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_formats == NULL) {
            Py_DECREF(tmp_called_value_42);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_26 = var_formats;
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 90;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_42);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_30;
        int tmp_or_left_truth_4;
        PyObject *tmp_or_left_value_4;
        PyObject *tmp_or_right_value_4;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_32;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_item));
        tmp_expression_value_31 = Nuitka_Cell_GET(var_item);
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[3]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 92;
        tmp_args_element_value_27 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_44, mod_consts[61]);

        Py_DECREF(tmp_called_value_44);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = mod_consts[62];
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_or_left_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_43, call_args);
        }

        Py_DECREF(tmp_args_element_value_27);
        if (tmp_or_left_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
        if (tmp_or_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_4);

            exception_lineno = 92;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        Py_DECREF(tmp_or_left_value_4);
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_item));
        tmp_expression_value_32 = Nuitka_Cell_GET(var_item);
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[3]);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 92;
        tmp_args_element_value_29 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_46, mod_consts[64]);

        Py_DECREF(tmp_called_value_46);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 92;
        tmp_or_right_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_29);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_or_right_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_30 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_assign_source_30 = tmp_or_left_value_4;
        or_end_4:;
        assert(var_timestamp == NULL);
        var_timestamp = tmp_assign_source_30;
    }
    {
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_4 = mod_consts[65];
        if (var_video_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_4 = var_video_id;
        tmp_return_value = _PyDict_NewPresized( 8 );
        {
            PyObject *tmp_called_value_47;
            PyObject *tmp_called_value_48;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_called_value_50;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_called_value_51;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_call_arg_element_13;
            PyObject *tmp_call_arg_element_14;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[66];
            CHECK_OBJECT(var_get_media_node);
            tmp_called_value_47 = var_get_media_node;
            frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 96;
            tmp_dict_value_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_47, mod_consts[67]);

            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[68];
            CHECK_OBJECT(var_get_media_node);
            tmp_called_value_48 = var_get_media_node;
            frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 97;
            tmp_dict_value_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_48, mod_consts[69]);

            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[18];
            if (var_thumbnails == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 98;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_4;
            }

            tmp_dict_value_4 = var_thumbnails;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[70];
            CHECK_OBJECT(var_timestamp);
            tmp_dict_value_4 = var_timestamp;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[71];
            tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_49 == NULL)) {
                tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_called_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_4;
            }
            CHECK_OBJECT(var_media_content);
            tmp_expression_value_35 = var_media_content;
            tmp_subscript_value_3 = mod_consts[72];
            tmp_expression_value_34 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_35, tmp_subscript_value_3, 0);
            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[3]);
            Py_DECREF(tmp_expression_value_34);
            if (tmp_called_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_call_arg_element_13 = mod_consts[15];
            tmp_call_arg_element_14 = MAKE_DICT_EMPTY();
            frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 100;
            {
                PyObject *call_args[] = {tmp_call_arg_element_13, tmp_call_arg_element_14};
                tmp_expression_value_33 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_51, call_args);
            }

            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_call_arg_element_14);
            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[3]);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_called_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_4;
            }
            frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 100;
            tmp_args_element_value_30 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_50, mod_consts[73]);

            Py_DECREF(tmp_called_value_50);
            if (tmp_args_element_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_4;
            }
            frame_5363c0f7ce685f07426734651e4c32de->m_frame.f_lineno = 100;
            tmp_dict_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[31];
            if (var_subtitles == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 101;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_4;
            }

            tmp_dict_value_4 = var_subtitles;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[41];
            if (var_formats == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 102;
                type_description_1 = "ooocooooooooooooooooooo";
                goto dict_build_exception_4;
            }

            tmp_dict_value_4 = var_formats;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5363c0f7ce685f07426734651e4c32de);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5363c0f7ce685f07426734651e4c32de);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5363c0f7ce685f07426734651e4c32de);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5363c0f7ce685f07426734651e4c32de, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5363c0f7ce685f07426734651e4c32de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5363c0f7ce685f07426734651e4c32de, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5363c0f7ce685f07426734651e4c32de,
        type_description_1,
        par_self,
        par_url,
        var_feed,
        var_item,
        var_video_id,
        var_get_media_node,
        var_thumbnails,
        var_media_thumbnail,
        var_thumbnail_data,
        var_thumbnail,
        var_thumbnail_url,
        var_subtitles,
        var_media_subtitle,
        var_subtitle_data,
        var_subtitle,
        var_subtitle_href,
        var_formats,
        var_media_content,
        var_media_data,
        var_media,
        var_media_url,
        var_ext,
        var_timestamp
    );


    // Release cached frame if used for exception.
    if (frame_5363c0f7ce685f07426734651e4c32de == cache_frame_5363c0f7ce685f07426734651e4c32de) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5363c0f7ce685f07426734651e4c32de);
        cache_frame_5363c0f7ce685f07426734651e4c32de = NULL;
    }

    assertFrameObject(frame_5363c0f7ce685f07426734651e4c32de);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_feed);
    Py_DECREF(var_feed);
    var_feed = NULL;
    CHECK_OBJECT(var_item);
    Py_DECREF(var_item);
    var_item = NULL;
    Py_XDECREF(var_video_id);
    var_video_id = NULL;
    CHECK_OBJECT(var_get_media_node);
    Py_DECREF(var_get_media_node);
    var_get_media_node = NULL;
    Py_XDECREF(var_thumbnails);
    var_thumbnails = NULL;
    Py_XDECREF(var_media_thumbnail);
    var_media_thumbnail = NULL;
    Py_XDECREF(var_thumbnail_data);
    var_thumbnail_data = NULL;
    Py_XDECREF(var_thumbnail);
    var_thumbnail = NULL;
    Py_XDECREF(var_thumbnail_url);
    var_thumbnail_url = NULL;
    Py_XDECREF(var_subtitles);
    var_subtitles = NULL;
    Py_XDECREF(var_media_subtitle);
    var_media_subtitle = NULL;
    Py_XDECREF(var_subtitle_data);
    var_subtitle_data = NULL;
    Py_XDECREF(var_subtitle);
    var_subtitle = NULL;
    Py_XDECREF(var_subtitle_href);
    var_subtitle_href = NULL;
    Py_XDECREF(var_formats);
    var_formats = NULL;
    CHECK_OBJECT(var_media_content);
    Py_DECREF(var_media_content);
    var_media_content = NULL;
    Py_XDECREF(var_media_data);
    var_media_data = NULL;
    Py_XDECREF(var_media);
    var_media = NULL;
    Py_XDECREF(var_media_url);
    var_media_url = NULL;
    Py_XDECREF(var_ext);
    var_ext = NULL;
    CHECK_OBJECT(var_timestamp);
    Py_DECREF(var_timestamp);
    var_timestamp = NULL;
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

    Py_XDECREF(var_feed);
    var_feed = NULL;
    CHECK_OBJECT(var_item);
    Py_DECREF(var_item);
    var_item = NULL;
    Py_XDECREF(var_video_id);
    var_video_id = NULL;
    Py_XDECREF(var_get_media_node);
    var_get_media_node = NULL;
    Py_XDECREF(var_thumbnails);
    var_thumbnails = NULL;
    Py_XDECREF(var_media_thumbnail);
    var_media_thumbnail = NULL;
    Py_XDECREF(var_thumbnail_data);
    var_thumbnail_data = NULL;
    Py_XDECREF(var_thumbnail);
    var_thumbnail = NULL;
    Py_XDECREF(var_thumbnail_url);
    var_thumbnail_url = NULL;
    Py_XDECREF(var_subtitles);
    var_subtitles = NULL;
    Py_XDECREF(var_media_subtitle);
    var_media_subtitle = NULL;
    Py_XDECREF(var_subtitle_data);
    var_subtitle_data = NULL;
    Py_XDECREF(var_subtitle);
    var_subtitle = NULL;
    Py_XDECREF(var_subtitle_href);
    var_subtitle_href = NULL;
    Py_XDECREF(var_formats);
    var_formats = NULL;
    Py_XDECREF(var_media_content);
    var_media_content = NULL;
    Py_XDECREF(var_media_data);
    var_media_data = NULL;
    Py_XDECREF(var_media);
    var_media = NULL;
    Py_XDECREF(var_media_url);
    var_media_url = NULL;
    Py_XDECREF(var_ext);
    var_ext = NULL;
    Py_XDECREF(var_timestamp);
    var_timestamp = NULL;
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


static PyObject *impl_youtube_dl$extractor$amp$$$function__1__extract_feed_info$$$function__1_get_media_node(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_default = python_pars[1];
    PyObject *var_media_name = NULL;
    PyObject *var_media_group = NULL;
    struct Nuitka_FrameObject *frame_47eaf8d95e8b80b8a5ba3f7b61c70904;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_47eaf8d95e8b80b8a5ba3f7b61c70904 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_47eaf8d95e8b80b8a5ba3f7b61c70904)) {
        Py_XDECREF(cache_frame_47eaf8d95e8b80b8a5ba3f7b61c70904);

#if _DEBUG_REFCOUNTS
        if (cache_frame_47eaf8d95e8b80b8a5ba3f7b61c70904 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_47eaf8d95e8b80b8a5ba3f7b61c70904 = MAKE_FUNCTION_FRAME(codeobj_47eaf8d95e8b80b8a5ba3f7b61c70904, module_youtube_dl$extractor$amp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_47eaf8d95e8b80b8a5ba3f7b61c70904->m_type_description == NULL);
    frame_47eaf8d95e8b80b8a5ba3f7b61c70904 = cache_frame_47eaf8d95e8b80b8a5ba3f7b61c70904;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_47eaf8d95e8b80b8a5ba3f7b61c70904);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_47eaf8d95e8b80b8a5ba3f7b61c70904) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[74];
        CHECK_OBJECT(par_name);
        tmp_mod_expr_right_1 = par_name;
        tmp_assign_source_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_media_name == NULL);
        var_media_name = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 30;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_47eaf8d95e8b80b8a5ba3f7b61c70904->m_frame.f_lineno = 30;
        tmp_or_left_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[76]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 30;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 30;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_or_right_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_2 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_media_group == NULL);
        var_media_group = tmp_assign_source_2;
    }
    {
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_media_group);
        tmp_expression_value_2 = var_media_group;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_media_name);
        tmp_args_element_value_1 = var_media_name;
        frame_47eaf8d95e8b80b8a5ba3f7b61c70904->m_frame.f_lineno = 31;
        tmp_or_left_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 31;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_media_name);
        tmp_args_element_value_2 = var_media_name;
        frame_47eaf8d95e8b80b8a5ba3f7b61c70904->m_frame.f_lineno = 31;
        tmp_or_left_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_or_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_3);

            exception_lineno = 31;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        Py_DECREF(tmp_or_left_value_3);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_3 = par_name;
        CHECK_OBJECT(par_default);
        tmp_args_element_value_4 = par_default;
        frame_47eaf8d95e8b80b8a5ba3f7b61c70904->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_or_right_value_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_or_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_return_value = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_return_value = tmp_or_left_value_2;
        or_end_2:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_47eaf8d95e8b80b8a5ba3f7b61c70904);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_47eaf8d95e8b80b8a5ba3f7b61c70904);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_47eaf8d95e8b80b8a5ba3f7b61c70904);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_47eaf8d95e8b80b8a5ba3f7b61c70904, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_47eaf8d95e8b80b8a5ba3f7b61c70904->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47eaf8d95e8b80b8a5ba3f7b61c70904, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_47eaf8d95e8b80b8a5ba3f7b61c70904,
        type_description_1,
        par_name,
        par_default,
        var_media_name,
        var_media_group,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_47eaf8d95e8b80b8a5ba3f7b61c70904 == cache_frame_47eaf8d95e8b80b8a5ba3f7b61c70904) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_47eaf8d95e8b80b8a5ba3f7b61c70904);
        cache_frame_47eaf8d95e8b80b8a5ba3f7b61c70904 = NULL;
    }

    assertFrameObject(frame_47eaf8d95e8b80b8a5ba3f7b61c70904);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_media_name);
    Py_DECREF(var_media_name);
    var_media_name = NULL;
    CHECK_OBJECT(var_media_group);
    Py_DECREF(var_media_group);
    var_media_group = NULL;
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

    Py_XDECREF(var_media_name);
    var_media_name = NULL;
    Py_XDECREF(var_media_group);
    var_media_group = NULL;
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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$amp$$$function__1__extract_feed_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$amp$$$function__1__extract_feed_info,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_5363c0f7ce685f07426734651e4c32de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$amp,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$amp$$$function__1__extract_feed_info$$$function__1_get_media_node(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$amp$$$function__1__extract_feed_info$$$function__1_get_media_node,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[13],
#endif
        codeobj_47eaf8d95e8b80b8a5ba3f7b61c70904,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$amp,
        NULL,
        closure,
        1
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

function_impl_code functable_youtube_dl$extractor$amp[] = {
    impl_youtube_dl$extractor$amp$$$function__1__extract_feed_info$$$function__1_get_media_node,
    impl_youtube_dl$extractor$amp$$$function__1__extract_feed_info,
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

    function_impl_code *current = functable_youtube_dl$extractor$amp;
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

    if (offset > sizeof(functable_youtube_dl$extractor$amp) || offset < 0) {
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
        functable_youtube_dl$extractor$amp[offset],
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
        module_youtube_dl$extractor$amp,
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
PyObject *modulecode_youtube_dl$extractor$amp(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("youtube_dl.extractor.amp");

    // Store the module for future use.
    module_youtube_dl$extractor$amp = module;

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
        PRINT_STRING("youtube_dl.extractor.amp: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl.extractor.amp: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl.extractor.amp: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inityoutube_dl$extractor$amp\n");

    moduledict_youtube_dl$extractor$amp = MODULE_DICT(module_youtube_dl$extractor$amp);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_youtube_dl$extractor$amp,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$amp,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[109]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$amp,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$amp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$amp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_youtube_dl$extractor$amp);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_youtube_dl$extractor$amp);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_f11cf461e72df566df17a0b52bc752a6;
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
    PyObject *locals_youtube_dl$extractor$amp$$$class__1_AMPIE_16 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_966dcac1f605d21563733d1a91f808fb_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_966dcac1f605d21563733d1a91f808fb_2 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_f11cf461e72df566df17a0b52bc752a6 = MAKE_MODULE_FRAME(codeobj_f11cf461e72df566df17a0b52bc752a6, module_youtube_dl$extractor$amp);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_f11cf461e72df566df17a0b52bc752a6);
    assert(Py_REFCNT(frame_f11cf461e72df566df17a0b52bc752a6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[80], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[81], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[83]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[84];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_youtube_dl$extractor$amp;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[85];
        tmp_level_value_1 = mod_consts[86];
        frame_f11cf461e72df566df17a0b52bc752a6->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_youtube_dl$extractor$amp,
                mod_consts[87],
                mod_consts[72]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[87]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[88];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_youtube_dl$extractor$amp;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[89];
        tmp_level_value_2 = mod_consts[90];
        frame_f11cf461e72df566df17a0b52bc752a6->m_frame.f_lineno = 5;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_youtube_dl$extractor$amp,
                mod_consts[38],
                mod_consts[72]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[38]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_youtube_dl$extractor$amp,
                mod_consts[6],
                mod_consts[72]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[6]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_youtube_dl$extractor$amp,
                mod_consts[25],
                mod_consts[72]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[25]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_youtube_dl$extractor$amp,
                mod_consts[36],
                mod_consts[72]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[36]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_youtube_dl$extractor$amp,
                mod_consts[63],
                mod_consts[72]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[63]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_youtube_dl$extractor$amp,
                mod_consts[60],
                mod_consts[72]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[60]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_youtube_dl$extractor$amp,
                mod_consts[16],
                mod_consts[72]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[16]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        tmp_assign_source_14 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_14, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_15 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
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
        tmp_key_value_1 = mod_consts[91];
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
        tmp_key_value_2 = mod_consts[91];
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


            exception_lineno = 16;

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
        tmp_subscript_value_1 = mod_consts[72];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

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
        tmp_assign_source_17 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[91];
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
    tmp_dictdel_key = mod_consts[91];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 16;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[92]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[92]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[93];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_f11cf461e72df566df17a0b52bc752a6->m_frame.f_lineno = 16;
        tmp_assign_source_18 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_18;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[94]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

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
        tmp_mod_expr_left_1 = mod_consts[95];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[96];
        tmp_getattr_default_1 = mod_consts[97];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[96]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

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


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 16;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_19;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_youtube_dl$extractor$amp$$$class__1_AMPIE_16 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$amp$$$class__1_AMPIE_16, mod_consts[99], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$amp$$$class__1_AMPIE_16, mod_consts[100], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_966dcac1f605d21563733d1a91f808fb_2)) {
            Py_XDECREF(cache_frame_966dcac1f605d21563733d1a91f808fb_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_966dcac1f605d21563733d1a91f808fb_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_966dcac1f605d21563733d1a91f808fb_2 = MAKE_CLASS_FRAME(codeobj_966dcac1f605d21563733d1a91f808fb, module_youtube_dl$extractor$amp, NULL, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_966dcac1f605d21563733d1a91f808fb_2->m_type_description == NULL);
        frame_966dcac1f605d21563733d1a91f808fb_2 = cache_frame_966dcac1f605d21563733d1a91f808fb_2;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_966dcac1f605d21563733d1a91f808fb_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_966dcac1f605d21563733d1a91f808fb_2) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$amp$$$function__1__extract_feed_info();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$amp$$$class__1_AMPIE_16, mod_consts[101], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_966dcac1f605d21563733d1a91f808fb_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_966dcac1f605d21563733d1a91f808fb_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_966dcac1f605d21563733d1a91f808fb_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_966dcac1f605d21563733d1a91f808fb_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_966dcac1f605d21563733d1a91f808fb_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_966dcac1f605d21563733d1a91f808fb_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_966dcac1f605d21563733d1a91f808fb_2 == cache_frame_966dcac1f605d21563733d1a91f808fb_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_966dcac1f605d21563733d1a91f808fb_2);
            cache_frame_966dcac1f605d21563733d1a91f808fb_2 = NULL;
        }

        assertFrameObject(frame_966dcac1f605d21563733d1a91f808fb_2);

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
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$amp$$$class__1_AMPIE_16, mod_consts[103], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[93];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_youtube_dl$extractor$amp$$$class__1_AMPIE_16;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_f11cf461e72df566df17a0b52bc752a6->m_frame.f_lineno = 16;
            tmp_assign_source_21 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_21;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_20 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_20);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_youtube_dl$extractor$amp$$$class__1_AMPIE_16);
        locals_youtube_dl$extractor$amp$$$class__1_AMPIE_16 = NULL;
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

        Py_DECREF(locals_youtube_dl$extractor$amp$$$class__1_AMPIE_16);
        locals_youtube_dl$extractor$amp$$$class__1_AMPIE_16 = NULL;
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
        exception_lineno = 16;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_20);
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
    RESTORE_FRAME_EXCEPTION(frame_f11cf461e72df566df17a0b52bc752a6);
#endif
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f11cf461e72df566df17a0b52bc752a6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f11cf461e72df566df17a0b52bc752a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f11cf461e72df566df17a0b52bc752a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f11cf461e72df566df17a0b52bc752a6, exception_lineno);
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
    PGO_onModuleExit("youtube_dl.extractor.amp", false);

    Py_INCREF(module_youtube_dl$extractor$amp);
    return module_youtube_dl$extractor$amp;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("youtube_dl$extractor$amp", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
