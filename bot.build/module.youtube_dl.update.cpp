/* Generated code for Python module 'youtube_dl.update'
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

/* The "module_youtube_dl$update" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_youtube_dl$update;
PyDictObject *moduledict_youtube_dl$update;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[120];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[120];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("youtube_dl.update"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 120; i++) {
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
void checkModuleConstants_youtube_dl$update(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 120; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_7833aa4d843502824cf1f814beffea8a;
static PyCodeObject *codeobj_4a5007edcedc85252b701c8337070825;
static PyCodeObject *codeobj_47a4888e0e837ac135ba39f618727b71;
static PyCodeObject *codeobj_ef7acb077991e01dbb58d629315033ec;
static PyCodeObject *codeobj_32cf66bbc3799700f692806840464d23;
static PyCodeObject *codeobj_a0b1ef03a024c713fdb9e962576286cd;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[112]); CHECK_OBJECT(module_filename_obj);
    codeobj_7833aa4d843502824cf1f814beffea8a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_4a5007edcedc85252b701c8337070825 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[94], mod_consts[94], mod_consts[114], NULL, 2, 0, 0);
    codeobj_47a4888e0e837ac135ba39f618727b71 = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[55], mod_consts[55], mod_consts[115], NULL, 3, 0, 0);
    codeobj_ef7acb077991e01dbb58d629315033ec = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[43], mod_consts[43], mod_consts[116], NULL, 3, 0, 0);
    codeobj_32cf66bbc3799700f692806840464d23 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[111], mod_consts[111], mod_consts[117], NULL, 3, 0, 0);
    codeobj_a0b1ef03a024c713fdb9e962576286cd = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[49], mod_consts[49], mod_consts[118], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_youtube_dl$update$$$function__1_rsa_verify();


static PyObject *MAKE_FUNCTION_youtube_dl$update$$$function__2_update_self();


static PyObject *MAKE_FUNCTION_youtube_dl$update$$$function__2_update_self$$$function__1_version_tuple();


static PyObject *MAKE_FUNCTION_youtube_dl$update$$$function__3_get_notes();


static PyObject *MAKE_FUNCTION_youtube_dl$update$$$function__4_print_notes(PyObject *defaults);


// The module function definitions.
static PyObject *impl_youtube_dl$update$$$function__1_rsa_verify(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[0];
    PyObject *par_signature = python_pars[1];
    PyObject *par_key = python_pars[2];
    PyObject *var_sha256 = NULL;
    PyObject *var_byte_size = NULL;
    PyObject *var_asn1 = NULL;
    PyObject *var_expected = NULL;
    struct Nuitka_FrameObject *frame_ef7acb077991e01dbb58d629315033ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ef7acb077991e01dbb58d629315033ec = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ef7acb077991e01dbb58d629315033ec)) {
        Py_XDECREF(cache_frame_ef7acb077991e01dbb58d629315033ec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef7acb077991e01dbb58d629315033ec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef7acb077991e01dbb58d629315033ec = MAKE_FUNCTION_FRAME(codeobj_ef7acb077991e01dbb58d629315033ec, module_youtube_dl$update, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ef7acb077991e01dbb58d629315033ec->m_type_description == NULL);
    frame_ef7acb077991e01dbb58d629315033ec = cache_frame_ef7acb077991e01dbb58d629315033ec;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_ef7acb077991e01dbb58d629315033ec);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ef7acb077991e01dbb58d629315033ec) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_youtube_dl$update;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = mod_consts[2];
        frame_ef7acb077991e01dbb58d629315033ec->m_frame.f_lineno = 19;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_youtube_dl$update,
                mod_consts[3],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sha256 == NULL);
        var_sha256 = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_message);
        tmp_isinstance_inst_1 = par_message;
        tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooooo";
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
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 20;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        nuitka_digit tmp_sub_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        nuitka_digit tmp_add_expr_right_1;
        PyObject *tmp_sub_expr_left_2;
        nuitka_digit tmp_sub_expr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_bin_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_key);
        tmp_expression_value_1 = par_key;
        tmp_subscript_value_1 = mod_consts[2];
        tmp_bin_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_bin_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_len_arg_1 = BUILTIN_BIN(tmp_bin_arg_1);
        Py_DECREF(tmp_bin_arg_1);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_2 = 2;
        tmp_add_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        assert(!(tmp_add_expr_left_1 == NULL));
        tmp_add_expr_right_1 = 8;
        tmp_sub_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        assert(!(tmp_sub_expr_left_1 == NULL));
        tmp_sub_expr_right_1 = 1;
        tmp_floordiv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        assert(!(tmp_floordiv_expr_left_1 == NULL));
        tmp_floordiv_expr_right_1 = mod_consts[4];
        tmp_assign_source_2 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_byte_size == NULL);
        var_byte_size = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_value_value_1;
        PyObject *tmp_base_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        tmp_mod_expr_left_1 = mod_consts[5];
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(par_signature);
        tmp_value_value_1 = par_signature;
        tmp_base_value_1 = mod_consts[7];
        tmp_args_element_value_1 = BUILTIN_INT2(tmp_value_value_1, tmp_base_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_expression_value_3 = par_key;
        tmp_subscript_value_2 = mod_consts[8];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 22;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_expression_value_4 = par_key;
        tmp_subscript_value_3 = mod_consts[2];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_3, 0);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 22;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_ef7acb077991e01dbb58d629315033ec->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_mod_expr_right_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_ef7acb077991e01dbb58d629315033ec->m_frame.f_lineno = 22;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_signature;
            assert(old != NULL);
            par_signature = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(var_byte_size);
        tmp_mult_expr_left_2 = var_byte_size;
        tmp_mult_expr_right_2 = mod_consts[10];
        tmp_sub_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        assert(!(tmp_sub_expr_left_3 == NULL));
        CHECK_OBJECT(par_signature);
        tmp_len_arg_2 = par_signature;
        tmp_sub_expr_right_3 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);

            exception_lineno = 23;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        Py_DECREF(tmp_sub_expr_right_3);
        assert(!(tmp_mult_expr_left_1 == NULL));
        tmp_mult_expr_right_1 = mod_consts[11];
        tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_LONG_BYTES(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        assert(!(tmp_add_expr_left_2 == NULL));
        CHECK_OBJECT(par_signature);
        tmp_add_expr_right_2 = par_signature;
        tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_BYTES_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_signature;
            assert(old != NULL);
            par_signature = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_iadd_expr_left_1 = mod_consts[12];
        CHECK_OBJECT(var_sha256);
        tmp_called_value_4 = var_sha256;
        CHECK_OBJECT(par_message);
        tmp_args_element_value_4 = par_message;
        frame_ef7acb077991e01dbb58d629315033ec->m_frame.f_lineno = 25;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_ef7acb077991e01dbb58d629315033ec->m_frame.f_lineno = 25;
        tmp_expression_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[13]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[9]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_ef7acb077991e01dbb58d629315033ec->m_frame.f_lineno = 25;
        tmp_iadd_expr_right_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_iadd_expr_left_1);
        tmp_result = INPLACE_OPERATION_ADD_BYTES_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = tmp_iadd_expr_left_1;
        assert(var_asn1 == NULL);
        var_asn1 = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_add_expr_left_3;
        nuitka_digit tmp_add_expr_right_3;
        PyObject *tmp_floordiv_expr_left_2;
        PyObject *tmp_floordiv_expr_right_2;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT(var_byte_size);
        tmp_cmp_expr_left_1 = var_byte_size;
        CHECK_OBJECT(var_asn1);
        tmp_len_arg_3 = var_asn1;
        tmp_floordiv_expr_left_2 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_floordiv_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_floordiv_expr_right_2 = mod_consts[10];
        tmp_add_expr_left_3 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
        Py_DECREF(tmp_floordiv_expr_left_2);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = 11;
        tmp_cmp_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        assert(!(tmp_cmp_expr_right_1 == NULL));
        tmp_condition_result_2 = RICH_COMPARE_LT_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_sub_expr_left_4;
        nuitka_digit tmp_sub_expr_right_4;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        PyObject *tmp_floordiv_expr_left_3;
        PyObject *tmp_floordiv_expr_right_3;
        PyObject *tmp_len_arg_4;
        tmp_add_expr_left_6 = mod_consts[14];
        CHECK_OBJECT(var_byte_size);
        tmp_sub_expr_left_5 = var_byte_size;
        CHECK_OBJECT(var_asn1);
        tmp_len_arg_4 = var_asn1;
        tmp_floordiv_expr_left_3 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_floordiv_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_floordiv_expr_right_3 = mod_consts[10];
        tmp_sub_expr_right_5 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_3, tmp_floordiv_expr_right_3);
        Py_DECREF(tmp_floordiv_expr_left_3);
        if (tmp_sub_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_4 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        Py_DECREF(tmp_sub_expr_right_5);
        assert(!(tmp_sub_expr_left_4 == NULL));
        tmp_sub_expr_right_4 = 3;
        tmp_mult_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_left_4);
        assert(!(tmp_mult_expr_left_3 == NULL));
        tmp_mult_expr_right_3 = mod_consts[15];
        tmp_add_expr_right_6 = BINARY_OPERATION_MULT_OBJECT_LONG_BYTES(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        assert(!(tmp_add_expr_right_6 == NULL));
        tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_BYTES_BYTES(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_right_6);
        assert(!(tmp_add_expr_left_5 == NULL));
        tmp_add_expr_right_5 = mod_consts[16];
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_BYTES_BYTES(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        assert(!(tmp_add_expr_left_4 == NULL));
        CHECK_OBJECT(var_asn1);
        tmp_add_expr_right_4 = var_asn1;
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_BYTES_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_expected == NULL);
        var_expected = tmp_assign_source_6;
    }
    {
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_expected);
        tmp_cmp_expr_left_2 = var_expected;
        CHECK_OBJECT(par_signature);
        tmp_cmp_expr_right_2 = par_signature;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef7acb077991e01dbb58d629315033ec);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef7acb077991e01dbb58d629315033ec);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef7acb077991e01dbb58d629315033ec);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef7acb077991e01dbb58d629315033ec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef7acb077991e01dbb58d629315033ec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef7acb077991e01dbb58d629315033ec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef7acb077991e01dbb58d629315033ec,
        type_description_1,
        par_message,
        par_signature,
        par_key,
        var_sha256,
        var_byte_size,
        var_asn1,
        var_expected
    );


    // Release cached frame if used for exception.
    if (frame_ef7acb077991e01dbb58d629315033ec == cache_frame_ef7acb077991e01dbb58d629315033ec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ef7acb077991e01dbb58d629315033ec);
        cache_frame_ef7acb077991e01dbb58d629315033ec = NULL;
    }

    assertFrameObject(frame_ef7acb077991e01dbb58d629315033ec);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_signature);
    Py_DECREF(par_signature);
    par_signature = NULL;
    CHECK_OBJECT(var_sha256);
    Py_DECREF(var_sha256);
    var_sha256 = NULL;
    CHECK_OBJECT(var_byte_size);
    Py_DECREF(var_byte_size);
    var_byte_size = NULL;
    CHECK_OBJECT(var_asn1);
    Py_DECREF(var_asn1);
    var_asn1 = NULL;
    Py_XDECREF(var_expected);
    var_expected = NULL;
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

    Py_XDECREF(par_signature);
    par_signature = NULL;
    Py_XDECREF(var_sha256);
    var_sha256 = NULL;
    Py_XDECREF(var_byte_size);
    var_byte_size = NULL;
    Py_XDECREF(var_asn1);
    var_asn1 = NULL;
    Py_XDECREF(var_expected);
    var_expected = NULL;
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
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$update$$$function__2_update_self(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_to_screen = python_pars[0];
    PyObject *par_verbose = python_pars[1];
    PyObject *par_opener = python_pars[2];
    PyObject *var_newversion = NULL;
    PyObject *var_versions_info = NULL;
    PyObject *var_signature = NULL;
    PyObject *var_version_id = NULL;
    PyObject *var_version_tuple = NULL;
    PyObject *var_version = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_exe = NULL;
    PyObject *var_directory = NULL;
    PyObject *var_urlh = NULL;
    PyObject *var_newcontent = NULL;
    PyObject *var_newcontent_hash = NULL;
    PyObject *var_outf = NULL;
    PyObject *var_bat = NULL;
    PyObject *var_batfile = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    PyObject *tmp_with_3__enter = NULL;
    PyObject *tmp_with_3__exit = NULL;
    nuitka_bool tmp_with_3__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_3__source = NULL;
    struct Nuitka_FrameObject *frame_32cf66bbc3799700f692806840464d23;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionStackItem exception_preserved_4;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
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
    struct Nuitka_ExceptionStackItem exception_preserved_5;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    struct Nuitka_ExceptionStackItem exception_preserved_6;
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
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    struct Nuitka_ExceptionStackItem exception_preserved_7;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    struct Nuitka_ExceptionStackItem exception_preserved_8;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    struct Nuitka_ExceptionStackItem exception_preserved_9;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    struct Nuitka_ExceptionStackItem exception_preserved_10;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    static struct Nuitka_FrameObject *cache_frame_32cf66bbc3799700f692806840464d23 = NULL;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_32cf66bbc3799700f692806840464d23)) {
        Py_XDECREF(cache_frame_32cf66bbc3799700f692806840464d23);

#if _DEBUG_REFCOUNTS
        if (cache_frame_32cf66bbc3799700f692806840464d23 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_32cf66bbc3799700f692806840464d23 = MAKE_FUNCTION_FRAME(codeobj_32cf66bbc3799700f692806840464d23, module_youtube_dl$update, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_32cf66bbc3799700f692806840464d23->m_type_description == NULL);
    frame_32cf66bbc3799700f692806840464d23 = cache_frame_32cf66bbc3799700f692806840464d23;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_32cf66bbc3799700f692806840464d23);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_32cf66bbc3799700f692806840464d23) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        tmp_expression_value_1 = (PyObject *)moduledict_youtube_dl$update;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 40;
        tmp_isinstance_inst_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[18]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 40;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_attribute_value_1 = mod_consts[21];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_2, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_2 = par_to_screen;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 41;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[22]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_opener);
        tmp_called_instance_2 = par_opener;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 46;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 46;
        tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[25]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[26]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 46;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[27]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[28]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 46;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_newversion == NULL);
        var_newversion = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_verbose);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_verbose);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_5 = par_to_screen;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 49;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[31]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 49;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 49;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_3;
        if (par_to_screen == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_value_7 = par_to_screen;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 50;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[33]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 45;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_32cf66bbc3799700f692806840464d23->m_frame) frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooNNNNooooooooooooooo";
    goto try_except_handler_3;
    branch_end_2:;
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
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_newversion);
        tmp_cmp_expr_left_2 = var_newversion;
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_8 = par_to_screen;
        tmp_add_expr_left_2 = mod_consts[35];
        tmp_add_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_add_expr_right_2 == NULL)) {
            tmp_add_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[36];
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 53;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(par_opener);
        tmp_called_instance_5 = par_opener;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 58;
        tmp_called_instance_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[37], 0)
        );

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 58;
        tmp_expression_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[25]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[26]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 58;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[27]);

        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_versions_info == NULL);
        var_versions_info = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_versions_info);
        tmp_args_element_value_4 = var_versions_info;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 59;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[39], tmp_args_element_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_versions_info;
            assert(old != NULL);
            var_versions_info = tmp_assign_source_3;
            Py_DECREF(old);
        }

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
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_verbose);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_verbose);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_10 = par_to_screen;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 62;
        tmp_args_element_value_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[31]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 62;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 62;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_6:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_6;
        if (par_to_screen == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_value_12 = par_to_screen;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 63;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_12, mod_consts[40]);

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_6);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_5;
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 57;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_32cf66bbc3799700f692806840464d23->m_frame) frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooNNNNooooooooooooooo";
    goto try_except_handler_5;
    branch_end_5:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto frame_return_exit_1;
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
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = mod_consts[41];
        CHECK_OBJECT(var_versions_info);
        tmp_cmp_expr_right_4 = var_versions_info;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_13 = par_to_screen;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 66;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[42]);

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_versions_info);
        tmp_expression_value_6 = var_versions_info;
        tmp_subscript_value_1 = mod_consts[41];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_signature == NULL);
        var_signature = tmp_assign_source_4;
    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        CHECK_OBJECT(var_versions_info);
        tmp_delsubscr_target_1 = var_versions_info;
        tmp_delsubscr_subscript_1 = mod_consts[41];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[44]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_versions_info);
        tmp_tuple_element_1 = var_versions_info;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[45]);
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 70;
        tmp_expression_value_7 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[9]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 70;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[27]);

        Py_DECREF(tmp_called_value_15);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_signature);
        tmp_args_element_value_8 = var_signature;
        tmp_args_element_value_9 = mod_consts[46];
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_17 = par_to_screen;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 71;
        tmp_call_result_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[47]);

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_versions_info);
        tmp_expression_value_9 = var_versions_info;
        tmp_subscript_value_2 = mod_consts[48];
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_version_id == NULL);
        var_version_id = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_youtube_dl$update$$$function__2_update_self$$$function__1_version_tuple();

        assert(var_version_tuple == NULL);
        var_version_tuple = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(var_version_tuple);
        tmp_called_value_18 = var_version_tuple;
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 78;
        tmp_cmp_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_10);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_version_tuple);
        tmp_called_value_19 = var_version_tuple;
        CHECK_OBJECT(var_version_id);
        tmp_args_element_value_11 = var_version_id;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 78;
        tmp_cmp_expr_right_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_11);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 78;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_20 = par_to_screen;
        tmp_mod_expr_left_1 = mod_consts[51];
        tmp_mod_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_mod_expr_right_1 == NULL)) {
            tmp_mod_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 79;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_9:;
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_21 = par_to_screen;
        tmp_add_expr_left_4 = mod_consts[52];
        CHECK_OBJECT(var_version_id);
        tmp_add_expr_right_4 = var_version_id;
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = mod_consts[53];
        tmp_args_element_value_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 82;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_versions_info);
        tmp_expression_value_11 = var_versions_info;
        tmp_subscript_value_3 = mod_consts[54];
        tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_3);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_version_id);
        tmp_subscript_value_4 = var_version_id;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_version == NULL);
        var_version = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_5;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_to_screen);
        tmp_args_element_value_14 = par_to_screen;
        CHECK_OBJECT(var_versions_info);
        tmp_expression_value_12 = var_versions_info;
        tmp_subscript_value_5 = mod_consts[54];
        tmp_args_element_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_5);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_22, call_args);
        }

        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_16;
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_attribute_value_2;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_6;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_2 = mod_consts[21];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_13, tmp_attribute_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[57]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[58]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = mod_consts[2];
        tmp_args_element_value_16 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_6, 0);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 90;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_filename == NULL);
        var_filename = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_18;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        assert(!(tmp_expression_value_17 == NULL));
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[60]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_filename);
        tmp_args_element_value_17 = var_filename;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        assert(!(tmp_expression_value_18 == NULL));
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[61]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 92;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_operand_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_24, call_args);
        }

        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_25 = par_to_screen;
        tmp_mod_expr_left_2 = mod_consts[62];
        CHECK_OBJECT(var_filename);
        tmp_mod_expr_right_2 = var_filename;
        tmp_args_element_value_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 93;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_attribute_value_3;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_3 = mod_consts[21];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_19, tmp_attribute_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(var_filename);
        tmp_assign_source_9 = var_filename;
        assert(var_exe == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_exe = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_20;
        tmp_called_instance_8 = IMPORT_HARD_NTPATH();
        assert(!(tmp_called_instance_8 == NULL));
        CHECK_OBJECT(var_exe);
        tmp_args_element_value_20 = var_exe;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 99;
        tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[63], tmp_args_element_value_20);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_directory == NULL);
        var_directory = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_21;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[60]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_directory);
        tmp_args_element_value_21 = var_directory;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 100;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[61]);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 100;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_operand_value_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_27 = par_to_screen;
        tmp_mod_expr_left_3 = mod_consts[62];
        CHECK_OBJECT(var_directory);
        tmp_mod_expr_right_3 = var_directory;
        tmp_args_element_value_23 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 101;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_12:;
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(par_opener);
        tmp_expression_value_22 = par_opener;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[23]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_version);
        tmp_expression_value_24 = var_version;
        tmp_subscript_value_7 = mod_consts[64];
        tmp_expression_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_7);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 105;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_8 = mod_consts[2];
        tmp_args_element_value_24 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_23, tmp_subscript_value_8, 0);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 105;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 105;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(var_urlh == NULL);
        var_urlh = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_9;
        CHECK_OBJECT(var_urlh);
        tmp_called_instance_9 = var_urlh;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 106;
        tmp_assign_source_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[25]);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(var_newcontent == NULL);
        var_newcontent = tmp_assign_source_12;
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_14;
        CHECK_OBJECT(var_urlh);
        tmp_called_instance_10 = var_urlh;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 107;
        tmp_call_result_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[65]);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_14);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        tmp_cmp_expr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_6 = mod_consts[66];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_verbose);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_verbose);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_15 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_instance_11;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_29 = par_to_screen;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 110;
        tmp_args_element_value_26 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[31]);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 110;
        tmp_args_element_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_26);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 110;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_25);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_15);
    }
    branch_no_14:;
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_call_result_16;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_31 = par_to_screen;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 111;
        tmp_call_result_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_31, mod_consts[67]);

        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_16);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_7;
    goto branch_end_13;
    branch_no_13:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 104;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_32cf66bbc3799700f692806840464d23->m_frame) frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooNNNNooooooooooooooo";
    goto try_except_handler_7;
    branch_end_13:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_7:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    goto frame_return_exit_1;
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

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_value_27;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_newcontent);
        tmp_args_element_value_27 = var_newcontent;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 114;
        tmp_called_instance_12 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[3], tmp_args_element_value_27);
        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 114;
        tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[13]);
        Py_DECREF(tmp_called_instance_12);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_newcontent_hash == NULL);
        var_newcontent_hash = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(var_newcontent_hash);
        tmp_cmp_expr_left_7 = var_newcontent_hash;
        CHECK_OBJECT(var_version);
        tmp_expression_value_26 = var_version;
        tmp_subscript_value_9 = mod_consts[64];
        tmp_expression_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_9);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = mod_consts[8];
        tmp_cmp_expr_right_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_25, tmp_subscript_value_10, 1);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_call_result_17;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_32 = par_to_screen;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 116;
        tmp_call_result_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_32, mod_consts[68]);

        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_15:;
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT(var_exe);
        tmp_add_expr_left_5 = var_exe;
        tmp_add_expr_right_5 = mod_consts[69];
        tmp_open_filename_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_open_filename_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_open_mode_1 = mod_consts[70];
        tmp_assign_source_14 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_9;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_27 = tmp_with_1__source;
        tmp_called_value_33 = LOOKUP_SPECIAL(tmp_expression_value_27, mod_consts[71]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 120;
        tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS(tmp_called_value_33);
        Py_DECREF(tmp_called_value_33);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_9;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_28 = tmp_with_1__source;
        tmp_assign_source_16 = LOOKUP_SPECIAL(tmp_expression_value_28, mod_consts[72]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_9;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_assign_source_17;
        tmp_assign_source_17 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_18 = tmp_with_1__enter;
        assert(var_outf == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_outf = tmp_assign_source_18;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_28;
        CHECK_OBJECT(var_outf);
        tmp_called_instance_14 = var_outf;
        CHECK_OBJECT(var_newcontent);
        tmp_args_element_value_28 = var_newcontent;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 121;
        tmp_call_result_18 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_14, mod_consts[73], tmp_args_element_value_28);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_18);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 4.
    exception_preserved_4 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_7);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        tmp_cmp_expr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_8 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        nuitka_bool tmp_assign_source_19;
        tmp_assign_source_19 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_34 = tmp_with_1__exit;
        tmp_args_element_value_29 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_30 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_31 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_operand_value_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_34, call_args);
        }

        if (tmp_operand_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_condition_result_18 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 121;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_32cf66bbc3799700f692806840464d23->m_frame) frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooNNNNooooooooooooooo";
    goto try_except_handler_12;
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 120;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_32cf66bbc3799700f692806840464d23->m_frame) frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooNNNNooooooooooooooo";
    goto try_except_handler_12;
    branch_end_16:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_10;
    // End of try:
    try_end_5:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_19;
        nuitka_bool tmp_cmp_expr_left_9;
        nuitka_bool tmp_cmp_expr_right_9;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_9 = tmp_with_1__indicator;
        tmp_cmp_expr_right_9 = NUITKA_BOOL_TRUE;
        tmp_condition_result_19 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_call_result_19;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_35 = tmp_with_1__exit;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 121;
        tmp_call_result_19 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_35, mod_consts[74]);

        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_9);
            Py_XDECREF(exception_keeper_value_9);
            Py_XDECREF(exception_keeper_tb_9);

            exception_lineno = 121;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_19);
    }
    branch_no_18:;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_9;
    // End of try:
    try_end_6:;
    {
        bool tmp_condition_result_20;
        nuitka_bool tmp_cmp_expr_left_10;
        nuitka_bool tmp_cmp_expr_right_10;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_10 = tmp_with_1__indicator;
        tmp_cmp_expr_right_10 = NUITKA_BOOL_TRUE;
        tmp_condition_result_20 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_call_result_20;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_36 = tmp_with_1__exit;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 121;
        tmp_call_result_20 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_36, mod_consts[74]);

        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_20);
    }
    branch_no_19:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 5.
    exception_preserved_5 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_11 == NULL) {
        exception_keeper_tb_11 = MAKE_TRACEBACK(frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_11);
    } else if (exception_keeper_lineno_11 != 0) {
        exception_keeper_tb_11 = ADD_TRACEBACK(exception_keeper_tb_11, frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_11);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_11, &exception_keeper_value_11, &exception_keeper_tb_11);
    // Tried code:
    {
        bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        tmp_cmp_expr_left_11 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_11 = mod_consts[66];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_condition_result_21 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        nuitka_bool tmp_condition_result_22;
        int tmp_truth_name_4;
        CHECK_OBJECT(par_verbose);
        tmp_truth_name_4 = CHECK_IF_TRUE(par_verbose);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_condition_result_22 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_instance_15;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_37 = par_to_screen;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_13;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 124;
        tmp_args_element_value_33 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, mod_consts[31]);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_13;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 124;
        tmp_args_element_value_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_13;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 124;
        tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_32);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_21);
    }
    branch_no_21:;
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_call_result_22;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_39 = par_to_screen;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 125;
        tmp_call_result_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_39, mod_consts[75]);

        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_22);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_13;
    goto branch_end_20;
    branch_no_20:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 119;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_32cf66bbc3799700f692806840464d23->m_frame) frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooNNNNooooooooooooooo";
    goto try_except_handler_13;
    branch_end_20:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_13:;
    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(&exception_preserved_5);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(&exception_preserved_5);

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        tmp_expression_value_29 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_29 == NULL));
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[76]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(var_directory);
        tmp_args_element_value_34 = var_directory;
        tmp_args_element_value_35 = mod_consts[77];
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_40, call_args);
        }

        Py_DECREF(tmp_called_value_40);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_14;
        }
        assert(var_bat == NULL);
        var_bat = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        assert(!(tmp_called_instance_16 == NULL));
        CHECK_OBJECT(var_bat);
        tmp_args_element_value_36 = var_bat;
        tmp_args_element_value_37 = mod_consts[79];
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37};
            tmp_assign_source_21 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_16,
                mod_consts[23],
                call_args
            );
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(tmp_with_2__source == NULL);
        tmp_with_2__source = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_30 = tmp_with_2__source;
        tmp_called_value_41 = LOOKUP_SPECIAL(tmp_expression_value_30, mod_consts[71]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_15;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 130;
        tmp_assign_source_22 = CALL_FUNCTION_NO_ARGS(tmp_called_value_41);
        Py_DECREF(tmp_called_value_41);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(tmp_with_2__enter == NULL);
        tmp_with_2__enter = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_31 = tmp_with_2__source;
        tmp_assign_source_23 = LOOKUP_SPECIAL(tmp_expression_value_31, mod_consts[72]);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(tmp_with_2__exit == NULL);
        tmp_with_2__exit = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_assign_source_24;
        tmp_assign_source_24 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_with_2__enter);
        tmp_assign_source_25 = tmp_with_2__enter;
        assert(var_batfile == NULL);
        Py_INCREF(tmp_assign_source_25);
        var_batfile = tmp_assign_source_25;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_batfile);
        tmp_expression_value_32 = var_batfile;
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[73]);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_mod_expr_left_4 = mod_consts[80];
        CHECK_OBJECT(var_exe);
        tmp_tuple_element_2 = var_exe;
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_4, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_exe);
        tmp_tuple_element_2 = var_exe;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_4, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_version_id);
        tmp_tuple_element_2 = var_version_id;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_4, 2, tmp_tuple_element_2);
        tmp_args_element_value_38 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 138;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_17;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 131;
        tmp_call_result_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_17;
        }
        Py_DECREF(tmp_call_result_23);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 6.
    exception_preserved_6 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_13 == NULL) {
        exception_keeper_tb_13 = MAKE_TRACEBACK(frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_13);
    } else if (exception_keeper_lineno_13 != 0) {
        exception_keeper_tb_13 = ADD_TRACEBACK(exception_keeper_tb_13, frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_13);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13);
    // Tried code:
    {
        bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        tmp_cmp_expr_left_12 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_12 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        nuitka_bool tmp_assign_source_26;
        tmp_assign_source_26 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_24;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_43 = tmp_with_2__exit;
        tmp_args_element_value_39 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_40 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_41 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41};
            tmp_operand_value_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_43, call_args);
        }

        if (tmp_operand_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        Py_DECREF(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_condition_result_24 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 138;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_32cf66bbc3799700f692806840464d23->m_frame) frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooNNNNooooooooooooooo";
    goto try_except_handler_18;
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 130;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_32cf66bbc3799700f692806840464d23->m_frame) frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooNNNNooooooooooooooo";
    goto try_except_handler_18;
    branch_end_22:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(&exception_preserved_6);

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_16;
    // End of try:
    try_end_10:;
    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(&exception_preserved_6);

    goto try_end_9;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_9:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_25;
        nuitka_bool tmp_cmp_expr_left_13;
        nuitka_bool tmp_cmp_expr_right_13;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_13 = tmp_with_2__indicator;
        tmp_cmp_expr_right_13 = NUITKA_BOOL_TRUE;
        tmp_condition_result_25 = (tmp_cmp_expr_left_13 == tmp_cmp_expr_right_13) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_call_result_24;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_44 = tmp_with_2__exit;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 138;
        tmp_call_result_24 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_44, mod_consts[74]);

        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_15);
            Py_XDECREF(exception_keeper_value_15);
            Py_XDECREF(exception_keeper_tb_15);

            exception_lineno = 138;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_15;
        }
        Py_DECREF(tmp_call_result_24);
    }
    branch_no_24:;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_15;
    // End of try:
    try_end_11:;
    {
        bool tmp_condition_result_26;
        nuitka_bool tmp_cmp_expr_left_14;
        nuitka_bool tmp_cmp_expr_right_14;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_14 = tmp_with_2__indicator;
        tmp_cmp_expr_right_14 = NUITKA_BOOL_TRUE;
        tmp_condition_result_26 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_call_result_25;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_45 = tmp_with_2__exit;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 138;
        tmp_call_result_25 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_45, mod_consts[74]);

        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_15;
        }
        Py_DECREF(tmp_call_result_25);
    }
    branch_no_25:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_14;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_list_element_1;
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(var_bat);
        tmp_list_element_1 = var_bat;
        tmp_args_element_value_42 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_args_element_value_42, 0, tmp_list_element_1);
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 140;
        tmp_call_result_26 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_17, mod_consts[82], tmp_args_element_value_42);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_26);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 7.
    exception_preserved_7 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_17 == NULL) {
        exception_keeper_tb_17 = MAKE_TRACEBACK(frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_17);
    } else if (exception_keeper_lineno_17 != 0) {
        exception_keeper_tb_17 = ADD_TRACEBACK(exception_keeper_tb_17, frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_17);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_17, &exception_keeper_value_17, &exception_keeper_tb_17);
    // Tried code:
    {
        bool tmp_condition_result_27;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        tmp_cmp_expr_left_15 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_15 = mod_consts[66];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_condition_result_27 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        nuitka_bool tmp_condition_result_28;
        int tmp_truth_name_5;
        CHECK_OBJECT(par_verbose);
        tmp_truth_name_5 = CHECK_IF_TRUE(par_verbose);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_condition_result_28 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_called_instance_18;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_46 = par_to_screen;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_19;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 144;
        tmp_args_element_value_44 = CALL_METHOD_NO_ARGS(tmp_called_instance_18, mod_consts[31]);
        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_19;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 144;
        tmp_args_element_value_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_19;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 144;
        tmp_call_result_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_43);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_19;
        }
        Py_DECREF(tmp_call_result_27);
    }
    branch_no_27:;
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_call_result_28;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_48 = par_to_screen;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 145;
        tmp_call_result_28 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_48, mod_consts[83]);

        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_19;
        }
        Py_DECREF(tmp_call_result_28);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_19;
    goto branch_end_26;
    branch_no_26:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 128;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_32cf66bbc3799700f692806840464d23->m_frame) frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooNNNNooooooooooooooo";
    goto try_except_handler_19;
    branch_end_26:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_19:;
    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(&exception_preserved_7);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(&exception_preserved_7);

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_13:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_33;
        tmp_expression_value_33 = (PyObject *)moduledict_youtube_dl$update;
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[17]);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 149;
        tmp_isinstance_inst_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_49, mod_consts[18]);

        Py_DECREF(tmp_called_value_49);
        if (tmp_isinstance_inst_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_2);

            exception_lineno = 149;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_inst_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_29 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_subscript_value_12;
        CHECK_OBJECT(par_opener);
        tmp_expression_value_34 = par_opener;
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[23]);
        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_20;
        }
        CHECK_OBJECT(var_version);
        tmp_expression_value_36 = var_version;
        tmp_subscript_value_11 = mod_consts[84];
        tmp_expression_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_11);
        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 151;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_subscript_value_12 = mod_consts[2];
        tmp_args_element_value_45 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_35, tmp_subscript_value_12, 0);
        Py_DECREF(tmp_expression_value_35);
        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 151;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_20;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 151;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_45);
        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_20;
        }
        assert(var_urlh == NULL);
        var_urlh = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_instance_19;
        CHECK_OBJECT(var_urlh);
        tmp_called_instance_19 = var_urlh;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 152;
        tmp_assign_source_28 = CALL_METHOD_NO_ARGS(tmp_called_instance_19, mod_consts[25]);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_20;
        }
        assert(var_newcontent == NULL);
        var_newcontent = tmp_assign_source_28;
    }
    {
        PyObject *tmp_called_instance_20;
        PyObject *tmp_call_result_29;
        CHECK_OBJECT(var_urlh);
        tmp_called_instance_20 = var_urlh;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 153;
        tmp_call_result_29 = CALL_METHOD_NO_ARGS(tmp_called_instance_20, mod_consts[65]);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_20;
        }
        Py_DECREF(tmp_call_result_29);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 8.
    exception_preserved_8 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_19 == NULL) {
        exception_keeper_tb_19 = MAKE_TRACEBACK(frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_19);
    } else if (exception_keeper_lineno_19 != 0) {
        exception_keeper_tb_19 = ADD_TRACEBACK(exception_keeper_tb_19, frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_19);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_19, &exception_keeper_value_19, &exception_keeper_tb_19);
    // Tried code:
    {
        bool tmp_condition_result_30;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        tmp_cmp_expr_left_16 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_16 = mod_consts[66];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        nuitka_bool tmp_condition_result_31;
        int tmp_truth_name_6;
        CHECK_OBJECT(par_verbose);
        tmp_truth_name_6 = CHECK_IF_TRUE(par_verbose);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_condition_result_31 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_call_result_30;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_called_value_52;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_called_instance_21;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_51 = par_to_screen;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_21 == NULL)) {
            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 156;
        tmp_args_element_value_47 = CALL_METHOD_NO_ARGS(tmp_called_instance_21, mod_consts[31]);
        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 156;
        tmp_args_element_value_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_47);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 156;
        tmp_call_result_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_46);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_21;
        }
        Py_DECREF(tmp_call_result_30);
    }
    branch_no_30:;
    {
        PyObject *tmp_called_value_53;
        PyObject *tmp_call_result_31;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_53 = par_to_screen;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 157;
        tmp_call_result_31 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_53, mod_consts[67]);

        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_21;
        }
        Py_DECREF(tmp_call_result_31);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_21;
    goto branch_end_29;
    branch_no_29:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 150;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_32cf66bbc3799700f692806840464d23->m_frame) frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooNNNNooooooooooooooo";
    goto try_except_handler_21;
    branch_end_29:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_21:;
    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(&exception_preserved_8);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(&exception_preserved_8);

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_14:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_args_element_value_48;
        tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_23 == NULL)) {
            tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_newcontent);
        tmp_args_element_value_48 = var_newcontent;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 160;
        tmp_called_instance_22 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_23, mod_consts[3], tmp_args_element_value_48);
        if (tmp_called_instance_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 160;
        tmp_assign_source_29 = CALL_METHOD_NO_ARGS(tmp_called_instance_22, mod_consts[13]);
        Py_DECREF(tmp_called_instance_22);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_newcontent_hash == NULL);
        var_newcontent_hash = tmp_assign_source_29;
    }
    {
        nuitka_bool tmp_condition_result_32;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_subscript_value_14;
        CHECK_OBJECT(var_newcontent_hash);
        tmp_cmp_expr_left_17 = var_newcontent_hash;
        CHECK_OBJECT(var_version);
        tmp_expression_value_38 = var_version;
        tmp_subscript_value_13 = mod_consts[84];
        tmp_expression_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_13);
        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = mod_consts[8];
        tmp_cmp_expr_right_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_37, tmp_subscript_value_14, 1);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_cmp_expr_right_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        Py_DECREF(tmp_cmp_expr_right_17);
        if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_call_result_32;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_54 = par_to_screen;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 162;
        tmp_call_result_32 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_54, mod_consts[68]);

        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_31:;
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_open_filename_2;
        PyObject *tmp_open_mode_2;
        CHECK_OBJECT(var_filename);
        tmp_open_filename_2 = var_filename;
        tmp_open_mode_2 = mod_consts[70];
        tmp_assign_source_30 = BUILTIN_OPEN(tmp_open_filename_2, tmp_open_mode_2, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_23;
        }
        assert(tmp_with_3__source == NULL);
        tmp_with_3__source = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_39;
        CHECK_OBJECT(tmp_with_3__source);
        tmp_expression_value_39 = tmp_with_3__source;
        tmp_called_value_55 = LOOKUP_SPECIAL(tmp_expression_value_39, mod_consts[71]);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_23;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 166;
        tmp_assign_source_31 = CALL_FUNCTION_NO_ARGS(tmp_called_value_55);
        Py_DECREF(tmp_called_value_55);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_23;
        }
        assert(tmp_with_3__enter == NULL);
        tmp_with_3__enter = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_with_3__source);
        tmp_expression_value_40 = tmp_with_3__source;
        tmp_assign_source_32 = LOOKUP_SPECIAL(tmp_expression_value_40, mod_consts[72]);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_23;
        }
        assert(tmp_with_3__exit == NULL);
        tmp_with_3__exit = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_assign_source_33;
        tmp_assign_source_33 = NUITKA_BOOL_TRUE;
        tmp_with_3__indicator = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_with_3__enter);
        tmp_assign_source_34 = tmp_with_3__enter;
        assert(var_outf == NULL);
        Py_INCREF(tmp_assign_source_34);
        var_outf = tmp_assign_source_34;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_24;
        PyObject *tmp_call_result_33;
        PyObject *tmp_args_element_value_49;
        CHECK_OBJECT(var_outf);
        tmp_called_instance_24 = var_outf;
        CHECK_OBJECT(var_newcontent);
        tmp_args_element_value_49 = var_newcontent;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 167;
        tmp_call_result_33 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_24, mod_consts[73], tmp_args_element_value_49);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_25;
        }
        Py_DECREF(tmp_call_result_33);
    }
    goto try_end_15;
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

    // Preserve existing published exception id 9.
    exception_preserved_9 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_21 == NULL) {
        exception_keeper_tb_21 = MAKE_TRACEBACK(frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_21);
    } else if (exception_keeper_lineno_21 != 0) {
        exception_keeper_tb_21 = ADD_TRACEBACK(exception_keeper_tb_21, frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_21);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_21, &exception_keeper_value_21, &exception_keeper_tb_21);
    // Tried code:
    {
        bool tmp_condition_result_33;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        tmp_cmp_expr_left_18 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_18 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_33 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        nuitka_bool tmp_assign_source_35;
        tmp_assign_source_35 = NUITKA_BOOL_FALSE;
        tmp_with_3__indicator = tmp_assign_source_35;
    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_called_value_56;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_56 = tmp_with_3__exit;
        tmp_args_element_value_50 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_51 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_52 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52};
            tmp_operand_value_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_56, call_args);
        }

        if (tmp_operand_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        Py_DECREF(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_condition_result_34 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 167;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_32cf66bbc3799700f692806840464d23->m_frame) frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooNNNNooooooooooooooo";
    goto try_except_handler_26;
    branch_no_33:;
    goto branch_end_32;
    branch_no_32:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 166;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_32cf66bbc3799700f692806840464d23->m_frame) frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooNNNNooooooooooooooo";
    goto try_except_handler_26;
    branch_end_32:;
    goto try_end_16;
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

    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(&exception_preserved_9);

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_24;
    // End of try:
    try_end_16:;
    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(&exception_preserved_9);

    goto try_end_15;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_15:;
    goto try_end_17;
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

    {
        bool tmp_condition_result_35;
        nuitka_bool tmp_cmp_expr_left_19;
        nuitka_bool tmp_cmp_expr_right_19;
        assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_19 = tmp_with_3__indicator;
        tmp_cmp_expr_right_19 = NUITKA_BOOL_TRUE;
        tmp_condition_result_35 = (tmp_cmp_expr_left_19 == tmp_cmp_expr_right_19) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_call_result_34;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_57 = tmp_with_3__exit;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 167;
        tmp_call_result_34 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_57, mod_consts[74]);

        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_23);
            Py_XDECREF(exception_keeper_value_23);
            Py_XDECREF(exception_keeper_tb_23);

            exception_lineno = 167;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_23;
        }
        Py_DECREF(tmp_call_result_34);
    }
    branch_no_34:;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_23;
    // End of try:
    try_end_17:;
    {
        bool tmp_condition_result_36;
        nuitka_bool tmp_cmp_expr_left_20;
        nuitka_bool tmp_cmp_expr_right_20;
        assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_20 = tmp_with_3__indicator;
        tmp_cmp_expr_right_20 = NUITKA_BOOL_TRUE;
        tmp_condition_result_36 = (tmp_cmp_expr_left_20 == tmp_cmp_expr_right_20) ? true : false;
        if (tmp_condition_result_36 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_call_result_35;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_58 = tmp_with_3__exit;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 167;
        tmp_call_result_35 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_58, mod_consts[74]);

        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_23;
        }
        Py_DECREF(tmp_call_result_35);
    }
    branch_no_35:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_3__source);
    tmp_with_3__source = NULL;
    Py_XDECREF(tmp_with_3__enter);
    tmp_with_3__enter = NULL;
    Py_XDECREF(tmp_with_3__exit);
    tmp_with_3__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_22;
    // End of try:
    try_end_18:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 10.
    exception_preserved_10 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_25 == NULL) {
        exception_keeper_tb_25 = MAKE_TRACEBACK(frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_25);
    } else if (exception_keeper_lineno_25 != 0) {
        exception_keeper_tb_25 = ADD_TRACEBACK(exception_keeper_tb_25, frame_32cf66bbc3799700f692806840464d23, exception_keeper_lineno_25);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_25, &exception_keeper_value_25, &exception_keeper_tb_25);
    // Tried code:
    {
        bool tmp_condition_result_37;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        tmp_cmp_expr_left_21 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_21 = mod_consts[66];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_condition_result_37 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        nuitka_bool tmp_condition_result_38;
        int tmp_truth_name_7;
        CHECK_OBJECT(par_verbose);
        tmp_truth_name_7 = CHECK_IF_TRUE(par_verbose);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_condition_result_38 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_call_result_36;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_called_value_60;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_called_instance_25;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_59 = par_to_screen;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_25 == NULL)) {
            tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_27;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 170;
        tmp_args_element_value_54 = CALL_METHOD_NO_ARGS(tmp_called_instance_25, mod_consts[31]);
        if (tmp_args_element_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_27;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 170;
        tmp_args_element_value_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_54);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_27;
        }
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 170;
        tmp_call_result_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_59, tmp_args_element_value_53);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_27;
        }
        Py_DECREF(tmp_call_result_36);
    }
    branch_no_37:;
    {
        PyObject *tmp_called_value_61;
        PyObject *tmp_call_result_37;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_61 = par_to_screen;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 171;
        tmp_call_result_37 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_61, mod_consts[83]);

        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto try_except_handler_27;
        }
        Py_DECREF(tmp_call_result_37);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_27;
    goto branch_end_36;
    branch_no_36:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 165;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_32cf66bbc3799700f692806840464d23->m_frame) frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooNNNNooooooooooooooo";
    goto try_except_handler_27;
    branch_end_36:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_27:;
    // Restore previous exception id 10.
    SET_CURRENT_EXCEPTION(&exception_preserved_10);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 10.
    SET_CURRENT_EXCEPTION(&exception_preserved_10);

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_with_3__source);
    Py_DECREF(tmp_with_3__source);
    tmp_with_3__source = NULL;
    CHECK_OBJECT(tmp_with_3__enter);
    Py_DECREF(tmp_with_3__enter);
    tmp_with_3__enter = NULL;
    Py_XDECREF(tmp_with_3__exit);
    tmp_with_3__exit = NULL;
    branch_no_28:;
    branch_end_11:;
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_call_result_38;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_62 = par_to_screen;
        frame_32cf66bbc3799700f692806840464d23->m_frame.f_lineno = 174;
        tmp_call_result_38 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_62, mod_consts[85]);

        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooNNNNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_32cf66bbc3799700f692806840464d23);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_32cf66bbc3799700f692806840464d23);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_32cf66bbc3799700f692806840464d23);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_32cf66bbc3799700f692806840464d23, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32cf66bbc3799700f692806840464d23->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32cf66bbc3799700f692806840464d23, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_32cf66bbc3799700f692806840464d23,
        type_description_1,
        par_to_screen,
        par_verbose,
        par_opener,
        NULL,
        NULL,
        NULL,
        NULL,
        var_newversion,
        var_versions_info,
        var_signature,
        var_version_id,
        var_version_tuple,
        var_version,
        var_filename,
        var_exe,
        var_directory,
        var_urlh,
        var_newcontent,
        var_newcontent_hash,
        var_outf,
        var_bat,
        var_batfile
    );


    // Release cached frame if used for exception.
    if (frame_32cf66bbc3799700f692806840464d23 == cache_frame_32cf66bbc3799700f692806840464d23) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_32cf66bbc3799700f692806840464d23);
        cache_frame_32cf66bbc3799700f692806840464d23 = NULL;
    }

    assertFrameObject(frame_32cf66bbc3799700f692806840464d23);

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
    Py_XDECREF(var_newversion);
    var_newversion = NULL;
    Py_XDECREF(var_versions_info);
    var_versions_info = NULL;
    Py_XDECREF(var_signature);
    var_signature = NULL;
    Py_XDECREF(var_version_id);
    var_version_id = NULL;
    Py_XDECREF(var_version_tuple);
    var_version_tuple = NULL;
    Py_XDECREF(var_version);
    var_version = NULL;
    Py_XDECREF(var_filename);
    var_filename = NULL;
    Py_XDECREF(var_exe);
    var_exe = NULL;
    Py_XDECREF(var_directory);
    var_directory = NULL;
    Py_XDECREF(var_urlh);
    var_urlh = NULL;
    Py_XDECREF(var_newcontent);
    var_newcontent = NULL;
    Py_XDECREF(var_newcontent_hash);
    var_newcontent_hash = NULL;
    Py_XDECREF(var_outf);
    var_outf = NULL;
    Py_XDECREF(var_bat);
    var_bat = NULL;
    Py_XDECREF(var_batfile);
    var_batfile = NULL;
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

    Py_XDECREF(var_newversion);
    var_newversion = NULL;
    Py_XDECREF(var_versions_info);
    var_versions_info = NULL;
    Py_XDECREF(var_signature);
    var_signature = NULL;
    Py_XDECREF(var_version_id);
    var_version_id = NULL;
    Py_XDECREF(var_version_tuple);
    var_version_tuple = NULL;
    Py_XDECREF(var_version);
    var_version = NULL;
    Py_XDECREF(var_filename);
    var_filename = NULL;
    Py_XDECREF(var_exe);
    var_exe = NULL;
    Py_XDECREF(var_directory);
    var_directory = NULL;
    Py_XDECREF(var_urlh);
    var_urlh = NULL;
    Py_XDECREF(var_newcontent);
    var_newcontent = NULL;
    Py_XDECREF(var_newcontent_hash);
    var_newcontent_hash = NULL;
    Py_XDECREF(var_outf);
    var_outf = NULL;
    Py_XDECREF(var_bat);
    var_bat = NULL;
    Py_XDECREF(var_batfile);
    var_batfile = NULL;
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
    CHECK_OBJECT(par_to_screen);
    Py_DECREF(par_to_screen);
    CHECK_OBJECT(par_verbose);
    Py_DECREF(par_verbose);
    CHECK_OBJECT(par_opener);
    Py_DECREF(par_opener);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_to_screen);
    Py_DECREF(par_to_screen);
    CHECK_OBJECT(par_verbose);
    Py_DECREF(par_verbose);
    CHECK_OBJECT(par_opener);
    Py_DECREF(par_opener);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$update$$$function__2_update_self$$$function__1_version_tuple(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_version_str = python_pars[0];
    struct Nuitka_FrameObject *frame_a0b1ef03a024c713fdb9e962576286cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a0b1ef03a024c713fdb9e962576286cd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a0b1ef03a024c713fdb9e962576286cd)) {
        Py_XDECREF(cache_frame_a0b1ef03a024c713fdb9e962576286cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a0b1ef03a024c713fdb9e962576286cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a0b1ef03a024c713fdb9e962576286cd = MAKE_FUNCTION_FRAME(codeobj_a0b1ef03a024c713fdb9e962576286cd, module_youtube_dl$update, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a0b1ef03a024c713fdb9e962576286cd->m_type_description == NULL);
    frame_a0b1ef03a024c713fdb9e962576286cd = cache_frame_a0b1ef03a024c713fdb9e962576286cd;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_a0b1ef03a024c713fdb9e962576286cd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a0b1ef03a024c713fdb9e962576286cd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = (PyObject *)&PyMap_Type;
        tmp_args_element_value_1 = (PyObject *)&PyLong_Type;
        CHECK_OBJECT(par_version_str);
        tmp_expression_value_1 = par_version_str;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[87]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a0b1ef03a024c713fdb9e962576286cd->m_frame.f_lineno = 77;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[88]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a0b1ef03a024c713fdb9e962576286cd->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a0b1ef03a024c713fdb9e962576286cd);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a0b1ef03a024c713fdb9e962576286cd);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a0b1ef03a024c713fdb9e962576286cd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a0b1ef03a024c713fdb9e962576286cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a0b1ef03a024c713fdb9e962576286cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0b1ef03a024c713fdb9e962576286cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a0b1ef03a024c713fdb9e962576286cd,
        type_description_1,
        par_version_str
    );


    // Release cached frame if used for exception.
    if (frame_a0b1ef03a024c713fdb9e962576286cd == cache_frame_a0b1ef03a024c713fdb9e962576286cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a0b1ef03a024c713fdb9e962576286cd);
        cache_frame_a0b1ef03a024c713fdb9e962576286cd = NULL;
    }

    assertFrameObject(frame_a0b1ef03a024c713fdb9e962576286cd);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_version_str);
    Py_DECREF(par_version_str);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_version_str);
    Py_DECREF(par_version_str);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$update$$$function__3_get_notes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_versions = python_pars[0];
    PyObject *par_fromVersion = python_pars[1];
    PyObject *var_notes = NULL;
    PyObject *var_v = NULL;
    PyObject *var_vdata = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4a5007edcedc85252b701c8337070825;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4a5007edcedc85252b701c8337070825 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_notes == NULL);
        var_notes = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_4a5007edcedc85252b701c8337070825)) {
        Py_XDECREF(cache_frame_4a5007edcedc85252b701c8337070825);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a5007edcedc85252b701c8337070825 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a5007edcedc85252b701c8337070825 = MAKE_FUNCTION_FRAME(codeobj_4a5007edcedc85252b701c8337070825, module_youtube_dl$update, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4a5007edcedc85252b701c8337070825->m_type_description == NULL);
    frame_4a5007edcedc85252b701c8337070825 = cache_frame_4a5007edcedc85252b701c8337070825;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_4a5007edcedc85252b701c8337070825);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4a5007edcedc85252b701c8337070825) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[89]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_versions);
        tmp_expression_value_1 = par_versions;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[90]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_4a5007edcedc85252b701c8337070825->m_frame.f_lineno = 179;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_4a5007edcedc85252b701c8337070825->m_frame.f_lineno = 179;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 179;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 179;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 179;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 179;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[91];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 179;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_7;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_vdata;
            var_vdata = tmp_assign_source_8;
            Py_INCREF(var_vdata);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_v);
        tmp_cmp_expr_left_1 = var_v;
        CHECK_OBJECT(par_fromVersion);
        tmp_cmp_expr_right_1 = par_fromVersion;
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        if (var_notes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 181;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = var_notes;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[93]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_vdata);
        tmp_expression_value_3 = var_vdata;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 181;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_call_arg_element_1 = mod_consts[92];
        tmp_call_arg_element_2 = MAKE_LIST_EMPTY(0);
        frame_4a5007edcedc85252b701c8337070825->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 181;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_4a5007edcedc85252b701c8337070825->m_frame.f_lineno = 181;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 179;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_notes == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 182;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_notes;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4a5007edcedc85252b701c8337070825);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4a5007edcedc85252b701c8337070825);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4a5007edcedc85252b701c8337070825);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4a5007edcedc85252b701c8337070825, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a5007edcedc85252b701c8337070825->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a5007edcedc85252b701c8337070825, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a5007edcedc85252b701c8337070825,
        type_description_1,
        par_versions,
        par_fromVersion,
        var_notes,
        var_v,
        var_vdata
    );


    // Release cached frame if used for exception.
    if (frame_4a5007edcedc85252b701c8337070825 == cache_frame_4a5007edcedc85252b701c8337070825) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4a5007edcedc85252b701c8337070825);
        cache_frame_4a5007edcedc85252b701c8337070825 = NULL;
    }

    assertFrameObject(frame_4a5007edcedc85252b701c8337070825);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_notes);
    var_notes = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_vdata);
    var_vdata = NULL;
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

    Py_XDECREF(var_notes);
    var_notes = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_vdata);
    var_vdata = NULL;
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
    CHECK_OBJECT(par_versions);
    Py_DECREF(par_versions);
    CHECK_OBJECT(par_fromVersion);
    Py_DECREF(par_fromVersion);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_versions);
    Py_DECREF(par_versions);
    CHECK_OBJECT(par_fromVersion);
    Py_DECREF(par_fromVersion);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$update$$$function__4_print_notes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_to_screen = python_pars[0];
    PyObject *par_versions = python_pars[1];
    PyObject *par_fromVersion = python_pars[2];
    PyObject *var_notes = NULL;
    PyObject *var_note = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_47a4888e0e837ac135ba39f618727b71;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_47a4888e0e837ac135ba39f618727b71 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_47a4888e0e837ac135ba39f618727b71)) {
        Py_XDECREF(cache_frame_47a4888e0e837ac135ba39f618727b71);

#if _DEBUG_REFCOUNTS
        if (cache_frame_47a4888e0e837ac135ba39f618727b71 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_47a4888e0e837ac135ba39f618727b71 = MAKE_FUNCTION_FRAME(codeobj_47a4888e0e837ac135ba39f618727b71, module_youtube_dl$update, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_47a4888e0e837ac135ba39f618727b71->m_type_description == NULL);
    frame_47a4888e0e837ac135ba39f618727b71 = cache_frame_47a4888e0e837ac135ba39f618727b71;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_47a4888e0e837ac135ba39f618727b71);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_47a4888e0e837ac135ba39f618727b71) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_versions);
        tmp_args_element_value_1 = par_versions;
        CHECK_OBJECT(par_fromVersion);
        tmp_args_element_value_2 = par_fromVersion;
        frame_47a4888e0e837ac135ba39f618727b71->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_notes == NULL);
        var_notes = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_notes);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_notes);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooo";
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_to_screen);
        tmp_called_value_2 = par_to_screen;
        frame_47a4888e0e837ac135ba39f618727b71->m_frame.f_lineno = 188;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[95]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_notes);
        tmp_iter_arg_1 = var_notes;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 189;
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
            PyObject *old = var_note;
            var_note = tmp_assign_source_4;
            Py_INCREF(var_note);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        if (par_to_screen == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_value_3 = par_to_screen;
        CHECK_OBJECT(var_note);
        tmp_args_element_value_3 = var_note;
        frame_47a4888e0e837ac135ba39f618727b71->m_frame.f_lineno = 190;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 189;
        type_description_1 = "ooooo";
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
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_47a4888e0e837ac135ba39f618727b71);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_47a4888e0e837ac135ba39f618727b71);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_47a4888e0e837ac135ba39f618727b71, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_47a4888e0e837ac135ba39f618727b71->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47a4888e0e837ac135ba39f618727b71, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_47a4888e0e837ac135ba39f618727b71,
        type_description_1,
        par_to_screen,
        par_versions,
        par_fromVersion,
        var_notes,
        var_note
    );


    // Release cached frame if used for exception.
    if (frame_47a4888e0e837ac135ba39f618727b71 == cache_frame_47a4888e0e837ac135ba39f618727b71) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_47a4888e0e837ac135ba39f618727b71);
        cache_frame_47a4888e0e837ac135ba39f618727b71 = NULL;
    }

    assertFrameObject(frame_47a4888e0e837ac135ba39f618727b71);

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
    Py_XDECREF(var_notes);
    var_notes = NULL;
    Py_XDECREF(var_note);
    var_note = NULL;
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

    Py_XDECREF(var_notes);
    var_notes = NULL;
    Py_XDECREF(var_note);
    var_note = NULL;
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
    CHECK_OBJECT(par_to_screen);
    Py_DECREF(par_to_screen);
    CHECK_OBJECT(par_versions);
    Py_DECREF(par_versions);
    CHECK_OBJECT(par_fromVersion);
    Py_DECREF(par_fromVersion);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_to_screen);
    Py_DECREF(par_to_screen);
    CHECK_OBJECT(par_versions);
    Py_DECREF(par_versions);
    CHECK_OBJECT(par_fromVersion);
    Py_DECREF(par_fromVersion);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_youtube_dl$update$$$function__1_rsa_verify() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$update$$$function__1_rsa_verify,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ef7acb077991e01dbb58d629315033ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$update,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$update$$$function__2_update_self() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$update$$$function__2_update_self,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_32cf66bbc3799700f692806840464d23,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$update,
        mod_consts[86],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$update$$$function__2_update_self$$$function__1_version_tuple() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$update$$$function__2_update_self$$$function__1_version_tuple,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        mod_consts[50],
#endif
        codeobj_a0b1ef03a024c713fdb9e962576286cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$update,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$update$$$function__3_get_notes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$update$$$function__3_get_notes,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4a5007edcedc85252b701c8337070825,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$update,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$update$$$function__4_print_notes(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$update$$$function__4_print_notes,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_47a4888e0e837ac135ba39f618727b71,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$update,
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

function_impl_code functable_youtube_dl$update[] = {
    impl_youtube_dl$update$$$function__2_update_self$$$function__1_version_tuple,
    impl_youtube_dl$update$$$function__1_rsa_verify,
    impl_youtube_dl$update$$$function__2_update_self,
    impl_youtube_dl$update$$$function__3_get_notes,
    impl_youtube_dl$update$$$function__4_print_notes,
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

    function_impl_code *current = functable_youtube_dl$update;
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

    if (offset > sizeof(functable_youtube_dl$update) || offset < 0) {
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
        functable_youtube_dl$update[offset],
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
        module_youtube_dl$update,
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
PyObject *modulecode_youtube_dl$update(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("youtube_dl.update");

    // Store the module for future use.
    module_youtube_dl$update = module;

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
        PRINT_STRING("youtube_dl.update: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl.update: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl.update: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inityoutube_dl$update\n");

    moduledict_youtube_dl$update = MODULE_DICT(module_youtube_dl$update);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_youtube_dl$update,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$update,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[119]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$update,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$update,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$update,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_youtube_dl$update);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_youtube_dl$update, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_youtube_dl$update, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_youtube_dl$update, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_youtube_dl$update);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_youtube_dl$update, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_7833aa4d843502824cf1f814beffea8a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_7833aa4d843502824cf1f814beffea8a = MAKE_MODULE_FRAME(codeobj_7833aa4d843502824cf1f814beffea8a, module_youtube_dl$update);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_7833aa4d843502824cf1f814beffea8a);
    assert(Py_REFCNT(frame_7833aa4d843502824cf1f814beffea8a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[99], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[100], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[102]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_IO();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[38];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_youtube_dl$update;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[2];
        frame_7833aa4d843502824cf1f814beffea8a->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[30];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_youtube_dl$update;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[2];
        frame_7833aa4d843502824cf1f814beffea8a->m_frame.f_lineno = 5;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[0];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_youtube_dl$update;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[2];
        frame_7833aa4d843502824cf1f814beffea8a->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT0(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[81];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_youtube_dl$update;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[2];
        frame_7833aa4d843502824cf1f814beffea8a->m_frame.f_lineno = 8;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT0(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[103];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_youtube_dl$update;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[104];
        tmp_level_value_5 = mod_consts[2];
        frame_7833aa4d843502824cf1f814beffea8a->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_youtube_dl$update,
                mod_consts[19],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_1);
        assert(!(tmp_assign_source_12 == NULL));
        UPDATE_STRING_DICT1(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[105];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_youtube_dl$update;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[106];
        tmp_level_value_6 = mod_consts[8];
        frame_7833aa4d843502824cf1f814beffea8a->m_frame.f_lineno = 12;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_youtube_dl$update,
                mod_consts[56],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[107];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_youtube_dl$update;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[108];
        tmp_level_value_7 = mod_consts[8];
        frame_7833aa4d843502824cf1f814beffea8a->m_frame.f_lineno = 13;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_youtube_dl$update,
                mod_consts[29],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[109];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_youtube_dl$update;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[110];
        tmp_level_value_8 = mod_consts[8];
        frame_7833aa4d843502824cf1f814beffea8a->m_frame.f_lineno = 15;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_youtube_dl$update,
                mod_consts[34],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[34]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_15);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7833aa4d843502824cf1f814beffea8a);
#endif
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7833aa4d843502824cf1f814beffea8a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7833aa4d843502824cf1f814beffea8a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7833aa4d843502824cf1f814beffea8a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7833aa4d843502824cf1f814beffea8a, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_youtube_dl$update$$$function__1_rsa_verify();

        UPDATE_STRING_DICT1(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_youtube_dl$update$$$function__2_update_self();

        UPDATE_STRING_DICT1(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_youtube_dl$update$$$function__3_get_notes();

        UPDATE_STRING_DICT1(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);


        tmp_assign_source_19 = MAKE_FUNCTION_youtube_dl$update$$$function__4_print_notes(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_youtube_dl$update, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_19);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("youtube_dl.update", false);

    Py_INCREF(module_youtube_dl$update);
    return module_youtube_dl$update;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$update, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("youtube_dl$update", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
