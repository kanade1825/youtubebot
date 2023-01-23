/* Generated code for Python module 'youtube_dl.options'
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

/* The "module_youtube_dl$options" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_youtube_dl$options;
PyDictObject *moduledict_youtube_dl$options;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[362];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[362];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("youtube_dl.options"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 362; i++) {
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
void checkModuleConstants_youtube_dl$options(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 362; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_76192d014bd842f7f6462b7a9f1933ad;
static PyCodeObject *codeobj_da0d7566e30656d3ed069b3bf6c5dbf4;
static PyCodeObject *codeobj_9688cc6e7bae08d9ad5b2bb70faeb7ad;
static PyCodeObject *codeobj_8fdb15d3f5efa3daeaefb842285c615c;
static PyCodeObject *codeobj_69d308683789dee1dbb597fdcd2d97fd;
static PyCodeObject *codeobj_95276df0759b2f6969d7e7ac227a555f;
static PyCodeObject *codeobj_8d0407fa64563534a58613bbe839fff4;
static PyCodeObject *codeobj_1fa6425b80870b3e54edc46473d40426;
static PyCodeObject *codeobj_0aa439a2ce0fa9277d1a52bef21e220f;
static PyCodeObject *codeobj_e818ad2fe263b2cc2deafdc13ad497ff;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[349]); CHECK_OBJECT(module_filename_obj);
    codeobj_76192d014bd842f7f6462b7a9f1933ad = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[14], mod_consts[14], mod_consts[350], NULL, 1, 0, 0);
    codeobj_da0d7566e30656d3ed069b3bf6c5dbf4 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[351], mod_consts[351], NULL, NULL, 0, 0, 0);
    codeobj_9688cc6e7bae08d9ad5b2bb70faeb7ad = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[28], mod_consts[28], mod_consts[352], NULL, 4, 0, 0);
    codeobj_8fdb15d3f5efa3daeaefb842285c615c = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[26], mod_consts[26], mod_consts[353], NULL, 1, 0, 0);
    codeobj_69d308683789dee1dbb597fdcd2d97fd = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[300], mod_consts[300], mod_consts[354], NULL, 1, 0, 0);
    codeobj_95276df0759b2f6969d7e7ac227a555f = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[21], mod_consts[21], mod_consts[355], NULL, 2, 0, 0);
    codeobj_8d0407fa64563534a58613bbe839fff4 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, mod_consts[23], mod_consts[23], mod_consts[356], mod_consts[357], 0, 0, 0);
    codeobj_1fa6425b80870b3e54edc46473d40426 = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, mod_consts[6], mod_consts[6], mod_consts[358], mod_consts[359], 1, 0, 0);
    codeobj_0aa439a2ce0fa9277d1a52bef21e220f = MAKE_CODE_OBJECT(module_filename_obj, 886, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[276], mod_consts[276], mod_consts[360], NULL, 1, 0, 0);
    codeobj_e818ad2fe263b2cc2deafdc13ad497ff = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[348], mod_consts[348], mod_consts[361], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_youtube_dl$options$$$function__1__hide_login_info$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_youtube_dl$options$$$function__1__hide_login_info();


static PyObject *MAKE_FUNCTION_youtube_dl$options$$$function__1__hide_login_info$$$function__1__scrub_eq(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts(PyObject *defaults);


static PyObject *MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts$$$function__1__readOptions(PyObject *defaults);


static PyObject *MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts$$$function__2__readUserConf(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts$$$function__3__format_option_string();


static PyObject *MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts$$$function__4__comma_separated_values_options_callback();


static PyObject *MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts$$$function__5_compat_conf();


// The module function definitions.
static PyObject *impl_youtube_dl$options$$$function__1__hide_login_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_opts = python_pars[0];
    PyObject *var_PRIVATE_OPTS = NULL;
    struct Nuitka_CellObject *var_eqre = Nuitka_Cell_Empty();
    PyObject *var__scrub_eq = NULL;
    PyObject *var_idx = NULL;
    PyObject *var_opt = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_69d308683789dee1dbb597fdcd2d97fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_69d308683789dee1dbb597fdcd2d97fd = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PySet_New(mod_consts[0]);
        assert(var_PRIVATE_OPTS == NULL);
        var_PRIVATE_OPTS = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_69d308683789dee1dbb597fdcd2d97fd)) {
        Py_XDECREF(cache_frame_69d308683789dee1dbb597fdcd2d97fd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69d308683789dee1dbb597fdcd2d97fd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69d308683789dee1dbb597fdcd2d97fd = MAKE_FUNCTION_FRAME(codeobj_69d308683789dee1dbb597fdcd2d97fd, module_youtube_dl$options, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_69d308683789dee1dbb597fdcd2d97fd->m_type_description == NULL);
    frame_69d308683789dee1dbb597fdcd2d97fd = cache_frame_69d308683789dee1dbb597fdcd2d97fd;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_69d308683789dee1dbb597fdcd2d97fd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_69d308683789dee1dbb597fdcd2d97fd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oocooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = mod_consts[3];
        tmp_str_arg_value_1 = mod_consts[4];
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_PRIVATE_OPTS);
            tmp_iter_arg_1 = var_PRIVATE_OPTS;
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_1 = "oocooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_3;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_iterable_value_1 = MAKE_GENERATOR_youtube_dl$options$$$function__1__hide_login_info$$$genexpr__1_genexpr(tmp_closure_1);

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
        tmp_add_expr_right_2 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 25;
            type_description_1 = "oocooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        assert(!(tmp_add_expr_left_1 == NULL));
        tmp_add_expr_right_1 = mod_consts[5];
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        assert(!(tmp_args_element_value_1 == NULL));
        frame_69d308683789dee1dbb597fdcd2d97fd->m_frame.f_lineno = 25;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oocooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_eqre) == NULL);
        PyCell_SET(var_eqre, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_4;
        struct Nuitka_CellObject *tmp_closure_2[1];

        tmp_closure_2[0] = var_eqre;
        Py_INCREF(tmp_closure_2[0]);

        tmp_assign_source_4 = MAKE_FUNCTION_youtube_dl$options$$$function__1__hide_login_info$$$function__1__scrub_eq(tmp_closure_2);

        assert(var__scrub_eq == NULL);
        var__scrub_eq = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = (PyObject *)&PyMap_Type;
        CHECK_OBJECT(var__scrub_eq);
        tmp_args_element_value_2 = var__scrub_eq;
        CHECK_OBJECT(par_opts);
        tmp_args_element_value_3 = par_opts;
        frame_69d308683789dee1dbb597fdcd2d97fd->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oocooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oocooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_opts;
            assert(old != NULL);
            par_opts = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_opts);
        tmp_args_element_value_4 = par_opts;
        frame_69d308683789dee1dbb597fdcd2d97fd->m_frame.f_lineno = 35;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oocooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oocooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oocooo";
                exception_lineno = 35;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oocooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oocooo";
            exception_lineno = 35;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oocooo";
            exception_lineno = 35;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "oocooo";
                    exception_lineno = 35;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oocooo";
            exception_lineno = 35;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_idx;
            var_idx = tmp_assign_source_11;
            Py_INCREF(var_idx);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_opt;
            var_opt = tmp_assign_source_12;
            Py_INCREF(var_opt);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_opt);
        tmp_cmp_expr_left_1 = var_opt;
        CHECK_OBJECT(var_PRIVATE_OPTS);
        tmp_cmp_expr_right_1 = var_PRIVATE_OPTS;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oocooo";
            goto try_except_handler_3;
        }
        tmp_and_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_idx);
        tmp_add_expr_left_3 = var_idx;
        tmp_add_expr_right_3 = mod_consts[9];
        tmp_cmp_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oocooo";
            goto try_except_handler_3;
        }
        if (par_opts == NULL) {
            Py_DECREF(tmp_cmp_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "oocooo";
            goto try_except_handler_3;
        }

        tmp_len_arg_1 = par_opts;
        tmp_cmp_expr_right_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 36;
            type_description_1 = "oocooo";
            goto try_except_handler_3;
        }
        tmp_and_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oocooo";
            goto try_except_handler_3;
        }
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        tmp_ass_subvalue_1 = mod_consts[11];
        if (par_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 37;
            type_description_1 = "oocooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscribed_1 = par_opts;
        if (var_idx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 37;
            type_description_1 = "oocooo";
            goto try_except_handler_3;
        }

        tmp_add_expr_left_4 = var_idx;
        tmp_add_expr_right_4 = mod_consts[9];
        tmp_ass_subscript_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oocooo";
            goto try_except_handler_3;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oocooo";
            goto try_except_handler_3;
        }
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 35;
        type_description_1 = "oocooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (par_opts == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 38;
        type_description_1 = "oocooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_opts;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_69d308683789dee1dbb597fdcd2d97fd);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_69d308683789dee1dbb597fdcd2d97fd);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_69d308683789dee1dbb597fdcd2d97fd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_69d308683789dee1dbb597fdcd2d97fd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69d308683789dee1dbb597fdcd2d97fd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69d308683789dee1dbb597fdcd2d97fd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69d308683789dee1dbb597fdcd2d97fd,
        type_description_1,
        par_opts,
        var_PRIVATE_OPTS,
        var_eqre,
        var__scrub_eq,
        var_idx,
        var_opt
    );


    // Release cached frame if used for exception.
    if (frame_69d308683789dee1dbb597fdcd2d97fd == cache_frame_69d308683789dee1dbb597fdcd2d97fd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_69d308683789dee1dbb597fdcd2d97fd);
        cache_frame_69d308683789dee1dbb597fdcd2d97fd = NULL;
    }

    assertFrameObject(frame_69d308683789dee1dbb597fdcd2d97fd);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_opts);
    par_opts = NULL;
    CHECK_OBJECT(var_PRIVATE_OPTS);
    Py_DECREF(var_PRIVATE_OPTS);
    var_PRIVATE_OPTS = NULL;
    CHECK_OBJECT(var_eqre);
    Py_DECREF(var_eqre);
    var_eqre = NULL;
    CHECK_OBJECT(var__scrub_eq);
    Py_DECREF(var__scrub_eq);
    var__scrub_eq = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_opt);
    var_opt = NULL;
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

    Py_XDECREF(par_opts);
    par_opts = NULL;
    CHECK_OBJECT(var_PRIVATE_OPTS);
    Py_DECREF(var_PRIVATE_OPTS);
    var_PRIVATE_OPTS = NULL;
    CHECK_OBJECT(var_eqre);
    Py_DECREF(var_eqre);
    var_eqre = NULL;
    Py_XDECREF(var__scrub_eq);
    var__scrub_eq = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_opt);
    var_opt = NULL;
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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct youtube_dl$options$$$function__1__hide_login_info$$$genexpr__1_genexpr_locals {
    PyObject *var_po;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
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

static PyObject *youtube_dl$options$$$function__1__hide_login_info$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct youtube_dl$options$$$function__1__hide_login_info$$$genexpr__1_genexpr_locals *generator_heap = (struct youtube_dl$options$$$function__1__hide_login_info$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_po = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_76192d014bd842f7f6462b7a9f1933ad, module_youtube_dl$options, sizeof(void *)+sizeof(void *));
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
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 25;
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
            PyObject *old = generator_heap->var_po;
            generator_heap->var_po = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_po);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 25;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_po);
        tmp_args_element_value_1 = generator_heap->var_po;
        generator->m_frame->m_frame.f_lineno = 25;
        tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[13], tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 25;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 25;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 25;
        generator_heap->type_description_1 = "No";
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
            generator_heap->var_po
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

    Py_XDECREF(generator_heap->var_po);
    generator_heap->var_po = NULL;
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
    Py_XDECREF(generator_heap->var_po);
    generator_heap->var_po = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_youtube_dl$options$$$function__1__hide_login_info$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        youtube_dl$options$$$function__1__hide_login_info$$$genexpr__1_genexpr_context,
        module_youtube_dl$options,
        mod_consts[14],
#if PYTHON_VERSION >= 0x350
        mod_consts[15],
#endif
        codeobj_76192d014bd842f7f6462b7a9f1933ad,
        closure,
        1,
        sizeof(struct youtube_dl$options$$$function__1__hide_login_info$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_youtube_dl$options$$$function__1__hide_login_info$$$function__1__scrub_eq(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_o = python_pars[0];
    PyObject *var_m = NULL;
    struct Nuitka_FrameObject *frame_1fa6425b80870b3e54edc46473d40426;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1fa6425b80870b3e54edc46473d40426 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1fa6425b80870b3e54edc46473d40426)) {
        Py_XDECREF(cache_frame_1fa6425b80870b3e54edc46473d40426);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1fa6425b80870b3e54edc46473d40426 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1fa6425b80870b3e54edc46473d40426 = MAKE_FUNCTION_FRAME(codeobj_1fa6425b80870b3e54edc46473d40426, module_youtube_dl$options, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1fa6425b80870b3e54edc46473d40426->m_type_description == NULL);
    frame_1fa6425b80870b3e54edc46473d40426 = cache_frame_1fa6425b80870b3e54edc46473d40426;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_1fa6425b80870b3e54edc46473d40426);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1fa6425b80870b3e54edc46473d40426) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 28;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_o);
        tmp_args_element_value_1 = par_o;
        frame_1fa6425b80870b3e54edc46473d40426->m_frame.f_lineno = 28;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[17], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(var_m == NULL);
        var_m = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_m);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_m);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_m);
        tmp_called_instance_2 = var_m;
        frame_1fa6425b80870b3e54edc46473d40426->m_frame.f_lineno = 30;
        tmp_add_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[18],
            PyTuple_GET_ITEM(mod_consts[19], 0)
        );

        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[20];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    CHECK_OBJECT(par_o);
    tmp_return_value = par_o;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1fa6425b80870b3e54edc46473d40426);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1fa6425b80870b3e54edc46473d40426);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1fa6425b80870b3e54edc46473d40426);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1fa6425b80870b3e54edc46473d40426, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1fa6425b80870b3e54edc46473d40426->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1fa6425b80870b3e54edc46473d40426, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1fa6425b80870b3e54edc46473d40426,
        type_description_1,
        par_o,
        var_m,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1fa6425b80870b3e54edc46473d40426 == cache_frame_1fa6425b80870b3e54edc46473d40426) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1fa6425b80870b3e54edc46473d40426);
        cache_frame_1fa6425b80870b3e54edc46473d40426 = NULL;
    }

    assertFrameObject(frame_1fa6425b80870b3e54edc46473d40426);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_m);
    Py_DECREF(var_m);
    var_m = NULL;
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

    Py_XDECREF(var_m);
    var_m = NULL;
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
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$options$$$function__2_parseOpts(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_overrideArguments = python_pars[0];
    struct Nuitka_CellObject *var__readOptions = Nuitka_Cell_Empty();
    PyObject *var__readUserConf = NULL;
    PyObject *var__format_option_string = NULL;
    PyObject *var__comma_separated_values_options_callback = NULL;
    PyObject *var_columns = NULL;
    PyObject *var_max_width = NULL;
    PyObject *var_fmt = NULL;
    PyObject *var_kw = NULL;
    PyObject *var_parser = NULL;
    PyObject *var_general = NULL;
    PyObject *var_network = NULL;
    PyObject *var_geo = NULL;
    PyObject *var_selection = NULL;
    PyObject *var_authentication = NULL;
    PyObject *var_adobe_pass = NULL;
    PyObject *var_video_format = NULL;
    PyObject *var_subtitles = NULL;
    PyObject *var_downloader = NULL;
    PyObject *var_workarounds = NULL;
    PyObject *var_verbosity = NULL;
    PyObject *var_filesystem = NULL;
    PyObject *var_thumbnail = NULL;
    PyObject *var_postproc = NULL;
    PyObject *var_opts = NULL;
    PyObject *var_args = NULL;
    PyObject *var_compat_conf = NULL;
    PyObject *var_command_line_conf = NULL;
    PyObject *var_system_conf = NULL;
    PyObject *var_user_conf = NULL;
    PyObject *var_custom_conf = NULL;
    PyObject *var_location = NULL;
    PyObject *var_argv = NULL;
    PyObject *var_conf_label = NULL;
    PyObject *var_conf = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e818ad2fe263b2cc2deafdc13ad497ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e818ad2fe263b2cc2deafdc13ad497ff = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = MAKE_LIST_EMPTY(0);
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_1);


        tmp_assign_source_1 = MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts$$$function__1__readOptions(tmp_defaults_1);

        assert(Nuitka_Cell_GET(var__readOptions) == NULL);
        PyCell_SET(var__readOptions, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var__readOptions;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts$$$function__2__readUserConf(tmp_closure_1);

        assert(var__readUserConf == NULL);
        var__readUserConf = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;


        tmp_assign_source_3 = MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts$$$function__3__format_option_string();

        assert(var__format_option_string == NULL);
        var__format_option_string = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;


        tmp_assign_source_4 = MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts$$$function__4__comma_separated_values_options_callback();

        assert(var__comma_separated_values_options_callback == NULL);
        var__comma_separated_values_options_callback = tmp_assign_source_4;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_e818ad2fe263b2cc2deafdc13ad497ff)) {
        Py_XDECREF(cache_frame_e818ad2fe263b2cc2deafdc13ad497ff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e818ad2fe263b2cc2deafdc13ad497ff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e818ad2fe263b2cc2deafdc13ad497ff = MAKE_FUNCTION_FRAME(codeobj_e818ad2fe263b2cc2deafdc13ad497ff, module_youtube_dl$options, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e818ad2fe263b2cc2deafdc13ad497ff->m_type_description == NULL);
    frame_e818ad2fe263b2cc2deafdc13ad497ff = cache_frame_e818ad2fe263b2cc2deafdc13ad497ff;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_e818ad2fe263b2cc2deafdc13ad497ff);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e818ad2fe263b2cc2deafdc13ad497ff) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 115;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_columns == NULL);
        var_columns = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_columns);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_columns);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_columns);
        tmp_assign_source_6 = var_columns;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_6 = mod_consts[32];
        condexpr_end_1:;
        assert(var_max_width == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_max_width = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[34]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_max_width);
        tmp_kw_call_value_0_1 = var_max_width;
        tmp_kw_call_value_1_1 = mod_consts[32];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 119;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[35]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fmt == NULL);
        var_fmt = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var__format_option_string);
        tmp_assattr_value_1 = var__format_option_string;
        CHECK_OBJECT(var_fmt);
        tmp_assattr_target_1 = var_fmt;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[36], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[37];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[39];
        CHECK_OBJECT(var_fmt);
        tmp_dict_value_1 = var_fmt;
        tmp_res = PyDict_SetItem(tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[40];
        tmp_dict_value_1 = mod_consts[41];
        tmp_res = PyDict_SetItem(tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[42];
        tmp_dict_value_1 = mod_consts[43];
        tmp_res = PyDict_SetItem(tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_kw == NULL);
        var_kw = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[44]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 129;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_kw);
        tmp_args_element_value_1 = var_kw;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 129;
        tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 129;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_9 = impl___main__$$$function__4_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_parser == NULL);
        var_parser = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parser);
        tmp_args_element_value_2 = var_parser;
        tmp_args_element_value_3 = mod_consts[47];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_general == NULL);
        var_general = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_general);
        tmp_expression_value_4 = var_general;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[48]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 132;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[49], 0), mod_consts[50]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_general);
        tmp_expression_value_5 = var_general;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[48]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 136;
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[51], 0), mod_consts[50]);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_general);
        tmp_expression_value_6 = var_general;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[48]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 140;
        tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[52], 0), mod_consts[53]);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_general);
        tmp_expression_value_7 = var_general;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[48]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 144;
        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[54], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(var_general);
        tmp_expression_value_8 = var_general;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[48]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 148;
        tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[56], 0), mod_consts[53]);
        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(var_general);
        tmp_expression_value_9 = var_general;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[48]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 152;
        tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[57], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(var_general);
        tmp_expression_value_10 = var_general;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[48]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 156;
        tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts[58], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(var_general);
        tmp_expression_value_11 = var_general;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[48]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 160;
        tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[59], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(var_general);
        tmp_expression_value_12 = var_general;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[48]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 164;
        tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[60], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(var_general);
        tmp_expression_value_13 = var_general;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[48]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 168;
        tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_13, &PyTuple_GET_ITEM(mod_consts[61], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(var_general);
        tmp_expression_value_14 = var_general;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[48]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 172;
        tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[50]);
        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_12;
        CHECK_OBJECT(var_general);
        tmp_expression_value_15 = var_general;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[48]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 179;
        tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_15, &PyTuple_GET_ITEM(mod_consts[64], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_13;
        CHECK_OBJECT(var_general);
        tmp_expression_value_16 = var_general;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[48]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 183;
        tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[65], 0), mod_consts[66]);
        Py_DECREF(tmp_called_value_16);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_14;
        CHECK_OBJECT(var_general);
        tmp_expression_value_17 = var_general;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[48]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 188;
        tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[67], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_15;
        CHECK_OBJECT(var_general);
        tmp_expression_value_18 = var_general;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[48]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 192;
        tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[68], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_18);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_16;
        CHECK_OBJECT(var_general);
        tmp_expression_value_19 = var_general;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[48]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 196;
        tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_19, &PyTuple_GET_ITEM(mod_consts[69], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parser);
        tmp_args_element_value_4 = var_parser;
        tmp_args_element_value_5 = mod_consts[70];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_11 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_network == NULL);
        var_network = tmp_assign_source_11;
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_17;
        CHECK_OBJECT(var_network);
        tmp_expression_value_20 = var_network;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[48]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 203;
        tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[71], 0), mod_consts[72]);
        Py_DECREF(tmp_called_value_20);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_18;
        CHECK_OBJECT(var_network);
        tmp_expression_value_21 = var_network;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[48]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 210;
        tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_21, &PyTuple_GET_ITEM(mod_consts[73], 0), mod_consts[74]);
        Py_DECREF(tmp_called_value_21);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_19;
        CHECK_OBJECT(var_network);
        tmp_expression_value_22 = var_network;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[48]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 214;
        tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[75], 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_22);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_20;
        CHECK_OBJECT(var_network);
        tmp_expression_value_23 = var_network;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[48]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 219;
        tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_23, &PyTuple_GET_ITEM(mod_consts[77], 0), mod_consts[78]);
        Py_DECREF(tmp_called_value_23);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_21;
        CHECK_OBJECT(var_network);
        tmp_expression_value_24 = var_network;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[48]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 224;
        tmp_call_result_21 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[79], 0), mod_consts[78]);
        Py_DECREF(tmp_called_value_24);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parser);
        tmp_args_element_value_6 = var_parser;
        tmp_args_element_value_7 = mod_consts[80];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_12 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_geo == NULL);
        var_geo = tmp_assign_source_12;
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_22;
        CHECK_OBJECT(var_geo);
        tmp_expression_value_25 = var_geo;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[48]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 231;
        tmp_call_result_22 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts[81], 0), mod_consts[72]);
        Py_DECREF(tmp_called_value_25);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_23;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(var_geo);
        tmp_expression_value_26 = var_geo;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[48]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = mod_consts[82];
        tmp_kw_call_value_1_2 = Py_None;
        tmp_kw_call_value_2_1 = mod_consts[83];
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 239;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[84]);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 239;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 236;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};
            tmp_call_result_23 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_26, mod_consts[85], kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_kw_call_value_3_1);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_24;
        CHECK_OBJECT(var_geo);
        tmp_expression_value_28 = var_geo;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[48]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 240;
        tmp_call_result_24 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_27, &PyTuple_GET_ITEM(mod_consts[86], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_25;
        CHECK_OBJECT(var_geo);
        tmp_expression_value_29 = var_geo;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[48]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 244;
        tmp_call_result_25 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_28, &PyTuple_GET_ITEM(mod_consts[87], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_28);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_26;
        CHECK_OBJECT(var_geo);
        tmp_expression_value_30 = var_geo;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[48]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 248;
        tmp_call_result_26 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_29, &PyTuple_GET_ITEM(mod_consts[88], 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_29);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_27;
        CHECK_OBJECT(var_geo);
        tmp_expression_value_31 = var_geo;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[48]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 252;
        tmp_call_result_27 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_30, &PyTuple_GET_ITEM(mod_consts[89], 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_30);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parser);
        tmp_args_element_value_8 = var_parser;
        tmp_args_element_value_9 = mod_consts[90];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 257;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_13 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_selection == NULL);
        var_selection = tmp_assign_source_13;
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_28;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_32 = var_selection;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[48]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 258;
        tmp_call_result_28 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_31, &PyTuple_GET_ITEM(mod_consts[91], 0), mod_consts[92]);
        Py_DECREF(tmp_called_value_31);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_29;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_33 = var_selection;
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[48]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 262;
        tmp_call_result_29 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_32, &PyTuple_GET_ITEM(mod_consts[93], 0), mod_consts[92]);
        Py_DECREF(tmp_called_value_32);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_call_result_30;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_34 = var_selection;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[48]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 266;
        tmp_call_result_30 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_33, &PyTuple_GET_ITEM(mod_consts[94], 0), mod_consts[95]);
        Py_DECREF(tmp_called_value_33);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_31;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_35 = var_selection;
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[48]);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 270;
        tmp_call_result_31 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_34, &PyTuple_GET_ITEM(mod_consts[96], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_34);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_call_result_32;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_36 = var_selection;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[48]);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 274;
        tmp_call_result_32 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_35, &PyTuple_GET_ITEM(mod_consts[97], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_35);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_call_result_33;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_37 = var_selection;
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[48]);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 278;
        tmp_call_result_33 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_36, &PyTuple_GET_ITEM(mod_consts[98], 0), mod_consts[99]);
        Py_DECREF(tmp_called_value_36);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_34;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_38 = var_selection;
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[48]);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 282;
        tmp_call_result_34 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_37, &PyTuple_GET_ITEM(mod_consts[100], 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_37);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_35;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_39 = var_selection;
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[48]);
        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 286;
        tmp_call_result_35 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_38, &PyTuple_GET_ITEM(mod_consts[101], 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_38);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_call_result_36;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_40 = var_selection;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[48]);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 290;
        tmp_call_result_36 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_39, &PyTuple_GET_ITEM(mod_consts[102], 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_39);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_call_result_37;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_41 = var_selection;
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[48]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 294;
        tmp_call_result_37 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_40, &PyTuple_GET_ITEM(mod_consts[103], 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_40);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_call_result_38;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_42 = var_selection;
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[48]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 298;
        tmp_call_result_38 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_41, &PyTuple_GET_ITEM(mod_consts[104], 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_41);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_call_result_39;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_43 = var_selection;
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[48]);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 302;
        tmp_call_result_39 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_42, &PyTuple_GET_ITEM(mod_consts[105], 0), mod_consts[106]);
        Py_DECREF(tmp_called_value_42);
        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_call_result_40;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_44 = var_selection;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[48]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 306;
        tmp_call_result_40 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_43, &PyTuple_GET_ITEM(mod_consts[107], 0), mod_consts[106]);
        Py_DECREF(tmp_called_value_43);
        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_call_result_41;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_45 = var_selection;
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[48]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 310;
        tmp_call_result_41 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_44, &PyTuple_GET_ITEM(mod_consts[108], 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_44);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_call_result_42;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_46 = var_selection;
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[48]);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 331;
        tmp_call_result_42 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_45, &PyTuple_GET_ITEM(mod_consts[109], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_45);
        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_call_result_43;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_47 = var_selection;
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[48]);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 335;
        tmp_call_result_43 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_46, &PyTuple_GET_ITEM(mod_consts[110], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_46);
        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_call_result_44;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_48 = var_selection;
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[48]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 339;
        tmp_call_result_44 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_47, &PyTuple_GET_ITEM(mod_consts[111], 0), mod_consts[106]);
        Py_DECREF(tmp_called_value_47);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_call_result_45;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_49 = var_selection;
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[48]);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 343;
        tmp_call_result_45 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_48, &PyTuple_GET_ITEM(mod_consts[112], 0), mod_consts[113]);
        Py_DECREF(tmp_called_value_48);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_call_result_46;
        CHECK_OBJECT(var_selection);
        tmp_expression_value_50 = var_selection;
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[48]);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 347;
        tmp_call_result_46 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_49, &PyTuple_GET_ITEM(mod_consts[114], 0), mod_consts[115]);
        Py_DECREF(tmp_called_value_49);
        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parser);
        tmp_args_element_value_10 = var_parser;
        tmp_args_element_value_11 = mod_consts[116];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 352;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_14 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_5,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_authentication == NULL);
        var_authentication = tmp_assign_source_14;
    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_call_result_47;
        CHECK_OBJECT(var_authentication);
        tmp_expression_value_51 = var_authentication;
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[48]);
        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 353;
        tmp_call_result_47 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_50, &PyTuple_GET_ITEM(mod_consts[117], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_50);
        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_call_result_48;
        CHECK_OBJECT(var_authentication);
        tmp_expression_value_52 = var_authentication;
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[48]);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 357;
        tmp_call_result_48 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_51, &PyTuple_GET_ITEM(mod_consts[118], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_51);
        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_call_result_49;
        CHECK_OBJECT(var_authentication);
        tmp_expression_value_53 = var_authentication;
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[48]);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 361;
        tmp_call_result_49 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_52, &PyTuple_GET_ITEM(mod_consts[119], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_52);
        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_call_result_50;
        CHECK_OBJECT(var_authentication);
        tmp_expression_value_54 = var_authentication;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[48]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 365;
        tmp_call_result_50 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_53, &PyTuple_GET_ITEM(mod_consts[120], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_53);
        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_call_result_51;
        CHECK_OBJECT(var_authentication);
        tmp_expression_value_55 = var_authentication;
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[48]);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 369;
        tmp_call_result_51 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_54, &PyTuple_GET_ITEM(mod_consts[121], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_54);
        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parser);
        tmp_args_element_value_12 = var_parser;
        tmp_args_element_value_13 = mod_consts[122];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 374;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_15 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_6,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_adobe_pass == NULL);
        var_adobe_pass = tmp_assign_source_15;
    }
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_call_result_52;
        CHECK_OBJECT(var_adobe_pass);
        tmp_expression_value_56 = var_adobe_pass;
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[48]);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 375;
        tmp_call_result_52 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_55, &PyTuple_GET_ITEM(mod_consts[123], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_55);
        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_call_result_53;
        CHECK_OBJECT(var_adobe_pass);
        tmp_expression_value_57 = var_adobe_pass;
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[48]);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 379;
        tmp_call_result_53 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_56, &PyTuple_GET_ITEM(mod_consts[124], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_56);
        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_call_result_54;
        CHECK_OBJECT(var_adobe_pass);
        tmp_expression_value_58 = var_adobe_pass;
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[48]);
        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 383;
        tmp_call_result_54 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_57, &PyTuple_GET_ITEM(mod_consts[125], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_57);
        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_call_result_55;
        CHECK_OBJECT(var_adobe_pass);
        tmp_expression_value_59 = var_adobe_pass;
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[48]);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 387;
        tmp_call_result_55 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_58, &PyTuple_GET_ITEM(mod_consts[126], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_58);
        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parser);
        tmp_args_element_value_14 = var_parser;
        tmp_args_element_value_15 = mod_consts[127];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 392;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_16 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_7,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_video_format == NULL);
        var_video_format = tmp_assign_source_16;
    }
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_call_result_56;
        CHECK_OBJECT(var_video_format);
        tmp_expression_value_60 = var_video_format;
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[48]);
        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 393;
        tmp_call_result_56 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_59, &PyTuple_GET_ITEM(mod_consts[128], 0), mod_consts[129]);
        Py_DECREF(tmp_called_value_59);
        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_call_result_57;
        CHECK_OBJECT(var_video_format);
        tmp_expression_value_61 = var_video_format;
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[48]);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 397;
        tmp_call_result_57 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_60, &PyTuple_GET_ITEM(mod_consts[130], 0), mod_consts[131]);
        Py_DECREF(tmp_called_value_60);
        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_call_result_58;
        CHECK_OBJECT(var_video_format);
        tmp_expression_value_62 = var_video_format;
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[48]);
        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 401;
        tmp_call_result_58 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_61, &PyTuple_GET_ITEM(mod_consts[132], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_61);
        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_call_result_59;
        CHECK_OBJECT(var_video_format);
        tmp_expression_value_63 = var_video_format;
        tmp_called_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[48]);
        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 405;
        tmp_call_result_59 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_62, &PyTuple_GET_ITEM(mod_consts[133], 0), mod_consts[53]);
        Py_DECREF(tmp_called_value_62);
        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_call_result_60;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_expression_value_65;
        CHECK_OBJECT(var_video_format);
        tmp_expression_value_64 = var_video_format;
        tmp_called_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[48]);
        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = mod_consts[134];
        tmp_kw_call_value_1_3 = mod_consts[135];
        tmp_kw_call_value_2_2 = Py_True;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_63);

            exception_lineno = 412;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[84]);
        if (tmp_kw_call_value_3_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_63);

            exception_lineno = 412;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 409;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2};
            tmp_call_result_60 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_63, mod_consts[136], kw_values, mod_consts[55]);
        }

        Py_DECREF(tmp_called_value_63);
        Py_DECREF(tmp_kw_call_value_3_2);
        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_call_result_61;
        CHECK_OBJECT(var_video_format);
        tmp_expression_value_66 = var_video_format;
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[48]);
        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 413;
        tmp_call_result_61 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_64, &PyTuple_GET_ITEM(mod_consts[137], 0), mod_consts[53]);
        Py_DECREF(tmp_called_value_64);
        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_call_result_62;
        CHECK_OBJECT(var_video_format);
        tmp_expression_value_67 = var_video_format;
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[48]);
        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 417;
        tmp_call_result_62 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_65, &PyTuple_GET_ITEM(mod_consts[138], 0), mod_consts[129]);
        Py_DECREF(tmp_called_value_65);
        if (tmp_call_result_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parser);
        tmp_args_element_value_16 = var_parser;
        tmp_args_element_value_17 = mod_consts[139];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 425;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assign_source_17 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_8,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_subtitles == NULL);
        var_subtitles = tmp_assign_source_17;
    }
    {
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_call_result_63;
        CHECK_OBJECT(var_subtitles);
        tmp_expression_value_68 = var_subtitles;
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[48]);
        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 426;
        tmp_call_result_63 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_66, &PyTuple_GET_ITEM(mod_consts[140], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_66);
        if (tmp_call_result_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_call_result_64;
        CHECK_OBJECT(var_subtitles);
        tmp_expression_value_69 = var_subtitles;
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[48]);
        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 430;
        tmp_call_result_64 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_67, &PyTuple_GET_ITEM(mod_consts[141], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_67);
        if (tmp_call_result_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_call_result_65;
        CHECK_OBJECT(var_subtitles);
        tmp_expression_value_70 = var_subtitles;
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[48]);
        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 434;
        tmp_call_result_65 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_68, &PyTuple_GET_ITEM(mod_consts[142], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_68);
        if (tmp_call_result_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_call_result_66;
        CHECK_OBJECT(var_subtitles);
        tmp_expression_value_71 = var_subtitles;
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[48]);
        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 438;
        tmp_call_result_66 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_69, &PyTuple_GET_ITEM(mod_consts[143], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_69);
        if (tmp_call_result_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_call_result_67;
        CHECK_OBJECT(var_subtitles);
        tmp_expression_value_72 = var_subtitles;
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[48]);
        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 442;
        tmp_call_result_67 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_70, &PyTuple_GET_ITEM(mod_consts[144], 0), mod_consts[129]);
        Py_DECREF(tmp_called_value_70);
        if (tmp_call_result_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_call_result_68;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_kw_call_value_3_3;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        CHECK_OBJECT(var_subtitles);
        tmp_expression_value_73 = var_subtitles;
        tmp_called_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[48]);
        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = mod_consts[145];
        tmp_kw_call_value_1_4 = mod_consts[146];
        tmp_kw_call_value_2_3 = mod_consts[147];
        tmp_kw_call_value_3_3 = mod_consts[148];
        tmp_kw_call_value_4_1 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(var__comma_separated_values_options_callback);
        tmp_kw_call_value_5_1 = var__comma_separated_values_options_callback;
        tmp_kw_call_value_6_1 = mod_consts[149];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 446;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_3, tmp_kw_call_value_3_3, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1};
            tmp_call_result_68 = CALL_FUNCTION_WITH_POSARGS3_KWSPLIT(tmp_called_value_71, mod_consts[150], kw_values, mod_consts[151]);
        }

        Py_DECREF(tmp_called_value_71);
        Py_DECREF(tmp_kw_call_value_4_1);
        if (tmp_call_result_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_68);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parser);
        tmp_args_element_value_18 = var_parser;
        tmp_args_element_value_19 = mod_consts[152];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 452;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_assign_source_18 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_9,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_downloader == NULL);
        var_downloader = tmp_assign_source_18;
    }
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_call_result_69;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_74 = var_downloader;
        tmp_called_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[48]);
        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 453;
        tmp_call_result_69 = CALL_FUNCTION_WITH_ARGS3_VECTORCALL(tmp_called_value_72, &PyTuple_GET_ITEM(mod_consts[153], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_72);
        if (tmp_call_result_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_called_value_73;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_call_result_70;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_75 = var_downloader;
        tmp_called_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[48]);
        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 457;
        tmp_call_result_70 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_73, &PyTuple_GET_ITEM(mod_consts[154], 0), mod_consts[95]);
        Py_DECREF(tmp_called_value_73);
        if (tmp_call_result_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        PyObject *tmp_called_value_74;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_call_result_71;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_76 = var_downloader;
        tmp_called_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[48]);
        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 461;
        tmp_call_result_71 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_74, &PyTuple_GET_ITEM(mod_consts[155], 0), mod_consts[95]);
        Py_DECREF(tmp_called_value_74);
        if (tmp_call_result_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_71);
    }
    {
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_call_result_72;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_77 = var_downloader;
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[48]);
        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 465;
        tmp_call_result_72 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_75, &PyTuple_GET_ITEM(mod_consts[156], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_75);
        if (tmp_call_result_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_call_result_73;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_78 = var_downloader;
        tmp_called_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[48]);
        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 469;
        tmp_call_result_73 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_76, &PyTuple_GET_ITEM(mod_consts[157], 0), mod_consts[53]);
        Py_DECREF(tmp_called_value_76);
        if (tmp_call_result_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_73);
    }
    {
        PyObject *tmp_called_value_77;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_call_result_74;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_79 = var_downloader;
        tmp_called_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[48]);
        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 473;
        tmp_call_result_74 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_77, &PyTuple_GET_ITEM(mod_consts[158], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_77);
        if (tmp_call_result_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_74);
    }
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_call_result_75;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_80 = var_downloader;
        tmp_called_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[48]);
        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 477;
        tmp_call_result_75 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_78, &PyTuple_GET_ITEM(mod_consts[159], 0), mod_consts[95]);
        Py_DECREF(tmp_called_value_78);
        if (tmp_call_result_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_75);
    }
    {
        PyObject *tmp_called_value_79;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_call_result_76;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_81 = var_downloader;
        tmp_called_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[48]);
        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 481;
        tmp_call_result_76 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_79, &PyTuple_GET_ITEM(mod_consts[160], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_79);
        if (tmp_call_result_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_76);
    }
    {
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_call_result_77;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_82 = var_downloader;
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[48]);
        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 485;
        tmp_call_result_77 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_80, &PyTuple_GET_ITEM(mod_consts[161], 0), mod_consts[95]);
        Py_DECREF(tmp_called_value_80);
        if (tmp_call_result_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_77);
    }
    {
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_call_result_78;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_kw_call_value_2_4;
        PyObject *tmp_kw_call_value_3_4;
        PyObject *tmp_expression_value_84;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_83 = var_downloader;
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[48]);
        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = mod_consts[134];
        tmp_kw_call_value_1_5 = mod_consts[162];
        tmp_kw_call_value_2_4 = Py_False;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);

            exception_lineno = 493;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[84]);
        if (tmp_kw_call_value_3_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);

            exception_lineno = 493;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 490;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5, tmp_kw_call_value_2_4, tmp_kw_call_value_3_4};
            tmp_call_result_78 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_81, mod_consts[163], kw_values, mod_consts[55]);
        }

        Py_DECREF(tmp_called_value_81);
        Py_DECREF(tmp_kw_call_value_3_4);
        if (tmp_call_result_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_78);
    }
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_call_result_79;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_85 = var_downloader;
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[48]);
        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 494;
        tmp_call_result_79 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_82, &PyTuple_GET_ITEM(mod_consts[164], 0), mod_consts[50]);
        Py_DECREF(tmp_called_value_82);
        if (tmp_call_result_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_79);
    }
    {
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_call_result_80;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_86 = var_downloader;
        tmp_called_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[48]);
        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 498;
        tmp_call_result_80 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_83, &PyTuple_GET_ITEM(mod_consts[165], 0), mod_consts[50]);
        Py_DECREF(tmp_called_value_83);
        if (tmp_call_result_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_80);
    }
    {
        PyObject *tmp_called_value_84;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_call_result_81;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_87 = var_downloader;
        tmp_called_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[48]);
        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 502;
        tmp_call_result_81 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_84, &PyTuple_GET_ITEM(mod_consts[166], 0), mod_consts[115]);
        Py_DECREF(tmp_called_value_84);
        if (tmp_call_result_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_81);
    }
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_call_result_82;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_88 = var_downloader;
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[48]);
        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 506;
        tmp_call_result_82 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_85, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[168]);
        Py_DECREF(tmp_called_value_85);
        if (tmp_call_result_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_82);
    }
    {
        PyObject *tmp_called_value_86;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_call_result_83;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_89 = var_downloader;
        tmp_called_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[48]);
        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 510;
        tmp_call_result_83 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_86, &PyTuple_GET_ITEM(mod_consts[169], 0), mod_consts[168]);
        Py_DECREF(tmp_called_value_86);
        if (tmp_call_result_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_83);
    }
    {
        PyObject *tmp_called_value_87;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_call_result_84;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_90 = var_downloader;
        tmp_called_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[48]);
        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 514;
        tmp_call_result_84 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_87, &PyTuple_GET_ITEM(mod_consts[170], 0), mod_consts[115]);
        Py_DECREF(tmp_called_value_87);
        if (tmp_call_result_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_84);
    }
    {
        PyObject *tmp_called_value_88;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_call_result_85;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_kw_call_value_2_5;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_89;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_91 = var_downloader;
        tmp_called_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[48]);
        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = mod_consts[171];
        tmp_kw_call_value_1_6 = mod_consts[172];
        tmp_mod_expr_left_1 = mod_consts[173];
        tmp_str_arg_value_1 = mod_consts[174];
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[175]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 523;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 523;
        tmp_iterable_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_89);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 523;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 523;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_UNICODE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_value_2_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 523;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 519;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6, tmp_kw_call_value_2_5};
            tmp_call_result_85 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_88, mod_consts[176], kw_values, mod_consts[62]);
        }

        Py_DECREF(tmp_called_value_88);
        Py_DECREF(tmp_kw_call_value_2_5);
        if (tmp_call_result_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_85);
    }
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_call_result_86;
        CHECK_OBJECT(var_downloader);
        tmp_expression_value_92 = var_downloader;
        tmp_called_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[48]);
        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 524;
        tmp_call_result_86 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_90, &PyTuple_GET_ITEM(mod_consts[177], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_90);
        if (tmp_call_result_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_86);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parser);
        tmp_args_element_value_20 = var_parser;
        tmp_args_element_value_21 = mod_consts[178];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 529;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_assign_source_19 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_10,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_workarounds == NULL);
        var_workarounds = tmp_assign_source_19;
    }
    {
        PyObject *tmp_called_value_91;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_call_result_87;
        CHECK_OBJECT(var_workarounds);
        tmp_expression_value_93 = var_workarounds;
        tmp_called_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[48]);
        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 530;
        tmp_call_result_87 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_91, &PyTuple_GET_ITEM(mod_consts[179], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_91);
        if (tmp_call_result_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_87);
    }
    {
        PyObject *tmp_called_value_92;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_call_result_88;
        CHECK_OBJECT(var_workarounds);
        tmp_expression_value_94 = var_workarounds;
        tmp_called_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[48]);
        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 534;
        tmp_call_result_88 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_92, &PyTuple_GET_ITEM(mod_consts[180], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_92);
        if (tmp_call_result_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_88);
    }
    {
        PyObject *tmp_called_value_93;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_call_result_89;
        CHECK_OBJECT(var_workarounds);
        tmp_expression_value_95 = var_workarounds;
        tmp_called_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[48]);
        if (tmp_called_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 538;
        tmp_call_result_89 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_93, &PyTuple_GET_ITEM(mod_consts[181], 0), mod_consts[53]);
        Py_DECREF(tmp_called_value_93);
        if (tmp_call_result_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_89);
    }
    {
        PyObject *tmp_called_value_94;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_call_result_90;
        CHECK_OBJECT(var_workarounds);
        tmp_expression_value_96 = var_workarounds;
        tmp_called_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[48]);
        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 542;
        tmp_call_result_90 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_94, &PyTuple_GET_ITEM(mod_consts[182], 0), mod_consts[113]);
        Py_DECREF(tmp_called_value_94);
        if (tmp_call_result_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_90);
    }
    {
        PyObject *tmp_called_value_95;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_call_result_91;
        CHECK_OBJECT(var_workarounds);
        tmp_expression_value_97 = var_workarounds;
        tmp_called_value_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[48]);
        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 546;
        tmp_call_result_91 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_95, &PyTuple_GET_ITEM(mod_consts[183], 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_95);
        if (tmp_call_result_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_91);
    }
    {
        PyObject *tmp_called_value_96;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_call_result_92;
        CHECK_OBJECT(var_workarounds);
        tmp_expression_value_98 = var_workarounds;
        tmp_called_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[48]);
        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 551;
        tmp_call_result_92 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_96, &PyTuple_GET_ITEM(mod_consts[184], 0), mod_consts[185]);
        Py_DECREF(tmp_called_value_96);
        if (tmp_call_result_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_92);
    }
    {
        PyObject *tmp_called_value_97;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_call_result_93;
        CHECK_OBJECT(var_workarounds);
        tmp_expression_value_99 = var_workarounds;
        tmp_called_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[48]);
        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 556;
        tmp_call_result_93 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_97, &PyTuple_GET_ITEM(mod_consts[186], 0), mod_consts[115]);
        Py_DECREF(tmp_called_value_97);
        if (tmp_call_result_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_93);
    }
    {
        PyObject *tmp_called_value_98;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_call_result_94;
        CHECK_OBJECT(var_workarounds);
        tmp_expression_value_100 = var_workarounds;
        tmp_called_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[48]);
        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 560;
        tmp_call_result_94 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_98, &PyTuple_GET_ITEM(mod_consts[187], 0), mod_consts[188]);
        Py_DECREF(tmp_called_value_98);
        if (tmp_call_result_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_94);
    }
    {
        PyObject *tmp_called_value_99;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_call_result_95;
        CHECK_OBJECT(var_workarounds);
        tmp_expression_value_101 = var_workarounds;
        tmp_called_value_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[48]);
        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 568;
        tmp_call_result_95 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_99, &PyTuple_GET_ITEM(mod_consts[189], 0), mod_consts[188]);
        Py_DECREF(tmp_called_value_99);
        if (tmp_call_result_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_95);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parser);
        tmp_args_element_value_22 = var_parser;
        tmp_args_element_value_23 = mod_consts[190];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 576;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_assign_source_20 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_11,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_verbosity == NULL);
        var_verbosity = tmp_assign_source_20;
    }
    {
        PyObject *tmp_called_value_100;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_call_result_96;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_102 = var_verbosity;
        tmp_called_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[48]);
        if (tmp_called_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 577;
        tmp_call_result_96 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_100, &PyTuple_GET_ITEM(mod_consts[191], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_100);
        if (tmp_call_result_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_96);
    }
    {
        PyObject *tmp_called_value_101;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_call_result_97;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_103 = var_verbosity;
        tmp_called_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[48]);
        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 581;
        tmp_call_result_97 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_101, &PyTuple_GET_ITEM(mod_consts[192], 0), mod_consts[168]);
        Py_DECREF(tmp_called_value_101);
        if (tmp_call_result_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_97);
    }
    {
        PyObject *tmp_called_value_102;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_call_result_98;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_104 = var_verbosity;
        tmp_called_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[48]);
        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 585;
        tmp_call_result_98 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_102, &PyTuple_GET_ITEM(mod_consts[193], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_102);
        if (tmp_call_result_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_98);
    }
    {
        PyObject *tmp_called_value_103;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_call_result_99;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_105 = var_verbosity;
        tmp_called_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[48]);
        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 589;
        tmp_call_result_99 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_103, &PyTuple_GET_ITEM(mod_consts[194], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_103);
        if (tmp_call_result_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_99);
    }
    {
        PyObject *tmp_called_value_104;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_call_result_100;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_106 = var_verbosity;
        tmp_called_value_104 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[48]);
        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 593;
        tmp_call_result_100 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_104, &PyTuple_GET_ITEM(mod_consts[195], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_104);
        if (tmp_call_result_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_100);
    }
    {
        PyObject *tmp_called_value_105;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_call_result_101;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_107 = var_verbosity;
        tmp_called_value_105 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[48]);
        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 597;
        tmp_call_result_101 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_105, &PyTuple_GET_ITEM(mod_consts[196], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_105);
        if (tmp_call_result_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_101);
    }
    {
        PyObject *tmp_called_value_106;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_call_result_102;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_108 = var_verbosity;
        tmp_called_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[48]);
        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 601;
        tmp_call_result_102 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_106, &PyTuple_GET_ITEM(mod_consts[197], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_106);
        if (tmp_call_result_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_102);
    }
    {
        PyObject *tmp_called_value_107;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_call_result_103;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_109 = var_verbosity;
        tmp_called_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[48]);
        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 605;
        tmp_call_result_103 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_107, &PyTuple_GET_ITEM(mod_consts[198], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_107);
        if (tmp_call_result_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_103);
    }
    {
        PyObject *tmp_called_value_108;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_call_result_104;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_110 = var_verbosity;
        tmp_called_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[48]);
        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 609;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 609;
        tmp_call_result_104 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_108, &PyTuple_GET_ITEM(mod_consts[199], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_108);
        if (tmp_call_result_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 609;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_104);
    }
    {
        PyObject *tmp_called_value_109;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_call_result_105;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_111 = var_verbosity;
        tmp_called_value_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[48]);
        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 613;
        tmp_call_result_105 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_109, &PyTuple_GET_ITEM(mod_consts[200], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_109);
        if (tmp_call_result_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_105);
    }
    {
        PyObject *tmp_called_value_110;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_call_result_106;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_112 = var_verbosity;
        tmp_called_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[48]);
        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 617;
        tmp_call_result_106 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_110, &PyTuple_GET_ITEM(mod_consts[201], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_110);
        if (tmp_call_result_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_106);
    }
    {
        PyObject *tmp_called_value_111;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_call_result_107;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_113 = var_verbosity;
        tmp_called_value_111 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[48]);
        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 621;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 621;
        tmp_call_result_107 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_111, &PyTuple_GET_ITEM(mod_consts[202], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_111);
        if (tmp_call_result_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 621;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_107);
    }
    {
        PyObject *tmp_called_value_112;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_call_result_108;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_114 = var_verbosity;
        tmp_called_value_112 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[48]);
        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 625;
        tmp_call_result_108 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_112, &PyTuple_GET_ITEM(mod_consts[203], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_112);
        if (tmp_call_result_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_108);
    }
    {
        PyObject *tmp_called_value_113;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_call_result_109;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_115 = var_verbosity;
        tmp_called_value_113 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[48]);
        if (tmp_called_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 629;
        tmp_call_result_109 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_113, &PyTuple_GET_ITEM(mod_consts[204], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_113);
        if (tmp_call_result_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_109);
    }
    {
        PyObject *tmp_called_value_114;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_call_result_110;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_116 = var_verbosity;
        tmp_called_value_114 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[48]);
        if (tmp_called_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 633;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 633;
        tmp_call_result_110 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_114, &PyTuple_GET_ITEM(mod_consts[205], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_114);
        if (tmp_call_result_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 633;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_110);
    }
    {
        PyObject *tmp_called_value_115;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_call_result_111;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_117 = var_verbosity;
        tmp_called_value_115 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[48]);
        if (tmp_called_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 638;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 638;
        tmp_call_result_111 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_115, &PyTuple_GET_ITEM(mod_consts[206], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_115);
        if (tmp_call_result_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 638;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_111);
    }
    {
        PyObject *tmp_called_value_116;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_call_result_112;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_118 = var_verbosity;
        tmp_called_value_116 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[48]);
        if (tmp_called_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 642;
        tmp_call_result_112 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_116, &PyTuple_GET_ITEM(mod_consts[207], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_116);
        if (tmp_call_result_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_112);
    }
    {
        PyObject *tmp_called_value_117;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_call_result_113;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_119 = var_verbosity;
        tmp_called_value_117 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[48]);
        if (tmp_called_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 646;
        tmp_call_result_113 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_117, &PyTuple_GET_ITEM(mod_consts[208], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_117);
        if (tmp_call_result_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_113);
    }
    {
        PyObject *tmp_called_value_118;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_call_result_114;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_120 = var_verbosity;
        tmp_called_value_118 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[48]);
        if (tmp_called_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 650;
        tmp_call_result_114 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_118, &PyTuple_GET_ITEM(mod_consts[209], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_118);
        if (tmp_call_result_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_114);
    }
    {
        PyObject *tmp_called_value_119;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_call_result_115;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_121 = var_verbosity;
        tmp_called_value_119 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[48]);
        if (tmp_called_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 654;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 654;
        tmp_call_result_115 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_119, &PyTuple_GET_ITEM(mod_consts[210], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_119);
        if (tmp_call_result_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 654;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_115);
    }
    {
        PyObject *tmp_called_value_120;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_call_result_116;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_122 = var_verbosity;
        tmp_called_value_120 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[48]);
        if (tmp_called_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 658;
        tmp_call_result_116 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_120, &PyTuple_GET_ITEM(mod_consts[211], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_120);
        if (tmp_call_result_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_116);
    }
    {
        PyObject *tmp_called_value_121;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_call_result_117;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_kw_call_value_1_7;
        PyObject *tmp_kw_call_value_2_6;
        PyObject *tmp_kw_call_value_3_5;
        PyObject *tmp_expression_value_124;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_123 = var_verbosity;
        tmp_called_value_121 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[48]);
        if (tmp_called_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_7 = mod_consts[134];
        tmp_kw_call_value_1_7 = mod_consts[212];
        tmp_kw_call_value_2_6 = Py_False;
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);

            exception_lineno = 665;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[84]);
        if (tmp_kw_call_value_3_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);

            exception_lineno = 665;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 662;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7, tmp_kw_call_value_2_6, tmp_kw_call_value_3_5};
            tmp_call_result_117 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_121, mod_consts[213], kw_values, mod_consts[55]);
        }

        Py_DECREF(tmp_called_value_121);
        Py_DECREF(tmp_kw_call_value_3_5);
        if (tmp_call_result_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_117);
    }
    {
        PyObject *tmp_called_value_122;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_call_result_118;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_125 = var_verbosity;
        tmp_called_value_122 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[48]);
        if (tmp_called_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 666;
        tmp_call_result_118 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_122, &PyTuple_GET_ITEM(mod_consts[214], 0), mod_consts[168]);
        Py_DECREF(tmp_called_value_122);
        if (tmp_call_result_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_118);
    }
    {
        PyObject *tmp_called_value_123;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_call_result_119;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_126 = var_verbosity;
        tmp_called_value_123 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[48]);
        if (tmp_called_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 670;
        tmp_call_result_119 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_123, &PyTuple_GET_ITEM(mod_consts[215], 0), mod_consts[168]);
        Py_DECREF(tmp_called_value_123);
        if (tmp_call_result_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_119);
    }
    {
        PyObject *tmp_called_value_124;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_call_result_120;
        CHECK_OBJECT(var_verbosity);
        tmp_expression_value_127 = var_verbosity;
        tmp_called_value_124 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[48]);
        if (tmp_called_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 674;
        tmp_call_result_120 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_124, &PyTuple_GET_ITEM(mod_consts[216], 0), mod_consts[168]);
        Py_DECREF(tmp_called_value_124);
        if (tmp_call_result_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_120);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parser);
        tmp_args_element_value_24 = var_parser;
        tmp_args_element_value_25 = mod_consts[217];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 679;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_assign_source_21 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_12,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_filesystem == NULL);
        var_filesystem = tmp_assign_source_21;
    }
    {
        PyObject *tmp_called_value_125;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_call_result_121;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_128 = var_filesystem;
        tmp_called_value_125 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[48]);
        if (tmp_called_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 680;
        tmp_call_result_121 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_125, &PyTuple_GET_ITEM(mod_consts[218], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_125);
        if (tmp_call_result_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_121);
    }
    {
        PyObject *tmp_called_value_126;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_call_result_122;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_129 = var_filesystem;
        tmp_called_value_126 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[48]);
        if (tmp_called_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 685;
        tmp_call_result_122 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_126, &PyTuple_GET_ITEM(mod_consts[219], 0), mod_consts[220]);
        Py_DECREF(tmp_called_value_126);
        if (tmp_call_result_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_122);
    }
    {
        PyObject *tmp_called_value_127;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_call_result_123;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_130 = var_filesystem;
        tmp_called_value_127 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[48]);
        if (tmp_called_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 688;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 688;
        tmp_call_result_123 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_127, &PyTuple_GET_ITEM(mod_consts[221], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_127);
        if (tmp_call_result_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 688;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_123);
    }
    {
        PyObject *tmp_called_value_128;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_call_result_124;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_131 = var_filesystem;
        tmp_called_value_128 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[48]);
        if (tmp_called_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 692;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 692;
        tmp_call_result_124 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_128, &PyTuple_GET_ITEM(mod_consts[222], 0), mod_consts[95]);
        Py_DECREF(tmp_called_value_128);
        if (tmp_call_result_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 692;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_124);
    }
    {
        PyObject *tmp_called_value_129;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_call_result_125;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_kw_call_value_1_8;
        PyObject *tmp_kw_call_value_2_7;
        PyObject *tmp_kw_call_value_3_6;
        PyObject *tmp_expression_value_133;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_132 = var_filesystem;
        tmp_called_value_129 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[48]);
        if (tmp_called_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 696;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_8 = mod_consts[223];
        tmp_kw_call_value_1_8 = mod_consts[224];
        tmp_kw_call_value_2_7 = (PyObject *)&PyLong_Type;
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);

            exception_lineno = 699;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[84]);
        if (tmp_kw_call_value_3_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);

            exception_lineno = 699;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 696;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8, tmp_kw_call_value_2_7, tmp_kw_call_value_3_6};
            tmp_call_result_125 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_129, mod_consts[225], kw_values, mod_consts[226]);
        }

        Py_DECREF(tmp_called_value_129);
        Py_DECREF(tmp_kw_call_value_3_6);
        if (tmp_call_result_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 696;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_125);
    }
    {
        PyObject *tmp_called_value_130;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_call_result_126;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_134 = var_filesystem;
        tmp_called_value_130 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[48]);
        if (tmp_called_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 700;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 700;
        tmp_call_result_126 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_130, &PyTuple_GET_ITEM(mod_consts[227], 0), mod_consts[92]);
        Py_DECREF(tmp_called_value_130);
        if (tmp_call_result_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 700;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_126);
    }
    {
        PyObject *tmp_called_value_131;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_call_result_127;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_135 = var_filesystem;
        tmp_called_value_131 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[48]);
        if (tmp_called_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 704;
        tmp_call_result_127 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_131, &PyTuple_GET_ITEM(mod_consts[228], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_131);
        if (tmp_call_result_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_127);
    }
    {
        PyObject *tmp_called_value_132;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_call_result_128;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_kw_call_value_1_9;
        PyObject *tmp_kw_call_value_2_8;
        PyObject *tmp_kw_call_value_3_7;
        PyObject *tmp_expression_value_137;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_136 = var_filesystem;
        tmp_called_value_132 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[48]);
        if (tmp_called_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_9 = mod_consts[134];
        tmp_kw_call_value_1_9 = mod_consts[229];
        tmp_kw_call_value_2_8 = Py_False;
        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_137 == NULL)) {
            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_132);

            exception_lineno = 711;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[84]);
        if (tmp_kw_call_value_3_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_132);

            exception_lineno = 711;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 708;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_9, tmp_kw_call_value_2_8, tmp_kw_call_value_3_7};
            tmp_call_result_128 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tmp_called_value_132, mod_consts[230], kw_values, mod_consts[55]);
        }

        Py_DECREF(tmp_called_value_132);
        Py_DECREF(tmp_kw_call_value_3_7);
        if (tmp_call_result_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_128);
    }
    {
        PyObject *tmp_called_value_133;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_call_result_129;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_kw_call_value_1_10;
        PyObject *tmp_kw_call_value_2_9;
        PyObject *tmp_kw_call_value_3_8;
        PyObject *tmp_expression_value_139;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_138 = var_filesystem;
        tmp_called_value_133 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[48]);
        if (tmp_called_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 712;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = mod_consts[134];
        tmp_kw_call_value_1_10 = mod_consts[231];
        tmp_kw_call_value_2_9 = Py_False;
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);

            exception_lineno = 715;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[84]);
        if (tmp_kw_call_value_3_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);

            exception_lineno = 715;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 712;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_10, tmp_kw_call_value_2_9, tmp_kw_call_value_3_8};
            tmp_call_result_129 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tmp_called_value_133, mod_consts[232], kw_values, mod_consts[55]);
        }

        Py_DECREF(tmp_called_value_133);
        Py_DECREF(tmp_kw_call_value_3_8);
        if (tmp_call_result_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 712;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_129);
    }
    {
        PyObject *tmp_called_value_134;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_call_result_130;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_kw_call_value_1_11;
        PyObject *tmp_kw_call_value_2_10;
        PyObject *tmp_kw_call_value_3_9;
        PyObject *tmp_expression_value_141;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_140 = var_filesystem;
        tmp_called_value_134 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[48]);
        if (tmp_called_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_11 = Py_False;
        tmp_kw_call_value_1_11 = mod_consts[134];
        tmp_kw_call_value_2_10 = mod_consts[231];
        tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_141 == NULL)) {
            tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);

            exception_lineno = 719;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[84]);
        if (tmp_kw_call_value_3_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);

            exception_lineno = 719;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 716;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_11, tmp_kw_call_value_2_10, tmp_kw_call_value_3_9};
            tmp_call_result_130 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tmp_called_value_134, mod_consts[233], kw_values, mod_consts[220]);
        }

        Py_DECREF(tmp_called_value_134);
        Py_DECREF(tmp_kw_call_value_3_9);
        if (tmp_call_result_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_130);
    }
    {
        PyObject *tmp_called_value_135;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_call_result_131;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_142 = var_filesystem;
        tmp_called_value_135 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[48]);
        if (tmp_called_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 720;
        tmp_call_result_131 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_135, &PyTuple_GET_ITEM(mod_consts[234], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_135);
        if (tmp_call_result_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_131);
    }
    {
        PyObject *tmp_called_value_136;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_call_result_132;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_143 = var_filesystem;
        tmp_called_value_136 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[48]);
        if (tmp_called_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 724;
        tmp_call_result_132 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_136, &PyTuple_GET_ITEM(mod_consts[235], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_136);
        if (tmp_call_result_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_132);
    }
    {
        PyObject *tmp_called_value_137;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_call_result_133;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_144 = var_filesystem;
        tmp_called_value_137 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[48]);
        if (tmp_called_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 728;
        tmp_call_result_133 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_137, &PyTuple_GET_ITEM(mod_consts[236], 0), mod_consts[53]);
        Py_DECREF(tmp_called_value_137);
        if (tmp_call_result_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_133);
    }
    {
        PyObject *tmp_called_value_138;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_call_result_134;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_145 = var_filesystem;
        tmp_called_value_138 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[48]);
        if (tmp_called_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 732;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 732;
        tmp_call_result_134 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_138, &PyTuple_GET_ITEM(mod_consts[237], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_138);
        if (tmp_call_result_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 732;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_134);
    }
    {
        PyObject *tmp_called_value_139;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_call_result_135;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_146 = var_filesystem;
        tmp_called_value_139 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[48]);
        if (tmp_called_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 736;
        tmp_call_result_135 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_139, &PyTuple_GET_ITEM(mod_consts[238], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_139);
        if (tmp_call_result_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_135);
    }
    {
        PyObject *tmp_called_value_140;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_call_result_136;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_147 = var_filesystem;
        tmp_called_value_140 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[48]);
        if (tmp_called_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 740;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 740;
        tmp_call_result_136 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_140, &PyTuple_GET_ITEM(mod_consts[239], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_140);
        if (tmp_call_result_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 740;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_136);
    }
    {
        PyObject *tmp_called_value_141;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_call_result_137;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_148 = var_filesystem;
        tmp_called_value_141 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[48]);
        if (tmp_called_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 744;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 744;
        tmp_call_result_137 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_141, &PyTuple_GET_ITEM(mod_consts[240], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_141);
        if (tmp_call_result_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 744;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_137);
    }
    {
        PyObject *tmp_called_value_142;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_call_result_138;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_149 = var_filesystem;
        tmp_called_value_142 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[48]);
        if (tmp_called_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 748;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 748;
        tmp_call_result_138 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_142, &PyTuple_GET_ITEM(mod_consts[241], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_142);
        if (tmp_call_result_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 748;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_138);
    }
    {
        PyObject *tmp_called_value_143;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_call_result_139;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_150 = var_filesystem;
        tmp_called_value_143 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[48]);
        if (tmp_called_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 752;
        tmp_call_result_139 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_143, &PyTuple_GET_ITEM(mod_consts[242], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_143);
        if (tmp_call_result_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_139);
    }
    {
        PyObject *tmp_called_value_144;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_call_result_140;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_151 = var_filesystem;
        tmp_called_value_144 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[48]);
        if (tmp_called_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 756;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 756;
        tmp_call_result_140 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_144, &PyTuple_GET_ITEM(mod_consts[243], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_144);
        if (tmp_call_result_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 756;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_140);
    }
    {
        PyObject *tmp_called_value_145;
        PyObject *tmp_expression_value_152;
        PyObject *tmp_call_result_141;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_152 = var_filesystem;
        tmp_called_value_145 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[48]);
        if (tmp_called_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 760;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 760;
        tmp_call_result_141 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_145, &PyTuple_GET_ITEM(mod_consts[244], 0), mod_consts[72]);
        Py_DECREF(tmp_called_value_145);
        if (tmp_call_result_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 760;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_141);
    }
    {
        PyObject *tmp_called_value_146;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_call_result_142;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_153 = var_filesystem;
        tmp_called_value_146 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[48]);
        if (tmp_called_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 763;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 763;
        tmp_call_result_142 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_146, &PyTuple_GET_ITEM(mod_consts[245], 0), mod_consts[78]);
        Py_DECREF(tmp_called_value_146);
        if (tmp_call_result_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 763;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_142);
    }
    {
        PyObject *tmp_called_value_147;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_call_result_143;
        CHECK_OBJECT(var_filesystem);
        tmp_expression_value_154 = var_filesystem;
        tmp_called_value_147 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[48]);
        if (tmp_called_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 766;
        tmp_call_result_143 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_147, &PyTuple_GET_ITEM(mod_consts[246], 0), mod_consts[53]);
        Py_DECREF(tmp_called_value_147);
        if (tmp_call_result_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_143);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parser);
        tmp_args_element_value_26 = var_parser;
        tmp_args_element_value_27 = mod_consts[247];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 771;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_assign_source_22 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_13,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_thumbnail == NULL);
        var_thumbnail = tmp_assign_source_22;
    }
    {
        PyObject *tmp_called_value_148;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_call_result_144;
        CHECK_OBJECT(var_thumbnail);
        tmp_expression_value_155 = var_thumbnail;
        tmp_called_value_148 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[48]);
        if (tmp_called_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 772;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 772;
        tmp_call_result_144 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_148, &PyTuple_GET_ITEM(mod_consts[248], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_148);
        if (tmp_call_result_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 772;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_144);
    }
    {
        PyObject *tmp_called_value_149;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_call_result_145;
        CHECK_OBJECT(var_thumbnail);
        tmp_expression_value_156 = var_thumbnail;
        tmp_called_value_149 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[48]);
        if (tmp_called_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 776;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 776;
        tmp_call_result_145 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_149, &PyTuple_GET_ITEM(mod_consts[249], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_149);
        if (tmp_call_result_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 776;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_145);
    }
    {
        PyObject *tmp_called_value_150;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_call_result_146;
        CHECK_OBJECT(var_thumbnail);
        tmp_expression_value_157 = var_thumbnail;
        tmp_called_value_150 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[48]);
        if (tmp_called_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 780;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 780;
        tmp_call_result_146 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_150, &PyTuple_GET_ITEM(mod_consts[250], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_150);
        if (tmp_call_result_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 780;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_146);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 785;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parser);
        tmp_args_element_value_28 = var_parser;
        tmp_args_element_value_29 = mod_consts[251];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 785;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_assign_source_23 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_14,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 785;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_postproc == NULL);
        var_postproc = tmp_assign_source_23;
    }
    {
        PyObject *tmp_called_value_151;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_call_result_147;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_158 = var_postproc;
        tmp_called_value_151 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[48]);
        if (tmp_called_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 786;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 786;
        tmp_call_result_147 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_151, &PyTuple_GET_ITEM(mod_consts[252], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_151);
        if (tmp_call_result_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 786;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_147);
    }
    {
        PyObject *tmp_called_value_152;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_call_result_148;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_159 = var_postproc;
        tmp_called_value_152 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[48]);
        if (tmp_called_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 790;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 790;
        tmp_call_result_148 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_152, &PyTuple_GET_ITEM(mod_consts[253], 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_152);
        if (tmp_call_result_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 790;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_148);
    }
    {
        PyObject *tmp_called_value_153;
        PyObject *tmp_expression_value_160;
        PyObject *tmp_call_result_149;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_160 = var_postproc;
        tmp_called_value_153 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[48]);
        if (tmp_called_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 793;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 793;
        tmp_call_result_149 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_153, &PyTuple_GET_ITEM(mod_consts[254], 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_153);
        if (tmp_call_result_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 793;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_149);
    }
    {
        PyObject *tmp_called_value_154;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_call_result_150;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_161 = var_postproc;
        tmp_called_value_154 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[48]);
        if (tmp_called_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 797;
        tmp_call_result_150 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_154, &PyTuple_GET_ITEM(mod_consts[255], 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_154);
        if (tmp_call_result_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_150);
    }
    {
        PyObject *tmp_called_value_155;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_call_result_151;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_162 = var_postproc;
        tmp_called_value_155 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[48]);
        if (tmp_called_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 801;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 801;
        tmp_call_result_151 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_155, &PyTuple_GET_ITEM(mod_consts[256], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_155);
        if (tmp_call_result_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 801;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_151);
    }
    {
        PyObject *tmp_called_value_156;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_call_result_152;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_163 = var_postproc;
        tmp_called_value_156 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[48]);
        if (tmp_called_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 805;
        tmp_call_result_152 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_156, &PyTuple_GET_ITEM(mod_consts[257], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_156);
        if (tmp_call_result_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_152);
    }
    {
        PyObject *tmp_called_value_157;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_call_result_153;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_164 = var_postproc;
        tmp_called_value_157 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[48]);
        if (tmp_called_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 809;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 809;
        tmp_call_result_153 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_157, &PyTuple_GET_ITEM(mod_consts[258], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_157);
        if (tmp_call_result_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 809;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_153);
    }
    {
        PyObject *tmp_called_value_158;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_call_result_154;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_165 = var_postproc;
        tmp_called_value_158 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[48]);
        if (tmp_called_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 813;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 813;
        tmp_call_result_154 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_158, &PyTuple_GET_ITEM(mod_consts[259], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_158);
        if (tmp_call_result_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 813;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_154);
    }
    {
        PyObject *tmp_called_value_159;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_call_result_155;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_166 = var_postproc;
        tmp_called_value_159 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[48]);
        if (tmp_called_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 817;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 817;
        tmp_call_result_155 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_159, &PyTuple_GET_ITEM(mod_consts[260], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_159);
        if (tmp_call_result_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 817;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_155);
    }
    {
        PyObject *tmp_called_value_160;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_call_result_156;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_167 = var_postproc;
        tmp_called_value_160 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[48]);
        if (tmp_called_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 821;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 821;
        tmp_call_result_156 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_160, &PyTuple_GET_ITEM(mod_consts[261], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_160);
        if (tmp_call_result_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 821;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_156);
    }
    {
        PyObject *tmp_called_value_161;
        PyObject *tmp_expression_value_168;
        PyObject *tmp_call_result_157;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_168 = var_postproc;
        tmp_called_value_161 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[48]);
        if (tmp_called_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 825;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 825;
        tmp_call_result_157 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_161, &PyTuple_GET_ITEM(mod_consts[262], 0), mod_consts[113]);
        Py_DECREF(tmp_called_value_161);
        if (tmp_call_result_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 825;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_157);
    }
    {
        PyObject *tmp_called_value_162;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_call_result_158;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_169 = var_postproc;
        tmp_called_value_162 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[48]);
        if (tmp_called_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 835;
        tmp_call_result_158 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_162, &PyTuple_GET_ITEM(mod_consts[263], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_162);
        if (tmp_call_result_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_158);
    }
    {
        PyObject *tmp_called_value_163;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_call_result_159;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_170 = var_postproc;
        tmp_called_value_163 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[48]);
        if (tmp_called_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 839;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 839;
        tmp_call_result_159 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_163, &PyTuple_GET_ITEM(mod_consts[264], 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_163);
        if (tmp_call_result_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 839;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_159);
    }
    {
        PyObject *tmp_called_value_164;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_call_result_160;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_171 = var_postproc;
        tmp_called_value_164 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[48]);
        if (tmp_called_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 845;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 845;
        tmp_call_result_160 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_164, &PyTuple_GET_ITEM(mod_consts[265], 0), mod_consts[53]);
        Py_DECREF(tmp_called_value_164);
        if (tmp_call_result_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 845;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_160);
    }
    {
        PyObject *tmp_called_value_165;
        PyObject *tmp_expression_value_172;
        PyObject *tmp_call_result_161;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_172 = var_postproc;
        tmp_called_value_165 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[48]);
        if (tmp_called_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 849;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 849;
        tmp_call_result_161 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_165, &PyTuple_GET_ITEM(mod_consts[266], 0), mod_consts[53]);
        Py_DECREF(tmp_called_value_165);
        if (tmp_call_result_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 849;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_161);
    }
    {
        PyObject *tmp_called_value_166;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_call_result_162;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_173 = var_postproc;
        tmp_called_value_166 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[48]);
        if (tmp_called_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 853;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 853;
        tmp_call_result_162 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_166, &PyTuple_GET_ITEM(mod_consts[267], 0), mod_consts[113]);
        Py_DECREF(tmp_called_value_166);
        if (tmp_call_result_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 853;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_162);
    }
    {
        PyObject *tmp_called_value_167;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_call_result_163;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_174 = var_postproc;
        tmp_called_value_167 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[48]);
        if (tmp_called_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 857;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 857;
        tmp_call_result_163 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_167, &PyTuple_GET_ITEM(mod_consts[268], 0), mod_consts[113]);
        Py_DECREF(tmp_called_value_167);
        if (tmp_call_result_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 857;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_163);
    }
    {
        PyObject *tmp_called_value_168;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_call_result_164;
        CHECK_OBJECT(var_postproc);
        tmp_expression_value_175 = var_postproc;
        tmp_called_value_168 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[48]);
        if (tmp_called_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 861;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 861;
        tmp_call_result_164 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_168, &PyTuple_GET_ITEM(mod_consts[269], 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_168);
        if (tmp_call_result_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 861;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_164);
    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_call_result_165;
        PyObject *tmp_args_element_value_30;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_15 = var_parser;
        CHECK_OBJECT(var_general);
        tmp_args_element_value_30 = var_general;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 866;
        tmp_call_result_165 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_15, mod_consts[270], tmp_args_element_value_30);
        if (tmp_call_result_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 866;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_165);
    }
    {
        PyObject *tmp_called_instance_16;
        PyObject *tmp_call_result_166;
        PyObject *tmp_args_element_value_31;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_16 = var_parser;
        CHECK_OBJECT(var_network);
        tmp_args_element_value_31 = var_network;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 867;
        tmp_call_result_166 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_16, mod_consts[270], tmp_args_element_value_31);
        if (tmp_call_result_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 867;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_166);
    }
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_call_result_167;
        PyObject *tmp_args_element_value_32;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_17 = var_parser;
        CHECK_OBJECT(var_geo);
        tmp_args_element_value_32 = var_geo;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 868;
        tmp_call_result_167 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_17, mod_consts[270], tmp_args_element_value_32);
        if (tmp_call_result_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 868;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_167);
    }
    {
        PyObject *tmp_called_instance_18;
        PyObject *tmp_call_result_168;
        PyObject *tmp_args_element_value_33;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_18 = var_parser;
        CHECK_OBJECT(var_selection);
        tmp_args_element_value_33 = var_selection;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 869;
        tmp_call_result_168 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_18, mod_consts[270], tmp_args_element_value_33);
        if (tmp_call_result_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 869;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_168);
    }
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_call_result_169;
        PyObject *tmp_args_element_value_34;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_19 = var_parser;
        CHECK_OBJECT(var_downloader);
        tmp_args_element_value_34 = var_downloader;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 870;
        tmp_call_result_169 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_19, mod_consts[270], tmp_args_element_value_34);
        if (tmp_call_result_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 870;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_169);
    }
    {
        PyObject *tmp_called_instance_20;
        PyObject *tmp_call_result_170;
        PyObject *tmp_args_element_value_35;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_20 = var_parser;
        CHECK_OBJECT(var_filesystem);
        tmp_args_element_value_35 = var_filesystem;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 871;
        tmp_call_result_170 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_20, mod_consts[270], tmp_args_element_value_35);
        if (tmp_call_result_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 871;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_170);
    }
    {
        PyObject *tmp_called_instance_21;
        PyObject *tmp_call_result_171;
        PyObject *tmp_args_element_value_36;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_21 = var_parser;
        CHECK_OBJECT(var_thumbnail);
        tmp_args_element_value_36 = var_thumbnail;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 872;
        tmp_call_result_171 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_21, mod_consts[270], tmp_args_element_value_36);
        if (tmp_call_result_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 872;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_171);
    }
    {
        PyObject *tmp_called_instance_22;
        PyObject *tmp_call_result_172;
        PyObject *tmp_args_element_value_37;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_22 = var_parser;
        CHECK_OBJECT(var_verbosity);
        tmp_args_element_value_37 = var_verbosity;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 873;
        tmp_call_result_172 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_22, mod_consts[270], tmp_args_element_value_37);
        if (tmp_call_result_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 873;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_172);
    }
    {
        PyObject *tmp_called_instance_23;
        PyObject *tmp_call_result_173;
        PyObject *tmp_args_element_value_38;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_23 = var_parser;
        CHECK_OBJECT(var_workarounds);
        tmp_args_element_value_38 = var_workarounds;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 874;
        tmp_call_result_173 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_23, mod_consts[270], tmp_args_element_value_38);
        if (tmp_call_result_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 874;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_173);
    }
    {
        PyObject *tmp_called_instance_24;
        PyObject *tmp_call_result_174;
        PyObject *tmp_args_element_value_39;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_24 = var_parser;
        CHECK_OBJECT(var_video_format);
        tmp_args_element_value_39 = var_video_format;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 875;
        tmp_call_result_174 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_24, mod_consts[270], tmp_args_element_value_39);
        if (tmp_call_result_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 875;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_174);
    }
    {
        PyObject *tmp_called_instance_25;
        PyObject *tmp_call_result_175;
        PyObject *tmp_args_element_value_40;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_25 = var_parser;
        CHECK_OBJECT(var_subtitles);
        tmp_args_element_value_40 = var_subtitles;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 876;
        tmp_call_result_175 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_25, mod_consts[270], tmp_args_element_value_40);
        if (tmp_call_result_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 876;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_175);
    }
    {
        PyObject *tmp_called_instance_26;
        PyObject *tmp_call_result_176;
        PyObject *tmp_args_element_value_41;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_26 = var_parser;
        CHECK_OBJECT(var_authentication);
        tmp_args_element_value_41 = var_authentication;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 877;
        tmp_call_result_176 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_26, mod_consts[270], tmp_args_element_value_41);
        if (tmp_call_result_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 877;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_176);
    }
    {
        PyObject *tmp_called_instance_27;
        PyObject *tmp_call_result_177;
        PyObject *tmp_args_element_value_42;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_27 = var_parser;
        CHECK_OBJECT(var_adobe_pass);
        tmp_args_element_value_42 = var_adobe_pass;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 878;
        tmp_call_result_177 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_27, mod_consts[270], tmp_args_element_value_42);
        if (tmp_call_result_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 878;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_177);
    }
    {
        PyObject *tmp_called_instance_28;
        PyObject *tmp_call_result_178;
        PyObject *tmp_args_element_value_43;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_28 = var_parser;
        CHECK_OBJECT(var_postproc);
        tmp_args_element_value_43 = var_postproc;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 879;
        tmp_call_result_178 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_28, mod_consts[270], tmp_args_element_value_43);
        if (tmp_call_result_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 879;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_178);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_overrideArguments);
        tmp_cmp_expr_left_1 = par_overrideArguments;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_29;
        PyObject *tmp_args_element_value_44;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_29 = var_parser;
        CHECK_OBJECT(par_overrideArguments);
        tmp_args_element_value_44 = par_overrideArguments;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 882;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_29, mod_consts[271], tmp_args_element_value_44);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 882;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_24 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 882;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_25 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            exception_lineno = 882;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_26 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            exception_lineno = 882;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_26;
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

                    type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
                    exception_lineno = 882;
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

            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            exception_lineno = 882;
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
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_27 = tmp_tuple_unpack_1__element_1;
        assert(var_opts == NULL);
        Py_INCREF(tmp_assign_source_27);
        var_opts = tmp_assign_source_27;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_28 = tmp_tuple_unpack_1__element_2;
        assert(var_args == NULL);
        Py_INCREF(tmp_assign_source_28);
        var_args = tmp_assign_source_28;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_176;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_opts);
        tmp_expression_value_176 = var_opts;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[272]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 883;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 883;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_169;
        PyObject *tmp_call_result_179;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_operand_value_1;
        tmp_called_value_169 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[273]);

        if (unlikely(tmp_called_value_169 == NULL)) {
            tmp_called_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[273]);
        }

        if (tmp_called_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 884;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = mod_consts[274];
        CHECK_OBJECT(par_overrideArguments);
        tmp_operand_value_1 = par_overrideArguments;
        tmp_add_expr_right_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 884;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 884;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[275];
        tmp_args_element_value_45 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 884;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 884;
        tmp_call_result_179 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_169, tmp_args_element_value_45);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_call_result_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 884;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_179);
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts$$$function__5_compat_conf();

        assert(var_compat_conf == NULL);
        var_compat_conf = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_170;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_compat_conf);
        tmp_called_value_170 = var_compat_conf;
        tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[278]);

        if (unlikely(tmp_expression_value_178 == NULL)) {
            tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[278]);
        }

        assert(!(tmp_expression_value_178 == NULL));
        tmp_expression_value_177 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[279]);
        if (tmp_expression_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 891;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[280];
        tmp_args_element_value_46 = LOOKUP_SUBSCRIPT(tmp_expression_value_177, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_177);
        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 891;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 891;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_170, tmp_args_element_value_46);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 891;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_command_line_conf == NULL);
        var_command_line_conf = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_30;
        PyObject *tmp_args_element_value_47;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_30 = var_parser;
        CHECK_OBJECT(var_command_line_conf);
        tmp_args_element_value_47 = var_command_line_conf;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 892;
        tmp_iter_arg_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_30, mod_consts[271], tmp_args_element_value_47);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 892;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_31 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 892;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_32 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_32 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            exception_lineno = 892;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_33 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            exception_lineno = 892;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_33;
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

                    type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
                    exception_lineno = 892;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            exception_lineno = 892;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_34 = tmp_tuple_unpack_2__element_1;
        assert(var_opts == NULL);
        Py_INCREF(tmp_assign_source_34);
        var_opts = tmp_assign_source_34;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_35 = tmp_tuple_unpack_2__element_2;
        assert(var_args == NULL);
        Py_INCREF(tmp_assign_source_35);
        var_args = tmp_assign_source_35;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_LIST_EMPTY(0);
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_37 = tmp_assign_unpack_1__assign_source;
        assert(var_system_conf == NULL);
        Py_INCREF(tmp_assign_source_37);
        var_system_conf = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_38 = tmp_assign_unpack_1__assign_source;
        assert(var_user_conf == NULL);
        Py_INCREF(tmp_assign_source_38);
        var_user_conf = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_39 = tmp_assign_unpack_1__assign_source;
        assert(var_custom_conf == NULL);
        Py_INCREF(tmp_assign_source_39);
        var_custom_conf = tmp_assign_source_39;
    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = mod_consts[281];
        CHECK_OBJECT(var_command_line_conf);
        tmp_cmp_expr_right_2 = var_command_line_conf;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 896;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_171;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_expression_value_179;
        tmp_called_value_171 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[282]);

        if (unlikely(tmp_called_value_171 == NULL)) {
            tmp_called_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[282]);
        }

        if (tmp_called_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 897;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_opts);
        tmp_expression_value_179 = var_opts;
        tmp_args_element_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[283]);
        if (tmp_args_element_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 897;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 897;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_171, tmp_args_element_value_48);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 897;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_location == NULL);
        var_location = tmp_assign_source_40;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_instance_31;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_call_result_180;
        PyObject *tmp_args_element_value_49;
        int tmp_truth_name_3;
        tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_expression_value_180 == NULL)) {
            tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[284]);
        }

        if (tmp_expression_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 898;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_180, mod_consts[285]);
        if (tmp_called_instance_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 898;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_location);
        tmp_args_element_value_49 = var_location;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 898;
        tmp_call_result_180 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_31, mod_consts[286], tmp_args_element_value_49);
        Py_DECREF(tmp_called_instance_31);
        if (tmp_call_result_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 898;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_180);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_180);

            exception_lineno = 898;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_180);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_172;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_expression_value_182 == NULL)) {
            tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[284]);
        }

        if (tmp_expression_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 899;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_181 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[285]);
        if (tmp_expression_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 899;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_172 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[287]);
        Py_DECREF(tmp_expression_value_181);
        if (tmp_called_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 899;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_location);
        tmp_args_element_value_50 = var_location;
        tmp_args_element_value_51 = mod_consts[288];
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 899;
        {
            PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51};
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_172, call_args);
        }

        Py_DECREF(tmp_called_value_172);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 899;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_location;
            assert(old != NULL);
            var_location = tmp_assign_source_41;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_173;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_args_element_value_52;
        tmp_expression_value_184 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_expression_value_184 == NULL)) {
            tmp_expression_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[284]);
        }

        if (tmp_expression_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 900;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_183 = LOOKUP_ATTRIBUTE(tmp_expression_value_184, mod_consts[285]);
        if (tmp_expression_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 900;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_173 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[289]);
        Py_DECREF(tmp_expression_value_183);
        if (tmp_called_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 900;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_location == NULL) {
            Py_DECREF(tmp_called_value_173);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[290]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 900;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_52 = var_location;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 900;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_173, tmp_args_element_value_52);
        Py_DECREF(tmp_called_value_173);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 900;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 900;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_174;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_call_result_181;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        CHECK_OBJECT(var_parser);
        tmp_expression_value_185 = var_parser;
        tmp_called_value_174 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[291]);
        if (tmp_called_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 901;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_2 = mod_consts[292];
        if (var_location == NULL) {
            Py_DECREF(tmp_called_value_174);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[290]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 901;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_2 = var_location;
        tmp_args_element_value_53 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_174);

            exception_lineno = 901;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 901;
        tmp_call_result_181 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_174, tmp_args_element_value_53);
        Py_DECREF(tmp_called_value_174);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_call_result_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 901;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_181);
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_175;
        PyObject *tmp_args_element_value_54;
        CHECK_OBJECT(Nuitka_Cell_GET(var__readOptions));
        tmp_called_value_175 = Nuitka_Cell_GET(var__readOptions);
        if (var_location == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[290]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 902;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_54 = var_location;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 902;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_175, tmp_args_element_value_54);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 902;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_custom_conf;
            assert(old != NULL);
            var_custom_conf = tmp_assign_source_42;
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = mod_consts[293];
        CHECK_OBJECT(var_command_line_conf);
        tmp_cmp_expr_right_3 = var_command_line_conf;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 903;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_176;
        CHECK_OBJECT(Nuitka_Cell_GET(var__readOptions));
        tmp_called_value_176 = Nuitka_Cell_GET(var__readOptions);
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 906;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_176, mod_consts[294]);

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 906;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_system_conf;
            assert(old != NULL);
            var_system_conf = tmp_assign_source_43;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = mod_consts[293];
        CHECK_OBJECT(var_system_conf);
        tmp_cmp_expr_right_4 = var_system_conf;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 907;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_177;
        CHECK_OBJECT(var__readUserConf);
        tmp_called_value_177 = var__readUserConf;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 908;
        tmp_assign_source_44 = CALL_FUNCTION_NO_ARGS(tmp_called_value_177);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 908;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_user_conf;
            assert(old != NULL);
            var_user_conf = tmp_assign_source_44;
            Py_DECREF(old);
        }

    }
    branch_no_7:;
    branch_no_6:;
    branch_end_3:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        CHECK_OBJECT(var_system_conf);
        tmp_add_expr_left_5 = var_system_conf;
        CHECK_OBJECT(var_user_conf);
        tmp_add_expr_right_5 = var_user_conf;
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_add_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 910;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_custom_conf);
        tmp_add_expr_right_4 = var_custom_conf;
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 910;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_command_line_conf);
        tmp_add_expr_right_3 = var_command_line_conf;
        tmp_assign_source_45 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 910;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_argv == NULL);
        var_argv = tmp_assign_source_45;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_instance_32;
        PyObject *tmp_args_element_value_55;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_32 = var_parser;
        CHECK_OBJECT(var_argv);
        tmp_args_element_value_55 = var_argv;
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 911;
        tmp_iter_arg_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_32, mod_consts[271], tmp_args_element_value_55);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 911;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_46 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 911;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_46;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_47 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_47 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            exception_lineno = 911;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_48 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_48 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            exception_lineno = 911;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_48;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
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

                    type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
                    exception_lineno = 911;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            exception_lineno = 911;
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_49 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_opts;
            assert(old != NULL);
            var_opts = tmp_assign_source_49;
            Py_INCREF(var_opts);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_50 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_args;
            assert(old != NULL);
            var_args = tmp_assign_source_50;
            Py_INCREF(var_args);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_opts);
        tmp_expression_value_186 = var_opts;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[272]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 912;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 912;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[295];
        tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_system_conf);
        tmp_tuple_element_3 = var_system_conf;
        PyTuple_SET_ITEM0(tmp_tuple_element_2, 1, tmp_tuple_element_3);
        tmp_iter_arg_4 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_tuple_element_6;
            PyTuple_SET_ITEM(tmp_iter_arg_4, 0, tmp_tuple_element_2);
            tmp_tuple_element_4 = mod_consts[296];
            tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_user_conf);
            tmp_tuple_element_4 = var_user_conf;
            PyTuple_SET_ITEM0(tmp_tuple_element_2, 1, tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_iter_arg_4, 1, tmp_tuple_element_2);
            tmp_tuple_element_5 = mod_consts[297];
            tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(var_custom_conf);
            tmp_tuple_element_5 = var_custom_conf;
            PyTuple_SET_ITEM0(tmp_tuple_element_2, 1, tmp_tuple_element_5);
            PyTuple_SET_ITEM(tmp_iter_arg_4, 2, tmp_tuple_element_2);
            tmp_tuple_element_6 = mod_consts[298];
            tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(var_command_line_conf);
            tmp_tuple_element_6 = var_command_line_conf;
            PyTuple_SET_ITEM0(tmp_tuple_element_2, 1, tmp_tuple_element_6);
            PyTuple_SET_ITEM(tmp_iter_arg_4, 3, tmp_tuple_element_2);
        }
        tmp_assign_source_51 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        assert(!(tmp_assign_source_51 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_51;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_52 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_52 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
                exception_lineno = 913;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_52;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_5 = tmp_for_loop_1__iter_value;
        tmp_assign_source_53 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 913;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_54 = UNPACK_NEXT(tmp_unpack_7, 0, 2);
        if (tmp_assign_source_54 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            exception_lineno = 913;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_55 = UNPACK_NEXT(tmp_unpack_8, 1, 2);
        if (tmp_assign_source_55 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            exception_lineno = 913;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
                    exception_lineno = 913;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            exception_lineno = 913;
            goto try_except_handler_10;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_56 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_conf_label;
            var_conf_label = tmp_assign_source_56;
            Py_INCREF(var_conf_label);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_57 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_conf;
            var_conf = tmp_assign_source_57;
            Py_INCREF(var_conf);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_called_value_178;
        PyObject *tmp_call_result_182;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_7;
        tmp_called_value_178 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[273]);

        if (unlikely(tmp_called_value_178 == NULL)) {
            tmp_called_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[273]);
        }

        if (tmp_called_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 918;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_mod_expr_left_3 = mod_consts[299];
        CHECK_OBJECT(var_conf_label);
        tmp_tuple_element_7 = var_conf_label;
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_operand_value_3;
            PyObject *tmp_called_value_179;
            PyObject *tmp_args_element_value_57;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 0, tmp_tuple_element_7);
            tmp_called_value_179 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[300]);

            if (unlikely(tmp_called_value_179 == NULL)) {
                tmp_called_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[300]);
            }

            if (tmp_called_value_179 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 918;
                type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_conf);
            tmp_args_element_value_57 = var_conf;
            frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 918;
            tmp_operand_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_179, tmp_args_element_value_57);
            if (tmp_operand_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 918;
                type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_7 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
            Py_DECREF(tmp_operand_value_3);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 918;
                type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_56 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_args_element_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 918;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame.f_lineno = 918;
        tmp_call_result_182 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_178, tmp_args_element_value_56);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_call_result_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 918;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_182);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 913;
        type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    branch_no_8:;
    branch_end_1:;
    {
        PyObject *tmp_tuple_element_8;
        CHECK_OBJECT(var_parser);
        tmp_tuple_element_8 = var_parser;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_8);
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 920;
            type_description_1 = "ocoooooNoooooooooooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_8 = var_opts;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_8);
        CHECK_OBJECT(var_args);
        tmp_tuple_element_8 = var_args;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_8);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e818ad2fe263b2cc2deafdc13ad497ff);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e818ad2fe263b2cc2deafdc13ad497ff);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e818ad2fe263b2cc2deafdc13ad497ff);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e818ad2fe263b2cc2deafdc13ad497ff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e818ad2fe263b2cc2deafdc13ad497ff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e818ad2fe263b2cc2deafdc13ad497ff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e818ad2fe263b2cc2deafdc13ad497ff,
        type_description_1,
        par_overrideArguments,
        var__readOptions,
        var__readUserConf,
        var__format_option_string,
        var__comma_separated_values_options_callback,
        var_columns,
        var_max_width,
        NULL,
        var_fmt,
        var_kw,
        var_parser,
        var_general,
        var_network,
        var_geo,
        var_selection,
        var_authentication,
        var_adobe_pass,
        var_video_format,
        var_subtitles,
        var_downloader,
        var_workarounds,
        var_verbosity,
        var_filesystem,
        var_thumbnail,
        var_postproc,
        var_opts,
        var_args,
        var_compat_conf,
        var_command_line_conf,
        var_system_conf,
        var_user_conf,
        var_custom_conf,
        var_location,
        var_argv,
        var_conf_label,
        var_conf
    );


    // Release cached frame if used for exception.
    if (frame_e818ad2fe263b2cc2deafdc13ad497ff == cache_frame_e818ad2fe263b2cc2deafdc13ad497ff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e818ad2fe263b2cc2deafdc13ad497ff);
        cache_frame_e818ad2fe263b2cc2deafdc13ad497ff = NULL;
    }

    assertFrameObject(frame_e818ad2fe263b2cc2deafdc13ad497ff);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__readOptions);
    Py_DECREF(var__readOptions);
    var__readOptions = NULL;
    Py_XDECREF(var__readUserConf);
    var__readUserConf = NULL;
    CHECK_OBJECT(var__format_option_string);
    Py_DECREF(var__format_option_string);
    var__format_option_string = NULL;
    CHECK_OBJECT(var__comma_separated_values_options_callback);
    Py_DECREF(var__comma_separated_values_options_callback);
    var__comma_separated_values_options_callback = NULL;
    CHECK_OBJECT(var_columns);
    Py_DECREF(var_columns);
    var_columns = NULL;
    CHECK_OBJECT(var_max_width);
    Py_DECREF(var_max_width);
    var_max_width = NULL;
    CHECK_OBJECT(var_fmt);
    Py_DECREF(var_fmt);
    var_fmt = NULL;
    CHECK_OBJECT(var_kw);
    Py_DECREF(var_kw);
    var_kw = NULL;
    CHECK_OBJECT(var_parser);
    Py_DECREF(var_parser);
    var_parser = NULL;
    CHECK_OBJECT(var_general);
    Py_DECREF(var_general);
    var_general = NULL;
    CHECK_OBJECT(var_network);
    Py_DECREF(var_network);
    var_network = NULL;
    CHECK_OBJECT(var_geo);
    Py_DECREF(var_geo);
    var_geo = NULL;
    CHECK_OBJECT(var_selection);
    Py_DECREF(var_selection);
    var_selection = NULL;
    CHECK_OBJECT(var_authentication);
    Py_DECREF(var_authentication);
    var_authentication = NULL;
    CHECK_OBJECT(var_adobe_pass);
    Py_DECREF(var_adobe_pass);
    var_adobe_pass = NULL;
    CHECK_OBJECT(var_video_format);
    Py_DECREF(var_video_format);
    var_video_format = NULL;
    CHECK_OBJECT(var_subtitles);
    Py_DECREF(var_subtitles);
    var_subtitles = NULL;
    CHECK_OBJECT(var_downloader);
    Py_DECREF(var_downloader);
    var_downloader = NULL;
    CHECK_OBJECT(var_workarounds);
    Py_DECREF(var_workarounds);
    var_workarounds = NULL;
    CHECK_OBJECT(var_verbosity);
    Py_DECREF(var_verbosity);
    var_verbosity = NULL;
    CHECK_OBJECT(var_filesystem);
    Py_DECREF(var_filesystem);
    var_filesystem = NULL;
    CHECK_OBJECT(var_thumbnail);
    Py_DECREF(var_thumbnail);
    var_thumbnail = NULL;
    CHECK_OBJECT(var_postproc);
    Py_DECREF(var_postproc);
    var_postproc = NULL;
    Py_XDECREF(var_opts);
    var_opts = NULL;
    CHECK_OBJECT(var_args);
    Py_DECREF(var_args);
    var_args = NULL;
    Py_XDECREF(var_compat_conf);
    var_compat_conf = NULL;
    Py_XDECREF(var_command_line_conf);
    var_command_line_conf = NULL;
    Py_XDECREF(var_system_conf);
    var_system_conf = NULL;
    Py_XDECREF(var_user_conf);
    var_user_conf = NULL;
    Py_XDECREF(var_custom_conf);
    var_custom_conf = NULL;
    Py_XDECREF(var_location);
    var_location = NULL;
    Py_XDECREF(var_argv);
    var_argv = NULL;
    Py_XDECREF(var_conf_label);
    var_conf_label = NULL;
    Py_XDECREF(var_conf);
    var_conf = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var__readOptions);
    Py_DECREF(var__readOptions);
    var__readOptions = NULL;
    Py_XDECREF(var__readUserConf);
    var__readUserConf = NULL;
    CHECK_OBJECT(var__format_option_string);
    Py_DECREF(var__format_option_string);
    var__format_option_string = NULL;
    CHECK_OBJECT(var__comma_separated_values_options_callback);
    Py_DECREF(var__comma_separated_values_options_callback);
    var__comma_separated_values_options_callback = NULL;
    Py_XDECREF(var_columns);
    var_columns = NULL;
    Py_XDECREF(var_max_width);
    var_max_width = NULL;
    Py_XDECREF(var_fmt);
    var_fmt = NULL;
    Py_XDECREF(var_kw);
    var_kw = NULL;
    Py_XDECREF(var_parser);
    var_parser = NULL;
    Py_XDECREF(var_general);
    var_general = NULL;
    Py_XDECREF(var_network);
    var_network = NULL;
    Py_XDECREF(var_geo);
    var_geo = NULL;
    Py_XDECREF(var_selection);
    var_selection = NULL;
    Py_XDECREF(var_authentication);
    var_authentication = NULL;
    Py_XDECREF(var_adobe_pass);
    var_adobe_pass = NULL;
    Py_XDECREF(var_video_format);
    var_video_format = NULL;
    Py_XDECREF(var_subtitles);
    var_subtitles = NULL;
    Py_XDECREF(var_downloader);
    var_downloader = NULL;
    Py_XDECREF(var_workarounds);
    var_workarounds = NULL;
    Py_XDECREF(var_verbosity);
    var_verbosity = NULL;
    Py_XDECREF(var_filesystem);
    var_filesystem = NULL;
    Py_XDECREF(var_thumbnail);
    var_thumbnail = NULL;
    Py_XDECREF(var_postproc);
    var_postproc = NULL;
    Py_XDECREF(var_opts);
    var_opts = NULL;
    Py_XDECREF(var_args);
    var_args = NULL;
    Py_XDECREF(var_compat_conf);
    var_compat_conf = NULL;
    Py_XDECREF(var_command_line_conf);
    var_command_line_conf = NULL;
    Py_XDECREF(var_system_conf);
    var_system_conf = NULL;
    Py_XDECREF(var_user_conf);
    var_user_conf = NULL;
    Py_XDECREF(var_custom_conf);
    var_custom_conf = NULL;
    Py_XDECREF(var_location);
    var_location = NULL;
    Py_XDECREF(var_argv);
    var_argv = NULL;
    Py_XDECREF(var_conf_label);
    var_conf_label = NULL;
    Py_XDECREF(var_conf);
    var_conf = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_overrideArguments);
    Py_DECREF(par_overrideArguments);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_overrideArguments);
    Py_DECREF(par_overrideArguments);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$options$$$function__2_parseOpts$$$function__1__readOptions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename_bytes = python_pars[0];
    PyObject *par_default = python_pars[1];
    PyObject *var_optionf = NULL;
    PyObject *var_contents = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_95276df0759b2f6969d7e7ac227a555f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_95276df0759b2f6969d7e7ac227a555f = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_95276df0759b2f6969d7e7ac227a555f)) {
        Py_XDECREF(cache_frame_95276df0759b2f6969d7e7ac227a555f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_95276df0759b2f6969d7e7ac227a555f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_95276df0759b2f6969d7e7ac227a555f = MAKE_FUNCTION_FRAME(codeobj_95276df0759b2f6969d7e7ac227a555f, module_youtube_dl$options, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_95276df0759b2f6969d7e7ac227a555f->m_type_description == NULL);
    frame_95276df0759b2f6969d7e7ac227a555f = cache_frame_95276df0759b2f6969d7e7ac227a555f;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_95276df0759b2f6969d7e7ac227a555f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_95276df0759b2f6969d7e7ac227a555f) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_open_filename_1;
        CHECK_OBJECT(par_filename_bytes);
        tmp_open_filename_1 = par_filename_bytes;
        tmp_assign_source_1 = BUILTIN_OPEN(tmp_open_filename_1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_optionf == NULL);
        var_optionf = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_95276df0759b2f6969d7e7ac227a555f, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_95276df0759b2f6969d7e7ac227a555f, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_IOError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_default);
    tmp_return_value = par_default;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 43;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_95276df0759b2f6969d7e7ac227a555f->m_frame) frame_95276df0759b2f6969d7e7ac227a555f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
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
    // End of try:
    try_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_optionf);
        tmp_called_instance_1 = var_optionf;
        frame_95276df0759b2f6969d7e7ac227a555f->m_frame.f_lineno = 49;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[301]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        assert(var_contents == NULL);
        var_contents = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[302]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[302]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_contents);
        tmp_tuple_element_1 = var_contents;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[303]);
        frame_95276df0759b2f6969d7e7ac227a555f->m_frame.f_lineno = 52;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_3;
    }
    goto try_end_2;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_95276df0759b2f6969d7e7ac227a555f, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_95276df0759b2f6969d7e7ac227a555f, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_optionf);
        tmp_called_instance_2 = var_optionf;
        frame_95276df0759b2f6969d7e7ac227a555f->m_frame.f_lineno = 54;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[304]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 47;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_95276df0759b2f6969d7e7ac227a555f->m_frame) frame_95276df0759b2f6969d7e7ac227a555f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_optionf);
        tmp_called_instance_3 = var_optionf;
        frame_95276df0759b2f6969d7e7ac227a555f->m_frame.f_lineno = 54;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[304]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_95276df0759b2f6969d7e7ac227a555f);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_95276df0759b2f6969d7e7ac227a555f);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_95276df0759b2f6969d7e7ac227a555f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_95276df0759b2f6969d7e7ac227a555f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_95276df0759b2f6969d7e7ac227a555f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_95276df0759b2f6969d7e7ac227a555f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_95276df0759b2f6969d7e7ac227a555f,
        type_description_1,
        par_filename_bytes,
        par_default,
        var_optionf,
        var_contents,
        var_res
    );


    // Release cached frame if used for exception.
    if (frame_95276df0759b2f6969d7e7ac227a555f == cache_frame_95276df0759b2f6969d7e7ac227a555f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_95276df0759b2f6969d7e7ac227a555f);
        cache_frame_95276df0759b2f6969d7e7ac227a555f = NULL;
    }

    assertFrameObject(frame_95276df0759b2f6969d7e7ac227a555f);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_res);
    tmp_return_value = var_res;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_optionf);
    var_optionf = NULL;
    Py_XDECREF(var_contents);
    var_contents = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
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

    Py_XDECREF(var_optionf);
    var_optionf = NULL;
    Py_XDECREF(var_contents);
    var_contents = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
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
    CHECK_OBJECT(par_filename_bytes);
    Py_DECREF(par_filename_bytes);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_filename_bytes);
    Py_DECREF(par_filename_bytes);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$options$$$function__2_parseOpts$$$function__2__readUserConf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_xdg_config_home = NULL;
    PyObject *var_userConfFile = NULL;
    PyObject *var_userConf = NULL;
    PyObject *var_appdata_dir = NULL;
    struct Nuitka_FrameObject *frame_8d0407fa64563534a58613bbe839fff4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8d0407fa64563534a58613bbe839fff4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8d0407fa64563534a58613bbe839fff4)) {
        Py_XDECREF(cache_frame_8d0407fa64563534a58613bbe839fff4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8d0407fa64563534a58613bbe839fff4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8d0407fa64563534a58613bbe839fff4 = MAKE_FUNCTION_FRAME(codeobj_8d0407fa64563534a58613bbe839fff4, module_youtube_dl$options, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8d0407fa64563534a58613bbe839fff4->m_type_description == NULL);
    frame_8d0407fa64563534a58613bbe839fff4 = cache_frame_8d0407fa64563534a58613bbe839fff4;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_8d0407fa64563534a58613bbe839fff4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8d0407fa64563534a58613bbe839fff4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[305]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[305]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 58;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[306]);

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_xdg_config_home == NULL);
        var_xdg_config_home = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_xdg_config_home);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_xdg_config_home);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[284]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[285]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[287]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_xdg_config_home);
        tmp_args_element_value_1 = var_xdg_config_home;
        tmp_args_element_value_2 = mod_consts[307];
        tmp_args_element_value_3 = mod_consts[308];
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_userConfFile == NULL);
        var_userConfFile = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[284]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[285]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_userConfFile);
        tmp_args_element_value_4 = var_userConfFile;
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 61;
        tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[309], tmp_args_element_value_4);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooc";
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
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[284]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[285]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[287]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_xdg_config_home);
        tmp_args_element_value_5 = var_xdg_config_home;
        tmp_args_element_value_6 = mod_consts[288];
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_userConfFile;
            assert(old != NULL);
            var_userConfFile = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[284]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[285]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[287]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[282]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[282]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 64;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[310]);

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[311];
        tmp_args_element_value_9 = mod_consts[307];
        tmp_args_element_value_10 = mod_consts[308];
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_userConfFile == NULL);
        var_userConfFile = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_11;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[284]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[285]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_userConfFile);
        tmp_args_element_value_11 = var_userConfFile;
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 65;
        tmp_operand_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[309], tmp_args_element_value_11);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[284]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[285]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[287]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[282]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[282]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 66;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 66;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[310]);

        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 66;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[311];
        tmp_args_element_value_14 = mod_consts[288];
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_userConfFile;
            assert(old != NULL);
            var_userConfFile = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 67;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_8 = Nuitka_Cell_GET(self->m_closure[0]);
        if (var_userConfFile == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[312]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 67;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_15 = var_userConfFile;
        tmp_args_element_value_16 = Py_None;
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_userConf == NULL);
        var_userConf = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_userConf);
        tmp_cmp_expr_left_1 = var_userConf;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[305]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[305]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 70;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[313]);

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_appdata_dir == NULL);
        var_appdata_dir = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_appdata_dir);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_appdata_dir);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooc";
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_kwargs_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 72;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_10 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[284]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[285]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[287]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_appdata_dir);
        tmp_args_element_value_17 = var_appdata_dir;
        tmp_args_element_value_18 = mod_consts[307];
        tmp_args_element_value_19 = mod_consts[308];
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[314]);
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 72;
        tmp_assign_source_8 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_userConf;
            assert(old != NULL);
            var_userConf = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_userConf);
        tmp_cmp_expr_left_2 = var_userConf;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_kwargs_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_12 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[284]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[285]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[287]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_appdata_dir);
        tmp_args_element_value_20 = var_appdata_dir;
        tmp_args_element_value_21 = mod_consts[307];
        tmp_args_element_value_22 = mod_consts[315];
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_called_value_13);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[314]);
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 76;
        tmp_assign_source_9 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_userConf;
            assert(old != NULL);
            var_userConf = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    branch_no_5:;
    branch_no_4:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_userConf);
        tmp_cmp_expr_left_3 = var_userConf;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_kwargs_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 81;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_14 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[284]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[285]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[287]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[282]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[282]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 82;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 82;
        tmp_args_element_value_23 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_16, mod_consts[310]);

        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 82;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = mod_consts[288];
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_3, 0, tmp_tuple_element_3);
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[314]);
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 81;
        tmp_assign_source_10 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_userConf;
            assert(old != NULL);
            var_userConf = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_userConf);
        tmp_cmp_expr_left_4 = var_userConf;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_8 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_kwargs_value_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_17 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[284]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[285]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[287]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[282]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[282]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 86;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 86;
        tmp_args_element_value_25 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_19, mod_consts[310]);

        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 86;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = mod_consts[316];
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_4, 0, tmp_tuple_element_4);
        tmp_kwargs_value_4 = DICT_COPY(mod_consts[314]);
        frame_8d0407fa64563534a58613bbe839fff4->m_frame.f_lineno = 85;
        tmp_assign_source_11 = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_userConf;
            assert(old != NULL);
            var_userConf = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    branch_no_8:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8d0407fa64563534a58613bbe839fff4);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8d0407fa64563534a58613bbe839fff4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8d0407fa64563534a58613bbe839fff4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8d0407fa64563534a58613bbe839fff4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8d0407fa64563534a58613bbe839fff4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8d0407fa64563534a58613bbe839fff4,
        type_description_1,
        var_xdg_config_home,
        var_userConfFile,
        var_userConf,
        var_appdata_dir,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_8d0407fa64563534a58613bbe839fff4 == cache_frame_8d0407fa64563534a58613bbe839fff4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8d0407fa64563534a58613bbe839fff4);
        cache_frame_8d0407fa64563534a58613bbe839fff4 = NULL;
    }

    assertFrameObject(frame_8d0407fa64563534a58613bbe839fff4);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_userConf);
        tmp_cmp_expr_left_5 = var_userConf;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = var_userConf;
            assert(old != NULL);
            var_userConf = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    branch_no_9:;
    CHECK_OBJECT(var_userConf);
    tmp_return_value = var_userConf;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_xdg_config_home);
    Py_DECREF(var_xdg_config_home);
    var_xdg_config_home = NULL;
    Py_XDECREF(var_userConfFile);
    var_userConfFile = NULL;
    CHECK_OBJECT(var_userConf);
    Py_DECREF(var_userConf);
    var_userConf = NULL;
    Py_XDECREF(var_appdata_dir);
    var_appdata_dir = NULL;
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

    Py_XDECREF(var_xdg_config_home);
    var_xdg_config_home = NULL;
    Py_XDECREF(var_userConfFile);
    var_userConfFile = NULL;
    Py_XDECREF(var_userConf);
    var_userConf = NULL;
    Py_XDECREF(var_appdata_dir);
    var_appdata_dir = NULL;
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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$options$$$function__2_parseOpts$$$function__3__format_option_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_option = python_pars[0];
    PyObject *var_opts = NULL;
    struct Nuitka_FrameObject *frame_8fdb15d3f5efa3daeaefb842285c615c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8fdb15d3f5efa3daeaefb842285c615c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_opts == NULL);
        var_opts = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_8fdb15d3f5efa3daeaefb842285c615c)) {
        Py_XDECREF(cache_frame_8fdb15d3f5efa3daeaefb842285c615c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8fdb15d3f5efa3daeaefb842285c615c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8fdb15d3f5efa3daeaefb842285c615c = MAKE_FUNCTION_FRAME(codeobj_8fdb15d3f5efa3daeaefb842285c615c, module_youtube_dl$options, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8fdb15d3f5efa3daeaefb842285c615c->m_type_description == NULL);
    frame_8fdb15d3f5efa3daeaefb842285c615c = cache_frame_8fdb15d3f5efa3daeaefb842285c615c;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_8fdb15d3f5efa3daeaefb842285c615c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8fdb15d3f5efa3daeaefb842285c615c) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_option);
        tmp_expression_value_1 = par_option;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[317]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_opts);
        tmp_expression_value_2 = var_opts;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[318]);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_option);
        tmp_expression_value_4 = par_option;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[317]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[319];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8fdb15d3f5efa3daeaefb842285c615c->m_frame.f_lineno = 100;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_option);
        tmp_expression_value_5 = par_option;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[320]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = var_opts;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[318]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_option);
        tmp_expression_value_8 = par_option;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[320]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[319];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8fdb15d3f5efa3daeaefb842285c615c->m_frame.f_lineno = 102;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = var_opts;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 1;
        tmp_condition_result_3 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = var_opts;
        frame_8fdb15d3f5efa3daeaefb842285c615c->m_frame.f_lineno = 104;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[321],
            &PyTuple_GET_ITEM(mod_consts[322], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_option);
        tmp_called_instance_2 = par_option;
        frame_8fdb15d3f5efa3daeaefb842285c615c->m_frame.f_lineno = 106;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[323]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_10;
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = var_opts;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[318]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[324];
        CHECK_OBJECT(par_option);
        tmp_expression_value_10 = par_option;
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[325]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 107;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 107;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8fdb15d3f5efa3daeaefb842285c615c->m_frame.f_lineno = 107;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_4:;
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[326];
        if (var_opts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_iterable_value_1 = var_opts;
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8fdb15d3f5efa3daeaefb842285c615c);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8fdb15d3f5efa3daeaefb842285c615c);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8fdb15d3f5efa3daeaefb842285c615c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8fdb15d3f5efa3daeaefb842285c615c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8fdb15d3f5efa3daeaefb842285c615c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8fdb15d3f5efa3daeaefb842285c615c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8fdb15d3f5efa3daeaefb842285c615c,
        type_description_1,
        par_option,
        var_opts
    );


    // Release cached frame if used for exception.
    if (frame_8fdb15d3f5efa3daeaefb842285c615c == cache_frame_8fdb15d3f5efa3daeaefb842285c615c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8fdb15d3f5efa3daeaefb842285c615c);
        cache_frame_8fdb15d3f5efa3daeaefb842285c615c = NULL;
    }

    assertFrameObject(frame_8fdb15d3f5efa3daeaefb842285c615c);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_opts);
    var_opts = NULL;
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

    Py_XDECREF(var_opts);
    var_opts = NULL;
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
    CHECK_OBJECT(par_option);
    Py_DECREF(par_option);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_option);
    Py_DECREF(par_option);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$options$$$function__2_parseOpts$$$function__4__comma_separated_values_options_callback(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_option = python_pars[0];
    PyObject *par_opt_str = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *par_parser = python_pars[3];
    struct Nuitka_FrameObject *frame_9688cc6e7bae08d9ad5b2bb70faeb7ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9688cc6e7bae08d9ad5b2bb70faeb7ad = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9688cc6e7bae08d9ad5b2bb70faeb7ad)) {
        Py_XDECREF(cache_frame_9688cc6e7bae08d9ad5b2bb70faeb7ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9688cc6e7bae08d9ad5b2bb70faeb7ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9688cc6e7bae08d9ad5b2bb70faeb7ad = MAKE_FUNCTION_FRAME(codeobj_9688cc6e7bae08d9ad5b2bb70faeb7ad, module_youtube_dl$options, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9688cc6e7bae08d9ad5b2bb70faeb7ad->m_type_description == NULL);
    frame_9688cc6e7bae08d9ad5b2bb70faeb7ad = cache_frame_9688cc6e7bae08d9ad5b2bb70faeb7ad;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_9688cc6e7bae08d9ad5b2bb70faeb7ad);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9688cc6e7bae08d9ad5b2bb70faeb7ad) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_parser);
        tmp_expression_value_1 = par_parser;
        tmp_setattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[327]);
        if (tmp_setattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_option);
        tmp_expression_value_2 = par_option;
        tmp_setattr_attr_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[328]);
        if (tmp_setattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_setattr_target_1);

            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_expression_value_3 = par_value;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[329]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_setattr_target_1);
            Py_DECREF(tmp_setattr_attr_1);

            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_9688cc6e7bae08d9ad5b2bb70faeb7ad->m_frame.f_lineno = 112;
        tmp_setattr_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[330]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_setattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_setattr_target_1);
            Py_DECREF(tmp_setattr_attr_1);

            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_capi_result_1 = BUILTIN_SETATTR(tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1);
        Py_DECREF(tmp_setattr_target_1);
        Py_DECREF(tmp_setattr_attr_1);
        Py_DECREF(tmp_setattr_value_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9688cc6e7bae08d9ad5b2bb70faeb7ad);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9688cc6e7bae08d9ad5b2bb70faeb7ad);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9688cc6e7bae08d9ad5b2bb70faeb7ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9688cc6e7bae08d9ad5b2bb70faeb7ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9688cc6e7bae08d9ad5b2bb70faeb7ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9688cc6e7bae08d9ad5b2bb70faeb7ad,
        type_description_1,
        par_option,
        par_opt_str,
        par_value,
        par_parser
    );


    // Release cached frame if used for exception.
    if (frame_9688cc6e7bae08d9ad5b2bb70faeb7ad == cache_frame_9688cc6e7bae08d9ad5b2bb70faeb7ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9688cc6e7bae08d9ad5b2bb70faeb7ad);
        cache_frame_9688cc6e7bae08d9ad5b2bb70faeb7ad = NULL;
    }

    assertFrameObject(frame_9688cc6e7bae08d9ad5b2bb70faeb7ad);

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
    CHECK_OBJECT(par_option);
    Py_DECREF(par_option);
    CHECK_OBJECT(par_opt_str);
    Py_DECREF(par_opt_str);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_parser);
    Py_DECREF(par_parser);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_option);
    Py_DECREF(par_option);
    CHECK_OBJECT(par_opt_str);
    Py_DECREF(par_opt_str);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_parser);
    Py_DECREF(par_parser);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$options$$$function__2_parseOpts$$$function__5_compat_conf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_conf = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_conf);
    tmp_return_value = par_conf;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_conf);
    Py_DECREF(par_conf);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_youtube_dl$options$$$function__1__hide_login_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$options$$$function__1__hide_login_info,
        mod_consts[300],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_69d308683789dee1dbb597fdcd2d97fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$options,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$options$$$function__1__hide_login_info$$$function__1__scrub_eq(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$options$$$function__1__hide_login_info$$$function__1__scrub_eq,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[7],
#endif
        codeobj_1fa6425b80870b3e54edc46473d40426,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$options,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$options$$$function__2_parseOpts,
        mod_consts[348],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e818ad2fe263b2cc2deafdc13ad497ff,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$options,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts$$$function__1__readOptions(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$options$$$function__2_parseOpts$$$function__1__readOptions,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[22],
#endif
        codeobj_95276df0759b2f6969d7e7ac227a555f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$options,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts$$$function__2__readUserConf(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$options$$$function__2_parseOpts$$$function__2__readUserConf,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[24],
#endif
        codeobj_8d0407fa64563534a58613bbe839fff4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$options,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts$$$function__3__format_option_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$options$$$function__2_parseOpts$$$function__3__format_option_string,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[27],
#endif
        codeobj_8fdb15d3f5efa3daeaefb842285c615c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$options,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts$$$function__4__comma_separated_values_options_callback() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$options$$$function__2_parseOpts$$$function__4__comma_separated_values_options_callback,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[29],
#endif
        codeobj_9688cc6e7bae08d9ad5b2bb70faeb7ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$options,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts$$$function__5_compat_conf() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$options$$$function__2_parseOpts$$$function__5_compat_conf,
        mod_consts[276],
#if PYTHON_VERSION >= 0x300
        mod_consts[277],
#endif
        codeobj_0aa439a2ce0fa9277d1a52bef21e220f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$options,
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

function_impl_code functable_youtube_dl$options[] = {
    impl_youtube_dl$options$$$function__1__hide_login_info$$$function__1__scrub_eq,
    impl_youtube_dl$options$$$function__2_parseOpts$$$function__1__readOptions,
    impl_youtube_dl$options$$$function__2_parseOpts$$$function__2__readUserConf,
    impl_youtube_dl$options$$$function__2_parseOpts$$$function__3__format_option_string,
    impl_youtube_dl$options$$$function__2_parseOpts$$$function__4__comma_separated_values_options_callback,
    impl_youtube_dl$options$$$function__2_parseOpts$$$function__5_compat_conf,
    impl_youtube_dl$options$$$function__1__hide_login_info,
    impl_youtube_dl$options$$$function__2_parseOpts,
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

    function_impl_code *current = functable_youtube_dl$options;
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

    if (offset > sizeof(functable_youtube_dl$options) || offset < 0) {
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
        functable_youtube_dl$options[offset],
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
        module_youtube_dl$options,
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
PyObject *modulecode_youtube_dl$options(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("youtube_dl.options");

    // Store the module for future use.
    module_youtube_dl$options = module;

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
        PRINT_STRING("youtube_dl.options: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl.options: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl.options: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inityoutube_dl$options\n");

    moduledict_youtube_dl$options = MODULE_DICT(module_youtube_dl$options);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_youtube_dl$options,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$options,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[326]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$options,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$options,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$options,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_youtube_dl$options);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_youtube_dl$options, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_youtube_dl$options, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_youtube_dl$options, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_youtube_dl$options);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_youtube_dl$options, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_da0d7566e30656d3ed069b3bf6c5dbf4;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_da0d7566e30656d3ed069b3bf6c5dbf4 = MAKE_MODULE_FRAME(codeobj_da0d7566e30656d3ed069b3bf6c5dbf4, module_youtube_dl$options);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_da0d7566e30656d3ed069b3bf6c5dbf4);
    assert(Py_REFCNT(frame_da0d7566e30656d3ed069b3bf6c5dbf4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[333]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[333]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[334], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[333]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[333]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[335], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[337]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[337], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[338];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_youtube_dl$options;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[319];
        frame_da0d7566e30656d3ed069b3bf6c5dbf4->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[33];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_youtube_dl$options;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[319];
        frame_da0d7566e30656d3ed069b3bf6c5dbf4->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[1];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_youtube_dl$options;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[319];
        frame_da0d7566e30656d3ed069b3bf6c5dbf4->m_frame.f_lineno = 5;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT0(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[339];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_youtube_dl$options;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[340];
        tmp_level_value_4 = mod_consts[9];
        frame_da0d7566e30656d3ed069b3bf6c5dbf4->m_frame.f_lineno = 8;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_youtube_dl$options,
                mod_consts[175],
                mod_consts[319]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[175]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[341];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_youtube_dl$options;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[342];
        tmp_level_value_5 = mod_consts[9];
        frame_da0d7566e30656d3ed069b3bf6c5dbf4->m_frame.f_lineno = 9;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_youtube_dl$options,
                mod_consts[282],
                mod_consts[319]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[282]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_youtube_dl$options,
                mod_consts[30],
                mod_consts[319]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[30]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_youtube_dl$options,
                mod_consts[305],
                mod_consts[319]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[305]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_youtube_dl$options,
                mod_consts[45],
                mod_consts[319]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[45]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_youtube_dl$options,
                mod_consts[302],
                mod_consts[319]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[302]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_15);
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[343];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_youtube_dl$options;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[344];
        tmp_level_value_6 = mod_consts[9];
        frame_da0d7566e30656d3ed069b3bf6c5dbf4->m_frame.f_lineno = 16;
        tmp_assign_source_16 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_youtube_dl$options,
                mod_consts[345],
                mod_consts[319]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[345]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_youtube_dl$options,
                mod_consts[273],
                mod_consts[319]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[273]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_18);
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[37];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_youtube_dl$options;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[346];
        tmp_level_value_7 = mod_consts[9];
        frame_da0d7566e30656d3ed069b3bf6c5dbf4->m_frame.f_lineno = 20;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_youtube_dl$options,
                mod_consts[38],
                mod_consts[319]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[38]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_19);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_da0d7566e30656d3ed069b3bf6c5dbf4);
#endif
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_da0d7566e30656d3ed069b3bf6c5dbf4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da0d7566e30656d3ed069b3bf6c5dbf4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da0d7566e30656d3ed069b3bf6c5dbf4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da0d7566e30656d3ed069b3bf6c5dbf4, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_youtube_dl$options$$$function__1__hide_login_info();

        UPDATE_STRING_DICT1(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[347];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_21 = MAKE_FUNCTION_youtube_dl$options$$$function__2_parseOpts(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_youtube_dl$options, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_21);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("youtube_dl.options", false);

    Py_INCREF(module_youtube_dl$options);
    return module_youtube_dl$options;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$options, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("youtube_dl$options", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
