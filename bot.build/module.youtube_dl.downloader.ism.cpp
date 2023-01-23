/* Generated code for Python module 'youtube_dl.downloader.ism'
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

/* The "module_youtube_dl$downloader$ism" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_youtube_dl$downloader$ism;
PyDictObject *moduledict_youtube_dl$downloader$ism;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[186];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[186];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("youtube_dl.downloader.ism"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 186; i++) {
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
void checkModuleConstants_youtube_dl$downloader$ism(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 186; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e6b9ec36089603f95c9892ebedac2e77;
static PyCodeObject *codeobj_6e2010361b4bc95db54fdfb69d1c0ec1;
static PyCodeObject *codeobj_28265955c4ee73e95846b49fdcf3e47e;
static PyCodeObject *codeobj_9e0c4ffa1c21319f3968206647f54e9a;
static PyCodeObject *codeobj_11336a7202ad21bb37fc901e0e69af6f;
static PyCodeObject *codeobj_5989de568c20af5a189f707182d62a7a;
static PyCodeObject *codeobj_96637bb6ee39ee56b1ed851b20eb78e1;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[177]); CHECK_OBJECT(module_filename_obj);
    codeobj_e6b9ec36089603f95c9892ebedac2e77 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[178], mod_consts[178], NULL, NULL, 0, 0, 0);
    codeobj_6e2010361b4bc95db54fdfb69d1c0ec1 = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[163], mod_consts[163], mod_consts[179], NULL, 0, 0, 0);
    codeobj_28265955c4ee73e95846b49fdcf3e47e = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[2], mod_consts[2], mod_consts[180], NULL, 2, 0, 0);
    codeobj_9e0c4ffa1c21319f3968206647f54e9a = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[97], mod_consts[97], mod_consts[181], NULL, 2, 0, 0);
    codeobj_11336a7202ad21bb37fc901e0e69af6f = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[29], mod_consts[29], mod_consts[182], NULL, 4, 0, 0);
    codeobj_5989de568c20af5a189f707182d62a7a = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[174], mod_consts[174], mod_consts[183], NULL, 3, 0, 0);
    codeobj_96637bb6ee39ee56b1ed851b20eb78e1 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[121], mod_consts[121], mod_consts[184], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_youtube_dl$downloader$ism$$$function__1_box();


static PyObject *MAKE_FUNCTION_youtube_dl$downloader$ism$$$function__2_full_box();


static PyObject *MAKE_FUNCTION_youtube_dl$downloader$ism$$$function__3_write_piff_header();


static PyObject *MAKE_FUNCTION_youtube_dl$downloader$ism$$$function__4_extract_box_data();


static PyObject *MAKE_FUNCTION_youtube_dl$downloader$ism$$$function__5_real_download();


// The module function definitions.
static PyObject *impl_youtube_dl$downloader$ism$$$function__1_box(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_box_type = python_pars[0];
    PyObject *par_payload = python_pars[1];
    struct Nuitka_FrameObject *frame_28265955c4ee73e95846b49fdcf3e47e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_28265955c4ee73e95846b49fdcf3e47e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_28265955c4ee73e95846b49fdcf3e47e)) {
        Py_XDECREF(cache_frame_28265955c4ee73e95846b49fdcf3e47e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_28265955c4ee73e95846b49fdcf3e47e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_28265955c4ee73e95846b49fdcf3e47e = MAKE_FUNCTION_FRAME(codeobj_28265955c4ee73e95846b49fdcf3e47e, module_youtube_dl$downloader$ism, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_28265955c4ee73e95846b49fdcf3e47e->m_type_description == NULL);
    frame_28265955c4ee73e95846b49fdcf3e47e = cache_frame_28265955c4ee73e95846b49fdcf3e47e;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_28265955c4ee73e95846b49fdcf3e47e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_28265955c4ee73e95846b49fdcf3e47e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        nuitka_digit tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_len_arg_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = 8;
        CHECK_OBJECT(par_payload);
        tmp_len_arg_1 = par_payload;
        tmp_add_expr_right_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_right_3, tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        assert(!(tmp_args_element_value_1 == NULL));
        frame_28265955c4ee73e95846b49fdcf3e47e->m_frame.f_lineno = 36;
        tmp_add_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_box_type);
        tmp_add_expr_right_2 = par_box_type;
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_payload);
        tmp_add_expr_right_1 = par_payload;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_28265955c4ee73e95846b49fdcf3e47e);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_28265955c4ee73e95846b49fdcf3e47e);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_28265955c4ee73e95846b49fdcf3e47e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_28265955c4ee73e95846b49fdcf3e47e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_28265955c4ee73e95846b49fdcf3e47e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28265955c4ee73e95846b49fdcf3e47e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_28265955c4ee73e95846b49fdcf3e47e,
        type_description_1,
        par_box_type,
        par_payload
    );


    // Release cached frame if used for exception.
    if (frame_28265955c4ee73e95846b49fdcf3e47e == cache_frame_28265955c4ee73e95846b49fdcf3e47e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_28265955c4ee73e95846b49fdcf3e47e);
        cache_frame_28265955c4ee73e95846b49fdcf3e47e = NULL;
    }

    assertFrameObject(frame_28265955c4ee73e95846b49fdcf3e47e);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_box_type);
    Py_DECREF(par_box_type);
    CHECK_OBJECT(par_payload);
    Py_DECREF(par_payload);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_box_type);
    Py_DECREF(par_box_type);
    CHECK_OBJECT(par_payload);
    Py_DECREF(par_payload);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$downloader$ism$$$function__2_full_box(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_box_type = python_pars[0];
    PyObject *par_version = python_pars[1];
    PyObject *par_flags = python_pars[2];
    PyObject *par_payload = python_pars[3];
    struct Nuitka_FrameObject *frame_11336a7202ad21bb37fc901e0e69af6f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_11336a7202ad21bb37fc901e0e69af6f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_11336a7202ad21bb37fc901e0e69af6f)) {
        Py_XDECREF(cache_frame_11336a7202ad21bb37fc901e0e69af6f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_11336a7202ad21bb37fc901e0e69af6f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_11336a7202ad21bb37fc901e0e69af6f = MAKE_FUNCTION_FRAME(codeobj_11336a7202ad21bb37fc901e0e69af6f, module_youtube_dl$downloader$ism, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_11336a7202ad21bb37fc901e0e69af6f->m_type_description == NULL);
    frame_11336a7202ad21bb37fc901e0e69af6f = cache_frame_11336a7202ad21bb37fc901e0e69af6f;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_11336a7202ad21bb37fc901e0e69af6f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_11336a7202ad21bb37fc901e0e69af6f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_box_type);
        tmp_args_element_value_1 = par_box_type;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_version);
        tmp_args_element_value_3 = par_version;
        frame_11336a7202ad21bb37fc901e0e69af6f->m_frame.f_lineno = 40;
        tmp_add_expr_left_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_flags);
        tmp_args_element_value_4 = par_flags;
        frame_11336a7202ad21bb37fc901e0e69af6f->m_frame.f_lineno = 40;
        tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[1], tmp_args_element_value_4);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[4];
        tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_payload);
        tmp_add_expr_right_1 = par_payload;
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_11336a7202ad21bb37fc901e0e69af6f->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_11336a7202ad21bb37fc901e0e69af6f);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_11336a7202ad21bb37fc901e0e69af6f);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_11336a7202ad21bb37fc901e0e69af6f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_11336a7202ad21bb37fc901e0e69af6f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_11336a7202ad21bb37fc901e0e69af6f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_11336a7202ad21bb37fc901e0e69af6f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_11336a7202ad21bb37fc901e0e69af6f,
        type_description_1,
        par_box_type,
        par_version,
        par_flags,
        par_payload
    );


    // Release cached frame if used for exception.
    if (frame_11336a7202ad21bb37fc901e0e69af6f == cache_frame_11336a7202ad21bb37fc901e0e69af6f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_11336a7202ad21bb37fc901e0e69af6f);
        cache_frame_11336a7202ad21bb37fc901e0e69af6f = NULL;
    }

    assertFrameObject(frame_11336a7202ad21bb37fc901e0e69af6f);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_box_type);
    Py_DECREF(par_box_type);
    CHECK_OBJECT(par_version);
    Py_DECREF(par_version);
    CHECK_OBJECT(par_flags);
    Py_DECREF(par_flags);
    CHECK_OBJECT(par_payload);
    Py_DECREF(par_payload);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_box_type);
    Py_DECREF(par_box_type);
    CHECK_OBJECT(par_version);
    Py_DECREF(par_version);
    CHECK_OBJECT(par_flags);
    Py_DECREF(par_flags);
    CHECK_OBJECT(par_payload);
    Py_DECREF(par_payload);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$downloader$ism$$$function__3_write_piff_header(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    PyObject *par_params = python_pars[1];
    PyObject *var_track_id = NULL;
    PyObject *var_fourcc = NULL;
    PyObject *var_duration = NULL;
    PyObject *var_timescale = NULL;
    PyObject *var_language = NULL;
    PyObject *var_height = NULL;
    PyObject *var_width = NULL;
    PyObject *var_is_audio = NULL;
    PyObject *var_creation_time = NULL;
    PyObject *var_modification_time = NULL;
    PyObject *var_ftyp_payload = NULL;
    PyObject *var_mvhd_payload = NULL;
    PyObject *var_moov_payload = NULL;
    PyObject *var_tkhd_payload = NULL;
    PyObject *var_trak_payload = NULL;
    PyObject *var_mdhd_payload = NULL;
    PyObject *var_mdia_payload = NULL;
    PyObject *var_hdlr_payload = NULL;
    PyObject *var_smhd_payload = NULL;
    PyObject *var_media_header_box = NULL;
    PyObject *var_vmhd_payload = NULL;
    PyObject *var_minf_payload = NULL;
    PyObject *var_dref_payload = NULL;
    PyObject *var_dinf_payload = NULL;
    PyObject *var_stsd_payload = NULL;
    PyObject *var_sample_entry_payload = NULL;
    PyObject *var_sample_entry_box = NULL;
    PyObject *var_codec_private_data = NULL;
    PyObject *var_sps = NULL;
    PyObject *var_pps = NULL;
    PyObject *var_avcc_payload = NULL;
    PyObject *var_stbl_payload = NULL;
    PyObject *var_stts_payload = NULL;
    PyObject *var_stsc_payload = NULL;
    PyObject *var_stco_payload = NULL;
    PyObject *var_mehd_payload = NULL;
    PyObject *var_mvex_payload = NULL;
    PyObject *var_trex_payload = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_96637bb6ee39ee56b1ed851b20eb78e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_96637bb6ee39ee56b1ed851b20eb78e1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_96637bb6ee39ee56b1ed851b20eb78e1)) {
        Py_XDECREF(cache_frame_96637bb6ee39ee56b1ed851b20eb78e1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96637bb6ee39ee56b1ed851b20eb78e1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96637bb6ee39ee56b1ed851b20eb78e1 = MAKE_FUNCTION_FRAME(codeobj_96637bb6ee39ee56b1ed851b20eb78e1, module_youtube_dl$downloader$ism, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_96637bb6ee39ee56b1ed851b20eb78e1->m_type_description == NULL);
    frame_96637bb6ee39ee56b1ed851b20eb78e1 = cache_frame_96637bb6ee39ee56b1ed851b20eb78e1;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_96637bb6ee39ee56b1ed851b20eb78e1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_96637bb6ee39ee56b1ed851b20eb78e1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_params);
        tmp_expression_value_1 = par_params;
        tmp_subscript_value_1 = mod_consts[5];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_track_id == NULL);
        var_track_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_params);
        tmp_expression_value_2 = par_params;
        tmp_subscript_value_2 = mod_consts[6];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fourcc == NULL);
        var_fourcc = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_params);
        tmp_expression_value_3 = par_params;
        tmp_subscript_value_3 = mod_consts[7];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_duration == NULL);
        var_duration = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_params);
        tmp_expression_value_4 = par_params;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 47;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[9]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_timescale == NULL);
        var_timescale = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_params);
        tmp_expression_value_5 = par_params;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[8]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 48;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[10]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_language == NULL);
        var_language = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_params);
        tmp_expression_value_6 = par_params;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[8]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 49;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[11]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_height == NULL);
        var_height = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_params);
        tmp_expression_value_7 = par_params;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[8]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 50;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[12]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_width == NULL);
        var_width = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_width);
        tmp_cmp_expr_left_1 = var_width;
        tmp_cmp_expr_right_1 = mod_consts[13];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 51;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        CHECK_OBJECT(var_height);
        tmp_cmp_expr_left_2 = var_height;
        tmp_cmp_expr_right_2 = mod_consts[13];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assign_source_8 = tmp_and_left_value_1;
        and_end_1:;
        assert(var_is_audio == NULL);
        var_is_audio = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 52;
        tmp_int_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[14]);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_10 = tmp_assign_unpack_1__assign_source;
        assert(var_creation_time == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_creation_time = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_11 = tmp_assign_unpack_1__assign_source;
        assert(var_modification_time == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_modification_time = tmp_assign_source_11;
    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_instance_2;
        tmp_iadd_expr_left_1 = mod_consts[15];
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 55;
        tmp_iadd_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_iadd_expr_left_1);
        tmp_result = INPLACE_OPERATION_ADD_BYTES_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = tmp_iadd_expr_left_1;
        assert(var_ftyp_payload == NULL);
        var_ftyp_payload = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        CHECK_OBJECT(var_ftyp_payload);
        tmp_iadd_expr_left_2 = var_ftyp_payload;
        tmp_iadd_expr_right_2 = mod_consts[17];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_BYTES(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = tmp_iadd_expr_left_2;
        var_ftyp_payload = tmp_assign_source_13;

    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_stream);
        tmp_expression_value_8 = par_stream;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[18]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[19];
        CHECK_OBJECT(var_ftyp_payload);
        tmp_args_element_value_3 = var_ftyp_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 57;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_creation_time);
        tmp_args_element_value_4 = var_creation_time;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 59;
        tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[1], tmp_args_element_value_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mvhd_payload == NULL);
        var_mvhd_payload = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_mvhd_payload);
        tmp_iadd_expr_left_3 = var_mvhd_payload;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_modification_time);
        tmp_args_element_value_5 = var_modification_time;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 60;
        tmp_iadd_expr_right_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[1], tmp_args_element_value_5);
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = tmp_iadd_expr_left_3;
        var_mvhd_payload = tmp_assign_source_15;

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_mvhd_payload);
        tmp_iadd_expr_left_4 = var_mvhd_payload;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_timescale);
        tmp_args_element_value_6 = var_timescale;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 61;
        tmp_iadd_expr_right_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[1], tmp_args_element_value_6);
        if (tmp_iadd_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        Py_DECREF(tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = tmp_iadd_expr_left_4;
        var_mvhd_payload = tmp_assign_source_16;

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_mvhd_payload);
        tmp_iadd_expr_left_5 = var_mvhd_payload;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_duration);
        tmp_args_element_value_7 = var_duration;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 62;
        tmp_iadd_expr_right_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[1], tmp_args_element_value_7);
        if (tmp_iadd_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        Py_DECREF(tmp_iadd_expr_right_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = tmp_iadd_expr_left_5;
        var_mvhd_payload = tmp_assign_source_17;

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iadd_expr_left_6;
        PyObject *tmp_iadd_expr_right_6;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(var_mvhd_payload);
        tmp_iadd_expr_left_6 = var_mvhd_payload;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 63;
        tmp_iadd_expr_right_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_iadd_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
        Py_DECREF(tmp_iadd_expr_right_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = tmp_iadd_expr_left_6;
        var_mvhd_payload = tmp_assign_source_18;

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iadd_expr_left_7;
        PyObject *tmp_iadd_expr_right_7;
        PyObject *tmp_called_instance_8;
        CHECK_OBJECT(var_mvhd_payload);
        tmp_iadd_expr_left_7 = var_mvhd_payload;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 64;
        tmp_iadd_expr_right_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_iadd_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
        Py_DECREF(tmp_iadd_expr_right_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = tmp_iadd_expr_left_7;
        var_mvhd_payload = tmp_assign_source_19;

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iadd_expr_left_8;
        PyObject *tmp_iadd_expr_right_8;
        PyObject *tmp_called_instance_9;
        CHECK_OBJECT(var_mvhd_payload);
        tmp_iadd_expr_left_8 = var_mvhd_payload;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 65;
        tmp_iadd_expr_right_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_9,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_iadd_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_8, tmp_iadd_expr_right_8);
        Py_DECREF(tmp_iadd_expr_right_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = tmp_iadd_expr_left_8;
        var_mvhd_payload = tmp_assign_source_20;

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iadd_expr_left_9;
        PyObject *tmp_iadd_expr_right_9;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_instance_10;
        CHECK_OBJECT(var_mvhd_payload);
        tmp_iadd_expr_left_9 = var_mvhd_payload;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 66;
        tmp_mult_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = mod_consts[25];
        tmp_iadd_expr_right_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_iadd_expr_right_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_9, tmp_iadd_expr_right_9);
        Py_DECREF(tmp_iadd_expr_right_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = tmp_iadd_expr_left_9;
        var_mvhd_payload = tmp_assign_source_21;

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iadd_expr_left_10;
        PyObject *tmp_iadd_expr_right_10;
        CHECK_OBJECT(var_mvhd_payload);
        tmp_iadd_expr_left_10 = var_mvhd_payload;
        tmp_iadd_expr_right_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_iadd_expr_right_10 == NULL)) {
            tmp_iadd_expr_right_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_iadd_expr_right_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_10, tmp_iadd_expr_right_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = tmp_iadd_expr_left_10;
        var_mvhd_payload = tmp_assign_source_22;

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iadd_expr_left_11;
        PyObject *tmp_iadd_expr_right_11;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_called_instance_11;
        CHECK_OBJECT(var_mvhd_payload);
        tmp_iadd_expr_left_11 = var_mvhd_payload;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 68;
        tmp_mult_expr_left_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = mod_consts[27];
        tmp_iadd_expr_right_11 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_iadd_expr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_11, tmp_iadd_expr_right_11);
        Py_DECREF(tmp_iadd_expr_right_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = tmp_iadd_expr_left_11;
        var_mvhd_payload = tmp_assign_source_23;

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iadd_expr_left_12;
        PyObject *tmp_iadd_expr_right_12;
        PyObject *tmp_called_instance_12;
        CHECK_OBJECT(var_mvhd_payload);
        tmp_iadd_expr_left_12 = var_mvhd_payload;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 69;
        tmp_iadd_expr_right_12 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_12,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        if (tmp_iadd_expr_right_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_12, tmp_iadd_expr_right_12);
        Py_DECREF(tmp_iadd_expr_right_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = tmp_iadd_expr_left_12;
        var_mvhd_payload = tmp_assign_source_24;

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[30];
        tmp_args_element_value_9 = mod_consts[31];
        tmp_args_element_value_10 = mod_consts[13];
        CHECK_OBJECT(var_mvhd_payload);
        tmp_args_element_value_11 = var_mvhd_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_7, call_args);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_moov_payload == NULL);
        var_moov_payload = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_value_12;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_creation_time);
        tmp_args_element_value_12 = var_creation_time;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 72;
        tmp_assign_source_26 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[1], tmp_args_element_value_12);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tkhd_payload == NULL);
        var_tkhd_payload = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iadd_expr_left_13;
        PyObject *tmp_iadd_expr_right_13;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(var_tkhd_payload);
        tmp_iadd_expr_left_13 = var_tkhd_payload;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_modification_time);
        tmp_args_element_value_13 = var_modification_time;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 73;
        tmp_iadd_expr_right_13 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_14, mod_consts[1], tmp_args_element_value_13);
        if (tmp_iadd_expr_right_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_13, tmp_iadd_expr_right_13);
        Py_DECREF(tmp_iadd_expr_right_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = tmp_iadd_expr_left_13;
        var_tkhd_payload = tmp_assign_source_27;

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iadd_expr_left_14;
        PyObject *tmp_iadd_expr_right_14;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(var_tkhd_payload);
        tmp_iadd_expr_left_14 = var_tkhd_payload;
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_track_id);
        tmp_args_element_value_14 = var_track_id;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 74;
        tmp_iadd_expr_right_14 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_15, mod_consts[1], tmp_args_element_value_14);
        if (tmp_iadd_expr_right_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_14, tmp_iadd_expr_right_14);
        Py_DECREF(tmp_iadd_expr_right_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = tmp_iadd_expr_left_14;
        var_tkhd_payload = tmp_assign_source_28;

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iadd_expr_left_15;
        PyObject *tmp_iadd_expr_right_15;
        PyObject *tmp_called_instance_16;
        CHECK_OBJECT(var_tkhd_payload);
        tmp_iadd_expr_left_15 = var_tkhd_payload;
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 75;
        tmp_iadd_expr_right_15 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_16,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_iadd_expr_right_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_15, tmp_iadd_expr_right_15);
        Py_DECREF(tmp_iadd_expr_right_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = tmp_iadd_expr_left_15;
        var_tkhd_payload = tmp_assign_source_29;

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_iadd_expr_left_16;
        PyObject *tmp_iadd_expr_right_16;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(var_tkhd_payload);
        tmp_iadd_expr_left_16 = var_tkhd_payload;
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_duration);
        tmp_args_element_value_15 = var_duration;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 76;
        tmp_iadd_expr_right_16 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_17, mod_consts[1], tmp_args_element_value_15);
        if (tmp_iadd_expr_right_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_16, tmp_iadd_expr_right_16);
        Py_DECREF(tmp_iadd_expr_right_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_30 = tmp_iadd_expr_left_16;
        var_tkhd_payload = tmp_assign_source_30;

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iadd_expr_left_17;
        PyObject *tmp_iadd_expr_right_17;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_called_instance_18;
        CHECK_OBJECT(var_tkhd_payload);
        tmp_iadd_expr_left_17 = var_tkhd_payload;
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 77;
        tmp_mult_expr_left_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_18,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_mult_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_3 = mod_consts[25];
        tmp_iadd_expr_right_17 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        if (tmp_iadd_expr_right_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_17, tmp_iadd_expr_right_17);
        Py_DECREF(tmp_iadd_expr_right_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_31 = tmp_iadd_expr_left_17;
        var_tkhd_payload = tmp_assign_source_31;

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iadd_expr_left_18;
        PyObject *tmp_iadd_expr_right_18;
        PyObject *tmp_called_instance_19;
        CHECK_OBJECT(var_tkhd_payload);
        tmp_iadd_expr_left_18 = var_tkhd_payload;
        tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_instance_19 == NULL)) {
            tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 78;
        tmp_iadd_expr_right_18 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_19,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_iadd_expr_right_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_18, tmp_iadd_expr_right_18);
        Py_DECREF(tmp_iadd_expr_right_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = tmp_iadd_expr_left_18;
        var_tkhd_payload = tmp_assign_source_32;

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iadd_expr_left_19;
        PyObject *tmp_iadd_expr_right_19;
        PyObject *tmp_called_instance_20;
        CHECK_OBJECT(var_tkhd_payload);
        tmp_iadd_expr_left_19 = var_tkhd_payload;
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 79;
        tmp_iadd_expr_right_19 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_20,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_iadd_expr_right_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_19, tmp_iadd_expr_right_19);
        Py_DECREF(tmp_iadd_expr_right_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = tmp_iadd_expr_left_19;
        var_tkhd_payload = tmp_assign_source_33;

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_iadd_expr_left_20;
        PyObject *tmp_iadd_expr_right_20;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_16;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_tkhd_payload);
        tmp_iadd_expr_left_20 = var_tkhd_payload;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[1]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_is_audio);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_is_audio);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 80;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_args_element_value_16 = mod_consts[31];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_args_element_value_16 = mod_consts[13];
        condexpr_end_1:;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 80;
        tmp_iadd_expr_right_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_8);
        if (tmp_iadd_expr_right_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_20, tmp_iadd_expr_right_20);
        Py_DECREF(tmp_iadd_expr_right_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_34 = tmp_iadd_expr_left_20;
        var_tkhd_payload = tmp_assign_source_34;

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_iadd_expr_left_21;
        PyObject *tmp_iadd_expr_right_21;
        PyObject *tmp_called_instance_21;
        CHECK_OBJECT(var_tkhd_payload);
        tmp_iadd_expr_left_21 = var_tkhd_payload;
        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_21 == NULL)) {
            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 81;
        tmp_iadd_expr_right_21 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_21,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_iadd_expr_right_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_21, tmp_iadd_expr_right_21);
        Py_DECREF(tmp_iadd_expr_right_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = tmp_iadd_expr_left_21;
        var_tkhd_payload = tmp_assign_source_35;

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_iadd_expr_left_22;
        PyObject *tmp_iadd_expr_right_22;
        CHECK_OBJECT(var_tkhd_payload);
        tmp_iadd_expr_left_22 = var_tkhd_payload;
        tmp_iadd_expr_right_22 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_iadd_expr_right_22 == NULL)) {
            tmp_iadd_expr_right_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_iadd_expr_right_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_22, tmp_iadd_expr_right_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_36 = tmp_iadd_expr_left_22;
        var_tkhd_payload = tmp_assign_source_36;

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_iadd_expr_left_23;
        PyObject *tmp_iadd_expr_right_23;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_args_element_value_17;
        CHECK_OBJECT(var_tkhd_payload);
        tmp_iadd_expr_left_23 = var_tkhd_payload;
        tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_22 == NULL)) {
            tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_width);
        tmp_args_element_value_17 = var_width;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 83;
        tmp_iadd_expr_right_23 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_22, mod_consts[1], tmp_args_element_value_17);
        if (tmp_iadd_expr_right_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_23, tmp_iadd_expr_right_23);
        Py_DECREF(tmp_iadd_expr_right_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_37 = tmp_iadd_expr_left_23;
        var_tkhd_payload = tmp_assign_source_37;

    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_iadd_expr_left_24;
        PyObject *tmp_iadd_expr_right_24;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_args_element_value_18;
        CHECK_OBJECT(var_tkhd_payload);
        tmp_iadd_expr_left_24 = var_tkhd_payload;
        tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_23 == NULL)) {
            tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_height);
        tmp_args_element_value_18 = var_height;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 84;
        tmp_iadd_expr_right_24 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_23, mod_consts[1], tmp_args_element_value_18);
        if (tmp_iadd_expr_right_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_24, tmp_iadd_expr_right_24);
        Py_DECREF(tmp_iadd_expr_right_24);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_38 = tmp_iadd_expr_left_24;
        var_tkhd_payload = tmp_assign_source_38;

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_bitor_expr_left_2;
        PyObject *tmp_bitor_expr_right_2;
        PyObject *tmp_args_element_value_22;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = mod_consts[34];
        tmp_args_element_value_20 = mod_consts[31];
        tmp_bitor_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_bitor_expr_left_2 == NULL)) {
            tmp_bitor_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_bitor_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_bitor_expr_right_2 == NULL)) {
            tmp_bitor_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_bitor_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
        if (tmp_bitor_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_bitor_expr_right_1 == NULL)) {
            tmp_bitor_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_bitor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tkhd_payload);
        tmp_args_element_value_22 = var_tkhd_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_args_element_value_21);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_trak_payload == NULL);
        var_trak_payload = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_args_element_value_23;
        tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_24 == NULL)) {
            tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_creation_time);
        tmp_args_element_value_23 = var_creation_time;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 87;
        tmp_assign_source_40 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_24, mod_consts[1], tmp_args_element_value_23);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mdhd_payload == NULL);
        var_mdhd_payload = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_iadd_expr_left_25;
        PyObject *tmp_iadd_expr_right_25;
        PyObject *tmp_called_instance_25;
        PyObject *tmp_args_element_value_24;
        CHECK_OBJECT(var_mdhd_payload);
        tmp_iadd_expr_left_25 = var_mdhd_payload;
        tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_25 == NULL)) {
            tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_modification_time);
        tmp_args_element_value_24 = var_modification_time;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 88;
        tmp_iadd_expr_right_25 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_25, mod_consts[1], tmp_args_element_value_24);
        if (tmp_iadd_expr_right_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_25, tmp_iadd_expr_right_25);
        Py_DECREF(tmp_iadd_expr_right_25);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_41 = tmp_iadd_expr_left_25;
        var_mdhd_payload = tmp_assign_source_41;

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_iadd_expr_left_26;
        PyObject *tmp_iadd_expr_right_26;
        PyObject *tmp_called_instance_26;
        PyObject *tmp_args_element_value_25;
        CHECK_OBJECT(var_mdhd_payload);
        tmp_iadd_expr_left_26 = var_mdhd_payload;
        tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_26 == NULL)) {
            tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_timescale);
        tmp_args_element_value_25 = var_timescale;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 89;
        tmp_iadd_expr_right_26 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_26, mod_consts[1], tmp_args_element_value_25);
        if (tmp_iadd_expr_right_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_26, tmp_iadd_expr_right_26);
        Py_DECREF(tmp_iadd_expr_right_26);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_42 = tmp_iadd_expr_left_26;
        var_mdhd_payload = tmp_assign_source_42;

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_iadd_expr_left_27;
        PyObject *tmp_iadd_expr_right_27;
        PyObject *tmp_called_instance_27;
        PyObject *tmp_args_element_value_26;
        CHECK_OBJECT(var_mdhd_payload);
        tmp_iadd_expr_left_27 = var_mdhd_payload;
        tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_27 == NULL)) {
            tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_duration);
        tmp_args_element_value_26 = var_duration;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 90;
        tmp_iadd_expr_right_27 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_27, mod_consts[1], tmp_args_element_value_26);
        if (tmp_iadd_expr_right_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_27, tmp_iadd_expr_right_27);
        Py_DECREF(tmp_iadd_expr_right_27);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_43 = tmp_iadd_expr_left_27;
        var_mdhd_payload = tmp_assign_source_43;

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_iadd_expr_left_28;
        PyObject *tmp_iadd_expr_right_28;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_bitor_expr_left_3;
        PyObject *tmp_bitor_expr_right_3;
        PyObject *tmp_bitor_expr_left_4;
        PyObject *tmp_bitor_expr_right_4;
        PyObject *tmp_lshift_expr_left_1;
        PyObject *tmp_lshift_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_ord_arg_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_lshift_expr_left_2;
        PyObject *tmp_lshift_expr_right_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_ord_arg_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_ord_arg_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_mdhd_payload);
        tmp_iadd_expr_left_28 = var_mdhd_payload;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[1]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_language);
        tmp_expression_value_11 = var_language;
        tmp_subscript_value_4 = mod_consts[13];
        tmp_ord_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_4, 0);
        if (tmp_ord_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_1 = BUILTIN_ORD(tmp_ord_arg_1);
        Py_DECREF(tmp_ord_arg_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[38];
        tmp_lshift_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_lshift_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_lshift_expr_right_1 = mod_consts[39];
        tmp_bitor_expr_left_4 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
        Py_DECREF(tmp_lshift_expr_left_1);
        if (tmp_bitor_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_language);
        tmp_expression_value_12 = var_language;
        tmp_subscript_value_5 = mod_consts[31];
        tmp_ord_arg_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_12, tmp_subscript_value_5, 1);
        if (tmp_ord_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_2 = BUILTIN_ORD(tmp_ord_arg_2);
        Py_DECREF(tmp_ord_arg_2);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_2 = mod_consts[38];
        tmp_lshift_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        if (tmp_lshift_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_lshift_expr_right_2 = mod_consts[40];
        tmp_bitor_expr_right_4 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_2, tmp_lshift_expr_right_2);
        Py_DECREF(tmp_lshift_expr_left_2);
        if (tmp_bitor_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_4, tmp_bitor_expr_right_4);
        Py_DECREF(tmp_bitor_expr_left_4);
        Py_DECREF(tmp_bitor_expr_right_4);
        if (tmp_bitor_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_language);
        tmp_expression_value_13 = var_language;
        tmp_subscript_value_6 = mod_consts[25];
        tmp_ord_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_6, 2);
        if (tmp_ord_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_3 = BUILTIN_ORD(tmp_ord_arg_3);
        Py_DECREF(tmp_ord_arg_3);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_3 = mod_consts[38];
        tmp_bitor_expr_right_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        if (tmp_bitor_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
        Py_DECREF(tmp_bitor_expr_left_3);
        Py_DECREF(tmp_bitor_expr_right_3);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 91;
        tmp_iadd_expr_right_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_iadd_expr_right_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_28, tmp_iadd_expr_right_28);
        Py_DECREF(tmp_iadd_expr_right_28);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_44 = tmp_iadd_expr_left_28;
        var_mdhd_payload = tmp_assign_source_44;

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_iadd_expr_left_29;
        PyObject *tmp_iadd_expr_right_29;
        PyObject *tmp_called_instance_28;
        CHECK_OBJECT(var_mdhd_payload);
        tmp_iadd_expr_left_29 = var_mdhd_payload;
        tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_28 == NULL)) {
            tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 92;
        tmp_iadd_expr_right_29 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_28,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_iadd_expr_right_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_29, tmp_iadd_expr_right_29);
        Py_DECREF(tmp_iadd_expr_right_29);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_45 = tmp_iadd_expr_left_29;
        var_mdhd_payload = tmp_assign_source_45;

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = mod_consts[41];
        tmp_args_element_value_29 = mod_consts[31];
        tmp_args_element_value_30 = mod_consts[13];
        CHECK_OBJECT(var_mdhd_payload);
        tmp_args_element_value_31 = var_mdhd_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_11, call_args);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mdia_payload == NULL);
        var_mdia_payload = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_instance_29;
        tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_29 == NULL)) {
            tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 95;
        tmp_assign_source_47 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_29,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hdlr_payload == NULL);
        var_hdlr_payload = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_iadd_expr_left_30;
        PyObject *tmp_iadd_expr_right_30;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_hdlr_payload);
        tmp_iadd_expr_left_30 = var_hdlr_payload;
        CHECK_OBJECT(var_is_audio);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_is_audio);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_iadd_expr_right_30 = mod_consts[42];
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_iadd_expr_right_30 = mod_consts[43];
        condexpr_end_2:;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_BYTES(&tmp_iadd_expr_left_30, tmp_iadd_expr_right_30);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_48 = tmp_iadd_expr_left_30;
        var_hdlr_payload = tmp_assign_source_48;

    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_iadd_expr_left_31;
        PyObject *tmp_iadd_expr_right_31;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_called_instance_30;
        CHECK_OBJECT(var_hdlr_payload);
        tmp_iadd_expr_left_31 = var_hdlr_payload;
        tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_30 == NULL)) {
            tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 97;
        tmp_mult_expr_left_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_30,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_mult_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_4 = mod_consts[44];
        tmp_iadd_expr_right_31 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_left_4);
        if (tmp_iadd_expr_right_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_31, tmp_iadd_expr_right_31);
        Py_DECREF(tmp_iadd_expr_right_31);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_49 = tmp_iadd_expr_left_31;
        var_hdlr_payload = tmp_assign_source_49;

    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_iadd_expr_left_32;
        PyObject *tmp_iadd_expr_right_32;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_hdlr_payload);
        tmp_iadd_expr_left_32 = var_hdlr_payload;
        CHECK_OBJECT(var_is_audio);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_is_audio);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        tmp_add_expr_left_1 = mod_consts[45];
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_add_expr_left_1 = mod_consts[46];
        condexpr_end_3:;
        tmp_add_expr_right_1 = mod_consts[47];
        tmp_iadd_expr_right_32 = BINARY_OPERATION_ADD_OBJECT_BYTES_BYTES(tmp_add_expr_left_1, tmp_add_expr_right_1);
        assert(!(tmp_iadd_expr_right_32 == NULL));
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_BYTES(&tmp_iadd_expr_left_32, tmp_iadd_expr_right_32);
        Py_DECREF(tmp_iadd_expr_right_32);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_50 = tmp_iadd_expr_left_32;
        var_hdlr_payload = tmp_assign_source_50;

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_iadd_expr_left_33;
        PyObject *tmp_iadd_expr_right_33;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        CHECK_OBJECT(var_mdia_payload);
        tmp_iadd_expr_left_33 = var_mdia_payload;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = mod_consts[48];
        tmp_args_element_value_33 = mod_consts[13];
        tmp_args_element_value_34 = mod_consts[13];
        CHECK_OBJECT(var_hdlr_payload);
        tmp_args_element_value_35 = var_hdlr_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_iadd_expr_right_33 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_12, call_args);
        }

        if (tmp_iadd_expr_right_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_33, tmp_iadd_expr_right_33);
        Py_DECREF(tmp_iadd_expr_right_33);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_51 = tmp_iadd_expr_left_33;
        var_mdia_payload = tmp_assign_source_51;

    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_is_audio);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_is_audio);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_instance_31;
        tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_31 == NULL)) {
            tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_instance_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 102;
        tmp_assign_source_52 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_31,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_smhd_payload == NULL);
        var_smhd_payload = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_iadd_expr_left_34;
        PyObject *tmp_iadd_expr_right_34;
        PyObject *tmp_called_instance_32;
        CHECK_OBJECT(var_smhd_payload);
        tmp_iadd_expr_left_34 = var_smhd_payload;
        tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_32 == NULL)) {
            tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 103;
        tmp_iadd_expr_right_34 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_32,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_iadd_expr_right_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_34, tmp_iadd_expr_right_34);
        Py_DECREF(tmp_iadd_expr_right_34);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_53 = tmp_iadd_expr_left_34;
        var_smhd_payload = tmp_assign_source_53;

    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = mod_consts[49];
        tmp_args_element_value_37 = mod_consts[13];
        tmp_args_element_value_38 = mod_consts[13];
        CHECK_OBJECT(var_smhd_payload);
        tmp_args_element_value_39 = var_smhd_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39};
            tmp_assign_source_54 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_13, call_args);
        }

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_media_header_box == NULL);
        var_media_header_box = tmp_assign_source_54;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_instance_33;
        tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_33 == NULL)) {
            tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 106;
        tmp_assign_source_55 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_33,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vmhd_payload == NULL);
        var_vmhd_payload = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_iadd_expr_left_35;
        PyObject *tmp_iadd_expr_right_35;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_called_instance_34;
        CHECK_OBJECT(var_vmhd_payload);
        tmp_iadd_expr_left_35 = var_vmhd_payload;
        tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_34 == NULL)) {
            tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 107;
        tmp_mult_expr_left_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_34,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_mult_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_5 = mod_consts[44];
        tmp_iadd_expr_right_35 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_left_5);
        if (tmp_iadd_expr_right_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_35, tmp_iadd_expr_right_35);
        Py_DECREF(tmp_iadd_expr_right_35);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_56 = tmp_iadd_expr_left_35;
        var_vmhd_payload = tmp_assign_source_56;

    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_args_element_value_43;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = mod_consts[50];
        tmp_args_element_value_41 = mod_consts[13];
        tmp_args_element_value_42 = mod_consts[31];
        CHECK_OBJECT(var_vmhd_payload);
        tmp_args_element_value_43 = var_vmhd_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43};
            tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_14, call_args);
        }

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_media_header_box == NULL);
        var_media_header_box = tmp_assign_source_57;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT(var_media_header_box);
        tmp_assign_source_58 = var_media_header_box;
        assert(var_minf_payload == NULL);
        Py_INCREF(tmp_assign_source_58);
        var_minf_payload = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_instance_35;
        tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_35 == NULL)) {
            tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 111;
        tmp_assign_source_59 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_35,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dref_payload == NULL);
        var_dref_payload = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_iadd_expr_left_36;
        PyObject *tmp_iadd_expr_right_36;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        CHECK_OBJECT(var_dref_payload);
        tmp_iadd_expr_left_36 = var_dref_payload;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_44 = mod_consts[51];
        tmp_args_element_value_45 = mod_consts[13];
        tmp_args_element_value_46 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_args_element_value_46 == NULL)) {
            tmp_args_element_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_47 = mod_consts[53];
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
            tmp_iadd_expr_right_36 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_15, call_args);
        }

        if (tmp_iadd_expr_right_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_36, tmp_iadd_expr_right_36);
        Py_DECREF(tmp_iadd_expr_right_36);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_60 = tmp_iadd_expr_left_36;
        var_dref_payload = tmp_assign_source_60;

    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_48 = mod_consts[54];
        tmp_args_element_value_49 = mod_consts[13];
        tmp_args_element_value_50 = mod_consts[13];
        CHECK_OBJECT(var_dref_payload);
        tmp_args_element_value_51 = var_dref_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51};
            tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_16, call_args);
        }

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dinf_payload == NULL);
        var_dinf_payload = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_iadd_expr_left_37;
        PyObject *tmp_iadd_expr_right_37;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        CHECK_OBJECT(var_minf_payload);
        tmp_iadd_expr_left_37 = var_minf_payload;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_52 = mod_consts[55];
        CHECK_OBJECT(var_dinf_payload);
        tmp_args_element_value_53 = var_dinf_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53};
            tmp_iadd_expr_right_37 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_17, call_args);
        }

        if (tmp_iadd_expr_right_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_37, tmp_iadd_expr_right_37);
        Py_DECREF(tmp_iadd_expr_right_37);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_62 = tmp_iadd_expr_left_37;
        var_minf_payload = tmp_assign_source_62;

    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_instance_36;
        tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_36 == NULL)) {
            tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 116;
        tmp_assign_source_63 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_36,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_stsd_payload == NULL);
        var_stsd_payload = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_called_instance_37;
        tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_37 == NULL)) {
            tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 118;
        tmp_mult_expr_left_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_37,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_mult_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_6 = mod_consts[27];
        tmp_assign_source_64 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_left_6);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sample_entry_payload == NULL);
        var_sample_entry_payload = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_iadd_expr_left_38;
        PyObject *tmp_iadd_expr_right_38;
        PyObject *tmp_called_instance_38;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_38 = var_sample_entry_payload;
        tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_38 == NULL)) {
            tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 119;
        tmp_iadd_expr_right_38 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_38,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_iadd_expr_right_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_38, tmp_iadd_expr_right_38);
        Py_DECREF(tmp_iadd_expr_right_38);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_65 = tmp_iadd_expr_left_38;
        var_sample_entry_payload = tmp_assign_source_65;

    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_is_audio);
        tmp_truth_name_5 = CHECK_IF_TRUE(var_is_audio);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_iadd_expr_left_39;
        PyObject *tmp_iadd_expr_right_39;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        PyObject *tmp_called_instance_39;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_39 = var_sample_entry_payload;
        tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_39 == NULL)) {
            tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 121;
        tmp_mult_expr_left_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_39,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_mult_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_7 = mod_consts[25];
        tmp_iadd_expr_right_39 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        Py_DECREF(tmp_mult_expr_left_7);
        if (tmp_iadd_expr_right_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_39, tmp_iadd_expr_right_39);
        Py_DECREF(tmp_iadd_expr_right_39);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_66 = tmp_iadd_expr_left_39;
        var_sample_entry_payload = tmp_assign_source_66;

    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_iadd_expr_left_40;
        PyObject *tmp_iadd_expr_right_40;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_40 = var_sample_entry_payload;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[1]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_params);
        tmp_expression_value_15 = par_params;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[8]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 122;
        tmp_args_element_value_54 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_19, mod_consts[56]);

        Py_DECREF(tmp_called_value_19);
        if (tmp_args_element_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 122;
        tmp_iadd_expr_right_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_54);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_iadd_expr_right_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_40, tmp_iadd_expr_right_40);
        Py_DECREF(tmp_iadd_expr_right_40);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_67 = tmp_iadd_expr_left_40;
        var_sample_entry_payload = tmp_assign_source_67;

    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_iadd_expr_left_41;
        PyObject *tmp_iadd_expr_right_41;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_41 = var_sample_entry_payload;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[1]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_params);
        tmp_expression_value_17 = par_params;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[8]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 123;
        tmp_args_element_value_55 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_21, mod_consts[57]);

        Py_DECREF(tmp_called_value_21);
        if (tmp_args_element_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 123;
        tmp_iadd_expr_right_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_55);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_55);
        if (tmp_iadd_expr_right_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_41, tmp_iadd_expr_right_41);
        Py_DECREF(tmp_iadd_expr_right_41);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_68 = tmp_iadd_expr_left_41;
        var_sample_entry_payload = tmp_assign_source_68;

    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_iadd_expr_left_42;
        PyObject *tmp_iadd_expr_right_42;
        PyObject *tmp_called_instance_40;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_42 = var_sample_entry_payload;
        tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_40 == NULL)) {
            tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 124;
        tmp_iadd_expr_right_42 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_40,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_iadd_expr_right_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_42, tmp_iadd_expr_right_42);
        Py_DECREF(tmp_iadd_expr_right_42);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_69 = tmp_iadd_expr_left_42;
        var_sample_entry_payload = tmp_assign_source_69;

    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_iadd_expr_left_43;
        PyObject *tmp_iadd_expr_right_43;
        PyObject *tmp_called_instance_41;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_43 = var_sample_entry_payload;
        tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_41 == NULL)) {
            tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 125;
        tmp_iadd_expr_right_43 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_41,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_iadd_expr_right_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_43, tmp_iadd_expr_right_43);
        Py_DECREF(tmp_iadd_expr_right_43);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_70 = tmp_iadd_expr_left_43;
        var_sample_entry_payload = tmp_assign_source_70;

    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_iadd_expr_left_44;
        PyObject *tmp_iadd_expr_right_44;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_44 = var_sample_entry_payload;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[1]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_params);
        tmp_expression_value_19 = par_params;
        tmp_subscript_value_7 = mod_consts[58];
        tmp_args_element_value_56 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_7);
        if (tmp_args_element_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 126;
        tmp_iadd_expr_right_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_56);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_iadd_expr_right_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_44, tmp_iadd_expr_right_44);
        Py_DECREF(tmp_iadd_expr_right_44);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_71 = tmp_iadd_expr_left_44;
        var_sample_entry_payload = tmp_assign_source_71;

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_fourcc);
        tmp_cmp_expr_left_3 = var_fourcc;
        tmp_cmp_expr_right_3 = mod_consts[59];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_args_element_value_58;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_57 = mod_consts[60];
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_args_element_value_58 = var_sample_entry_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58};
            tmp_assign_source_72 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_23, call_args);
        }

        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sample_entry_box == NULL);
        var_sample_entry_box = tmp_assign_source_72;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_iadd_expr_left_45;
        PyObject *tmp_iadd_expr_right_45;
        PyObject *tmp_called_instance_42;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_45 = var_sample_entry_payload;
        tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_42 == NULL)) {
            tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 131;
        tmp_iadd_expr_right_45 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_42,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_iadd_expr_right_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_45, tmp_iadd_expr_right_45);
        Py_DECREF(tmp_iadd_expr_right_45);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_73 = tmp_iadd_expr_left_45;
        var_sample_entry_payload = tmp_assign_source_73;

    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_iadd_expr_left_46;
        PyObject *tmp_iadd_expr_right_46;
        PyObject *tmp_called_instance_43;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_46 = var_sample_entry_payload;
        tmp_called_instance_43 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_43 == NULL)) {
            tmp_called_instance_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 132;
        tmp_iadd_expr_right_46 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_43,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_iadd_expr_right_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_46, tmp_iadd_expr_right_46);
        Py_DECREF(tmp_iadd_expr_right_46);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_74 = tmp_iadd_expr_left_46;
        var_sample_entry_payload = tmp_assign_source_74;

    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_iadd_expr_left_47;
        PyObject *tmp_iadd_expr_right_47;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        PyObject *tmp_called_instance_44;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_47 = var_sample_entry_payload;
        tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_44 == NULL)) {
            tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 133;
        tmp_mult_expr_left_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_44,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_mult_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_8 = mod_consts[44];
        tmp_iadd_expr_right_47 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        Py_DECREF(tmp_mult_expr_left_8);
        if (tmp_iadd_expr_right_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_47, tmp_iadd_expr_right_47);
        Py_DECREF(tmp_iadd_expr_right_47);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_75 = tmp_iadd_expr_left_47;
        var_sample_entry_payload = tmp_assign_source_75;

    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_iadd_expr_left_48;
        PyObject *tmp_iadd_expr_right_48;
        PyObject *tmp_called_instance_45;
        PyObject *tmp_args_element_value_59;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_48 = var_sample_entry_payload;
        tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_45 == NULL)) {
            tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_width);
        tmp_args_element_value_59 = var_width;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 134;
        tmp_iadd_expr_right_48 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_45, mod_consts[1], tmp_args_element_value_59);
        if (tmp_iadd_expr_right_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_48, tmp_iadd_expr_right_48);
        Py_DECREF(tmp_iadd_expr_right_48);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_76 = tmp_iadd_expr_left_48;
        var_sample_entry_payload = tmp_assign_source_76;

    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_iadd_expr_left_49;
        PyObject *tmp_iadd_expr_right_49;
        PyObject *tmp_called_instance_46;
        PyObject *tmp_args_element_value_60;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_49 = var_sample_entry_payload;
        tmp_called_instance_46 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_46 == NULL)) {
            tmp_called_instance_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_height);
        tmp_args_element_value_60 = var_height;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 135;
        tmp_iadd_expr_right_49 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_46, mod_consts[1], tmp_args_element_value_60);
        if (tmp_iadd_expr_right_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_49, tmp_iadd_expr_right_49);
        Py_DECREF(tmp_iadd_expr_right_49);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_77 = tmp_iadd_expr_left_49;
        var_sample_entry_payload = tmp_assign_source_77;

    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_iadd_expr_left_50;
        PyObject *tmp_iadd_expr_right_50;
        PyObject *tmp_called_instance_47;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_50 = var_sample_entry_payload;
        tmp_called_instance_47 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_47 == NULL)) {
            tmp_called_instance_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 136;
        tmp_iadd_expr_right_50 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_47,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[61], 0)
        );

        if (tmp_iadd_expr_right_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_50, tmp_iadd_expr_right_50);
        Py_DECREF(tmp_iadd_expr_right_50);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_78 = tmp_iadd_expr_left_50;
        var_sample_entry_payload = tmp_assign_source_78;

    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_iadd_expr_left_51;
        PyObject *tmp_iadd_expr_right_51;
        PyObject *tmp_called_instance_48;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_51 = var_sample_entry_payload;
        tmp_called_instance_48 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_48 == NULL)) {
            tmp_called_instance_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 137;
        tmp_iadd_expr_right_51 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_48,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[61], 0)
        );

        if (tmp_iadd_expr_right_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_51, tmp_iadd_expr_right_51);
        Py_DECREF(tmp_iadd_expr_right_51);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_79 = tmp_iadd_expr_left_51;
        var_sample_entry_payload = tmp_assign_source_79;

    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_iadd_expr_left_52;
        PyObject *tmp_iadd_expr_right_52;
        PyObject *tmp_called_instance_49;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_52 = var_sample_entry_payload;
        tmp_called_instance_49 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_49 == NULL)) {
            tmp_called_instance_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 138;
        tmp_iadd_expr_right_52 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_49,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_iadd_expr_right_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_52, tmp_iadd_expr_right_52);
        Py_DECREF(tmp_iadd_expr_right_52);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_80 = tmp_iadd_expr_left_52;
        var_sample_entry_payload = tmp_assign_source_80;

    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_iadd_expr_left_53;
        PyObject *tmp_iadd_expr_right_53;
        PyObject *tmp_called_instance_50;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_53 = var_sample_entry_payload;
        tmp_called_instance_50 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_50 == NULL)) {
            tmp_called_instance_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 139;
        tmp_iadd_expr_right_53 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_50,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_iadd_expr_right_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_53, tmp_iadd_expr_right_53);
        Py_DECREF(tmp_iadd_expr_right_53);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_81 = tmp_iadd_expr_left_53;
        var_sample_entry_payload = tmp_assign_source_81;

    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_iadd_expr_left_54;
        PyObject *tmp_iadd_expr_right_54;
        PyObject *tmp_mult_expr_left_9;
        PyObject *tmp_mult_expr_right_9;
        PyObject *tmp_called_instance_51;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_54 = var_sample_entry_payload;
        tmp_called_instance_51 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_51 == NULL)) {
            tmp_called_instance_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 140;
        tmp_mult_expr_left_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_51,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_mult_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_9 = mod_consts[62];
        tmp_iadd_expr_right_54 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
        Py_DECREF(tmp_mult_expr_left_9);
        if (tmp_iadd_expr_right_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_54, tmp_iadd_expr_right_54);
        Py_DECREF(tmp_iadd_expr_right_54);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_82 = tmp_iadd_expr_left_54;
        var_sample_entry_payload = tmp_assign_source_82;

    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_iadd_expr_left_55;
        PyObject *tmp_iadd_expr_right_55;
        PyObject *tmp_called_instance_52;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_55 = var_sample_entry_payload;
        tmp_called_instance_52 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_52 == NULL)) {
            tmp_called_instance_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 141;
        tmp_iadd_expr_right_55 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_52,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[63], 0)
        );

        if (tmp_iadd_expr_right_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_55, tmp_iadd_expr_right_55);
        Py_DECREF(tmp_iadd_expr_right_55);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_83 = tmp_iadd_expr_left_55;
        var_sample_entry_payload = tmp_assign_source_83;

    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_iadd_expr_left_56;
        PyObject *tmp_iadd_expr_right_56;
        PyObject *tmp_called_instance_53;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_56 = var_sample_entry_payload;
        tmp_called_instance_53 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_instance_53 == NULL)) {
            tmp_called_instance_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_instance_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 142;
        tmp_iadd_expr_right_56 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_53,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[64], 0)
        );

        if (tmp_iadd_expr_right_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_56, tmp_iadd_expr_right_56);
        Py_DECREF(tmp_iadd_expr_right_56);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_84 = tmp_iadd_expr_left_56;
        var_sample_entry_payload = tmp_assign_source_84;

    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_8;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[66]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_params);
        tmp_expression_value_22 = par_params;
        tmp_subscript_value_8 = mod_consts[67];
        tmp_expression_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_8);
        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[68]);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 144;
        tmp_args_element_value_61 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_25, mod_consts[69]);

        Py_DECREF(tmp_called_value_25);
        if (tmp_args_element_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 144;
        tmp_assign_source_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_61);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_61);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_codec_private_data == NULL);
        var_codec_private_data = tmp_assign_source_85;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_fourcc);
        tmp_cmp_expr_left_4 = var_fourcc;
        tmp_cmp_expr_right_4 = mod_consts[70];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_called_instance_54;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(var_codec_private_data);
        tmp_expression_value_24 = var_codec_private_data;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[71]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_54 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_54 == NULL)) {
            tmp_called_instance_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 146;
        tmp_args_element_value_62 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_54,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_args_element_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 146;
        tmp_expression_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_62);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_9 = mod_consts[4];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_9);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_86 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_86;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_87 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_87 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 146;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_88 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_88 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 146;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_88;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 146;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[72];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 146;
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
        PyObject *tmp_assign_source_89;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_89 = tmp_tuple_unpack_1__element_1;
        assert(var_sps == NULL);
        Py_INCREF(tmp_assign_source_89);
        var_sps = tmp_assign_source_89;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_90;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_90 = tmp_tuple_unpack_1__element_2;
        assert(var_pps == NULL);
        Py_INCREF(tmp_assign_source_90);
        var_pps = tmp_assign_source_90;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_instance_55;
        tmp_called_instance_55 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_55 == NULL)) {
            tmp_called_instance_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 147;
        tmp_assign_source_91 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_55,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_avcc_payload == NULL);
        var_avcc_payload = tmp_assign_source_91;
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_iadd_expr_left_57;
        PyObject *tmp_iadd_expr_right_57;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(var_avcc_payload);
        tmp_iadd_expr_left_57 = var_avcc_payload;
        CHECK_OBJECT(var_sps);
        tmp_expression_value_25 = var_sps;
        tmp_subscript_value_10 = mod_consts[73];
        tmp_iadd_expr_right_57 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_10);
        if (tmp_iadd_expr_right_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_57, tmp_iadd_expr_right_57);
        Py_DECREF(tmp_iadd_expr_right_57);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_92 = tmp_iadd_expr_left_57;
        var_avcc_payload = tmp_assign_source_92;

    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_iadd_expr_left_58;
        PyObject *tmp_iadd_expr_right_58;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_bitor_expr_left_5;
        PyObject *tmp_bitor_expr_right_5;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(var_avcc_payload);
        tmp_iadd_expr_left_58 = var_avcc_payload;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[1]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_5 = mod_consts[74];
        CHECK_OBJECT(par_params);
        tmp_expression_value_27 = par_params;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[8]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 149;
        tmp_sub_expr_left_4 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_28, mod_consts[75]);

        Py_DECREF(tmp_called_value_28);
        if (tmp_sub_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_4 = mod_consts[31];
        tmp_bitor_expr_right_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_left_4);
        if (tmp_bitor_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_63 = BINARY_OPERATION_BITOR_OBJECT_LONG_OBJECT(tmp_bitor_expr_left_5, tmp_bitor_expr_right_5);
        Py_DECREF(tmp_bitor_expr_right_5);
        if (tmp_args_element_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 149;
        tmp_iadd_expr_right_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_63);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_63);
        if (tmp_iadd_expr_right_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_58, tmp_iadd_expr_right_58);
        Py_DECREF(tmp_iadd_expr_right_58);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_93 = tmp_iadd_expr_left_58;
        var_avcc_payload = tmp_assign_source_93;

    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_iadd_expr_left_59;
        PyObject *tmp_iadd_expr_right_59;
        PyObject *tmp_called_instance_56;
        CHECK_OBJECT(var_avcc_payload);
        tmp_iadd_expr_left_59 = var_avcc_payload;
        tmp_called_instance_56 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_56 == NULL)) {
            tmp_called_instance_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 150;
        tmp_iadd_expr_right_59 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_56,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_iadd_expr_right_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_59, tmp_iadd_expr_right_59);
        Py_DECREF(tmp_iadd_expr_right_59);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_94 = tmp_iadd_expr_left_59;
        var_avcc_payload = tmp_assign_source_94;

    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_iadd_expr_left_60;
        PyObject *tmp_iadd_expr_right_60;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_avcc_payload);
        tmp_iadd_expr_left_60 = var_avcc_payload;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[1]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sps);
        tmp_len_arg_1 = var_sps;
        tmp_args_element_value_64 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 151;
        tmp_iadd_expr_right_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_64);
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_element_value_64);
        if (tmp_iadd_expr_right_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_60, tmp_iadd_expr_right_60);
        Py_DECREF(tmp_iadd_expr_right_60);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_95 = tmp_iadd_expr_left_60;
        var_avcc_payload = tmp_assign_source_95;

    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_iadd_expr_left_61;
        PyObject *tmp_iadd_expr_right_61;
        CHECK_OBJECT(var_avcc_payload);
        tmp_iadd_expr_left_61 = var_avcc_payload;
        CHECK_OBJECT(var_sps);
        tmp_iadd_expr_right_61 = var_sps;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_61, tmp_iadd_expr_right_61);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_96 = tmp_iadd_expr_left_61;
        var_avcc_payload = tmp_assign_source_96;

    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_iadd_expr_left_62;
        PyObject *tmp_iadd_expr_right_62;
        PyObject *tmp_called_instance_57;
        CHECK_OBJECT(var_avcc_payload);
        tmp_iadd_expr_left_62 = var_avcc_payload;
        tmp_called_instance_57 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_57 == NULL)) {
            tmp_called_instance_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 153;
        tmp_iadd_expr_right_62 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_57,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_iadd_expr_right_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_62, tmp_iadd_expr_right_62);
        Py_DECREF(tmp_iadd_expr_right_62);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_97 = tmp_iadd_expr_left_62;
        var_avcc_payload = tmp_assign_source_97;

    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_iadd_expr_left_63;
        PyObject *tmp_iadd_expr_right_63;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(var_avcc_payload);
        tmp_iadd_expr_left_63 = var_avcc_payload;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[1]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pps);
        tmp_len_arg_2 = var_pps;
        tmp_args_element_value_65 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_args_element_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 154;
        tmp_iadd_expr_right_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_65);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_65);
        if (tmp_iadd_expr_right_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_63, tmp_iadd_expr_right_63);
        Py_DECREF(tmp_iadd_expr_right_63);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_98 = tmp_iadd_expr_left_63;
        var_avcc_payload = tmp_assign_source_98;

    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_iadd_expr_left_64;
        PyObject *tmp_iadd_expr_right_64;
        CHECK_OBJECT(var_avcc_payload);
        tmp_iadd_expr_left_64 = var_avcc_payload;
        CHECK_OBJECT(var_pps);
        tmp_iadd_expr_right_64 = var_pps;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_64, tmp_iadd_expr_right_64);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_99 = tmp_iadd_expr_left_64;
        var_avcc_payload = tmp_assign_source_99;

    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_iadd_expr_left_65;
        PyObject *tmp_iadd_expr_right_65;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_args_element_value_67;
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_iadd_expr_left_65 = var_sample_entry_payload;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_66 = mod_consts[76];
        CHECK_OBJECT(var_avcc_payload);
        tmp_args_element_value_67 = var_avcc_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = {tmp_args_element_value_66, tmp_args_element_value_67};
            tmp_iadd_expr_right_65 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_31, call_args);
        }

        if (tmp_iadd_expr_right_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_65, tmp_iadd_expr_right_65);
        Py_DECREF(tmp_iadd_expr_right_65);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_100 = tmp_iadd_expr_left_65;
        var_sample_entry_payload = tmp_assign_source_100;

    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_68 = mod_consts[77];
        CHECK_OBJECT(var_sample_entry_payload);
        tmp_args_element_value_69 = var_sample_entry_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 157;
        {
            PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69};
            tmp_assign_source_101 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_32, call_args);
        }

        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sample_entry_box == NULL);
        var_sample_entry_box = tmp_assign_source_101;
    }
    branch_no_4:;
    branch_end_2:;
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_iadd_expr_left_66;
        PyObject *tmp_iadd_expr_right_66;
        CHECK_OBJECT(var_stsd_payload);
        tmp_iadd_expr_left_66 = var_stsd_payload;
        if (var_sample_entry_box == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_right_66 = var_sample_entry_box;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_66, tmp_iadd_expr_right_66);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_102 = tmp_iadd_expr_left_66;
        var_stsd_payload = tmp_assign_source_102;

    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_args_element_value_73;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_70 = mod_consts[79];
        tmp_args_element_value_71 = mod_consts[13];
        tmp_args_element_value_72 = mod_consts[13];
        CHECK_OBJECT(var_stsd_payload);
        tmp_args_element_value_73 = var_stsd_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72, tmp_args_element_value_73};
            tmp_assign_source_103 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_33, call_args);
        }

        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_stbl_payload == NULL);
        var_stbl_payload = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_instance_58;
        tmp_called_instance_58 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_58 == NULL)) {
            tmp_called_instance_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 162;
        tmp_assign_source_104 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_58,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_stts_payload == NULL);
        var_stts_payload = tmp_assign_source_104;
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_iadd_expr_left_67;
        PyObject *tmp_iadd_expr_right_67;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_args_element_value_77;
        CHECK_OBJECT(var_stbl_payload);
        tmp_iadd_expr_left_67 = var_stbl_payload;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_74 = mod_consts[80];
        tmp_args_element_value_75 = mod_consts[13];
        tmp_args_element_value_76 = mod_consts[13];
        CHECK_OBJECT(var_stts_payload);
        tmp_args_element_value_77 = var_stts_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 163;
        {
            PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_77};
            tmp_iadd_expr_right_67 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_34, call_args);
        }

        if (tmp_iadd_expr_right_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_67, tmp_iadd_expr_right_67);
        Py_DECREF(tmp_iadd_expr_right_67);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_105 = tmp_iadd_expr_left_67;
        var_stbl_payload = tmp_assign_source_105;

    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_instance_59;
        tmp_called_instance_59 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_59 == NULL)) {
            tmp_called_instance_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 165;
        tmp_assign_source_106 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_59,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_stsc_payload == NULL);
        var_stsc_payload = tmp_assign_source_106;
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_iadd_expr_left_68;
        PyObject *tmp_iadd_expr_right_68;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_args_element_value_81;
        CHECK_OBJECT(var_stbl_payload);
        tmp_iadd_expr_left_68 = var_stbl_payload;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_78 = mod_consts[81];
        tmp_args_element_value_79 = mod_consts[13];
        tmp_args_element_value_80 = mod_consts[13];
        CHECK_OBJECT(var_stsc_payload);
        tmp_args_element_value_81 = var_stsc_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = {tmp_args_element_value_78, tmp_args_element_value_79, tmp_args_element_value_80, tmp_args_element_value_81};
            tmp_iadd_expr_right_68 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_35, call_args);
        }

        if (tmp_iadd_expr_right_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_68, tmp_iadd_expr_right_68);
        Py_DECREF(tmp_iadd_expr_right_68);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_107 = tmp_iadd_expr_left_68;
        var_stbl_payload = tmp_assign_source_107;

    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_instance_60;
        tmp_called_instance_60 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_60 == NULL)) {
            tmp_called_instance_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 168;
        tmp_assign_source_108 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_60,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_stco_payload == NULL);
        var_stco_payload = tmp_assign_source_108;
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_iadd_expr_left_69;
        PyObject *tmp_iadd_expr_right_69;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_args_element_value_85;
        CHECK_OBJECT(var_stbl_payload);
        tmp_iadd_expr_left_69 = var_stbl_payload;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_82 = mod_consts[82];
        tmp_args_element_value_83 = mod_consts[13];
        tmp_args_element_value_84 = mod_consts[13];
        CHECK_OBJECT(var_stco_payload);
        tmp_args_element_value_85 = var_stco_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83, tmp_args_element_value_84, tmp_args_element_value_85};
            tmp_iadd_expr_right_69 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_36, call_args);
        }

        if (tmp_iadd_expr_right_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_69, tmp_iadd_expr_right_69);
        Py_DECREF(tmp_iadd_expr_right_69);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_109 = tmp_iadd_expr_left_69;
        var_stbl_payload = tmp_assign_source_109;

    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_iadd_expr_left_70;
        PyObject *tmp_iadd_expr_right_70;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_args_element_value_87;
        CHECK_OBJECT(var_minf_payload);
        tmp_iadd_expr_left_70 = var_minf_payload;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_86 = mod_consts[83];
        CHECK_OBJECT(var_stbl_payload);
        tmp_args_element_value_87 = var_stbl_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_86, tmp_args_element_value_87};
            tmp_iadd_expr_right_70 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_37, call_args);
        }

        if (tmp_iadd_expr_right_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_70, tmp_iadd_expr_right_70);
        Py_DECREF(tmp_iadd_expr_right_70);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_110 = tmp_iadd_expr_left_70;
        var_minf_payload = tmp_assign_source_110;

    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_iadd_expr_left_71;
        PyObject *tmp_iadd_expr_right_71;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_args_element_value_89;
        CHECK_OBJECT(var_mdia_payload);
        tmp_iadd_expr_left_71 = var_mdia_payload;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_88 = mod_consts[84];
        CHECK_OBJECT(var_minf_payload);
        tmp_args_element_value_89 = var_minf_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = {tmp_args_element_value_88, tmp_args_element_value_89};
            tmp_iadd_expr_right_71 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_38, call_args);
        }

        if (tmp_iadd_expr_right_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_71, tmp_iadd_expr_right_71);
        Py_DECREF(tmp_iadd_expr_right_71);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_111 = tmp_iadd_expr_left_71;
        var_mdia_payload = tmp_assign_source_111;

    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_iadd_expr_left_72;
        PyObject *tmp_iadd_expr_right_72;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_args_element_value_91;
        CHECK_OBJECT(var_trak_payload);
        tmp_iadd_expr_left_72 = var_trak_payload;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_90 = mod_consts[85];
        CHECK_OBJECT(var_mdia_payload);
        tmp_args_element_value_91 = var_mdia_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = {tmp_args_element_value_90, tmp_args_element_value_91};
            tmp_iadd_expr_right_72 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_39, call_args);
        }

        if (tmp_iadd_expr_right_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_72, tmp_iadd_expr_right_72);
        Py_DECREF(tmp_iadd_expr_right_72);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_112 = tmp_iadd_expr_left_72;
        var_trak_payload = tmp_assign_source_112;

    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_iadd_expr_left_73;
        PyObject *tmp_iadd_expr_right_73;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_args_element_value_93;
        CHECK_OBJECT(var_moov_payload);
        tmp_iadd_expr_left_73 = var_moov_payload;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_92 = mod_consts[86];
        CHECK_OBJECT(var_trak_payload);
        tmp_args_element_value_93 = var_trak_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = {tmp_args_element_value_92, tmp_args_element_value_93};
            tmp_iadd_expr_right_73 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_40, call_args);
        }

        if (tmp_iadd_expr_right_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_73, tmp_iadd_expr_right_73);
        Py_DECREF(tmp_iadd_expr_right_73);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_113 = tmp_iadd_expr_left_73;
        var_moov_payload = tmp_assign_source_113;

    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_called_instance_61;
        PyObject *tmp_args_element_value_94;
        tmp_called_instance_61 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_61 == NULL)) {
            tmp_called_instance_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_instance_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_duration);
        tmp_args_element_value_94 = var_duration;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 179;
        tmp_assign_source_114 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_61, mod_consts[1], tmp_args_element_value_94);
        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mehd_payload == NULL);
        var_mehd_payload = tmp_assign_source_114;
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_args_element_value_98;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_95 = mod_consts[87];
        tmp_args_element_value_96 = mod_consts[31];
        tmp_args_element_value_97 = mod_consts[13];
        CHECK_OBJECT(var_mehd_payload);
        tmp_args_element_value_98 = var_mehd_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_value_95, tmp_args_element_value_96, tmp_args_element_value_97, tmp_args_element_value_98};
            tmp_assign_source_115 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_41, call_args);
        }

        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mvex_payload == NULL);
        var_mvex_payload = tmp_assign_source_115;
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_instance_62;
        PyObject *tmp_args_element_value_99;
        tmp_called_instance_62 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_62 == NULL)) {
            tmp_called_instance_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_track_id);
        tmp_args_element_value_99 = var_track_id;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 182;
        tmp_assign_source_116 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_62, mod_consts[1], tmp_args_element_value_99);
        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_trex_payload == NULL);
        var_trex_payload = tmp_assign_source_116;
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_iadd_expr_left_74;
        PyObject *tmp_iadd_expr_right_74;
        PyObject *tmp_called_instance_63;
        CHECK_OBJECT(var_trex_payload);
        tmp_iadd_expr_left_74 = var_trex_payload;
        tmp_called_instance_63 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_63 == NULL)) {
            tmp_called_instance_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 183;
        tmp_iadd_expr_right_74 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_63,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_iadd_expr_right_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_74, tmp_iadd_expr_right_74);
        Py_DECREF(tmp_iadd_expr_right_74);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_117 = tmp_iadd_expr_left_74;
        var_trex_payload = tmp_assign_source_117;

    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_iadd_expr_left_75;
        PyObject *tmp_iadd_expr_right_75;
        PyObject *tmp_called_instance_64;
        CHECK_OBJECT(var_trex_payload);
        tmp_iadd_expr_left_75 = var_trex_payload;
        tmp_called_instance_64 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_64 == NULL)) {
            tmp_called_instance_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 184;
        tmp_iadd_expr_right_75 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_64,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_iadd_expr_right_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_75, tmp_iadd_expr_right_75);
        Py_DECREF(tmp_iadd_expr_right_75);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_118 = tmp_iadd_expr_left_75;
        var_trex_payload = tmp_assign_source_118;

    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_iadd_expr_left_76;
        PyObject *tmp_iadd_expr_right_76;
        PyObject *tmp_called_instance_65;
        CHECK_OBJECT(var_trex_payload);
        tmp_iadd_expr_left_76 = var_trex_payload;
        tmp_called_instance_65 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_65 == NULL)) {
            tmp_called_instance_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 185;
        tmp_iadd_expr_right_76 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_65,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_iadd_expr_right_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_76, tmp_iadd_expr_right_76);
        Py_DECREF(tmp_iadd_expr_right_76);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_119 = tmp_iadd_expr_left_76;
        var_trex_payload = tmp_assign_source_119;

    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_iadd_expr_left_77;
        PyObject *tmp_iadd_expr_right_77;
        PyObject *tmp_called_instance_66;
        CHECK_OBJECT(var_trex_payload);
        tmp_iadd_expr_left_77 = var_trex_payload;
        tmp_called_instance_66 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_66 == NULL)) {
            tmp_called_instance_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 186;
        tmp_iadd_expr_right_77 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_66,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_iadd_expr_right_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_77, tmp_iadd_expr_right_77);
        Py_DECREF(tmp_iadd_expr_right_77);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_120 = tmp_iadd_expr_left_77;
        var_trex_payload = tmp_assign_source_120;

    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_iadd_expr_left_78;
        PyObject *tmp_iadd_expr_right_78;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_args_element_value_103;
        CHECK_OBJECT(var_mvex_payload);
        tmp_iadd_expr_left_78 = var_mvex_payload;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_100 = mod_consts[88];
        tmp_args_element_value_101 = mod_consts[13];
        tmp_args_element_value_102 = mod_consts[13];
        CHECK_OBJECT(var_trex_payload);
        tmp_args_element_value_103 = var_trex_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = {tmp_args_element_value_100, tmp_args_element_value_101, tmp_args_element_value_102, tmp_args_element_value_103};
            tmp_iadd_expr_right_78 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_42, call_args);
        }

        if (tmp_iadd_expr_right_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_78, tmp_iadd_expr_right_78);
        Py_DECREF(tmp_iadd_expr_right_78);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_121 = tmp_iadd_expr_left_78;
        var_mvex_payload = tmp_assign_source_121;

    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_iadd_expr_left_79;
        PyObject *tmp_iadd_expr_right_79;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_args_element_value_105;
        CHECK_OBJECT(var_moov_payload);
        tmp_iadd_expr_left_79 = var_moov_payload;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_104 = mod_consts[89];
        CHECK_OBJECT(var_mvex_payload);
        tmp_args_element_value_105 = var_mvex_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = {tmp_args_element_value_104, tmp_args_element_value_105};
            tmp_iadd_expr_right_79 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_43, call_args);
        }

        if (tmp_iadd_expr_right_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_79, tmp_iadd_expr_right_79);
        Py_DECREF(tmp_iadd_expr_right_79);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_122 = tmp_iadd_expr_left_79;
        var_moov_payload = tmp_assign_source_122;

    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_args_element_value_108;
        CHECK_OBJECT(par_stream);
        tmp_expression_value_30 = par_stream;
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[18]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_107 = mod_consts[90];
        CHECK_OBJECT(var_moov_payload);
        tmp_args_element_value_108 = var_moov_payload;
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_value_107, tmp_args_element_value_108};
            tmp_args_element_value_106 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_45, call_args);
        }

        if (tmp_args_element_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame.f_lineno = 190;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_106);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_106);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_96637bb6ee39ee56b1ed851b20eb78e1);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_96637bb6ee39ee56b1ed851b20eb78e1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_96637bb6ee39ee56b1ed851b20eb78e1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96637bb6ee39ee56b1ed851b20eb78e1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96637bb6ee39ee56b1ed851b20eb78e1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96637bb6ee39ee56b1ed851b20eb78e1,
        type_description_1,
        par_stream,
        par_params,
        var_track_id,
        var_fourcc,
        var_duration,
        var_timescale,
        var_language,
        var_height,
        var_width,
        var_is_audio,
        var_creation_time,
        var_modification_time,
        var_ftyp_payload,
        var_mvhd_payload,
        var_moov_payload,
        var_tkhd_payload,
        var_trak_payload,
        var_mdhd_payload,
        var_mdia_payload,
        var_hdlr_payload,
        var_smhd_payload,
        var_media_header_box,
        var_vmhd_payload,
        var_minf_payload,
        var_dref_payload,
        var_dinf_payload,
        var_stsd_payload,
        var_sample_entry_payload,
        var_sample_entry_box,
        var_codec_private_data,
        var_sps,
        var_pps,
        var_avcc_payload,
        var_stbl_payload,
        var_stts_payload,
        var_stsc_payload,
        var_stco_payload,
        var_mehd_payload,
        var_mvex_payload,
        var_trex_payload
    );


    // Release cached frame if used for exception.
    if (frame_96637bb6ee39ee56b1ed851b20eb78e1 == cache_frame_96637bb6ee39ee56b1ed851b20eb78e1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_96637bb6ee39ee56b1ed851b20eb78e1);
        cache_frame_96637bb6ee39ee56b1ed851b20eb78e1 = NULL;
    }

    assertFrameObject(frame_96637bb6ee39ee56b1ed851b20eb78e1);

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
    CHECK_OBJECT(var_track_id);
    Py_DECREF(var_track_id);
    var_track_id = NULL;
    CHECK_OBJECT(var_fourcc);
    Py_DECREF(var_fourcc);
    var_fourcc = NULL;
    CHECK_OBJECT(var_duration);
    Py_DECREF(var_duration);
    var_duration = NULL;
    CHECK_OBJECT(var_timescale);
    Py_DECREF(var_timescale);
    var_timescale = NULL;
    CHECK_OBJECT(var_language);
    Py_DECREF(var_language);
    var_language = NULL;
    CHECK_OBJECT(var_height);
    Py_DECREF(var_height);
    var_height = NULL;
    CHECK_OBJECT(var_width);
    Py_DECREF(var_width);
    var_width = NULL;
    CHECK_OBJECT(var_is_audio);
    Py_DECREF(var_is_audio);
    var_is_audio = NULL;
    CHECK_OBJECT(var_creation_time);
    Py_DECREF(var_creation_time);
    var_creation_time = NULL;
    CHECK_OBJECT(var_modification_time);
    Py_DECREF(var_modification_time);
    var_modification_time = NULL;
    CHECK_OBJECT(var_ftyp_payload);
    Py_DECREF(var_ftyp_payload);
    var_ftyp_payload = NULL;
    CHECK_OBJECT(var_mvhd_payload);
    Py_DECREF(var_mvhd_payload);
    var_mvhd_payload = NULL;
    CHECK_OBJECT(var_moov_payload);
    Py_DECREF(var_moov_payload);
    var_moov_payload = NULL;
    CHECK_OBJECT(var_tkhd_payload);
    Py_DECREF(var_tkhd_payload);
    var_tkhd_payload = NULL;
    CHECK_OBJECT(var_trak_payload);
    Py_DECREF(var_trak_payload);
    var_trak_payload = NULL;
    CHECK_OBJECT(var_mdhd_payload);
    Py_DECREF(var_mdhd_payload);
    var_mdhd_payload = NULL;
    CHECK_OBJECT(var_mdia_payload);
    Py_DECREF(var_mdia_payload);
    var_mdia_payload = NULL;
    CHECK_OBJECT(var_hdlr_payload);
    Py_DECREF(var_hdlr_payload);
    var_hdlr_payload = NULL;
    Py_XDECREF(var_smhd_payload);
    var_smhd_payload = NULL;
    CHECK_OBJECT(var_media_header_box);
    Py_DECREF(var_media_header_box);
    var_media_header_box = NULL;
    Py_XDECREF(var_vmhd_payload);
    var_vmhd_payload = NULL;
    CHECK_OBJECT(var_minf_payload);
    Py_DECREF(var_minf_payload);
    var_minf_payload = NULL;
    CHECK_OBJECT(var_dref_payload);
    Py_DECREF(var_dref_payload);
    var_dref_payload = NULL;
    CHECK_OBJECT(var_dinf_payload);
    Py_DECREF(var_dinf_payload);
    var_dinf_payload = NULL;
    CHECK_OBJECT(var_stsd_payload);
    Py_DECREF(var_stsd_payload);
    var_stsd_payload = NULL;
    Py_XDECREF(var_sample_entry_payload);
    var_sample_entry_payload = NULL;
    Py_XDECREF(var_sample_entry_box);
    var_sample_entry_box = NULL;
    Py_XDECREF(var_codec_private_data);
    var_codec_private_data = NULL;
    Py_XDECREF(var_sps);
    var_sps = NULL;
    Py_XDECREF(var_pps);
    var_pps = NULL;
    Py_XDECREF(var_avcc_payload);
    var_avcc_payload = NULL;
    CHECK_OBJECT(var_stbl_payload);
    Py_DECREF(var_stbl_payload);
    var_stbl_payload = NULL;
    CHECK_OBJECT(var_stts_payload);
    Py_DECREF(var_stts_payload);
    var_stts_payload = NULL;
    CHECK_OBJECT(var_stsc_payload);
    Py_DECREF(var_stsc_payload);
    var_stsc_payload = NULL;
    CHECK_OBJECT(var_stco_payload);
    Py_DECREF(var_stco_payload);
    var_stco_payload = NULL;
    CHECK_OBJECT(var_mehd_payload);
    Py_DECREF(var_mehd_payload);
    var_mehd_payload = NULL;
    CHECK_OBJECT(var_mvex_payload);
    Py_DECREF(var_mvex_payload);
    var_mvex_payload = NULL;
    CHECK_OBJECT(var_trex_payload);
    Py_DECREF(var_trex_payload);
    var_trex_payload = NULL;
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

    Py_XDECREF(var_track_id);
    var_track_id = NULL;
    Py_XDECREF(var_fourcc);
    var_fourcc = NULL;
    Py_XDECREF(var_duration);
    var_duration = NULL;
    Py_XDECREF(var_timescale);
    var_timescale = NULL;
    Py_XDECREF(var_language);
    var_language = NULL;
    Py_XDECREF(var_height);
    var_height = NULL;
    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_is_audio);
    var_is_audio = NULL;
    Py_XDECREF(var_creation_time);
    var_creation_time = NULL;
    Py_XDECREF(var_modification_time);
    var_modification_time = NULL;
    Py_XDECREF(var_ftyp_payload);
    var_ftyp_payload = NULL;
    Py_XDECREF(var_mvhd_payload);
    var_mvhd_payload = NULL;
    Py_XDECREF(var_moov_payload);
    var_moov_payload = NULL;
    Py_XDECREF(var_tkhd_payload);
    var_tkhd_payload = NULL;
    Py_XDECREF(var_trak_payload);
    var_trak_payload = NULL;
    Py_XDECREF(var_mdhd_payload);
    var_mdhd_payload = NULL;
    Py_XDECREF(var_mdia_payload);
    var_mdia_payload = NULL;
    Py_XDECREF(var_hdlr_payload);
    var_hdlr_payload = NULL;
    Py_XDECREF(var_smhd_payload);
    var_smhd_payload = NULL;
    Py_XDECREF(var_media_header_box);
    var_media_header_box = NULL;
    Py_XDECREF(var_vmhd_payload);
    var_vmhd_payload = NULL;
    Py_XDECREF(var_minf_payload);
    var_minf_payload = NULL;
    Py_XDECREF(var_dref_payload);
    var_dref_payload = NULL;
    Py_XDECREF(var_dinf_payload);
    var_dinf_payload = NULL;
    Py_XDECREF(var_stsd_payload);
    var_stsd_payload = NULL;
    Py_XDECREF(var_sample_entry_payload);
    var_sample_entry_payload = NULL;
    Py_XDECREF(var_sample_entry_box);
    var_sample_entry_box = NULL;
    Py_XDECREF(var_codec_private_data);
    var_codec_private_data = NULL;
    Py_XDECREF(var_sps);
    var_sps = NULL;
    Py_XDECREF(var_pps);
    var_pps = NULL;
    Py_XDECREF(var_avcc_payload);
    var_avcc_payload = NULL;
    Py_XDECREF(var_stbl_payload);
    var_stbl_payload = NULL;
    Py_XDECREF(var_stts_payload);
    var_stts_payload = NULL;
    Py_XDECREF(var_stsc_payload);
    var_stsc_payload = NULL;
    Py_XDECREF(var_stco_payload);
    var_stco_payload = NULL;
    Py_XDECREF(var_mehd_payload);
    var_mehd_payload = NULL;
    Py_XDECREF(var_mvex_payload);
    var_mvex_payload = NULL;
    Py_XDECREF(var_trex_payload);
    var_trex_payload = NULL;
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
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$downloader$ism$$$function__4_extract_box_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *par_box_sequence = python_pars[1];
    PyObject *var_data_reader = NULL;
    PyObject *var_box_size = NULL;
    PyObject *var_box_type = NULL;
    PyObject *var_box_data = NULL;
    struct Nuitka_FrameObject *frame_9e0c4ffa1c21319f3968206647f54e9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9e0c4ffa1c21319f3968206647f54e9a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9e0c4ffa1c21319f3968206647f54e9a)) {
        Py_XDECREF(cache_frame_9e0c4ffa1c21319f3968206647f54e9a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9e0c4ffa1c21319f3968206647f54e9a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9e0c4ffa1c21319f3968206647f54e9a = MAKE_FUNCTION_FRAME(codeobj_9e0c4ffa1c21319f3968206647f54e9a, module_youtube_dl$downloader$ism, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9e0c4ffa1c21319f3968206647f54e9a->m_type_description == NULL);
    frame_9e0c4ffa1c21319f3968206647f54e9a = cache_frame_9e0c4ffa1c21319f3968206647f54e9a;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_9e0c4ffa1c21319f3968206647f54e9a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9e0c4ffa1c21319f3968206647f54e9a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        {
            PyObject *hard_module = IMPORT_HARD_IO();
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[91]);
        }
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        frame_9e0c4ffa1c21319f3968206647f54e9a->m_frame.f_lineno = 194;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data_reader == NULL);
        var_data_reader = tmp_assign_source_1;
    }
    loop_start_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[92]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_data_reader == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 196;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = var_data_reader;
        frame_9e0c4ffa1c21319f3968206647f54e9a->m_frame.f_lineno = 196;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[94],
            PyTuple_GET_ITEM(mod_consts[95], 0)
        );

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 196;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_9e0c4ffa1c21319f3968206647f54e9a->m_frame.f_lineno = 196;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[13];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_box_size;
            var_box_size = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        if (var_data_reader == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = var_data_reader;
        frame_9e0c4ffa1c21319f3968206647f54e9a->m_frame.f_lineno = 197;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[94],
            PyTuple_GET_ITEM(mod_consts[95], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_box_type;
            var_box_type = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_box_type);
        tmp_cmp_expr_left_1 = var_box_type;
        CHECK_OBJECT(par_box_sequence);
        tmp_expression_value_3 = par_box_sequence;
        tmp_subscript_value_2 = mod_consts[13];
        tmp_cmp_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 0);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        if (var_data_reader == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 199;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = var_data_reader;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[94]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_box_size);
        tmp_sub_expr_left_1 = var_box_size;
        tmp_sub_expr_right_1 = mod_consts[96];
        tmp_args_element_value_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 199;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_9e0c4ffa1c21319f3968206647f54e9a->m_frame.f_lineno = 199;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_box_data == NULL);
        var_box_data = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_box_sequence);
        tmp_len_arg_1 = par_box_sequence;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 1;
        tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(var_box_data);
    tmp_return_value = var_box_data;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_box_data);
        tmp_args_element_value_4 = var_box_data;
        CHECK_OBJECT(par_box_sequence);
        tmp_expression_value_5 = par_box_sequence;
        tmp_subscript_value_3 = mod_consts[4];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_9e0c4ffa1c21319f3968206647f54e9a->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_args_element_value_7;
        if (var_data_reader == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 203;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = var_data_reader;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[98]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_box_size);
        tmp_sub_expr_left_2 = var_box_size;
        tmp_sub_expr_right_2 = mod_consts[96];
        tmp_args_element_value_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 203;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[31];
        frame_9e0c4ffa1c21319f3968206647f54e9a->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 195;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9e0c4ffa1c21319f3968206647f54e9a);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9e0c4ffa1c21319f3968206647f54e9a);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9e0c4ffa1c21319f3968206647f54e9a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9e0c4ffa1c21319f3968206647f54e9a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9e0c4ffa1c21319f3968206647f54e9a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9e0c4ffa1c21319f3968206647f54e9a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9e0c4ffa1c21319f3968206647f54e9a,
        type_description_1,
        par_data,
        par_box_sequence,
        var_data_reader,
        var_box_size,
        var_box_type,
        var_box_data
    );


    // Release cached frame if used for exception.
    if (frame_9e0c4ffa1c21319f3968206647f54e9a == cache_frame_9e0c4ffa1c21319f3968206647f54e9a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9e0c4ffa1c21319f3968206647f54e9a);
        cache_frame_9e0c4ffa1c21319f3968206647f54e9a = NULL;
    }

    assertFrameObject(frame_9e0c4ffa1c21319f3968206647f54e9a);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_data_reader);
    var_data_reader = NULL;
    CHECK_OBJECT(var_box_size);
    Py_DECREF(var_box_size);
    var_box_size = NULL;
    CHECK_OBJECT(var_box_type);
    Py_DECREF(var_box_type);
    var_box_type = NULL;
    Py_XDECREF(var_box_data);
    var_box_data = NULL;
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

    Py_XDECREF(var_data_reader);
    var_data_reader = NULL;
    Py_XDECREF(var_box_size);
    var_box_size = NULL;
    Py_XDECREF(var_box_type);
    var_box_type = NULL;
    Py_XDECREF(var_box_data);
    var_box_data = NULL;
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
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_box_sequence);
    Py_DECREF(par_box_sequence);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_box_sequence);
    Py_DECREF(par_box_sequence);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$downloader$ism$$$function__5_real_download(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_filename = python_pars[1];
    PyObject *par_info_dict = python_pars[2];
    PyObject *var_segments = NULL;
    PyObject *var_ctx = NULL;
    PyObject *var_fragment_retries = NULL;
    PyObject *var_skip_unavailable_fragments = NULL;
    PyObject *var_track_written = NULL;
    PyObject *var_frag_index = NULL;
    PyObject *var_i = NULL;
    PyObject *var_segment = NULL;
    PyObject *var_count = NULL;
    PyObject *var_success = NULL;
    PyObject *var_frag_content = NULL;
    PyObject *var_tfhd_data = NULL;
    PyObject *var_err = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5989de568c20af5a189f707182d62a7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
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
    static struct Nuitka_FrameObject *cache_frame_5989de568c20af5a189f707182d62a7a = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5989de568c20af5a189f707182d62a7a)) {
        Py_XDECREF(cache_frame_5989de568c20af5a189f707182d62a7a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5989de568c20af5a189f707182d62a7a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5989de568c20af5a189f707182d62a7a = MAKE_FUNCTION_FRAME(codeobj_5989de568c20af5a189f707182d62a7a, module_youtube_dl$downloader$ism, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5989de568c20af5a189f707182d62a7a->m_type_description == NULL);
    frame_5989de568c20af5a189f707182d62a7a = cache_frame_5989de568c20af5a189f707182d62a7a;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_5989de568c20af5a189f707182d62a7a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5989de568c20af5a189f707182d62a7a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[99]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5989de568c20af5a189f707182d62a7a->m_frame.f_lineno = 214;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[100]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 214;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_info_dict);
        tmp_expression_value_4 = par_info_dict;
        tmp_subscript_value_1 = mod_consts[101];
        tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[102];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_info_dict);
        tmp_expression_value_5 = par_info_dict;
        tmp_subscript_value_3 = mod_consts[101];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_segments == NULL);
        var_segments = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[103];
        CHECK_OBJECT(par_filename);
        tmp_dict_value_1 = par_filename;
        tmp_assign_source_2 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_len_arg_1;
            tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[104];
            CHECK_OBJECT(var_segments);
            tmp_len_arg_1 = var_segments;
            tmp_dict_value_1 = BUILTIN_LEN(tmp_len_arg_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_1 = "oooooooooooooooo";
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
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_ctx);
        tmp_args_element_value_1 = var_ctx;
        frame_5989de568c20af5a189f707182d62a7a->m_frame.f_lineno = 222;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[105], tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[99]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[8]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5989de568c20af5a189f707182d62a7a->m_frame.f_lineno = 224;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[106]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fragment_retries == NULL);
        var_fragment_retries = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[99]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[8]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5989de568c20af5a189f707182d62a7a->m_frame.f_lineno = 225;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[107]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_skip_unavailable_fragments == NULL);
        var_skip_unavailable_fragments = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_False;
        assert(var_track_written == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_track_written = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[13];
        assert(var_frag_index == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_frag_index = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_4 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(var_segments);
        tmp_args_element_value_2 = var_segments;
        frame_5989de568c20af5a189f707182d62a7a->m_frame.f_lineno = 229;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooo";
                exception_lineno = 229;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 229;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 229;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
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

                    type_description_1 = "oooooooooooooooo";
                    exception_lineno = 229;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[72];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooo";
            exception_lineno = 229;
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
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_12;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_segment;
            var_segment = tmp_assign_source_13;
            Py_INCREF(var_segment);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_frag_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 230;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_frag_index;
        tmp_iadd_expr_right_1 = mod_consts[31];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_14 = tmp_iadd_expr_left_1;
        var_frag_index = tmp_assign_source_14;

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_frag_index);
        tmp_cmp_expr_left_1 = var_frag_index;
        if (var_ctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 231;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_10 = var_ctx;
        tmp_subscript_value_4 = mod_consts[110];
        tmp_cmp_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_4);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_start_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[13];
        {
            PyObject *old = var_count;
            var_count = tmp_assign_source_15;
            Py_INCREF(var_count);
            Py_XDECREF(old);
        }

    }
    loop_start_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (var_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 234;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_2 = var_count;
        if (var_fragment_retries == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 234;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_2 = var_fragment_retries;
        tmp_operand_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_end_2;
    branch_no_2:;
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_args_element_value_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 236;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_11 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[114]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_ctx == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 236;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_3 = var_ctx;
        CHECK_OBJECT(var_segment);
        tmp_expression_value_12 = var_segment;
        tmp_subscript_value_5 = mod_consts[115];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 236;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_6;
        }
        if (par_info_dict == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 236;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_5 = par_info_dict;
        frame_5989de568c20af5a189f707182d62a7a->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 236;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_18 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 236;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_18;
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

                    type_description_1 = "oooooooooooooooo";
                    exception_lineno = 236;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[72];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooo";
            exception_lineno = 236;
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
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

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_19 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_success;
            var_success = tmp_assign_source_19;
            Py_INCREF(var_success);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_20 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_frag_content;
            var_frag_content = tmp_assign_source_20;
            Py_INCREF(var_frag_content);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_success);
        tmp_operand_value_2 = var_success;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_3:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_3;
        if (var_track_written == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_operand_value_3 = var_track_written;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_frag_content);
        tmp_args_element_value_6 = var_frag_content;
        tmp_args_element_value_7 = LIST_COPY(mod_consts[118]);
        frame_5989de568c20af5a189f707182d62a7a->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_tfhd_data;
            var_tfhd_data = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[92]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_tfhd_data);
        tmp_expression_value_15 = var_tfhd_data;
        tmp_subscript_value_6 = mod_consts[119];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_6);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 241;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_5989de568c20af5a189f707182d62a7a->m_frame.f_lineno = 241;
        tmp_expression_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_7 = mod_consts[13];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_7, 0);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        if (par_info_dict == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 241;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_16 = par_info_dict;
        tmp_subscript_value_8 = mod_consts[120];
        tmp_ass_subscribed_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_8);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 241;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_ass_subscript_1 = mod_consts[5];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_10;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        if (var_ctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 242;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_17 = var_ctx;
        tmp_subscript_value_9 = mod_consts[122];
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_9);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        if (par_info_dict == NULL) {
            Py_DECREF(tmp_args_element_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 242;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_18 = par_info_dict;
        tmp_subscript_value_10 = mod_consts[120];
        tmp_args_element_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_10);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 242;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_5989de568c20af5a189f707182d62a7a->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = Py_True;
        {
            PyObject *old = var_track_written;
            var_track_written = tmp_assign_source_22;
            Py_INCREF(var_track_written);
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 244;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_19 = par_self;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[123]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        if (var_ctx == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 244;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_11 = var_ctx;
        if (var_frag_content == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[124]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 244;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_12 = var_frag_content;
        frame_5989de568c20af5a189f707182d62a7a->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto loop_end_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_5989de568c20af5a189f707182d62a7a, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_5989de568c20af5a189f707182d62a7a, exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_20;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[126]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_err;
            var_err = tmp_assign_source_23;
            Py_INCREF(var_err);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        if (var_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 247;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_iadd_expr_left_2 = var_count;
        tmp_iadd_expr_right_2 = mod_consts[31];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_24 = tmp_iadd_expr_left_2;
        var_count = tmp_assign_source_24;

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_count);
        tmp_cmp_expr_left_4 = var_count;
        if (var_fragment_retries == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 248;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_cmp_expr_right_4 = var_fragment_retries;
        tmp_condition_result_7 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_9;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_21 = par_self;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[127]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_err);
        tmp_args_element_value_13 = var_err;
        if (var_frag_index == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_args_element_value_14 = var_frag_index;
        CHECK_OBJECT(var_count);
        tmp_args_element_value_15 = var_count;
        if (var_fragment_retries == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_args_element_value_16 = var_fragment_retries;
        frame_5989de568c20af5a189f707182d62a7a->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_6:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_err);
    var_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_5:;
    Py_XDECREF(var_err);
    var_err = NULL;

    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 235;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5989de568c20af5a189f707182d62a7a->m_frame) frame_5989de568c20af5a189f707182d62a7a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
    branch_end_5:;
    goto try_end_6;
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

    goto try_except_handler_2;
    // End of try:
    try_end_6:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 234;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        if (var_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 250;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_5 = var_count;
        if (var_fragment_retries == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 250;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_5 = var_fragment_retries;
        tmp_condition_result_8 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_skip_unavailable_fragments);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_skip_unavailable_fragments);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_17;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 252;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_22 = par_self;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[128]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_frag_index == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 252;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_17 = var_frag_index;
        frame_5989de568c20af5a189f707182d62a7a->m_frame.f_lineno = 252;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto loop_start_1;
    branch_no_8:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 254;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_23 = par_self;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[129]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mod_expr_left_1 = mod_consts[130];
        if (var_fragment_retries == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 254;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mod_expr_right_1 = var_fragment_retries;
        tmp_args_element_value_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 254;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_5989de568c20af5a189f707182d62a7a->m_frame.f_lineno = 254;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_7);
    }
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_7:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 229;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_8;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_19;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_24 = par_self;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[131]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_ctx == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_19 = var_ctx;
        frame_5989de568c20af5a189f707182d62a7a->m_frame.f_lineno = 257;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5989de568c20af5a189f707182d62a7a);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5989de568c20af5a189f707182d62a7a);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5989de568c20af5a189f707182d62a7a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5989de568c20af5a189f707182d62a7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5989de568c20af5a189f707182d62a7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5989de568c20af5a189f707182d62a7a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5989de568c20af5a189f707182d62a7a,
        type_description_1,
        par_self,
        par_filename,
        par_info_dict,
        var_segments,
        var_ctx,
        var_fragment_retries,
        var_skip_unavailable_fragments,
        var_track_written,
        var_frag_index,
        var_i,
        var_segment,
        var_count,
        var_success,
        var_frag_content,
        var_tfhd_data,
        var_err
    );


    // Release cached frame if used for exception.
    if (frame_5989de568c20af5a189f707182d62a7a == cache_frame_5989de568c20af5a189f707182d62a7a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5989de568c20af5a189f707182d62a7a);
        cache_frame_5989de568c20af5a189f707182d62a7a = NULL;
    }

    assertFrameObject(frame_5989de568c20af5a189f707182d62a7a);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_segments);
    Py_DECREF(var_segments);
    var_segments = NULL;
    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    Py_XDECREF(var_fragment_retries);
    var_fragment_retries = NULL;
    CHECK_OBJECT(var_skip_unavailable_fragments);
    Py_DECREF(var_skip_unavailable_fragments);
    var_skip_unavailable_fragments = NULL;
    Py_XDECREF(var_track_written);
    var_track_written = NULL;
    Py_XDECREF(var_frag_index);
    var_frag_index = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_segment);
    var_segment = NULL;
    Py_XDECREF(var_count);
    var_count = NULL;
    Py_XDECREF(var_success);
    var_success = NULL;
    Py_XDECREF(var_frag_content);
    var_frag_content = NULL;
    Py_XDECREF(var_tfhd_data);
    var_tfhd_data = NULL;
    Py_XDECREF(var_err);
    var_err = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_segments);
    var_segments = NULL;
    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    Py_XDECREF(var_fragment_retries);
    var_fragment_retries = NULL;
    Py_XDECREF(var_skip_unavailable_fragments);
    var_skip_unavailable_fragments = NULL;
    Py_XDECREF(var_track_written);
    var_track_written = NULL;
    Py_XDECREF(var_frag_index);
    var_frag_index = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_segment);
    var_segment = NULL;
    Py_XDECREF(var_count);
    var_count = NULL;
    Py_XDECREF(var_success);
    var_success = NULL;
    Py_XDECREF(var_frag_content);
    var_frag_content = NULL;
    Py_XDECREF(var_tfhd_data);
    var_tfhd_data = NULL;
    Py_XDECREF(var_err);
    var_err = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_info_dict);
    Py_DECREF(par_info_dict);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_info_dict);
    Py_DECREF(par_info_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_youtube_dl$downloader$ism$$$function__1_box() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$downloader$ism$$$function__1_box,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_28265955c4ee73e95846b49fdcf3e47e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$downloader$ism,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$downloader$ism$$$function__2_full_box() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$downloader$ism$$$function__2_full_box,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_11336a7202ad21bb37fc901e0e69af6f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$downloader$ism,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$downloader$ism$$$function__3_write_piff_header() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$downloader$ism$$$function__3_write_piff_header,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_96637bb6ee39ee56b1ed851b20eb78e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$downloader$ism,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$downloader$ism$$$function__4_extract_box_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$downloader$ism$$$function__4_extract_box_data,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9e0c4ffa1c21319f3968206647f54e9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$downloader$ism,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$downloader$ism$$$function__5_real_download() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$downloader$ism$$$function__5_real_download,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_5989de568c20af5a189f707182d62a7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$downloader$ism,
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

function_impl_code functable_youtube_dl$downloader$ism[] = {
    impl_youtube_dl$downloader$ism$$$function__1_box,
    impl_youtube_dl$downloader$ism$$$function__2_full_box,
    impl_youtube_dl$downloader$ism$$$function__3_write_piff_header,
    impl_youtube_dl$downloader$ism$$$function__4_extract_box_data,
    impl_youtube_dl$downloader$ism$$$function__5_real_download,
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

    function_impl_code *current = functable_youtube_dl$downloader$ism;
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

    if (offset > sizeof(functable_youtube_dl$downloader$ism) || offset < 0) {
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
        functable_youtube_dl$downloader$ism[offset],
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
        module_youtube_dl$downloader$ism,
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
PyObject *modulecode_youtube_dl$downloader$ism(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("youtube_dl.downloader.ism");

    // Store the module for future use.
    module_youtube_dl$downloader$ism = module;

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
        PRINT_STRING("youtube_dl.downloader.ism: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl.downloader.ism: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl.downloader.ism: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inityoutube_dl$downloader$ism\n");

    moduledict_youtube_dl$downloader$ism = MODULE_DICT(module_youtube_dl$downloader$ism);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_youtube_dl$downloader$ism,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$downloader$ism,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[185]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$downloader$ism,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$downloader$ism,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$downloader$ism,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_youtube_dl$downloader$ism);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_youtube_dl$downloader$ism);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_e6b9ec36089603f95c9892ebedac2e77;
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
    PyObject *locals_youtube_dl$downloader$ism$$$class__1_IsmFD_206 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_6e2010361b4bc95db54fdfb69d1c0ec1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6e2010361b4bc95db54fdfb69d1c0ec1_2 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_e6b9ec36089603f95c9892ebedac2e77 = MAKE_MODULE_FRAME(codeobj_e6b9ec36089603f95c9892ebedac2e77, module_youtube_dl$downloader$ism);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_e6b9ec36089603f95c9892ebedac2e77);
    assert(Py_REFCNT(frame_e6b9ec36089603f95c9892ebedac2e77) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[135], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[136], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[138]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[14];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_youtube_dl$downloader$ism;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[13];
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[65];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_youtube_dl$downloader$ism;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[13];
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_IO();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[140];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_youtube_dl$downloader$ism;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[141];
        tmp_level_value_3 = mod_consts[31];
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_youtube_dl$downloader$ism,
                mod_consts[142],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[142]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[143];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_youtube_dl$downloader$ism;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[144];
        tmp_level_value_4 = mod_consts[25];
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 8;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_youtube_dl$downloader$ism,
                mod_consts[145],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[145]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_youtube_dl$downloader$ism,
                mod_consts[125],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[125]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_11);
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 14;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[146]);

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 15;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[147]);

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 16;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[149]);

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 17;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[150]);

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 18;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[151]);

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 19;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[152]);

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 21;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[153]);

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 22;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[154]);

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 23;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[155]);

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 24;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[156]);

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 26;
        tmp_add_expr_left_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[158], 0)
        );

        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 26;
        tmp_mult_expr_left_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = mod_consts[44];
        tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = mod_consts[25];
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 26;
        tmp_add_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[159], 0)
        );

        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[160];
        UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_youtube_dl$downloader$ism$$$function__1_box();

        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_youtube_dl$downloader$ism$$$function__2_full_box();

        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_youtube_dl$downloader$ism$$$function__3_write_piff_header();

        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_youtube_dl$downloader$ism$$$function__4_extract_box_data();

        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_30);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_2;
        }
        tmp_assign_source_31 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_31, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_32 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
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
        tmp_key_value_1 = mod_consts[161];
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
        tmp_key_value_2 = mod_consts[161];
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


            exception_lineno = 206;

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
        tmp_subscript_value_1 = mod_consts[13];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

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
        tmp_assign_source_34 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[161];
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
    tmp_dictdel_key = mod_consts[161];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 206;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[162]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[162]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[163];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 206;
        tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_35;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[164]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

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
        tmp_mod_expr_left_1 = mod_consts[165];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[166];
        tmp_getattr_default_1 = mod_consts[167];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[166]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

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


            exception_lineno = 206;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 206;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_36;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_youtube_dl$downloader$ism$$$class__1_IsmFD_206 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[168];
        tmp_res = PyObject_SetItem(locals_youtube_dl$downloader$ism$$$class__1_IsmFD_206, mod_consts[169], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[170];
        tmp_res = PyObject_SetItem(locals_youtube_dl$downloader$ism$$$class__1_IsmFD_206, mod_consts[132], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[163];
        tmp_res = PyObject_SetItem(locals_youtube_dl$downloader$ism$$$class__1_IsmFD_206, mod_consts[171], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_6e2010361b4bc95db54fdfb69d1c0ec1_2)) {
            Py_XDECREF(cache_frame_6e2010361b4bc95db54fdfb69d1c0ec1_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6e2010361b4bc95db54fdfb69d1c0ec1_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6e2010361b4bc95db54fdfb69d1c0ec1_2 = MAKE_CLASS_FRAME(codeobj_6e2010361b4bc95db54fdfb69d1c0ec1, module_youtube_dl$downloader$ism, NULL, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6e2010361b4bc95db54fdfb69d1c0ec1_2->m_type_description == NULL);
        frame_6e2010361b4bc95db54fdfb69d1c0ec1_2 = cache_frame_6e2010361b4bc95db54fdfb69d1c0ec1_2;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_6e2010361b4bc95db54fdfb69d1c0ec1_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6e2010361b4bc95db54fdfb69d1c0ec1_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[172];
        tmp_res = PyObject_SetItem(locals_youtube_dl$downloader$ism$$$class__1_IsmFD_206, mod_consts[173], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$downloader$ism$$$function__5_real_download();

        tmp_res = PyObject_SetItem(locals_youtube_dl$downloader$ism$$$class__1_IsmFD_206, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6e2010361b4bc95db54fdfb69d1c0ec1_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6e2010361b4bc95db54fdfb69d1c0ec1_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6e2010361b4bc95db54fdfb69d1c0ec1_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6e2010361b4bc95db54fdfb69d1c0ec1_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6e2010361b4bc95db54fdfb69d1c0ec1_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6e2010361b4bc95db54fdfb69d1c0ec1_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_6e2010361b4bc95db54fdfb69d1c0ec1_2 == cache_frame_6e2010361b4bc95db54fdfb69d1c0ec1_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_6e2010361b4bc95db54fdfb69d1c0ec1_2);
            cache_frame_6e2010361b4bc95db54fdfb69d1c0ec1_2 = NULL;
        }

        assertFrameObject(frame_6e2010361b4bc95db54fdfb69d1c0ec1_2);

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


                exception_lineno = 206;

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
        tmp_res = PyObject_SetItem(locals_youtube_dl$downloader$ism$$$class__1_IsmFD_206, mod_consts[176], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_12 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[163];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_youtube_dl$downloader$ism$$$class__1_IsmFD_206;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_e6b9ec36089603f95c9892ebedac2e77->m_frame.f_lineno = 206;
            tmp_assign_source_38 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_38;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_37 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_37);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_youtube_dl$downloader$ism$$$class__1_IsmFD_206);
        locals_youtube_dl$downloader$ism$$$class__1_IsmFD_206 = NULL;
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

        Py_DECREF(locals_youtube_dl$downloader$ism$$$class__1_IsmFD_206);
        locals_youtube_dl$downloader$ism$$$class__1_IsmFD_206 = NULL;
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
        exception_lineno = 206;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_37);
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
    RESTORE_FRAME_EXCEPTION(frame_e6b9ec36089603f95c9892ebedac2e77);
#endif
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6b9ec36089603f95c9892ebedac2e77);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e6b9ec36089603f95c9892ebedac2e77, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e6b9ec36089603f95c9892ebedac2e77->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6b9ec36089603f95c9892ebedac2e77, exception_lineno);
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
    PGO_onModuleExit("youtube_dl.downloader.ism", false);

    Py_INCREF(module_youtube_dl$downloader$ism);
    return module_youtube_dl$downloader$ism;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$ism, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("youtube_dl$downloader$ism", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
