/* Generated code for Python module 'youtube_dl.extractor.niconico'
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

/* The "module_youtube_dl$extractor$niconico" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_youtube_dl$extractor$niconico;
PyDictObject *moduledict_youtube_dl$extractor$niconico;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[383];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[383];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("youtube_dl.extractor.niconico"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 383; i++) {
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
void checkModuleConstants_youtube_dl$extractor$niconico(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 383; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_bca1db37106f5da744866cba9927511a;
static PyCodeObject *codeobj_e3b52fca144c29d1b453e06d3e8efd4c;
static PyCodeObject *codeobj_b1be06952b8de3d5b6ecc750a790cf93;
static PyCodeObject *codeobj_edbda1cc9072cccdc7f2a0ad07f3a35b;
static PyCodeObject *codeobj_490f62a4d35fc71e87711482f44cfe27;
static PyCodeObject *codeobj_07f2ae3266047f7d1922739b2d7cf96c;
static PyCodeObject *codeobj_c34667799335a9c4f899a6cdfc6a0bec;
static PyCodeObject *codeobj_9908ff88e6a8ce6c1e5ac9e72dd5d3bc;
static PyCodeObject *codeobj_e7539b1ec9ef4a2256ecbcb2559d0abc;
static PyCodeObject *codeobj_3732e729aefd0dab92308be46ac4639e;
static PyCodeObject *codeobj_19e29283493effc639ca8abe0f9ffe61;
static PyCodeObject *codeobj_9dbeb518d458e51c9e908930b1a69878;
static PyCodeObject *codeobj_bf9d958a46104684da3954756e9bd409;
static PyCodeObject *codeobj_f2f221a63042e026b7fcc91a4b56fe86;
static PyCodeObject *codeobj_638217ab9fa1177c4abb9be8aed80bc5;
static PyCodeObject *codeobj_9f95fb690067d54888b343a272462285;
static PyCodeObject *codeobj_1e4ed3c5b42d4df2c412090cb0f10818;
static PyCodeObject *codeobj_036be7a0618e1e79fe886415fd2eb297;
static PyCodeObject *codeobj_50910376f48093012230a7c1556b6b27;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[362]); CHECK_OBJECT(module_filename_obj);
    codeobj_bca1db37106f5da744866cba9927511a = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[30], mod_consts[30], mod_consts[363], NULL, 1, 0, 0);
    codeobj_e3b52fca144c29d1b453e06d3e8efd4c = MAKE_CODE_OBJECT(module_filename_obj, 403, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[30], mod_consts[30], mod_consts[364], NULL, 1, 0, 0);
    codeobj_b1be06952b8de3d5b6ecc750a790cf93 = MAKE_CODE_OBJECT(module_filename_obj, 422, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[30], mod_consts[30], mod_consts[364], NULL, 1, 0, 0);
    codeobj_edbda1cc9072cccdc7f2a0ad07f3a35b = MAKE_CODE_OBJECT(module_filename_obj, 488, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, mod_consts[30], mod_consts[30], mod_consts[365], mod_consts[242], 1, 0, 0);
    codeobj_490f62a4d35fc71e87711482f44cfe27 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[366], mod_consts[366], NULL, NULL, 0, 0, 0);
    codeobj_07f2ae3266047f7d1922739b2d7cf96c = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[250], mod_consts[250], mod_consts[367], NULL, 0, 0, 0);
    codeobj_c34667799335a9c4f899a6cdfc6a0bec = MAKE_CODE_OBJECT(module_filename_obj, 442, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[355], mod_consts[355], mod_consts[367], NULL, 0, 0, 0);
    codeobj_9908ff88e6a8ce6c1e5ac9e72dd5d3bc = MAKE_CODE_OBJECT(module_filename_obj, 461, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[235], mod_consts[235], mod_consts[368], NULL, 4, 0, 0);
    codeobj_e7539b1ec9ef4a2256ecbcb2559d0abc = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[148], mod_consts[148], mod_consts[369], NULL, 5, 0, 0);
    codeobj_3732e729aefd0dab92308be46ac4639e = MAKE_CODE_OBJECT(module_filename_obj, 476, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[252], mod_consts[252], mod_consts[370], NULL, 3, 0, 0);
    codeobj_19e29283493effc639ca8abe0f9ffe61 = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, mod_consts[114], mod_consts[114], mod_consts[371], mod_consts[372], 1, 0, 0);
    codeobj_9dbeb518d458e51c9e908930b1a69878 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[0], mod_consts[0], mod_consts[373], NULL, 1, 0, 0);
    codeobj_bf9d958a46104684da3954756e9bd409 = MAKE_CODE_OBJECT(module_filename_obj, 467, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[251], mod_consts[251], mod_consts[374], NULL, 2, 0, 0);
    codeobj_f2f221a63042e026b7fcc91a4b56fe86 = MAKE_CODE_OBJECT(module_filename_obj, 503, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[352], mod_consts[352], mod_consts[375], NULL, 2, 0, 0);
    codeobj_638217ab9fa1177c4abb9be8aed80bc5 = MAKE_CODE_OBJECT(module_filename_obj, 272, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[352], mod_consts[352], mod_consts[376], NULL, 2, 0, 0);
    codeobj_9f95fb690067d54888b343a272462285 = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[348], mod_consts[348], mod_consts[377], NULL, 1, 0, 0);
    codeobj_1e4ed3c5b42d4df2c412090cb0f10818 = MAKE_CODE_OBJECT(module_filename_obj, 356, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, mod_consts[135], mod_consts[135], mod_consts[378], mod_consts[379], 1, 0, 0);
    codeobj_036be7a0618e1e79fe886415fd2eb297 = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, mod_consts[135], mod_consts[135], mod_consts[380], mod_consts[381], 1, 0, 0);
    codeobj_50910376f48093012230a7c1556b6b27 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[23], mod_consts[23], mod_consts[382], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_youtube_dl$extractor$niconico$$$function__7__fetch_page$$$genobj__1__fetch_page(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__1__real_initialize();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__2__login();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality$$$function__1_yesno();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality$$$function__2_lambda();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__1__format_id_from_url(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__2_get_video_info(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__3_get_video_info(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__4_lambda();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__5_lambda();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__5__call_api();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__6__parse_owner();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__7__fetch_page();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__7__fetch_page$$$genobj__1__fetch_page$$$function__1_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__8__real_extract();


// The module function definitions.
static PyObject *impl_youtube_dl$extractor$niconico$$$function__1__real_initialize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9f95fb690067d54888b343a272462285;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9f95fb690067d54888b343a272462285 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9f95fb690067d54888b343a272462285)) {
        Py_XDECREF(cache_frame_9f95fb690067d54888b343a272462285);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9f95fb690067d54888b343a272462285 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9f95fb690067d54888b343a272462285 = MAKE_FUNCTION_FRAME(codeobj_9f95fb690067d54888b343a272462285, module_youtube_dl$extractor$niconico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9f95fb690067d54888b343a272462285->m_type_description == NULL);
    frame_9f95fb690067d54888b343a272462285 = cache_frame_9f95fb690067d54888b343a272462285;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_9f95fb690067d54888b343a272462285);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9f95fb690067d54888b343a272462285) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_9f95fb690067d54888b343a272462285->m_frame.f_lineno = 166;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[0]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9f95fb690067d54888b343a272462285);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9f95fb690067d54888b343a272462285);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9f95fb690067d54888b343a272462285, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f95fb690067d54888b343a272462285->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f95fb690067d54888b343a272462285, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9f95fb690067d54888b343a272462285,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9f95fb690067d54888b343a272462285 == cache_frame_9f95fb690067d54888b343a272462285) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9f95fb690067d54888b343a272462285);
        cache_frame_9f95fb690067d54888b343a272462285 = NULL;
    }

    assertFrameObject(frame_9f95fb690067d54888b343a272462285);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$niconico$$$function__2__login(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_username = NULL;
    PyObject *var_password = NULL;
    nuitka_bool var_login_ok = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_login_form_strs = NULL;
    PyObject *var_urlh = NULL;
    PyObject *var_parts = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9dbeb518d458e51c9e908930b1a69878;
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
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9dbeb518d458e51c9e908930b1a69878 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9dbeb518d458e51c9e908930b1a69878)) {
        Py_XDECREF(cache_frame_9dbeb518d458e51c9e908930b1a69878);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9dbeb518d458e51c9e908930b1a69878 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9dbeb518d458e51c9e908930b1a69878 = MAKE_FUNCTION_FRAME(codeobj_9dbeb518d458e51c9e908930b1a69878, module_youtube_dl$extractor$niconico, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9dbeb518d458e51c9e908930b1a69878->m_type_description == NULL);
    frame_9dbeb518d458e51c9e908930b1a69878 = cache_frame_9dbeb518d458e51c9e908930b1a69878;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_9dbeb518d458e51c9e908930b1a69878);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9dbeb518d458e51c9e908930b1a69878) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_9dbeb518d458e51c9e908930b1a69878->m_frame.f_lineno = 169;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooobooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooobooo";
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
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooobooo";
            exception_lineno = 169;
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
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooobooo";
            exception_lineno = 169;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "ooobooo";
                    exception_lineno = 169;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[2];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooobooo";
            exception_lineno = 169;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_username == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_username = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_password == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_password = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_username);
        tmp_operand_value_1 = var_username;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooobooo";
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
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        var_login_ok = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[3];
        CHECK_OBJECT(var_username);
        tmp_dict_value_1 = var_username;
        tmp_assign_source_7 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[4];
        CHECK_OBJECT(var_password);
        tmp_dict_value_1 = var_password;
        tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_login_form_strs == NULL);
        var_login_form_strs = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooobooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[6];
        tmp_kw_call_value_1_1 = mod_consts[7];
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 183;
            type_description_1 = "ooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_login_form_strs);
        tmp_args_element_value_1 = var_login_form_strs;
        frame_9dbeb518d458e51c9e908930b1a69878->m_frame.f_lineno = 183;
        tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 183;
            type_description_1 = "ooobooo";
            goto frame_exception_exit_1;
        }
        frame_9dbeb518d458e51c9e908930b1a69878->m_frame.f_lineno = 180;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tmp_called_value_1, mod_consts[9], kw_values, mod_consts[10]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooobooo";
            goto frame_exception_exit_1;
        }
        assert(var_urlh == NULL);
        var_urlh = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_urlh);
        tmp_cmp_expr_left_1 = var_urlh;
        tmp_cmp_expr_right_1 = Py_False;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_FALSE;
        var_login_ok = tmp_assign_source_9;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_urlh);
        tmp_called_instance_2 = var_urlh;
        frame_9dbeb518d458e51c9e908930b1a69878->m_frame.f_lineno = 187;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[12]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooobooo";
            goto frame_exception_exit_1;
        }
        frame_9dbeb518d458e51c9e908930b1a69878->m_frame.f_lineno = 187;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooobooo";
            goto frame_exception_exit_1;
        }
        assert(var_parts == NULL);
        var_parts = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parts);
        tmp_expression_value_4 = var_parts;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[14]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooobooo";
            goto frame_exception_exit_1;
        }
        frame_9dbeb518d458e51c9e908930b1a69878->m_frame.f_lineno = 188;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooobooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[15]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooobooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[16];
        tmp_call_arg_element_2 = LIST_COPY(mod_consts[17]);
        frame_9dbeb518d458e51c9e908930b1a69878->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooobooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[18];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooobooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[19];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooobooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_FALSE;
        var_login_ok = tmp_assign_source_11;
    }
    branch_no_3:;
    branch_end_2:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        assert(var_login_ok != NUITKA_BOOL_UNASSIGNED);
        tmp_operand_value_2 = (var_login_ok == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[20]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooobooo";
            goto frame_exception_exit_1;
        }
        frame_9dbeb518d458e51c9e908930b1a69878->m_frame.f_lineno = 191;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[21],
            PyTuple_GET_ITEM(mod_consts[22], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooobooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_4:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9dbeb518d458e51c9e908930b1a69878);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9dbeb518d458e51c9e908930b1a69878);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9dbeb518d458e51c9e908930b1a69878);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9dbeb518d458e51c9e908930b1a69878, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9dbeb518d458e51c9e908930b1a69878->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9dbeb518d458e51c9e908930b1a69878, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9dbeb518d458e51c9e908930b1a69878,
        type_description_1,
        par_self,
        var_username,
        var_password,
        (int)var_login_ok,
        var_login_form_strs,
        var_urlh,
        var_parts
    );


    // Release cached frame if used for exception.
    if (frame_9dbeb518d458e51c9e908930b1a69878 == cache_frame_9dbeb518d458e51c9e908930b1a69878) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9dbeb518d458e51c9e908930b1a69878);
        cache_frame_9dbeb518d458e51c9e908930b1a69878 = NULL;
    }

    assertFrameObject(frame_9dbeb518d458e51c9e908930b1a69878);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    assert(var_login_ok != NUITKA_BOOL_UNASSIGNED);
    tmp_return_value = (var_login_ok == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_username);
    Py_DECREF(var_username);
    var_username = NULL;
    CHECK_OBJECT(var_password);
    Py_DECREF(var_password);
    var_password = NULL;
    var_login_ok = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_login_form_strs);
    var_login_form_strs = NULL;
    Py_XDECREF(var_urlh);
    var_urlh = NULL;
    Py_XDECREF(var_parts);
    var_parts = NULL;
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

    Py_XDECREF(var_username);
    var_username = NULL;
    Py_XDECREF(var_password);
    var_password = NULL;
    var_login_ok = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_login_form_strs);
    var_login_form_strs = NULL;
    Py_XDECREF(var_urlh);
    var_urlh = NULL;
    Py_XDECREF(var_parts);
    var_parts = NULL;
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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_api_data = python_pars[1];
    PyObject *par_video_id = python_pars[2];
    PyObject *par_audio_quality = python_pars[3];
    PyObject *par_video_quality = python_pars[4];
    PyObject *var_yesno = NULL;
    PyObject *var_session_api_data = NULL;
    PyObject *var_session_api_endpoint = NULL;
    PyObject *var_format_id = NULL;
    PyObject *var_session_response = NULL;
    PyObject *var_resolution = NULL;
    struct Nuitka_FrameObject *frame_e7539b1ec9ef4a2256ecbcb2559d0abc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e7539b1ec9ef4a2256ecbcb2559d0abc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality$$$function__1_yesno();

        assert(var_yesno == NULL);
        var_yesno = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_e7539b1ec9ef4a2256ecbcb2559d0abc)) {
        Py_XDECREF(cache_frame_e7539b1ec9ef4a2256ecbcb2559d0abc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e7539b1ec9ef4a2256ecbcb2559d0abc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e7539b1ec9ef4a2256ecbcb2559d0abc = MAKE_FUNCTION_FRAME(codeobj_e7539b1ec9ef4a2256ecbcb2559d0abc, module_youtube_dl$extractor$niconico, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e7539b1ec9ef4a2256ecbcb2559d0abc->m_type_description == NULL);
    frame_e7539b1ec9ef4a2256ecbcb2559d0abc = cache_frame_e7539b1ec9ef4a2256ecbcb2559d0abc;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_e7539b1ec9ef4a2256ecbcb2559d0abc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e7539b1ec9ef4a2256ecbcb2559d0abc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_api_data);
        tmp_expression_value_3 = par_api_data;
        tmp_subscript_value_1 = mod_consts[25];
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[26];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[27];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_session_api_data == NULL);
        var_session_api_data = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_session_api_data);
        tmp_expression_value_5 = var_session_api_data;
        tmp_subscript_value_4 = mod_consts[28];
        tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_4);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = mod_consts[18];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_5, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_session_api_endpoint == NULL);
        var_session_api_endpoint = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_1;
        tmp_str_arg_value_1 = mod_consts[29];
        tmp_called_value_1 = (PyObject *)&PyMap_Type;


        tmp_args_element_value_1 = MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality$$$function__2_lambda();

        CHECK_OBJECT(par_video_quality);
        tmp_list_element_1 = par_video_quality;
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_args_element_value_2, 0, tmp_list_element_1);
        CHECK_OBJECT(par_audio_quality);
        tmp_list_element_1 = par_audio_quality;
        PyList_SET_ITEM0(tmp_args_element_value_2, 1, tmp_list_element_1);
        frame_e7539b1ec9ef4a2256ecbcb2559d0abc->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iterable_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_format_id == NULL);
        var_format_id = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[32]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_session_api_endpoint);
        tmp_expression_value_7 = var_session_api_endpoint;
        tmp_subscript_value_6 = mod_consts[33];
        tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_6);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 204;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_video_id);
        tmp_kw_call_arg_value_1_1 = par_video_id;
        tmp_kw_call_dict_value_0_1 = DICT_COPY(mod_consts[34]);
        tmp_kw_call_dict_value_1_1 = DICT_COPY(mod_consts[35]);
        tmp_mod_expr_left_1 = mod_consts[36];
        CHECK_OBJECT(var_format_id);
        tmp_mod_expr_right_1 = var_format_id;
        tmp_kw_call_dict_value_2_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_UNICODE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 207;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);

            exception_lineno = 208;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[38]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);

            exception_lineno = 208;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[39];
        tmp_dict_key_2 = mod_consts[40];
        tmp_dict_key_3 = mod_consts[41];
        CHECK_OBJECT(var_session_api_data);
        tmp_expression_value_10 = var_session_api_data;
        tmp_subscript_value_7 = mod_consts[41];
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_7);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 211;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = _PyDict_NewPresized( 12 );
        {
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_list_element_2;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_list_element_3;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_list_element_4;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_22;
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[42];
            tmp_dict_key_4 = mod_consts[43];
            CHECK_OBJECT(var_session_api_data);
            tmp_expression_value_12 = var_session_api_data;
            tmp_subscript_value_8 = mod_consts[44];
            tmp_expression_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_8);
            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(var_session_api_data);
            tmp_expression_value_14 = var_session_api_data;
            tmp_subscript_value_10 = mod_consts[45];
            tmp_expression_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_10);
            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_11);

                exception_lineno = 214;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_value_11 = mod_consts[18];
            tmp_subscript_value_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_11, 0);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_subscript_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_11);

                exception_lineno = 214;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_11);
            Py_DECREF(tmp_subscript_value_9);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_15;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_subscript_value_13;
                tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[46];
                CHECK_OBJECT(var_session_api_data);
                tmp_expression_value_15 = var_session_api_data;
                tmp_subscript_value_12 = mod_consts[46];
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_12);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 215;
                    type_description_1 = "ooooooooooo";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[47];
                tmp_dict_value_4 = mod_consts[48];
                tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[49];
                CHECK_OBJECT(var_session_api_data);
                tmp_expression_value_16 = var_session_api_data;
                tmp_subscript_value_13 = mod_consts[49];
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_13);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 217;
                    type_description_1 = "ooooooooooo";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[50];
            CHECK_OBJECT(var_session_api_data);
            tmp_expression_value_17 = var_session_api_data;
            tmp_subscript_value_14 = mod_consts[50];
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_14);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[51];
            tmp_dict_key_5 = mod_consts[52];
            tmp_dict_key_6 = mod_consts[53];
            tmp_dict_key_7 = mod_consts[54];
            CHECK_OBJECT(par_audio_quality);
            tmp_expression_value_18 = par_audio_quality;
            tmp_subscript_value_15 = mod_consts[55];
            tmp_list_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_15);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_7 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dict_value_7, 0, tmp_list_element_4);
            tmp_dict_value_6 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_list_element_5;
                PyObject *tmp_expression_value_19;
                PyObject *tmp_subscript_value_16;
                tmp_res = PyDict_SetItem(tmp_dict_value_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[56];
                CHECK_OBJECT(par_video_quality);
                tmp_expression_value_19 = par_video_quality;
                tmp_subscript_value_16 = mod_consts[55];
                tmp_list_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_16);
                if (tmp_list_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 224;
                    type_description_1 = "ooooooooooo";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_7 = MAKE_LIST_EMPTY(1);
                PyList_SET_ITEM(tmp_dict_value_7, 0, tmp_list_element_5);
                tmp_res = PyDict_SetItem(tmp_dict_value_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_dict_value_6);
            goto dict_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            tmp_list_element_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_list_element_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_value_5 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dict_value_5, 0, tmp_list_element_3);
            tmp_list_element_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_list_element_2, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_value_2 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dict_value_2, 0, tmp_list_element_2);
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[57];
            tmp_dict_value_2 = mod_consts[58];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[59];
            tmp_dict_value_2 = mod_consts[60];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[61];
            tmp_dict_key_8 = mod_consts[62];
            tmp_dict_key_9 = mod_consts[63];
            CHECK_OBJECT(var_session_api_data);
            tmp_expression_value_20 = var_session_api_data;
            tmp_subscript_value_17 = mod_consts[64];
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_17);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_8, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_value_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[65];
            CHECK_OBJECT(var_session_api_data);
            tmp_expression_value_21 = var_session_api_data;
            tmp_subscript_value_18 = mod_consts[65];
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_18);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[66];
            tmp_dict_key_10 = mod_consts[67];
            tmp_dict_value_10 = mod_consts[68];
            tmp_dict_value_2 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_dict_key_11;
                PyObject *tmp_dict_value_11;
                PyObject *tmp_dict_key_12;
                PyObject *tmp_dict_value_12;
                PyObject *tmp_dict_key_13;
                PyObject *tmp_dict_value_13;
                PyObject *tmp_dict_key_14;
                PyObject *tmp_dict_value_14;
                PyObject *tmp_called_value_5;
                PyObject *tmp_args_element_value_4;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_19;
                tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_10, tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[69];
                tmp_dict_key_11 = mod_consts[70];
                tmp_dict_key_12 = mod_consts[69];
                tmp_dict_key_13 = mod_consts[71];
                tmp_dict_key_14 = mod_consts[72];
                CHECK_OBJECT(var_yesno);
                tmp_called_value_5 = var_yesno;
                CHECK_OBJECT(var_session_api_endpoint);
                tmp_expression_value_22 = var_session_api_endpoint;
                tmp_subscript_value_19 = mod_consts[73];
                tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_19);
                if (tmp_args_element_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 242;
                    type_description_1 = "ooooooooooo";
                    goto dict_build_exception_4;
                }
                frame_e7539b1ec9ef4a2256ecbcb2559d0abc->m_frame.f_lineno = 242;
                tmp_dict_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_4);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 242;
                    type_description_1 = "ooooooooooo";
                    goto dict_build_exception_4;
                }
                tmp_dict_value_13 = _PyDict_NewPresized( 2 );
                {
                    PyObject *tmp_called_value_6;
                    PyObject *tmp_args_element_value_5;
                    PyObject *tmp_expression_value_23;
                    PyObject *tmp_subscript_value_20;
                    tmp_res = PyDict_SetItem(tmp_dict_value_13, tmp_dict_key_14, tmp_dict_value_14);
                    Py_DECREF(tmp_dict_value_14);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_14 = mod_consts[74];
                    CHECK_OBJECT(var_yesno);
                    tmp_called_value_6 = var_yesno;
                    CHECK_OBJECT(var_session_api_endpoint);
                    tmp_expression_value_23 = var_session_api_endpoint;
                    tmp_subscript_value_20 = mod_consts[75];
                    tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_20);
                    if (tmp_args_element_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 243;
                        type_description_1 = "ooooooooooo";
                        goto dict_build_exception_5;
                    }
                    frame_e7539b1ec9ef4a2256ecbcb2559d0abc->m_frame.f_lineno = 243;
                    tmp_dict_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
                    Py_DECREF(tmp_args_element_value_5);
                    if (tmp_dict_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 243;
                        type_description_1 = "ooooooooooo";
                        goto dict_build_exception_5;
                    }
                    tmp_res = PyDict_SetItem(tmp_dict_value_13, tmp_dict_key_14, tmp_dict_value_14);
                    Py_DECREF(tmp_dict_value_14);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_3;
                // Exception handling pass through code for dict_build:
                dict_build_exception_5:;
                Py_DECREF(tmp_dict_value_13);
                goto dict_build_exception_4;
                // Finished with no exception for dict_build:
                dict_build_noexception_3:;
                tmp_dict_value_12 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem(tmp_dict_value_12, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_value_11 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem(tmp_dict_value_11, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_value_10 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem(tmp_dict_value_10, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[76];
            CHECK_OBJECT(var_session_api_data);
            tmp_expression_value_24 = var_session_api_data;
            tmp_subscript_value_21 = mod_consts[76];
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_21);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[77];
            tmp_dict_key_15 = mod_consts[78];
            tmp_dict_key_16 = mod_consts[79];
            CHECK_OBJECT(var_session_api_data);
            tmp_expression_value_25 = var_session_api_data;
            tmp_subscript_value_22 = mod_consts[79];
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_22);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_15 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_23;
                tmp_res = PyDict_SetItem(tmp_dict_value_15, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[80];
                CHECK_OBJECT(var_session_api_data);
                tmp_expression_value_26 = var_session_api_data;
                tmp_subscript_value_23 = mod_consts[80];
                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_23);
                if (tmp_dict_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 253;
                    type_description_1 = "ooooooooooo";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_15, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_dict_value_15);
            goto dict_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            tmp_dict_value_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[81];
            tmp_dict_value_2 = mod_consts[82];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_dict_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        tmp_args_element_value_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_e7539b1ec9ef4a2256ecbcb2559d0abc->m_frame.f_lineno = 208;
        tmp_expression_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);

            exception_lineno = 208;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[83]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);

            exception_lineno = 208;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e7539b1ec9ef4a2256ecbcb2559d0abc->m_frame.f_lineno = 208;
        tmp_kw_call_dict_value_3_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_kw_call_dict_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);

            exception_lineno = 208;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e7539b1ec9ef4a2256ecbcb2559d0abc->m_frame.f_lineno = 203;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[84]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        Py_DECREF(tmp_kw_call_dict_value_3_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_session_response == NULL);
        var_session_response = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(par_video_quality);
        tmp_expression_value_27 = par_video_quality;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[15]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[85];
        tmp_call_arg_element_2 = MAKE_DICT_EMPTY();
        frame_e7539b1ec9ef4a2256ecbcb2559d0abc->m_frame.f_lineno = 260;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_resolution == NULL);
        var_resolution = tmp_assign_source_6;
    }
    {
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_subscript_value_26;
        tmp_dict_key_17 = mod_consts[33];
        CHECK_OBJECT(var_session_response);
        tmp_expression_value_30 = var_session_response;
        tmp_subscript_value_24 = mod_consts[86];
        tmp_expression_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_24);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_25 = mod_consts[39];
        tmp_expression_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_25);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_26 = mod_consts[59];
        tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_26);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = _PyDict_NewPresized( 7 );
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_34;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[87];
            CHECK_OBJECT(var_format_id);
            tmp_dict_value_17 = var_format_id;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[88];
            tmp_dict_value_17 = mod_consts[89];
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[90];
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_7;
            }
            CHECK_OBJECT(par_audio_quality);
            tmp_expression_value_31 = par_audio_quality;
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[15]);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_7;
            }
            frame_e7539b1ec9ef4a2256ecbcb2559d0abc->m_frame.f_lineno = 266;
            tmp_args_element_value_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[92]);

            Py_DECREF(tmp_called_value_9);
            if (tmp_args_element_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_args_element_value_7 = mod_consts[93];
            frame_e7539b1ec9ef4a2256ecbcb2559d0abc->m_frame.f_lineno = 266;
            {
                PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
                tmp_dict_value_17 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
            }

            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[94];
            tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_called_value_10 == NULL)) {
                tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_7;
            }
            CHECK_OBJECT(par_video_quality);
            tmp_expression_value_32 = par_video_quality;
            tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[15]);
            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_7;
            }
            frame_e7539b1ec9ef4a2256ecbcb2559d0abc->m_frame.f_lineno = 267;
            tmp_args_element_value_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[92]);

            Py_DECREF(tmp_called_value_11);
            if (tmp_args_element_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_args_element_value_9 = mod_consts[93];
            frame_e7539b1ec9ef4a2256ecbcb2559d0abc->m_frame.f_lineno = 267;
            {
                PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
                tmp_dict_value_17 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
            }

            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[95];
            CHECK_OBJECT(var_resolution);
            tmp_expression_value_33 = var_resolution;
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[15]);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_7;
            }
            frame_e7539b1ec9ef4a2256ecbcb2559d0abc->m_frame.f_lineno = 268;
            tmp_dict_value_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_12, mod_consts[96]);

            Py_DECREF(tmp_called_value_12);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[97];
            CHECK_OBJECT(var_resolution);
            tmp_expression_value_34 = var_resolution;
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[15]);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_7;
            }
            frame_e7539b1ec9ef4a2256ecbcb2559d0abc->m_frame.f_lineno = 269;
            tmp_dict_value_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[98]);

            Py_DECREF(tmp_called_value_13);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e7539b1ec9ef4a2256ecbcb2559d0abc);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e7539b1ec9ef4a2256ecbcb2559d0abc);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e7539b1ec9ef4a2256ecbcb2559d0abc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e7539b1ec9ef4a2256ecbcb2559d0abc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e7539b1ec9ef4a2256ecbcb2559d0abc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e7539b1ec9ef4a2256ecbcb2559d0abc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e7539b1ec9ef4a2256ecbcb2559d0abc,
        type_description_1,
        par_self,
        par_api_data,
        par_video_id,
        par_audio_quality,
        par_video_quality,
        var_yesno,
        var_session_api_data,
        var_session_api_endpoint,
        var_format_id,
        var_session_response,
        var_resolution
    );


    // Release cached frame if used for exception.
    if (frame_e7539b1ec9ef4a2256ecbcb2559d0abc == cache_frame_e7539b1ec9ef4a2256ecbcb2559d0abc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e7539b1ec9ef4a2256ecbcb2559d0abc);
        cache_frame_e7539b1ec9ef4a2256ecbcb2559d0abc = NULL;
    }

    assertFrameObject(frame_e7539b1ec9ef4a2256ecbcb2559d0abc);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_yesno);
    Py_DECREF(var_yesno);
    var_yesno = NULL;
    CHECK_OBJECT(var_session_api_data);
    Py_DECREF(var_session_api_data);
    var_session_api_data = NULL;
    CHECK_OBJECT(var_session_api_endpoint);
    Py_DECREF(var_session_api_endpoint);
    var_session_api_endpoint = NULL;
    CHECK_OBJECT(var_format_id);
    Py_DECREF(var_format_id);
    var_format_id = NULL;
    CHECK_OBJECT(var_session_response);
    Py_DECREF(var_session_response);
    var_session_response = NULL;
    CHECK_OBJECT(var_resolution);
    Py_DECREF(var_resolution);
    var_resolution = NULL;
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

    CHECK_OBJECT(var_yesno);
    Py_DECREF(var_yesno);
    var_yesno = NULL;
    Py_XDECREF(var_session_api_data);
    var_session_api_data = NULL;
    Py_XDECREF(var_session_api_endpoint);
    var_session_api_endpoint = NULL;
    Py_XDECREF(var_format_id);
    var_format_id = NULL;
    Py_XDECREF(var_session_response);
    var_session_response = NULL;
    Py_XDECREF(var_resolution);
    var_resolution = NULL;
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
    CHECK_OBJECT(par_api_data);
    Py_DECREF(par_api_data);
    CHECK_OBJECT(par_video_id);
    Py_DECREF(par_video_id);
    CHECK_OBJECT(par_audio_quality);
    Py_DECREF(par_audio_quality);
    CHECK_OBJECT(par_video_quality);
    Py_DECREF(par_video_quality);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_api_data);
    Py_DECREF(par_api_data);
    CHECK_OBJECT(par_video_id);
    Py_DECREF(par_video_id);
    CHECK_OBJECT(par_audio_quality);
    Py_DECREF(par_audio_quality);
    CHECK_OBJECT(par_video_quality);
    Py_DECREF(par_video_quality);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality$$$function__1_yesno(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_boolean = python_pars[0];
    struct Nuitka_FrameObject *frame_50910376f48093012230a7c1556b6b27;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_50910376f48093012230a7c1556b6b27 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_50910376f48093012230a7c1556b6b27)) {
        Py_XDECREF(cache_frame_50910376f48093012230a7c1556b6b27);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50910376f48093012230a7c1556b6b27 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50910376f48093012230a7c1556b6b27 = MAKE_FUNCTION_FRAME(codeobj_50910376f48093012230a7c1556b6b27, module_youtube_dl$extractor$niconico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_50910376f48093012230a7c1556b6b27->m_type_description == NULL);
    frame_50910376f48093012230a7c1556b6b27 = cache_frame_50910376f48093012230a7c1556b6b27;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_50910376f48093012230a7c1556b6b27);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_50910376f48093012230a7c1556b6b27) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_boolean);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_boolean);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_return_value = mod_consts[99];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_return_value = mod_consts[100];
        condexpr_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_50910376f48093012230a7c1556b6b27);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_50910376f48093012230a7c1556b6b27);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_50910376f48093012230a7c1556b6b27);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_50910376f48093012230a7c1556b6b27, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50910376f48093012230a7c1556b6b27->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50910376f48093012230a7c1556b6b27, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50910376f48093012230a7c1556b6b27,
        type_description_1,
        par_boolean
    );


    // Release cached frame if used for exception.
    if (frame_50910376f48093012230a7c1556b6b27 == cache_frame_50910376f48093012230a7c1556b6b27) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_50910376f48093012230a7c1556b6b27);
        cache_frame_50910376f48093012230a7c1556b6b27 = NULL;
    }

    assertFrameObject(frame_50910376f48093012230a7c1556b6b27);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_boolean);
    Py_DECREF(par_boolean);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_boolean);
    Py_DECREF(par_boolean);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality$$$function__2_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_bca1db37106f5da744866cba9927511a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bca1db37106f5da744866cba9927511a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bca1db37106f5da744866cba9927511a)) {
        Py_XDECREF(cache_frame_bca1db37106f5da744866cba9927511a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bca1db37106f5da744866cba9927511a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bca1db37106f5da744866cba9927511a = MAKE_FUNCTION_FRAME(codeobj_bca1db37106f5da744866cba9927511a, module_youtube_dl$extractor$niconico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bca1db37106f5da744866cba9927511a->m_type_description == NULL);
    frame_bca1db37106f5da744866cba9927511a = cache_frame_bca1db37106f5da744866cba9927511a;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_bca1db37106f5da744866cba9927511a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bca1db37106f5da744866cba9927511a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_s);
        tmp_expression_value_1 = par_s;
        tmp_subscript_value_1 = mod_consts[55];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[102];
        frame_bca1db37106f5da744866cba9927511a->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bca1db37106f5da744866cba9927511a);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bca1db37106f5da744866cba9927511a);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bca1db37106f5da744866cba9927511a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bca1db37106f5da744866cba9927511a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bca1db37106f5da744866cba9927511a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bca1db37106f5da744866cba9927511a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bca1db37106f5da744866cba9927511a,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_bca1db37106f5da744866cba9927511a == cache_frame_bca1db37106f5da744866cba9927511a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bca1db37106f5da744866cba9927511a);
        cache_frame_bca1db37106f5da744866cba9927511a = NULL;
    }

    assertFrameObject(frame_bca1db37106f5da744866cba9927511a);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$niconico$$$function__4__real_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_video_id = NULL;
    PyObject *var_webpage = NULL;
    PyObject *var_handle = NULL;
    struct Nuitka_CellObject *var_api_data = Nuitka_Cell_Empty();
    PyObject *var__format_id_from_url = NULL;
    struct Nuitka_CellObject *var_video_real_url = Nuitka_Cell_Empty();
    PyObject *var_flv_info_webpage = NULL;
    PyObject *var_flv_info = NULL;
    struct Nuitka_CellObject *var_video_info_xml = Nuitka_Cell_Empty();
    PyObject *var_get_video_info = NULL;
    PyObject *var_extension = NULL;
    PyObject *var_formats = NULL;
    PyObject *var_dmc_info = NULL;
    PyObject *var_quality_info = NULL;
    PyObject *var_audio_quality = NULL;
    PyObject *var_video_quality = NULL;
    PyObject *var_title = NULL;
    PyObject *var_watch_api_data_string = NULL;
    PyObject *var_watch_api_data = NULL;
    PyObject *var_video_detail = NULL;
    PyObject *var_thumbnail = NULL;
    PyObject *var_description = NULL;
    PyObject *var_timestamp = NULL;
    PyObject *var_match = NULL;
    PyObject *var_view_count = NULL;
    PyObject *var_comment_count = NULL;
    PyObject *var_duration = NULL;
    PyObject *var_webpage_url = NULL;
    PyObject *var_owner = NULL;
    PyObject *var_uploader_id = NULL;
    PyObject *var_uploader = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_638217ab9fa1177c4abb9be8aed80bc5;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_638217ab9fa1177c4abb9be8aed80bc5 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_638217ab9fa1177c4abb9be8aed80bc5)) {
        Py_XDECREF(cache_frame_638217ab9fa1177c4abb9be8aed80bc5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_638217ab9fa1177c4abb9be8aed80bc5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_638217ab9fa1177c4abb9be8aed80bc5 = MAKE_FUNCTION_FRAME(codeobj_638217ab9fa1177c4abb9be8aed80bc5, module_youtube_dl$extractor$niconico, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_638217ab9fa1177c4abb9be8aed80bc5->m_type_description == NULL);
    frame_638217ab9fa1177c4abb9be8aed80bc5 = cache_frame_638217ab9fa1177c4abb9be8aed80bc5;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_638217ab9fa1177c4abb9be8aed80bc5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_638217ab9fa1177c4abb9be8aed80bc5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_value_1 = par_url;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 273;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[103], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_video_id == NULL);
        var_video_id = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[104]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_1 = mod_consts[105];
        CHECK_OBJECT(var_video_id);
        tmp_add_expr_right_1 = var_video_id;
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 279;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_video_id);
        tmp_args_element_value_3 = var_video_id;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            exception_lineno = 278;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            exception_lineno = 278;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "ooooococoocoooooooooooooooooooooo";
                    exception_lineno = 278;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[2];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            exception_lineno = 278;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_webpage == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_webpage = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_handle == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_handle = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_video_id);
        tmp_expression_value_2 = var_video_id;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[106]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 280;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[107]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 280;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[103]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_instance_2 = var_handle;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 281;
        tmp_args_element_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[12]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 281;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 281;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_video_id;
            assert(old != NULL);
            var_video_id = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[108]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[109]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 283;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[110];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_webpage);
        tmp_tuple_element_1 = var_webpage;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[111];
        PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[112]);
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 283;
        tmp_args_element_value_5 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 283;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_video_id == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 285;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = var_video_id;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 283;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_api_data) == NULL);
        PyCell_SET(var_api_data, tmp_assign_source_8);

    }
    {
        PyObject *tmp_assign_source_9;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_video_real_url;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_9 = MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__1__format_id_from_url(tmp_closure_1);

        assert(var__format_id_from_url == NULL);
        var__format_id_from_url = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_assign_source_10;
        tmp_assign_source_10 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(Nuitka_Cell_GET(var_api_data));
        tmp_expression_value_8 = Nuitka_Cell_GET(var_api_data);
        tmp_subscript_value_1 = mod_consts[25];
        tmp_expression_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_1);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_value_2 = mod_consts[116];
        tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_value_3 = mod_consts[33];
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(Nuitka_Cell_GET(var_video_real_url) == NULL);
        PyCell_SET(var_video_real_url, tmp_assign_source_11);

    }
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

    {
        nuitka_bool tmp_assign_source_12;
        tmp_assign_source_12 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_12;
    }
    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_638217ab9fa1177c4abb9be8aed80bc5, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_638217ab9fa1177c4abb9be8aed80bc5, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_KeyError;
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[117]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_add_expr_left_3 = mod_consts[118];
        if (var_video_id == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 295;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_add_expr_right_3 = var_video_id;
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 295;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_add_expr_right_2 = mod_consts[119];
        tmp_args_element_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 295;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (var_video_id == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 296;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_8 = var_video_id;
        tmp_args_element_value_9 = mod_consts[120];
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(var_flv_info_webpage == NULL);
        var_flv_info_webpage = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_flv_info_webpage);
        tmp_args_element_value_10 = var_flv_info_webpage;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 298;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_10);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(var_flv_info == NULL);
        var_flv_info = tmp_assign_source_14;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = mod_consts[33];
        CHECK_OBJECT(var_flv_info);
        tmp_cmp_expr_right_2 = var_flv_info;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
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
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = mod_consts[121];
        CHECK_OBJECT(var_flv_info);
        tmp_cmp_expr_right_3 = var_flv_info;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 301;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[123], 0), mod_consts[124]);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 301;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooococoocoooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = mod_consts[125];
        CHECK_OBJECT(var_flv_info);
        tmp_cmp_expr_right_4 = var_flv_info;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 304;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[126], 0), mod_consts[124]);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 304;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooococoocoooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = mod_consts[127];
        CHECK_OBJECT(var_flv_info);
        tmp_cmp_expr_right_5 = var_flv_info;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_6 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kwargs_value_2;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_mod_expr_left_1 = mod_consts[128];
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[129]);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_subscript_value_5;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_flv_info);
            tmp_expression_value_12 = var_flv_info;
            tmp_subscript_value_4 = mod_consts[127];
            tmp_expression_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_4);
            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_1 = "ooooococoocoooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_subscript_value_5 = mod_consts[18];
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_5, 0);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_1 = "ooooococoocoooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_tuple_element_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[130]);
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 307;
        tmp_raise_type_3 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_raise_type_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_3;
        exception_lineno = 307;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooococoocoooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 310;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[131]);

        if (tmp_raise_type_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_4;
        exception_lineno = 310;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooococoocoooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    branch_end_6:;
    branch_end_5:;
    branch_end_4:;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[132]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_add_expr_left_4 = mod_consts[133];
        if (var_video_id == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 313;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_add_expr_right_4 = var_video_id;
        tmp_tuple_element_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 313;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_value_3, 0, tmp_tuple_element_4);
        if (var_video_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 314;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_4 = var_video_id;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_3);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[134]);
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 312;
        tmp_assign_source_15 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(Nuitka_Cell_GET(var_video_info_xml) == NULL);
        PyCell_SET(var_video_info_xml, tmp_assign_source_15);

    }
    {
        PyObject *tmp_assign_source_16;
        struct Nuitka_CellObject *tmp_closure_2[1];

        tmp_closure_2[0] = var_video_info_xml;
        Py_INCREF(tmp_closure_2[0]);

        tmp_assign_source_16 = MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__2_get_video_info(tmp_closure_2);

        assert(var_get_video_info == NULL);
        var_get_video_info = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_flv_info);
        tmp_expression_value_15 = var_flv_info;
        tmp_subscript_value_6 = mod_consts[33];
        tmp_expression_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_6);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_7 = mod_consts[18];
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_7, 0);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(Nuitka_Cell_GET(var_video_real_url) == NULL);
        PyCell_SET(var_video_real_url, tmp_assign_source_17);

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_13;
        CHECK_OBJECT(var_get_video_info);
        tmp_called_value_13 = var_get_video_info;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 326;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[137]);

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(var_extension == NULL);
        var_extension = tmp_assign_source_18;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_extension);
        tmp_operand_value_1 = var_extension;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_video_real_url));
        tmp_args_element_value_11 = Nuitka_Cell_GET(var_video_real_url);
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 328;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_11);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_extension;
            assert(old != NULL);
            var_extension = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    branch_no_7:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_list_element_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[33];
        CHECK_OBJECT(Nuitka_Cell_GET(var_video_real_url));
        tmp_dict_value_1 = Nuitka_Cell_GET(var_video_real_url);
        tmp_list_element_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_12;
            tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[88];
            CHECK_OBJECT(var_extension);
            tmp_dict_value_1 = var_extension;
            tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[87];
            CHECK_OBJECT(var__format_id_from_url);
            tmp_called_value_15 = var__format_id_from_url;
            CHECK_OBJECT(Nuitka_Cell_GET(var_video_real_url));
            tmp_args_element_value_12 = Nuitka_Cell_GET(var_video_real_url);
            frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 333;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_12);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "ooooococoocoooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_list_element_1);
        goto try_except_handler_5;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        tmp_assign_source_20 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_20, 0, tmp_list_element_1);
        assert(var_formats == NULL);
        var_formats = tmp_assign_source_20;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 290;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame) frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooococoocoooooooooooooooooooooo";
    goto try_except_handler_5;
    branch_end_2:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_try_except_1__unhandled_indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = var_formats;
            var_formats = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(Nuitka_Cell_GET(var_api_data));
        tmp_expression_value_17 = Nuitka_Cell_GET(var_api_data);
        tmp_subscript_value_8 = mod_consts[25];
        tmp_expression_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_8);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[15]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 338;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_16, mod_consts[139]);

        Py_DECREF(tmp_called_value_16);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dmc_info == NULL);
        var_dmc_info = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_dmc_info);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_dmc_info);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(var_dmc_info);
        tmp_expression_value_18 = var_dmc_info;
        tmp_subscript_value_9 = mod_consts[140];
        tmp_assign_source_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_9);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_quality_info == NULL);
        var_quality_info = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(var_quality_info);
        tmp_expression_value_19 = var_quality_info;
        tmp_subscript_value_10 = mod_consts[141];
        tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_10);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_24;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_25 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooococoocoooooooooooooooooooooo";
                exception_lineno = 341;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_26 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_audio_quality;
            var_audio_quality = tmp_assign_source_26;
            Py_INCREF(var_audio_quality);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_11;
        CHECK_OBJECT(var_quality_info);
        tmp_expression_value_20 = var_quality_info;
        tmp_subscript_value_11 = mod_consts[142];
        tmp_iter_arg_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_11);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_27 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_28 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_28 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooococoocoooooooooooooooooooooo";
                exception_lineno = 342;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_29 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_video_quality;
            var_video_quality = tmp_assign_source_29;
            Py_INCREF(var_video_quality);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_10;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_13;
        if (var_audio_quality == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 343;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_21 = var_audio_quality;
        tmp_subscript_value_12 = mod_consts[144];
        tmp_operand_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_12);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_video_quality);
        tmp_expression_value_22 = var_video_quality;
        tmp_subscript_value_13 = mod_consts[144];
        tmp_operand_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_13);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_10 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_10 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    goto loop_start_2;
    branch_no_10:;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        if (var_formats == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[145]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 345;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_23 = var_formats;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[146]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[147]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 345;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_24 = par_self;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[148]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 345;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (Nuitka_Cell_GET(var_api_data) == NULL) {
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[149]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_14 = Nuitka_Cell_GET(var_api_data);
        if (var_video_id == NULL) {
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_15 = var_video_id;
        if (var_audio_quality == NULL) {
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_16 = var_audio_quality;
        CHECK_OBJECT(var_video_quality);
        tmp_args_element_value_17 = var_video_quality;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 345;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_args_element_value_13 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_called_value_18);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 345;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 345;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 342;
        type_description_1 = "ooooococoocoooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 341;
        type_description_1 = "ooooococoocoooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_18;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[147]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 348;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_25 = par_self;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[150]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_formats == NULL) {
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[145]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 348;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_18 = var_formats;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 348;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_list_element_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[33];
        if (Nuitka_Cell_GET(var_video_real_url) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[151]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 351;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = Nuitka_Cell_GET(var_video_real_url);
        tmp_list_element_2 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_19;
            tmp_res = PyDict_SetItem(tmp_list_element_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[88];
            tmp_dict_value_2 = mod_consts[89];
            tmp_res = PyDict_SetItem(tmp_list_element_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[87];
            if (var__format_id_from_url == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 353;
                type_description_1 = "ooooococoocoooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_called_value_20 = var__format_id_from_url;
            if (Nuitka_Cell_GET(var_video_real_url) == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[151]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 353;
                type_description_1 = "ooooococoocoooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_args_element_value_19 = Nuitka_Cell_GET(var_video_real_url);
            frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 353;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_19);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_1 = "ooooococoocoooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_list_element_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_list_element_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        tmp_assign_source_30 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_30, 0, tmp_list_element_2);
        {
            PyObject *old = var_formats;
            assert(old != NULL);
            var_formats = tmp_assign_source_30;
            Py_DECREF(old);
        }

    }
    branch_end_9:;
    {
        PyObject *tmp_assign_source_31;
        struct Nuitka_CellObject *tmp_closure_3[1];

        tmp_closure_3[0] = var_api_data;
        Py_INCREF(tmp_closure_3[0]);

        tmp_assign_source_31 = MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__3_get_video_info(tmp_closure_3);

        {
            PyObject *old = var_get_video_info;
            var_get_video_info = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_21;
        if (var_get_video_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 360;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_21 = var_get_video_info;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 360;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_21, mod_consts[152]);

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_title == NULL);
        var_title = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_4;
        CHECK_OBJECT(var_title);
        tmp_operand_value_4 = var_title;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[147]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 362;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_26 = par_self;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[153]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_webpage);
        tmp_tuple_element_5 = var_webpage;
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_5);
        tmp_kwargs_value_4 = DICT_COPY(mod_consts[154]);
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 362;
        tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_22, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_title;
            assert(old != NULL);
            var_title = tmp_assign_source_33;
            Py_DECREF(old);
        }

    }
    branch_no_11:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_5;
        CHECK_OBJECT(var_title);
        tmp_operand_value_5 = var_title;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[147]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 364;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_self;
        tmp_args_element_value_20 = mod_consts[155];
        CHECK_OBJECT(var_webpage);
        tmp_args_element_value_21 = var_webpage;
        tmp_args_element_value_22 = mod_consts[156];
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_assign_source_34 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_3,
                mod_consts[109],
                call_args
            );
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_title;
            assert(old != NULL);
            var_title = tmp_assign_source_34;
            Py_DECREF(old);
        }

    }
    branch_no_12:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[147]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 368;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_27 = par_self;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[109]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = mod_consts[157];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_6);
        CHECK_OBJECT(var_webpage);
        tmp_tuple_element_6 = var_webpage;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[158];
        PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_6);
        tmp_kwargs_value_5 = DICT_COPY(mod_consts[154]);
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 368;
        tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_23, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_value_5);
        Py_DECREF(tmp_kwargs_value_5);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_watch_api_data_string == NULL);
        var_watch_api_data_string = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_3;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        CHECK_OBJECT(var_watch_api_data_string);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_watch_api_data_string);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[147]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 371;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_28 = par_self;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[108]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_watch_api_data_string);
        tmp_args_element_value_23 = var_watch_api_data_string;
        if (var_video_id == NULL) {
            Py_DECREF(tmp_called_value_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 371;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_24 = var_video_id;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 371;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_24, call_args);
        }

        Py_DECREF(tmp_called_value_24);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        condexpr_end_1:;
        assert(var_watch_api_data == NULL);
        var_watch_api_data = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(var_watch_api_data);
        tmp_expression_value_29 = var_watch_api_data;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[15]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[159];
        tmp_call_arg_element_2 = MAKE_DICT_EMPTY();
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 372;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_video_detail == NULL);
        var_video_detail = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_value_26;
        PyObject *tmp_call_arg_element_3;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_value_6;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_6;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_31;
        if (var_get_video_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 375;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_26 = var_get_video_info;
        tmp_call_arg_element_3 = LIST_COPY(mod_consts[160]);
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 375;
        tmp_or_left_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_call_arg_element_3);
        Py_DECREF(tmp_call_arg_element_3);
        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 375;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[147]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 376;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_30 = par_self;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[161]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = mod_consts[162];
        tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_7);
        CHECK_OBJECT(var_webpage);
        tmp_tuple_element_7 = var_webpage;
        PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_7);
        tmp_tuple_element_7 = mod_consts[163];
        PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_7);
        tmp_kwargs_value_6 = DICT_COPY(mod_consts[154]);
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 376;
        tmp_or_left_value_3 = CALL_FUNCTION(tmp_called_value_27, tmp_args_value_6, tmp_kwargs_value_6);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_value_6);
        Py_DECREF(tmp_kwargs_value_6);
        if (tmp_or_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_3);

            exception_lineno = 376;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        Py_DECREF(tmp_or_left_value_3);
        CHECK_OBJECT(var_video_detail);
        tmp_expression_value_31 = var_video_detail;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[15]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 377;
        tmp_or_right_value_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_28, mod_consts[164]);

        Py_DECREF(tmp_called_value_28);
        if (tmp_or_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_assign_source_38 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_assign_source_38 = tmp_or_left_value_2;
        or_end_2:;
        assert(var_thumbnail == NULL);
        var_thumbnail = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_29;
        if (var_get_video_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 379;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_29 = var_get_video_info;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 379;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_29, mod_consts[165]);

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_description == NULL);
        var_description = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        int tmp_or_left_truth_4;
        PyObject *tmp_or_left_value_4;
        PyObject *tmp_or_right_value_4;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_value_31;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_33;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_get_video_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 381;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_31 = var_get_video_info;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 381;
        tmp_args_element_value_25 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_31, mod_consts[167]);

        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 381;
        tmp_or_left_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_25);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_or_left_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
        if (tmp_or_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_4);

            exception_lineno = 381;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        Py_DECREF(tmp_or_left_value_4);
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_get_video_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 382;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_33 = var_get_video_info;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 382;
        tmp_args_element_value_26 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_33, mod_consts[169]);

        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 382;
        tmp_or_right_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_26);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_or_right_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_40 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_assign_source_40 = tmp_or_left_value_4;
        or_end_4:;
        assert(var_timestamp == NULL);
        var_timestamp = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_6;
        CHECK_OBJECT(var_timestamp);
        tmp_operand_value_6 = var_timestamp;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[147]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 384;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_32 = par_self;
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[161]);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = mod_consts[170];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_8);
        CHECK_OBJECT(var_webpage);
        tmp_tuple_element_8 = var_webpage;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[171];
        PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_8);
        tmp_kwargs_value_7 = DICT_COPY(mod_consts[154]);
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 384;
        tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_34, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_value_7);
        Py_DECREF(tmp_kwargs_value_7);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_match == NULL);
        var_match = tmp_assign_source_41;
    }
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_match);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_match);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_33;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_match);
        tmp_expression_value_33 = var_match;
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[172]);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 386;
        tmp_args_element_value_27 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_36, mod_consts[173]);

        Py_DECREF(tmp_called_value_36);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 386;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_27);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_timestamp;
            assert(old != NULL);
            var_timestamp = tmp_assign_source_42;
            Py_DECREF(old);
        }

    }
    branch_no_14:;
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_16;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_timestamp);
        tmp_operand_value_7 = var_timestamp;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (var_video_detail == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[174]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 387;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_34 = var_video_detail;
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[15]);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 387;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_37, mod_consts[175]);

        Py_DECREF(tmp_called_value_37);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 387;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        tmp_condition_result_16 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_16 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_38;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_37;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_video_detail == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[174]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 389;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_36 = var_video_detail;
        tmp_subscript_value_14 = mod_consts[176];
        tmp_expression_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_14);
        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[172]);
        Py_DECREF(tmp_expression_value_35);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 389;
        tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_39, mod_consts[177]);

        Py_DECREF(tmp_called_value_39);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = mod_consts[178];
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 390;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[180]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 390;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 390;
        tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_40, &PyTuple_GET_ITEM(mod_consts[181], 0), mod_consts[182]);
        Py_DECREF(tmp_called_value_40);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 390;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 388;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_38, args, kw_values, mod_consts[183]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_timestamp;
            assert(old != NULL);
            var_timestamp = tmp_assign_source_43;
            Py_DECREF(old);
        }

    }
    branch_no_15:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_42;
        PyObject *tmp_call_arg_element_4;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_get_video_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 392;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_42 = var_get_video_info;
        tmp_call_arg_element_4 = LIST_COPY(mod_consts[185]);
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 392;
        tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_call_arg_element_4);
        Py_DECREF(tmp_call_arg_element_4);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 392;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_28);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_view_count == NULL);
        var_view_count = tmp_assign_source_44;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_8;
        CHECK_OBJECT(var_view_count);
        tmp_operand_value_8 = var_view_count;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_value_8;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[147]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_38 = par_self;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[109]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_9 = mod_consts[186];
        tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_9);
        CHECK_OBJECT(var_webpage);
        tmp_tuple_element_9 = var_webpage;
        PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[187];
        PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_9);
        tmp_kwargs_value_8 = DICT_COPY(mod_consts[154]);
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 394;
        tmp_assign_source_45 = CALL_FUNCTION(tmp_called_value_43, tmp_args_value_8, tmp_kwargs_value_8);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_value_8);
        Py_DECREF(tmp_kwargs_value_8);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_match;
            var_match = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_6;
        CHECK_OBJECT(var_match);
        tmp_truth_name_6 = CHECK_IF_TRUE(var_match);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_44;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_39;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_match);
        tmp_expression_value_39 = var_match;
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[172]);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 398;
        tmp_args_element_value_29 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_45, mod_consts[188]);

        Py_DECREF(tmp_called_value_45);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 398;
        tmp_assign_source_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_29);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_view_count;
            assert(old != NULL);
            var_view_count = tmp_assign_source_46;
            Py_DECREF(old);
        }

    }
    branch_no_17:;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_47;
        int tmp_or_left_truth_5;
        PyObject *tmp_or_left_value_5;
        PyObject *tmp_or_right_value_5;
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(var_view_count);
        tmp_or_left_value_5 = var_view_count;
        tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
        if (tmp_or_left_truth_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_5 == 1) {
            goto or_left_5;
        } else {
            goto or_right_5;
        }
        or_right_5:;
        if (var_video_detail == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[174]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 399;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_40 = var_video_detail;
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[15]);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 399;
        tmp_or_right_value_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_46, mod_consts[189]);

        Py_DECREF(tmp_called_value_46);
        if (tmp_or_right_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_47 = tmp_or_right_value_5;
        goto or_end_5;
        or_left_5:;
        Py_INCREF(tmp_or_left_value_5);
        tmp_assign_source_47 = tmp_or_left_value_5;
        or_end_5:;
        {
            PyObject *old = var_view_count;
            assert(old != NULL);
            var_view_count = tmp_assign_source_47;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        int tmp_or_left_truth_6;
        PyObject *tmp_or_left_value_6;
        PyObject *tmp_or_right_value_6;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_48;
        int tmp_or_left_truth_7;
        PyObject *tmp_or_left_value_7;
        PyObject *tmp_or_right_value_7;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_called_value_50;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_get_video_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_48 = var_get_video_info;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 401;
        tmp_args_element_value_30 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_48, mod_consts[190]);

        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 401;
        tmp_or_left_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_30);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_or_left_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_6 = CHECK_IF_TRUE(tmp_or_left_value_6);
        if (tmp_or_left_truth_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_6);

            exception_lineno = 401;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_6 == 1) {
            goto or_left_6;
        } else {
            goto or_right_6;
        }
        or_right_6:;
        Py_DECREF(tmp_or_left_value_6);
        if (var_video_detail == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[174]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 402;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_41 = var_video_detail;
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[15]);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 402;
        tmp_or_left_value_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_49, mod_consts[191]);

        Py_DECREF(tmp_called_value_49);
        if (tmp_or_left_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_7 = CHECK_IF_TRUE(tmp_or_left_value_7);
        if (tmp_or_left_truth_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_7);

            exception_lineno = 402;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_7 == 1) {
            goto or_left_7;
        } else {
            goto or_right_7;
        }
        or_right_7:;
        Py_DECREF(tmp_or_left_value_7);
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[192]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(var_api_data) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[149]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_31 = Nuitka_Cell_GET(var_api_data);


        tmp_args_element_value_32 = MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__4_lambda();

        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 403;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_or_right_value_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_50, call_args);
        }

        Py_DECREF(tmp_args_element_value_32);
        if (tmp_or_right_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_6 = tmp_or_right_value_7;
        goto or_end_7;
        or_left_7:;
        tmp_or_right_value_6 = tmp_or_left_value_7;
        or_end_7:;
        tmp_assign_source_48 = tmp_or_right_value_6;
        goto or_end_6;
        or_left_6:;
        tmp_assign_source_48 = tmp_or_left_value_6;
        or_end_6:;
        assert(var_comment_count == NULL);
        var_comment_count = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_9;
        CHECK_OBJECT(var_comment_count);
        tmp_operand_value_9 = var_comment_count;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_9;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[147]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 405;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_42 = par_self;
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[109]);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_10 = mod_consts[194];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_10);
        CHECK_OBJECT(var_webpage);
        tmp_tuple_element_10 = var_webpage;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[195];
        PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_10);
        tmp_kwargs_value_9 = DICT_COPY(mod_consts[154]);
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 405;
        tmp_assign_source_49 = CALL_FUNCTION(tmp_called_value_51, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_value_9);
        Py_DECREF(tmp_kwargs_value_9);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_match;
            var_match = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_7;
        CHECK_OBJECT(var_match);
        tmp_truth_name_7 = CHECK_IF_TRUE(var_match);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_20 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_52;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_43;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_match);
        tmp_expression_value_43 = var_match;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[172]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 409;
        tmp_args_element_value_33 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_53, mod_consts[188]);

        Py_DECREF(tmp_called_value_53);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 409;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_comment_count;
            assert(old != NULL);
            var_comment_count = tmp_assign_source_50;
            Py_DECREF(old);
        }

    }
    branch_no_19:;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_51;
        int tmp_or_left_truth_8;
        PyObject *tmp_or_left_value_8;
        PyObject *tmp_or_right_value_8;
        PyObject *tmp_called_value_54;
        PyObject *tmp_args_element_value_34;
        int tmp_or_left_truth_9;
        PyObject *tmp_or_left_value_9;
        PyObject *tmp_or_right_value_9;
        PyObject *tmp_called_value_55;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_value_10;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_kwargs_value_10;
        int tmp_or_left_truth_10;
        PyObject *tmp_or_left_value_10;
        PyObject *tmp_or_right_value_10;
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_called_value_58;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_get_video_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_55 = var_get_video_info;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 412;
        tmp_or_left_value_9 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_55, mod_consts[197]);

        if (tmp_or_left_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_9 = CHECK_IF_TRUE(tmp_or_left_value_9);
        if (tmp_or_left_truth_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_9);

            exception_lineno = 412;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_9 == 1) {
            goto or_left_9;
        } else {
            goto or_right_9;
        }
        or_right_9:;
        Py_DECREF(tmp_or_left_value_9);
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[147]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 413;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_44 = par_self;
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[161]);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = mod_consts[198];
        tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_11);
        CHECK_OBJECT(var_webpage);
        tmp_tuple_element_11 = var_webpage;
        PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_11);
        tmp_tuple_element_11 = mod_consts[199];
        PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_11);
        tmp_kwargs_value_10 = DICT_COPY(mod_consts[154]);
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 413;
        tmp_or_right_value_9 = CALL_FUNCTION(tmp_called_value_56, tmp_args_value_10, tmp_kwargs_value_10);
        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_args_value_10);
        Py_DECREF(tmp_kwargs_value_10);
        if (tmp_or_right_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = tmp_or_right_value_9;
        goto or_end_9;
        or_left_9:;
        tmp_args_element_value_34 = tmp_or_left_value_9;
        or_end_9:;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 411;
        tmp_or_left_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_34);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_or_left_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_8 = CHECK_IF_TRUE(tmp_or_left_value_8);
        if (tmp_or_left_truth_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_8);

            exception_lineno = 411;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_8 == 1) {
            goto or_left_8;
        } else {
            goto or_right_8;
        }
        or_right_8:;
        Py_DECREF(tmp_or_left_value_8);
        if (var_video_detail == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[174]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 415;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_45 = var_video_detail;
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[15]);
        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 415;
        tmp_or_left_value_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_57, mod_consts[197]);

        Py_DECREF(tmp_called_value_57);
        if (tmp_or_left_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_10 = CHECK_IF_TRUE(tmp_or_left_value_10);
        if (tmp_or_left_truth_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_10);

            exception_lineno = 415;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_10 == 1) {
            goto or_left_10;
        } else {
            goto or_right_10;
        }
        or_right_10:;
        Py_DECREF(tmp_or_left_value_10);
        if (var_get_video_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 416;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_58 = var_get_video_info;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 416;
        tmp_or_right_value_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_58, mod_consts[200]);

        if (tmp_or_right_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_8 = tmp_or_right_value_10;
        goto or_end_10;
        or_left_10:;
        tmp_or_right_value_8 = tmp_or_left_value_10;
        or_end_10:;
        tmp_assign_source_51 = tmp_or_right_value_8;
        goto or_end_8;
        or_left_8:;
        tmp_assign_source_51 = tmp_or_left_value_8;
        or_end_8:;
        assert(var_duration == NULL);
        var_duration = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        int tmp_or_left_truth_11;
        PyObject *tmp_or_left_value_11;
        PyObject *tmp_or_right_value_11;
        PyObject *tmp_called_value_59;
        if (var_get_video_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 418;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_59 = var_get_video_info;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 418;
        tmp_or_left_value_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_59, mod_consts[201]);

        if (tmp_or_left_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_11 = CHECK_IF_TRUE(tmp_or_left_value_11);
        if (tmp_or_left_truth_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_11);

            exception_lineno = 418;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_11 == 1) {
            goto or_left_11;
        } else {
            goto or_right_11;
        }
        or_right_11:;
        Py_DECREF(tmp_or_left_value_11);
        CHECK_OBJECT(par_url);
        tmp_or_right_value_11 = par_url;
        Py_INCREF(tmp_or_right_value_11);
        tmp_assign_source_52 = tmp_or_right_value_11;
        goto or_end_11;
        or_left_11:;
        tmp_assign_source_52 = tmp_or_left_value_11;
        or_end_11:;
        assert(var_webpage_url == NULL);
        var_webpage_url = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        int tmp_or_left_truth_12;
        PyObject *tmp_or_left_value_12;
        PyObject *tmp_or_right_value_12;
        PyObject *tmp_called_value_60;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[192]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(var_api_data) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[149]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_35 = Nuitka_Cell_GET(var_api_data);


        tmp_args_element_value_36 = MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__5_lambda();

        tmp_args_element_value_37 = (PyObject *)&PyDict_Type;
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 422;
        {
            PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37};
            tmp_or_left_value_12 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_60, call_args);
        }

        Py_DECREF(tmp_args_element_value_36);
        if (tmp_or_left_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_12 = CHECK_IF_TRUE(tmp_or_left_value_12);
        if (tmp_or_left_truth_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_12);

            exception_lineno = 422;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_12 == 1) {
            goto or_left_12;
        } else {
            goto or_right_12;
        }
        or_right_12:;
        Py_DECREF(tmp_or_left_value_12);
        tmp_or_right_value_12 = MAKE_DICT_EMPTY();
        tmp_assign_source_53 = tmp_or_right_value_12;
        goto or_end_12;
        or_left_12:;
        tmp_assign_source_53 = tmp_or_left_value_12;
        or_end_12:;
        assert(var_owner == NULL);
        var_owner = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        int tmp_or_left_truth_13;
        PyObject *tmp_or_left_value_13;
        PyObject *tmp_or_right_value_13;
        PyObject *tmp_called_value_61;
        PyObject *tmp_call_arg_element_5;
        PyObject *tmp_called_value_62;
        PyObject *tmp_expression_value_46;
        if (var_get_video_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 423;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_61 = var_get_video_info;
        tmp_call_arg_element_5 = LIST_COPY(mod_consts[202]);
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 423;
        tmp_or_left_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_61, tmp_call_arg_element_5);
        Py_DECREF(tmp_call_arg_element_5);
        if (tmp_or_left_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_13 = CHECK_IF_TRUE(tmp_or_left_value_13);
        if (tmp_or_left_truth_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_13);

            exception_lineno = 423;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_13 == 1) {
            goto or_left_13;
        } else {
            goto or_right_13;
        }
        or_right_13:;
        Py_DECREF(tmp_or_left_value_13);
        CHECK_OBJECT(var_owner);
        tmp_expression_value_46 = var_owner;
        tmp_called_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[15]);
        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 423;
        tmp_or_right_value_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_62, mod_consts[203]);

        Py_DECREF(tmp_called_value_62);
        if (tmp_or_right_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_54 = tmp_or_right_value_13;
        goto or_end_13;
        or_left_13:;
        tmp_assign_source_54 = tmp_or_left_value_13;
        or_end_13:;
        assert(var_uploader_id == NULL);
        var_uploader_id = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        int tmp_or_left_truth_14;
        PyObject *tmp_or_left_value_14;
        PyObject *tmp_or_right_value_14;
        PyObject *tmp_called_value_63;
        PyObject *tmp_call_arg_element_6;
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_47;
        if (var_get_video_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 424;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_63 = var_get_video_info;
        tmp_call_arg_element_6 = LIST_COPY(mod_consts[204]);
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 424;
        tmp_or_left_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_63, tmp_call_arg_element_6);
        Py_DECREF(tmp_call_arg_element_6);
        if (tmp_or_left_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_14 = CHECK_IF_TRUE(tmp_or_left_value_14);
        if (tmp_or_left_truth_14 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_14);

            exception_lineno = 424;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_14 == 1) {
            goto or_left_14;
        } else {
            goto or_right_14;
        }
        or_right_14:;
        Py_DECREF(tmp_or_left_value_14);
        if (var_owner == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[205]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 424;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_47 = var_owner;
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[15]);
        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame.f_lineno = 424;
        tmp_or_right_value_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_64, mod_consts[206]);

        Py_DECREF(tmp_called_value_64);
        if (tmp_or_right_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_55 = tmp_or_right_value_14;
        goto or_end_14;
        or_left_14:;
        tmp_assign_source_55 = tmp_or_left_value_14;
        or_end_14:;
        assert(var_uploader == NULL);
        var_uploader = tmp_assign_source_55;
    }
    {
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[55];
        if (var_video_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_3 = var_video_id;
        tmp_return_value = _PyDict_NewPresized( 12 );
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[207];
        CHECK_OBJECT(var_title);
        tmp_dict_value_3 = var_title;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[145];
        if (var_formats == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[145]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 429;
            type_description_1 = "ooooococoocoooooooooooooooooooooo";
            goto dict_build_exception_3;
        }

        tmp_dict_value_3 = var_formats;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[163];
        CHECK_OBJECT(var_thumbnail);
        tmp_dict_value_3 = var_thumbnail;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[208];
        CHECK_OBJECT(var_description);
        tmp_dict_value_3 = var_description;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[209];
        CHECK_OBJECT(var_uploader);
        tmp_dict_value_3 = var_uploader;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[210];
        CHECK_OBJECT(var_timestamp);
        tmp_dict_value_3 = var_timestamp;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[211];
        CHECK_OBJECT(var_uploader_id);
        tmp_dict_value_3 = var_uploader_id;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[212];
        CHECK_OBJECT(var_view_count);
        tmp_dict_value_3 = var_view_count;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[213];
        CHECK_OBJECT(var_comment_count);
        tmp_dict_value_3 = var_comment_count;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[214];
        CHECK_OBJECT(var_duration);
        tmp_dict_value_3 = var_duration;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[215];
        CHECK_OBJECT(var_webpage_url);
        tmp_dict_value_3 = var_webpage_url;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_638217ab9fa1177c4abb9be8aed80bc5);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_638217ab9fa1177c4abb9be8aed80bc5);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_638217ab9fa1177c4abb9be8aed80bc5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_638217ab9fa1177c4abb9be8aed80bc5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_638217ab9fa1177c4abb9be8aed80bc5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_638217ab9fa1177c4abb9be8aed80bc5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_638217ab9fa1177c4abb9be8aed80bc5,
        type_description_1,
        par_self,
        par_url,
        var_video_id,
        var_webpage,
        var_handle,
        var_api_data,
        var__format_id_from_url,
        var_video_real_url,
        var_flv_info_webpage,
        var_flv_info,
        var_video_info_xml,
        var_get_video_info,
        var_extension,
        var_formats,
        var_dmc_info,
        var_quality_info,
        var_audio_quality,
        var_video_quality,
        var_title,
        var_watch_api_data_string,
        var_watch_api_data,
        var_video_detail,
        var_thumbnail,
        var_description,
        var_timestamp,
        var_match,
        var_view_count,
        var_comment_count,
        var_duration,
        var_webpage_url,
        var_owner,
        var_uploader_id,
        var_uploader
    );


    // Release cached frame if used for exception.
    if (frame_638217ab9fa1177c4abb9be8aed80bc5 == cache_frame_638217ab9fa1177c4abb9be8aed80bc5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_638217ab9fa1177c4abb9be8aed80bc5);
        cache_frame_638217ab9fa1177c4abb9be8aed80bc5 = NULL;
    }

    assertFrameObject(frame_638217ab9fa1177c4abb9be8aed80bc5);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_video_id);
    var_video_id = NULL;
    CHECK_OBJECT(var_webpage);
    Py_DECREF(var_webpage);
    var_webpage = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
    CHECK_OBJECT(var_api_data);
    Py_DECREF(var_api_data);
    var_api_data = NULL;
    Py_XDECREF(var__format_id_from_url);
    var__format_id_from_url = NULL;
    CHECK_OBJECT(var_video_real_url);
    Py_DECREF(var_video_real_url);
    var_video_real_url = NULL;
    Py_XDECREF(var_flv_info_webpage);
    var_flv_info_webpage = NULL;
    Py_XDECREF(var_flv_info);
    var_flv_info = NULL;
    CHECK_OBJECT(var_video_info_xml);
    Py_DECREF(var_video_info_xml);
    var_video_info_xml = NULL;
    Py_XDECREF(var_get_video_info);
    var_get_video_info = NULL;
    Py_XDECREF(var_extension);
    var_extension = NULL;
    Py_XDECREF(var_formats);
    var_formats = NULL;
    Py_XDECREF(var_dmc_info);
    var_dmc_info = NULL;
    Py_XDECREF(var_quality_info);
    var_quality_info = NULL;
    Py_XDECREF(var_audio_quality);
    var_audio_quality = NULL;
    Py_XDECREF(var_video_quality);
    var_video_quality = NULL;
    CHECK_OBJECT(var_title);
    Py_DECREF(var_title);
    var_title = NULL;
    CHECK_OBJECT(var_watch_api_data_string);
    Py_DECREF(var_watch_api_data_string);
    var_watch_api_data_string = NULL;
    CHECK_OBJECT(var_watch_api_data);
    Py_DECREF(var_watch_api_data);
    var_watch_api_data = NULL;
    Py_XDECREF(var_video_detail);
    var_video_detail = NULL;
    CHECK_OBJECT(var_thumbnail);
    Py_DECREF(var_thumbnail);
    var_thumbnail = NULL;
    CHECK_OBJECT(var_description);
    Py_DECREF(var_description);
    var_description = NULL;
    CHECK_OBJECT(var_timestamp);
    Py_DECREF(var_timestamp);
    var_timestamp = NULL;
    Py_XDECREF(var_match);
    var_match = NULL;
    CHECK_OBJECT(var_view_count);
    Py_DECREF(var_view_count);
    var_view_count = NULL;
    CHECK_OBJECT(var_comment_count);
    Py_DECREF(var_comment_count);
    var_comment_count = NULL;
    CHECK_OBJECT(var_duration);
    Py_DECREF(var_duration);
    var_duration = NULL;
    CHECK_OBJECT(var_webpage_url);
    Py_DECREF(var_webpage_url);
    var_webpage_url = NULL;
    Py_XDECREF(var_owner);
    var_owner = NULL;
    CHECK_OBJECT(var_uploader_id);
    Py_DECREF(var_uploader_id);
    var_uploader_id = NULL;
    CHECK_OBJECT(var_uploader);
    Py_DECREF(var_uploader);
    var_uploader = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_video_id);
    var_video_id = NULL;
    Py_XDECREF(var_webpage);
    var_webpage = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
    CHECK_OBJECT(var_api_data);
    Py_DECREF(var_api_data);
    var_api_data = NULL;
    Py_XDECREF(var__format_id_from_url);
    var__format_id_from_url = NULL;
    CHECK_OBJECT(var_video_real_url);
    Py_DECREF(var_video_real_url);
    var_video_real_url = NULL;
    Py_XDECREF(var_flv_info_webpage);
    var_flv_info_webpage = NULL;
    Py_XDECREF(var_flv_info);
    var_flv_info = NULL;
    CHECK_OBJECT(var_video_info_xml);
    Py_DECREF(var_video_info_xml);
    var_video_info_xml = NULL;
    Py_XDECREF(var_get_video_info);
    var_get_video_info = NULL;
    Py_XDECREF(var_extension);
    var_extension = NULL;
    Py_XDECREF(var_formats);
    var_formats = NULL;
    Py_XDECREF(var_dmc_info);
    var_dmc_info = NULL;
    Py_XDECREF(var_quality_info);
    var_quality_info = NULL;
    Py_XDECREF(var_audio_quality);
    var_audio_quality = NULL;
    Py_XDECREF(var_video_quality);
    var_video_quality = NULL;
    Py_XDECREF(var_title);
    var_title = NULL;
    Py_XDECREF(var_watch_api_data_string);
    var_watch_api_data_string = NULL;
    Py_XDECREF(var_watch_api_data);
    var_watch_api_data = NULL;
    Py_XDECREF(var_video_detail);
    var_video_detail = NULL;
    Py_XDECREF(var_thumbnail);
    var_thumbnail = NULL;
    Py_XDECREF(var_description);
    var_description = NULL;
    Py_XDECREF(var_timestamp);
    var_timestamp = NULL;
    Py_XDECREF(var_match);
    var_match = NULL;
    Py_XDECREF(var_view_count);
    var_view_count = NULL;
    Py_XDECREF(var_comment_count);
    var_comment_count = NULL;
    Py_XDECREF(var_duration);
    var_duration = NULL;
    Py_XDECREF(var_webpage_url);
    var_webpage_url = NULL;
    Py_XDECREF(var_owner);
    var_owner = NULL;
    Py_XDECREF(var_uploader_id);
    var_uploader_id = NULL;
    Py_XDECREF(var_uploader);
    var_uploader = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

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


static PyObject *impl_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__1__format_id_from_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_video_url = python_pars[0];
    struct Nuitka_FrameObject *frame_19e29283493effc639ca8abe0f9ffe61;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_19e29283493effc639ca8abe0f9ffe61 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_19e29283493effc639ca8abe0f9ffe61)) {
        Py_XDECREF(cache_frame_19e29283493effc639ca8abe0f9ffe61);

#if _DEBUG_REFCOUNTS
        if (cache_frame_19e29283493effc639ca8abe0f9ffe61 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_19e29283493effc639ca8abe0f9ffe61 = MAKE_FUNCTION_FRAME(codeobj_19e29283493effc639ca8abe0f9ffe61, module_youtube_dl$extractor$niconico, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_19e29283493effc639ca8abe0f9ffe61->m_type_description == NULL);
    frame_19e29283493effc639ca8abe0f9ffe61 = cache_frame_19e29283493effc639ca8abe0f9ffe61;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_19e29283493effc639ca8abe0f9ffe61);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_19e29283493effc639ca8abe0f9ffe61) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[151]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 288;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[216]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_19e29283493effc639ca8abe0f9ffe61->m_frame.f_lineno = 288;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[217]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 288;
            type_description_1 = "oc";
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
        tmp_return_value = mod_consts[218];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_return_value = mod_consts[219];
        condexpr_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_19e29283493effc639ca8abe0f9ffe61);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_19e29283493effc639ca8abe0f9ffe61);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_19e29283493effc639ca8abe0f9ffe61);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_19e29283493effc639ca8abe0f9ffe61, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_19e29283493effc639ca8abe0f9ffe61->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_19e29283493effc639ca8abe0f9ffe61, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_19e29283493effc639ca8abe0f9ffe61,
        type_description_1,
        par_video_url,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_19e29283493effc639ca8abe0f9ffe61 == cache_frame_19e29283493effc639ca8abe0f9ffe61) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_19e29283493effc639ca8abe0f9ffe61);
        cache_frame_19e29283493effc639ca8abe0f9ffe61 = NULL;
    }

    assertFrameObject(frame_19e29283493effc639ca8abe0f9ffe61);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_video_url);
    Py_DECREF(par_video_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_video_url);
    Py_DECREF(par_video_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__2_get_video_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_items = python_pars[0];
    PyObject *var_item = NULL;
    PyObject *var_ret = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_036be7a0618e1e79fe886415fd2eb297;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_036be7a0618e1e79fe886415fd2eb297 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_036be7a0618e1e79fe886415fd2eb297)) {
        Py_XDECREF(cache_frame_036be7a0618e1e79fe886415fd2eb297);

#if _DEBUG_REFCOUNTS
        if (cache_frame_036be7a0618e1e79fe886415fd2eb297 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_036be7a0618e1e79fe886415fd2eb297 = MAKE_FUNCTION_FRAME(codeobj_036be7a0618e1e79fe886415fd2eb297, module_youtube_dl$extractor$niconico, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_036be7a0618e1e79fe886415fd2eb297->m_type_description == NULL);
    frame_036be7a0618e1e79fe886415fd2eb297 = cache_frame_036be7a0618e1e79fe886415fd2eb297;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_036be7a0618e1e79fe886415fd2eb297);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_036be7a0618e1e79fe886415fd2eb297) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_items);
        tmp_isinstance_inst_1 = par_items;
        tmp_isinstance_cls_1 = (PyObject *)&PyList_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooc";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_items);
        tmp_list_element_1 = par_items;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assign_source_1, 0, tmp_list_element_1);
        {
            PyObject *old = par_items;
            assert(old != NULL);
            par_items = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_items);
        tmp_iter_arg_1 = par_items;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooc";
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
                type_description_1 = "oooc";
                exception_lineno = 319;
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
            PyObject *old = var_item;
            var_item = tmp_assign_source_4;
            Py_INCREF(var_item);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[221]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 320;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_add_expr_left_1 = mod_consts[222];
        CHECK_OBJECT(var_item);
        tmp_add_expr_right_1 = var_item;
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        frame_036be7a0618e1e79fe886415fd2eb297->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_ret;
            var_ret = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_ret);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_ret);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(var_ret);
    tmp_return_value = var_ret;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 319;
        type_description_1 = "oooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
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

#if 0
    RESTORE_FRAME_EXCEPTION(frame_036be7a0618e1e79fe886415fd2eb297);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_036be7a0618e1e79fe886415fd2eb297);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_036be7a0618e1e79fe886415fd2eb297);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_036be7a0618e1e79fe886415fd2eb297, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_036be7a0618e1e79fe886415fd2eb297->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_036be7a0618e1e79fe886415fd2eb297, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_036be7a0618e1e79fe886415fd2eb297,
        type_description_1,
        par_items,
        var_item,
        var_ret,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_036be7a0618e1e79fe886415fd2eb297 == cache_frame_036be7a0618e1e79fe886415fd2eb297) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_036be7a0618e1e79fe886415fd2eb297);
        cache_frame_036be7a0618e1e79fe886415fd2eb297 = NULL;
    }

    assertFrameObject(frame_036be7a0618e1e79fe886415fd2eb297);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_items);
    Py_DECREF(par_items);
    par_items = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
    Py_XDECREF(var_ret);
    var_ret = NULL;
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

    Py_XDECREF(par_items);
    par_items = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
    Py_XDECREF(var_ret);
    var_ret = NULL;
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


static PyObject *impl_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__3_get_video_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_items = python_pars[0];
    struct Nuitka_FrameObject *frame_1e4ed3c5b42d4df2c412090cb0f10818;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1e4ed3c5b42d4df2c412090cb0f10818 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e4ed3c5b42d4df2c412090cb0f10818)) {
        Py_XDECREF(cache_frame_1e4ed3c5b42d4df2c412090cb0f10818);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e4ed3c5b42d4df2c412090cb0f10818 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e4ed3c5b42d4df2c412090cb0f10818 = MAKE_FUNCTION_FRAME(codeobj_1e4ed3c5b42d4df2c412090cb0f10818, module_youtube_dl$extractor$niconico, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1e4ed3c5b42d4df2c412090cb0f10818->m_type_description == NULL);
    frame_1e4ed3c5b42d4df2c412090cb0f10818 = cache_frame_1e4ed3c5b42d4df2c412090cb0f10818;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_1e4ed3c5b42d4df2c412090cb0f10818);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1e4ed3c5b42d4df2c412090cb0f10818) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[223]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[223]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[149]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 357;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_subscript_value_1 = mod_consts[25];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_items);
        tmp_args_element_value_2 = par_items;
        frame_1e4ed3c5b42d4df2c412090cb0f10818->m_frame.f_lineno = 357;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e4ed3c5b42d4df2c412090cb0f10818);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e4ed3c5b42d4df2c412090cb0f10818);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e4ed3c5b42d4df2c412090cb0f10818);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e4ed3c5b42d4df2c412090cb0f10818, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e4ed3c5b42d4df2c412090cb0f10818->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e4ed3c5b42d4df2c412090cb0f10818, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e4ed3c5b42d4df2c412090cb0f10818,
        type_description_1,
        par_items,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1e4ed3c5b42d4df2c412090cb0f10818 == cache_frame_1e4ed3c5b42d4df2c412090cb0f10818) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1e4ed3c5b42d4df2c412090cb0f10818);
        cache_frame_1e4ed3c5b42d4df2c412090cb0f10818 = NULL;
    }

    assertFrameObject(frame_1e4ed3c5b42d4df2c412090cb0f10818);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_items);
    Py_DECREF(par_items);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_items);
    Py_DECREF(par_items);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__4_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_e3b52fca144c29d1b453e06d3e8efd4c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e3b52fca144c29d1b453e06d3e8efd4c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e3b52fca144c29d1b453e06d3e8efd4c)) {
        Py_XDECREF(cache_frame_e3b52fca144c29d1b453e06d3e8efd4c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e3b52fca144c29d1b453e06d3e8efd4c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e3b52fca144c29d1b453e06d3e8efd4c = MAKE_FUNCTION_FRAME(codeobj_e3b52fca144c29d1b453e06d3e8efd4c, module_youtube_dl$extractor$niconico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e3b52fca144c29d1b453e06d3e8efd4c->m_type_description == NULL);
    frame_e3b52fca144c29d1b453e06d3e8efd4c = cache_frame_e3b52fca144c29d1b453e06d3e8efd4c;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_e3b52fca144c29d1b453e06d3e8efd4c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e3b52fca144c29d1b453e06d3e8efd4c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_x);
        tmp_expression_value_2 = par_x;
        tmp_subscript_value_1 = mod_consts[224];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[225];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e3b52fca144c29d1b453e06d3e8efd4c);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e3b52fca144c29d1b453e06d3e8efd4c);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e3b52fca144c29d1b453e06d3e8efd4c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e3b52fca144c29d1b453e06d3e8efd4c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e3b52fca144c29d1b453e06d3e8efd4c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e3b52fca144c29d1b453e06d3e8efd4c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e3b52fca144c29d1b453e06d3e8efd4c,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_e3b52fca144c29d1b453e06d3e8efd4c == cache_frame_e3b52fca144c29d1b453e06d3e8efd4c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e3b52fca144c29d1b453e06d3e8efd4c);
        cache_frame_e3b52fca144c29d1b453e06d3e8efd4c = NULL;
    }

    assertFrameObject(frame_e3b52fca144c29d1b453e06d3e8efd4c);

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


static PyObject *impl_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__5_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_b1be06952b8de3d5b6ecc750a790cf93;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b1be06952b8de3d5b6ecc750a790cf93 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b1be06952b8de3d5b6ecc750a790cf93)) {
        Py_XDECREF(cache_frame_b1be06952b8de3d5b6ecc750a790cf93);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b1be06952b8de3d5b6ecc750a790cf93 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b1be06952b8de3d5b6ecc750a790cf93 = MAKE_FUNCTION_FRAME(codeobj_b1be06952b8de3d5b6ecc750a790cf93, module_youtube_dl$extractor$niconico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b1be06952b8de3d5b6ecc750a790cf93->m_type_description == NULL);
    frame_b1be06952b8de3d5b6ecc750a790cf93 = cache_frame_b1be06952b8de3d5b6ecc750a790cf93;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_b1be06952b8de3d5b6ecc750a790cf93);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b1be06952b8de3d5b6ecc750a790cf93) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_x);
        tmp_expression_value_1 = par_x;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b1be06952b8de3d5b6ecc750a790cf93->m_frame.f_lineno = 422;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[226]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b1be06952b8de3d5b6ecc750a790cf93);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b1be06952b8de3d5b6ecc750a790cf93);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b1be06952b8de3d5b6ecc750a790cf93);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b1be06952b8de3d5b6ecc750a790cf93, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b1be06952b8de3d5b6ecc750a790cf93->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b1be06952b8de3d5b6ecc750a790cf93, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b1be06952b8de3d5b6ecc750a790cf93,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_b1be06952b8de3d5b6ecc750a790cf93 == cache_frame_b1be06952b8de3d5b6ecc750a790cf93) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b1be06952b8de3d5b6ecc750a790cf93);
        cache_frame_b1be06952b8de3d5b6ecc750a790cf93 = NULL;
    }

    assertFrameObject(frame_b1be06952b8de3d5b6ecc750a790cf93);

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


static PyObject *impl_youtube_dl$extractor$niconico$$$function__5__call_api(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_list_id = python_pars[1];
    PyObject *par_resource = python_pars[2];
    PyObject *par_query = python_pars[3];
    struct Nuitka_FrameObject *frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc)) {
        Py_XDECREF(cache_frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc = MAKE_FUNCTION_FRAME(codeobj_9908ff88e6a8ce6c1e5ac9e72dd5d3bc, module_youtube_dl$extractor$niconico, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc->m_type_description == NULL);
    frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc = cache_frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[32]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = mod_consts[227];
        CHECK_OBJECT(par_list_id);
        tmp_add_expr_right_1 = par_list_id;
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 463;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_list_id);
        tmp_kw_call_arg_value_1_1 = par_list_id;
        tmp_mod_expr_left_1 = mod_consts[228];
        CHECK_OBJECT(par_resource);
        tmp_mod_expr_right_1 = par_resource;
        tmp_kw_call_arg_value_2_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 464;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_query);
        tmp_kw_call_dict_value_0_1 = par_query;
        tmp_kw_call_dict_value_1_1 = DICT_COPY(mod_consts[229]);
        frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc->m_frame.f_lineno = 462;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[230]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[86];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[231];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc,
        type_description_1,
        par_self,
        par_list_id,
        par_resource,
        par_query
    );


    // Release cached frame if used for exception.
    if (frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc == cache_frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc);
        cache_frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc = NULL;
    }

    assertFrameObject(frame_9908ff88e6a8ce6c1e5ac9e72dd5d3bc);

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
    CHECK_OBJECT(par_list_id);
    Py_DECREF(par_list_id);
    CHECK_OBJECT(par_resource);
    Py_DECREF(par_resource);
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_list_id);
    Py_DECREF(par_list_id);
    CHECK_OBJECT(par_resource);
    Py_DECREF(par_resource);
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$niconico$$$function__6__parse_owner(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_item = python_pars[1];
    PyObject *var_owner = NULL;
    struct Nuitka_FrameObject *frame_bf9d958a46104684da3954756e9bd409;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_bf9d958a46104684da3954756e9bd409 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bf9d958a46104684da3954756e9bd409)) {
        Py_XDECREF(cache_frame_bf9d958a46104684da3954756e9bd409);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf9d958a46104684da3954756e9bd409 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf9d958a46104684da3954756e9bd409 = MAKE_FUNCTION_FRAME(codeobj_bf9d958a46104684da3954756e9bd409, module_youtube_dl$extractor$niconico, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bf9d958a46104684da3954756e9bd409->m_type_description == NULL);
    frame_bf9d958a46104684da3954756e9bd409 = cache_frame_bf9d958a46104684da3954756e9bd409;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_bf9d958a46104684da3954756e9bd409);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bf9d958a46104684da3954756e9bd409) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_item);
        tmp_expression_value_1 = par_item;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_bf9d958a46104684da3954756e9bd409->m_frame.f_lineno = 468;
        tmp_or_left_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[226]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 468;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = MAKE_DICT_EMPTY();
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_owner == NULL);
        var_owner = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_owner);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_owner);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooo";
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
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        tmp_dict_key_1 = mod_consts[209];
        CHECK_OBJECT(var_owner);
        tmp_expression_value_2 = var_owner;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_bf9d958a46104684da3954756e9bd409->m_frame.f_lineno = 471;
        tmp_dict_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[232]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[211];
            CHECK_OBJECT(var_owner);
            tmp_expression_value_3 = var_owner;
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[15]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            frame_bf9d958a46104684da3954756e9bd409->m_frame.f_lineno = 472;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[203]);

            Py_DECREF(tmp_called_value_3);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
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

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf9d958a46104684da3954756e9bd409);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf9d958a46104684da3954756e9bd409);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf9d958a46104684da3954756e9bd409);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bf9d958a46104684da3954756e9bd409, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf9d958a46104684da3954756e9bd409->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf9d958a46104684da3954756e9bd409, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf9d958a46104684da3954756e9bd409,
        type_description_1,
        par_self,
        par_item,
        var_owner
    );


    // Release cached frame if used for exception.
    if (frame_bf9d958a46104684da3954756e9bd409 == cache_frame_bf9d958a46104684da3954756e9bd409) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bf9d958a46104684da3954756e9bd409);
        cache_frame_bf9d958a46104684da3954756e9bd409 = NULL;
    }

    assertFrameObject(frame_bf9d958a46104684da3954756e9bd409);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = MAKE_DICT_EMPTY();
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_owner);
    Py_DECREF(var_owner);
    var_owner = NULL;
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

    Py_XDECREF(var_owner);
    var_owner = NULL;
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
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$niconico$$$function__7__fetch_page(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_list_id = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_page = Nuitka_Cell_New1(python_pars[2]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_list_id;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_page;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_self;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_GENERATOR_youtube_dl$extractor$niconico$$$function__7__fetch_page$$$genobj__1__fetch_page(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_page);
    Py_DECREF(par_page);
    par_page = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_list_id);
    Py_DECREF(par_list_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct youtube_dl$extractor$niconico$$$function__7__fetch_page$$$genobj__1__fetch_page_locals {
    PyObject *var_items;
    PyObject *var_item;
    PyObject *var_video;
    PyObject *var_video_id;
    struct Nuitka_CellObject *var_count;
    PyObject *var_get_count;
    PyObject *var_info;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    bool tmp_result;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *youtube_dl$extractor$niconico$$$function__7__fetch_page$$$genobj__1__fetch_page_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct youtube_dl$extractor$niconico$$$function__7__fetch_page$$$genobj__1__fetch_page_locals *generator_heap = (struct youtube_dl$extractor$niconico$$$function__7__fetch_page$$$genobj__1__fetch_page_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_items = NULL;
    generator_heap->var_item = NULL;
    generator_heap->var_video = NULL;
    generator_heap->var_video_id = NULL;
    generator_heap->var_count = Nuitka_Cell_Empty();
    generator_heap->var_get_count = NULL;
    generator_heap->var_info = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_3732e729aefd0dab92308be46ac4639e, module_youtube_dl$extractor$niconico, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[233]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 477;
            generator_heap->type_description_1 = "cccoooocoo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_iadd_expr_right_1 = mod_consts[234];
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 477;
            generator_heap->type_description_1 = "cccoooocoo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_iadd_expr_left_1;
        PyCell_SET(generator->m_closure[1], tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[147]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 478;
            generator_heap->type_description_1 = "cccoooocoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[235]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 478;
            generator_heap->type_description_1 = "cccoooocoo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[236]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 478;
            generator_heap->type_description_1 = "cccoooocoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_mod_expr_left_1 = mod_consts[237];
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_mod_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_args_element_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            generator_heap->exception_lineno = 478;
            generator_heap->type_description_1 = "cccoooocoo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[233];
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_dict_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_args_element_value_3 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_3;
            generator_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(generator_heap->tmp_res != 0));
            tmp_dict_key_1 = mod_consts[238];
            if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[147]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 480;
                generator_heap->type_description_1 = "cccoooocoo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[2]);
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[239]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 480;
                generator_heap->type_description_1 = "cccoooocoo";
                goto dict_build_exception_1;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(generator_heap->tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        generator->m_frame->m_frame.f_lineno = 478;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 478;
            generator_heap->type_description_1 = "cccoooocoo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[240];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 481;
            generator_heap->type_description_1 = "cccoooocoo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_items == NULL);
        generator_heap->var_items = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->var_items);
        tmp_iter_arg_1 = generator_heap->var_items;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 482;
            generator_heap->type_description_1 = "cccoooocoo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccoooocoo";
                generator_heap->exception_lineno = 482;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_item;
            generator_heap->var_item = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_item);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(generator_heap->var_item);
        tmp_expression_value_4 = generator_heap->var_item;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[15]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 483;
            generator_heap->type_description_1 = "cccoooocoo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 483;
        tmp_or_left_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[241]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 483;
            generator_heap->type_description_1 = "cccoooocoo";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            generator_heap->exception_lineno = 483;
            generator_heap->type_description_1 = "cccoooocoo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = MAKE_DICT_EMPTY();
        tmp_assign_source_6 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_6 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = generator_heap->var_video;
            generator_heap->var_video = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(generator_heap->var_video);
        tmp_expression_value_5 = generator_heap->var_video;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[15]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 484;
            generator_heap->type_description_1 = "cccoooocoo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 484;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[203]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 484;
            generator_heap->type_description_1 = "cccoooocoo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_video_id;
            generator_heap->var_video_id = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(generator_heap->var_video_id);
        tmp_operand_value_1 = generator_heap->var_video_id;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 485;
            generator_heap->type_description_1 = "cccoooocoo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
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
        PyObject *tmp_assign_source_8;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(generator_heap->var_video);
        tmp_expression_value_6 = generator_heap->var_video;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[15]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 487;
            generator_heap->type_description_1 = "cccoooocoo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 487;
        tmp_or_left_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[242]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 487;
            generator_heap->type_description_1 = "cccoooocoo";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            generator_heap->exception_lineno = 487;
            generator_heap->type_description_1 = "cccoooocoo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        tmp_or_right_value_2 = MAKE_DICT_EMPTY();
        tmp_assign_source_8 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_assign_source_8 = tmp_or_left_value_2;
        or_end_2:;
        {
            PyObject *old = Nuitka_Cell_GET(generator_heap->var_count);
            PyCell_SET(generator_heap->var_count, tmp_assign_source_8);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = generator_heap->var_count;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_9 = MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__7__fetch_page$$$genobj__1__fetch_page$$$function__1_lambda(tmp_closure_1);

        {
            PyObject *old = generator_heap->var_get_count;
            generator_heap->var_get_count = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[244];
        tmp_dict_value_2 = mod_consts[33];
        tmp_assign_source_10 = _PyDict_NewPresized( 9 );
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_called_value_9;
            PyObject *tmp_called_value_10;
            PyObject *tmp_called_instance_1;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(generator_heap->tmp_res != 0));
            tmp_dict_key_2 = mod_consts[55];
            CHECK_OBJECT(generator_heap->var_video_id);
            tmp_dict_value_2 = generator_heap->var_video_id;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(generator_heap->tmp_res != 0));
            tmp_dict_key_2 = mod_consts[207];
            CHECK_OBJECT(generator_heap->var_video);
            tmp_expression_value_7 = generator_heap->var_video;
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[15]);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 492;
                generator_heap->type_description_1 = "cccoooocoo";
                goto dict_build_exception_2;
            }
            generator->m_frame->m_frame.f_lineno = 492;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[152]);

            Py_DECREF(tmp_called_value_5);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 492;
                generator_heap->type_description_1 = "cccoooocoo";
                goto dict_build_exception_2;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(generator_heap->tmp_res != 0));
            tmp_dict_key_2 = mod_consts[33];
            tmp_add_expr_left_1 = mod_consts[245];
            CHECK_OBJECT(generator_heap->var_video_id);
            tmp_add_expr_right_1 = generator_heap->var_video_id;
            tmp_dict_value_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 493;
                generator_heap->type_description_1 = "cccoooocoo";
                goto dict_build_exception_2;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(generator_heap->tmp_res != 0));
            tmp_dict_key_2 = mod_consts[208];
            CHECK_OBJECT(generator_heap->var_video);
            tmp_expression_value_8 = generator_heap->var_video;
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[15]);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 494;
                generator_heap->type_description_1 = "cccoooocoo";
                goto dict_build_exception_2;
            }
            generator->m_frame->m_frame.f_lineno = 494;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[246]);

            Py_DECREF(tmp_called_value_6);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 494;
                generator_heap->type_description_1 = "cccoooocoo";
                goto dict_build_exception_2;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(generator_heap->tmp_res != 0));
            tmp_dict_key_2 = mod_consts[214];
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[184]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 495;
                generator_heap->type_description_1 = "cccoooocoo";
                goto dict_build_exception_2;
            }
            CHECK_OBJECT(generator_heap->var_video);
            tmp_expression_value_9 = generator_heap->var_video;
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[15]);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 495;
                generator_heap->type_description_1 = "cccoooocoo";
                goto dict_build_exception_2;
            }
            generator->m_frame->m_frame.f_lineno = 495;
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[200]);

            Py_DECREF(tmp_called_value_8);
            if (tmp_args_element_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 495;
                generator_heap->type_description_1 = "cccoooocoo";
                goto dict_build_exception_2;
            }
            generator->m_frame->m_frame.f_lineno = 495;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 495;
                generator_heap->type_description_1 = "cccoooocoo";
                goto dict_build_exception_2;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(generator_heap->tmp_res != 0));
            tmp_dict_key_2 = mod_consts[212];
            CHECK_OBJECT(generator_heap->var_get_count);
            tmp_called_value_9 = generator_heap->var_get_count;
            generator->m_frame->m_frame.f_lineno = 496;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[247]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 496;
                generator_heap->type_description_1 = "cccoooocoo";
                goto dict_build_exception_2;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(generator_heap->tmp_res != 0));
            tmp_dict_key_2 = mod_consts[213];
            CHECK_OBJECT(generator_heap->var_get_count);
            tmp_called_value_10 = generator_heap->var_get_count;
            generator->m_frame->m_frame.f_lineno = 497;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[248]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 497;
                generator_heap->type_description_1 = "cccoooocoo";
                goto dict_build_exception_2;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(generator_heap->tmp_res != 0));
            tmp_dict_key_2 = mod_consts[249];
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[250]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[250]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 498;
                generator_heap->type_description_1 = "cccoooocoo";
                goto dict_build_exception_2;
            }
            generator->m_frame->m_frame.f_lineno = 498;
            tmp_dict_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[249]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 498;
                generator_heap->type_description_1 = "cccoooocoo";
                goto dict_build_exception_2;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(generator_heap->tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_10);
        goto try_except_handler_2;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        {
            PyObject *old = generator_heap->var_info;
            generator_heap->var_info = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(generator_heap->var_info);
        tmp_dict_arg_value_1 = generator_heap->var_info;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[147]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 500;
            generator_heap->type_description_1 = "cccoooocoo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(generator->m_closure[2]);
        CHECK_OBJECT(generator_heap->var_video);
        tmp_args_element_value_5 = generator_heap->var_video;
        generator->m_frame->m_frame.f_lineno = 500;
        tmp_iterable_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[251], tmp_args_element_value_5);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 500;
            generator_heap->type_description_1 = "cccoooocoo";
            goto try_except_handler_2;
        }
        assert(PyDict_Check(tmp_dict_arg_value_1));
        if (HAS_ATTR_BOOL(tmp_iterable_value_1, const_str_plain_keys)){
            generator_heap->tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
        } else {
            generator_heap->tmp_res = PyDict_MergeFromSeq2(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
        }

        Py_DECREF(tmp_iterable_value_1);
        if (generator_heap->tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 500;
            generator_heap->type_description_1 = "cccoooocoo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_expression_value_10;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_info);
        tmp_expression_value_10 = generator_heap->var_info;
        Py_INCREF(tmp_expression_value_10);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_10;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 501;
            generator_heap->type_description_1 = "cccoooocoo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 482;
        generator_heap->type_description_1 = "cccoooocoo";
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

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
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
            generator->m_closure[2],
            generator->m_closure[0],
            generator->m_closure[1],
            generator_heap->var_items,
            generator_heap->var_item,
            generator_heap->var_video,
            generator_heap->var_video_id,
            generator_heap->var_count,
            generator_heap->var_get_count,
            generator_heap->var_info
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

    Py_XDECREF(generator_heap->var_items);
    generator_heap->var_items = NULL;
    Py_XDECREF(generator_heap->var_item);
    generator_heap->var_item = NULL;
    Py_XDECREF(generator_heap->var_video);
    generator_heap->var_video = NULL;
    Py_XDECREF(generator_heap->var_video_id);
    generator_heap->var_video_id = NULL;
    CHECK_OBJECT(generator_heap->var_count);
    Py_DECREF(generator_heap->var_count);
    generator_heap->var_count = NULL;
    Py_XDECREF(generator_heap->var_get_count);
    generator_heap->var_get_count = NULL;
    Py_XDECREF(generator_heap->var_info);
    generator_heap->var_info = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    CHECK_OBJECT(generator_heap->var_items);
    Py_DECREF(generator_heap->var_items);
    generator_heap->var_items = NULL;
    Py_XDECREF(generator_heap->var_item);
    generator_heap->var_item = NULL;
    Py_XDECREF(generator_heap->var_video);
    generator_heap->var_video = NULL;
    Py_XDECREF(generator_heap->var_video_id);
    generator_heap->var_video_id = NULL;
    CHECK_OBJECT(generator_heap->var_count);
    Py_DECREF(generator_heap->var_count);
    generator_heap->var_count = NULL;
    Py_XDECREF(generator_heap->var_get_count);
    generator_heap->var_get_count = NULL;
    Py_XDECREF(generator_heap->var_info);
    generator_heap->var_info = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_youtube_dl$extractor$niconico$$$function__7__fetch_page$$$genobj__1__fetch_page(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        youtube_dl$extractor$niconico$$$function__7__fetch_page$$$genobj__1__fetch_page_context,
        module_youtube_dl$extractor$niconico,
        mod_consts[252],
#if PYTHON_VERSION >= 0x350
        mod_consts[253],
#endif
        codeobj_3732e729aefd0dab92308be46ac4639e,
        closure,
        3,
        sizeof(struct youtube_dl$extractor$niconico$$$function__7__fetch_page$$$genobj__1__fetch_page_locals)
    );
}


static PyObject *impl_youtube_dl$extractor$niconico$$$function__7__fetch_page$$$genobj__1__fetch_page$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_edbda1cc9072cccdc7f2a0ad07f3a35b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_edbda1cc9072cccdc7f2a0ad07f3a35b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_edbda1cc9072cccdc7f2a0ad07f3a35b)) {
        Py_XDECREF(cache_frame_edbda1cc9072cccdc7f2a0ad07f3a35b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_edbda1cc9072cccdc7f2a0ad07f3a35b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_edbda1cc9072cccdc7f2a0ad07f3a35b = MAKE_FUNCTION_FRAME(codeobj_edbda1cc9072cccdc7f2a0ad07f3a35b, module_youtube_dl$extractor$niconico, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_edbda1cc9072cccdc7f2a0ad07f3a35b->m_type_description == NULL);
    frame_edbda1cc9072cccdc7f2a0ad07f3a35b = cache_frame_edbda1cc9072cccdc7f2a0ad07f3a35b;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_edbda1cc9072cccdc7f2a0ad07f3a35b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_edbda1cc9072cccdc7f2a0ad07f3a35b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[254]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 488;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_edbda1cc9072cccdc7f2a0ad07f3a35b->m_frame.f_lineno = 488;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_edbda1cc9072cccdc7f2a0ad07f3a35b->m_frame.f_lineno = 488;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_edbda1cc9072cccdc7f2a0ad07f3a35b);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_edbda1cc9072cccdc7f2a0ad07f3a35b);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_edbda1cc9072cccdc7f2a0ad07f3a35b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_edbda1cc9072cccdc7f2a0ad07f3a35b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_edbda1cc9072cccdc7f2a0ad07f3a35b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_edbda1cc9072cccdc7f2a0ad07f3a35b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_edbda1cc9072cccdc7f2a0ad07f3a35b,
        type_description_1,
        par_x,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_edbda1cc9072cccdc7f2a0ad07f3a35b == cache_frame_edbda1cc9072cccdc7f2a0ad07f3a35b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_edbda1cc9072cccdc7f2a0ad07f3a35b);
        cache_frame_edbda1cc9072cccdc7f2a0ad07f3a35b = NULL;
    }

    assertFrameObject(frame_edbda1cc9072cccdc7f2a0ad07f3a35b);

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


static PyObject *impl_youtube_dl$extractor$niconico$$$function__8__real_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_list_id = NULL;
    PyObject *var_mylist = NULL;
    PyObject *var_entries = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_f2f221a63042e026b7fcc91a4b56fe86;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f2f221a63042e026b7fcc91a4b56fe86 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f2f221a63042e026b7fcc91a4b56fe86)) {
        Py_XDECREF(cache_frame_f2f221a63042e026b7fcc91a4b56fe86);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f2f221a63042e026b7fcc91a4b56fe86 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f2f221a63042e026b7fcc91a4b56fe86 = MAKE_FUNCTION_FRAME(codeobj_f2f221a63042e026b7fcc91a4b56fe86, module_youtube_dl$extractor$niconico, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f2f221a63042e026b7fcc91a4b56fe86->m_type_description == NULL);
    frame_f2f221a63042e026b7fcc91a4b56fe86 = cache_frame_f2f221a63042e026b7fcc91a4b56fe86;


    // Push the new frame as the currently active one.
    pushFrameStack(frame_f2f221a63042e026b7fcc91a4b56fe86);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f2f221a63042e026b7fcc91a4b56fe86) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_value_1 = par_url;
        frame_f2f221a63042e026b7fcc91a4b56fe86->m_frame.f_lineno = 504;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[103], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_list_id == NULL);
        var_list_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_list_id);
        tmp_args_element_value_2 = var_list_id;
        tmp_args_element_value_3 = mod_consts[255];
        tmp_args_element_value_4 = DICT_COPY(mod_consts[256]);
        frame_f2f221a63042e026b7fcc91a4b56fe86->m_frame.f_lineno = 505;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_2,
                mod_consts[235],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mylist == NULL);
        var_mylist = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[257]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[257]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[258]);
        }
        assert(!(tmp_called_value_2 == NULL));
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[252]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 509;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_list_id);
        tmp_args_element_value_7 = var_list_id;
        frame_f2f221a63042e026b7fcc91a4b56fe86->m_frame.f_lineno = 509;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[259]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[259]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 510;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[260]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 510;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mylist);
        tmp_expression_value_3 = var_mylist;
        tmp_subscript_value_1 = mod_consts[261];
        tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 510;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_truediv_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[239]);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 510;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 510;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_f2f221a63042e026b7fcc91a4b56fe86->m_frame.f_lineno = 510;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 510;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[239]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 511;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_f2f221a63042e026b7fcc91a4b56fe86->m_frame.f_lineno = 508;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_8, tmp_args_element_value_10};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_entries == NULL);
        var_entries = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[262]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_entries);
        tmp_args_element_value_11 = var_entries;
        CHECK_OBJECT(var_list_id);
        tmp_args_element_value_12 = var_list_id;
        CHECK_OBJECT(var_mylist);
        tmp_expression_value_7 = var_mylist;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[15]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 513;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_f2f221a63042e026b7fcc91a4b56fe86->m_frame.f_lineno = 513;
        tmp_args_element_value_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[232]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 513;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mylist);
        tmp_expression_value_8 = var_mylist;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[15]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 513;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_f2f221a63042e026b7fcc91a4b56fe86->m_frame.f_lineno = 513;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[165]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 513;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_f2f221a63042e026b7fcc91a4b56fe86->m_frame.f_lineno = 512;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(var_result);
        tmp_expression_value_9 = var_result;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[263]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_mylist);
        tmp_args_element_value_16 = var_mylist;
        frame_f2f221a63042e026b7fcc91a4b56fe86->m_frame.f_lineno = 514;
        tmp_args_element_value_15 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[251], tmp_args_element_value_16);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 514;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_f2f221a63042e026b7fcc91a4b56fe86->m_frame.f_lineno = 514;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f2f221a63042e026b7fcc91a4b56fe86);
#endif

    // Put the previous frame back on top.
    popFrameStack();


    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f2f221a63042e026b7fcc91a4b56fe86);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f2f221a63042e026b7fcc91a4b56fe86, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f2f221a63042e026b7fcc91a4b56fe86->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f2f221a63042e026b7fcc91a4b56fe86, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f2f221a63042e026b7fcc91a4b56fe86,
        type_description_1,
        par_self,
        par_url,
        var_list_id,
        var_mylist,
        var_entries,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_f2f221a63042e026b7fcc91a4b56fe86 == cache_frame_f2f221a63042e026b7fcc91a4b56fe86) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f2f221a63042e026b7fcc91a4b56fe86);
        cache_frame_f2f221a63042e026b7fcc91a4b56fe86 = NULL;
    }

    assertFrameObject(frame_f2f221a63042e026b7fcc91a4b56fe86);

    // Put the previous frame back on top.
    popFrameStack();


    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_list_id);
    Py_DECREF(var_list_id);
    var_list_id = NULL;
    CHECK_OBJECT(var_mylist);
    Py_DECREF(var_mylist);
    var_mylist = NULL;
    CHECK_OBJECT(var_entries);
    Py_DECREF(var_entries);
    var_entries = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
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

    Py_XDECREF(var_list_id);
    var_list_id = NULL;
    Py_XDECREF(var_mylist);
    var_mylist = NULL;
    Py_XDECREF(var_entries);
    var_entries = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
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



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__1__real_initialize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$niconico$$$function__1__real_initialize,
        mod_consts[348],
#if PYTHON_VERSION >= 0x300
        mod_consts[349],
#endif
        codeobj_9f95fb690067d54888b343a272462285,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$niconico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__2__login() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$niconico$$$function__2__login,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[350],
#endif
        codeobj_9dbeb518d458e51c9e908930b1a69878,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$niconico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[351],
#endif
        codeobj_e7539b1ec9ef4a2256ecbcb2559d0abc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$niconico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality$$$function__1_yesno() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality$$$function__1_yesno,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[24],
#endif
        codeobj_50910376f48093012230a7c1556b6b27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$niconico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality$$$function__2_lambda,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[31],
#endif
        codeobj_bca1db37106f5da744866cba9927511a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$niconico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$niconico$$$function__4__real_extract,
        mod_consts[352],
#if PYTHON_VERSION >= 0x300
        mod_consts[353],
#endif
        codeobj_638217ab9fa1177c4abb9be8aed80bc5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$niconico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__1__format_id_from_url(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__1__format_id_from_url,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_19e29283493effc639ca8abe0f9ffe61,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$niconico,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__2_get_video_info(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__2_get_video_info,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_036be7a0618e1e79fe886415fd2eb297,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$niconico,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__3_get_video_info(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__3_get_video_info,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_1e4ed3c5b42d4df2c412090cb0f10818,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$niconico,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__4_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__4_lambda,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_e3b52fca144c29d1b453e06d3e8efd4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$niconico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__5_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__5_lambda,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_b1be06952b8de3d5b6ecc750a790cf93,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$niconico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__5__call_api() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$niconico$$$function__5__call_api,
        mod_consts[235],
#if PYTHON_VERSION >= 0x300
        mod_consts[359],
#endif
        codeobj_9908ff88e6a8ce6c1e5ac9e72dd5d3bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$niconico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__6__parse_owner() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$niconico$$$function__6__parse_owner,
        mod_consts[251],
#if PYTHON_VERSION >= 0x300
        mod_consts[360],
#endif
        codeobj_bf9d958a46104684da3954756e9bd409,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$niconico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__7__fetch_page() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$niconico$$$function__7__fetch_page,
        mod_consts[252],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        codeobj_3732e729aefd0dab92308be46ac4639e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$niconico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__7__fetch_page$$$genobj__1__fetch_page$$$function__1_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$niconico$$$function__7__fetch_page$$$genobj__1__fetch_page$$$function__1_lambda,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[243],
#endif
        codeobj_edbda1cc9072cccdc7f2a0ad07f3a35b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$niconico,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__8__real_extract() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$niconico$$$function__8__real_extract,
        mod_consts[352],
#if PYTHON_VERSION >= 0x300
        mod_consts[361],
#endif
        codeobj_f2f221a63042e026b7fcc91a4b56fe86,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$niconico,
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

function_impl_code functable_youtube_dl$extractor$niconico[] = {
    impl_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality$$$function__1_yesno,
    impl_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality$$$function__2_lambda,
    impl_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__1__format_id_from_url,
    impl_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__2_get_video_info,
    impl_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__3_get_video_info,
    impl_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__4_lambda,
    impl_youtube_dl$extractor$niconico$$$function__4__real_extract$$$function__5_lambda,
    impl_youtube_dl$extractor$niconico$$$function__7__fetch_page$$$genobj__1__fetch_page$$$function__1_lambda,
    impl_youtube_dl$extractor$niconico$$$function__1__real_initialize,
    impl_youtube_dl$extractor$niconico$$$function__2__login,
    impl_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality,
    impl_youtube_dl$extractor$niconico$$$function__4__real_extract,
    impl_youtube_dl$extractor$niconico$$$function__5__call_api,
    impl_youtube_dl$extractor$niconico$$$function__6__parse_owner,
    impl_youtube_dl$extractor$niconico$$$function__7__fetch_page,
    impl_youtube_dl$extractor$niconico$$$function__8__real_extract,
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

    function_impl_code *current = functable_youtube_dl$extractor$niconico;
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

    if (offset > sizeof(functable_youtube_dl$extractor$niconico) || offset < 0) {
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
        functable_youtube_dl$extractor$niconico[offset],
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
        module_youtube_dl$extractor$niconico,
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
PyObject *modulecode_youtube_dl$extractor$niconico(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("youtube_dl.extractor.niconico");

    // Store the module for future use.
    module_youtube_dl$extractor$niconico = module;

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
        PRINT_STRING("youtube_dl.extractor.niconico: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl.extractor.niconico: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("youtube_dl.extractor.niconico: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inityoutube_dl$extractor$niconico\n");

    moduledict_youtube_dl$extractor$niconico = MODULE_DICT(module_youtube_dl$extractor$niconico);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_youtube_dl$extractor$niconico,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$niconico,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[60]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$niconico,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$niconico,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$niconico,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_youtube_dl$extractor$niconico);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_youtube_dl$extractor$niconico);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_490f62a4d35fc71e87711482f44cfe27;
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
    PyObject *locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_07f2ae3266047f7d1922739b2d7cf96c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_07f2ae3266047f7d1922739b2d7cf96c_2 = NULL;
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
    PyObject *locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442 = NULL;
    struct Nuitka_FrameObject *frame_c34667799335a9c4f899a6cdfc6a0bec_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c34667799335a9c4f899a6cdfc6a0bec_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_490f62a4d35fc71e87711482f44cfe27 = MAKE_MODULE_FRAME(codeobj_490f62a4d35fc71e87711482f44cfe27, module_youtube_dl$extractor$niconico);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_490f62a4d35fc71e87711482f44cfe27);
    assert(Py_REFCNT(frame_490f62a4d35fc71e87711482f44cfe27) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[266]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[266]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[267], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[266]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[266]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[268], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[270]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[179];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_youtube_dl$extractor$niconico;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[18];
        frame_490f62a4d35fc71e87711482f44cfe27->m_frame.f_lineno = 4;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_FUNCTOOLS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[37];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_youtube_dl$extractor$niconico;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[18];
        frame_490f62a4d35fc71e87711482f44cfe27->m_frame.f_lineno = 6;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[259];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_youtube_dl$extractor$niconico;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[18];
        frame_490f62a4d35fc71e87711482f44cfe27->m_frame.f_lineno = 7;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[272];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_youtube_dl$extractor$niconico;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[273];
        tmp_level_value_4 = mod_consts[234];
        frame_490f62a4d35fc71e87711482f44cfe27->m_frame.f_lineno = 9;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_youtube_dl$extractor$niconico,
                mod_consts[274],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[274]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[275];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_youtube_dl$extractor$niconico;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[276];
        tmp_level_value_5 = mod_consts[277];
        frame_490f62a4d35fc71e87711482f44cfe27->m_frame.f_lineno = 10;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
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
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_youtube_dl$extractor$niconico,
                mod_consts[13],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[13]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_youtube_dl$extractor$niconico,
                mod_consts[11],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[11]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[278];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_youtube_dl$extractor$niconico;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[279];
        tmp_level_value_6 = mod_consts[277];
        frame_490f62a4d35fc71e87711482f44cfe27->m_frame.f_lineno = 14;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_youtube_dl$extractor$niconico,
                mod_consts[138],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[138]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_youtube_dl$extractor$niconico,
                mod_consts[223],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[223]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_youtube_dl$extractor$niconico,
                mod_consts[122],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[122]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_youtube_dl$extractor$niconico,
                mod_consts[91],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[91]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_youtube_dl$extractor$niconico,
                mod_consts[257],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[257]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_youtube_dl$extractor$niconico,
                mod_consts[184],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[184]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_youtube_dl$extractor$niconico,
                mod_consts[196],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[196]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_youtube_dl$extractor$niconico,
                mod_consts[166],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[166]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_youtube_dl$extractor$niconico,
                mod_consts[101],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[101]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_youtube_dl$extractor$niconico,
                mod_consts[192],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[192]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_youtube_dl$extractor$niconico,
                mod_consts[168],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[168]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_youtube_dl$extractor$niconico,
                mod_consts[8],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[8]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_youtube_dl$extractor$niconico,
                mod_consts[220],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[220]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_26);
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
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[274]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[274]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        tmp_assign_source_27 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_27, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_28 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
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
        tmp_key_value_1 = mod_consts[280];
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
        tmp_key_value_2 = mod_consts[280];
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


            exception_lineno = 31;

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
        tmp_subscript_value_1 = mod_consts[18];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

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
        tmp_assign_source_30 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[280];
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
    tmp_dictdel_key = mod_consts[280];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 31;

        goto try_except_handler_3;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[281]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[281]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[250];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_490f62a4d35fc71e87711482f44cfe27->m_frame.f_lineno = 31;
        tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[282]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

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
        tmp_mod_expr_left_1 = mod_consts[283];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[284];
        tmp_getattr_default_1 = mod_consts[285];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[284]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

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


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 31;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_32;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[286];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[287], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[250];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[288], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_5;
        }
        if (isFrameUnusable(cache_frame_07f2ae3266047f7d1922739b2d7cf96c_2)) {
            Py_XDECREF(cache_frame_07f2ae3266047f7d1922739b2d7cf96c_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_07f2ae3266047f7d1922739b2d7cf96c_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_07f2ae3266047f7d1922739b2d7cf96c_2 = MAKE_CLASS_FRAME(codeobj_07f2ae3266047f7d1922739b2d7cf96c, module_youtube_dl$extractor$niconico, NULL, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_07f2ae3266047f7d1922739b2d7cf96c_2->m_type_description == NULL);
        frame_07f2ae3266047f7d1922739b2d7cf96c_2 = cache_frame_07f2ae3266047f7d1922739b2d7cf96c_2;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_07f2ae3266047f7d1922739b2d7cf96c_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_07f2ae3266047f7d1922739b2d7cf96c_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[289];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[129], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[290];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[291], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_dict_key_1 = mod_consts[33];
            tmp_dict_value_1 = mod_consts[292];
            tmp_list_element_1 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[293];
                tmp_dict_value_1 = mod_consts[294];
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[295];
                tmp_dict_key_2 = mod_consts[55];
                tmp_dict_value_2 = mod_consts[296];
                tmp_dict_value_1 = _PyDict_NewPresized( 12 );
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[88];
                tmp_dict_value_2 = mod_consts[89];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[207];
                tmp_dict_value_2 = mod_consts[297];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[163];
                tmp_dict_value_2 = mod_consts[298];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[209];
                tmp_dict_value_2 = mod_consts[299];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[211];
                tmp_dict_value_2 = mod_consts[300];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[301];
                tmp_dict_value_2 = mod_consts[302];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[210];
                tmp_dict_value_2 = PyObject_GetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[303]);

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
                tmp_dict_key_2 = mod_consts[208];
                tmp_dict_value_2 = mod_consts[304];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[214];
                tmp_dict_value_2 = mod_consts[305];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[212];
                tmp_dict_value_2 = PyObject_GetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[303]);

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
                tmp_dict_key_2 = mod_consts[213];
                tmp_dict_value_2 = PyObject_GetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[303]);

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
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[306];
                tmp_dict_value_1 = mod_consts[307];
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            tmp_dictset_value = MAKE_LIST_EMPTY(8);
            {
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                PyObject *tmp_dict_key_5;
                PyObject *tmp_dict_value_5;
                PyObject *tmp_dict_key_7;
                PyObject *tmp_dict_value_7;
                PyObject *tmp_dict_key_9;
                PyObject *tmp_dict_value_9;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_list_element_1 = DEEP_COPY_DICT(mod_consts[308]);
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
                tmp_dict_key_3 = mod_consts[33];
                tmp_dict_value_3 = mod_consts[309];
                tmp_list_element_1 = _PyDict_NewPresized( 3 );
                {
                    PyObject *tmp_dict_key_4;
                    PyObject *tmp_dict_value_4;
                    tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_3, tmp_dict_value_3);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_3 = mod_consts[295];
                    tmp_dict_key_4 = mod_consts[55];
                    tmp_dict_value_4 = mod_consts[310];
                    tmp_dict_value_3 = _PyDict_NewPresized( 9 );
                    tmp_res = PyDict_SetItem(tmp_dict_value_3, tmp_dict_key_4, tmp_dict_value_4);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_4 = mod_consts[88];
                    tmp_dict_value_4 = mod_consts[311];
                    tmp_res = PyDict_SetItem(tmp_dict_value_3, tmp_dict_key_4, tmp_dict_value_4);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_4 = mod_consts[208];
                    tmp_dict_value_4 = mod_consts[121];
                    tmp_res = PyDict_SetItem(tmp_dict_value_3, tmp_dict_key_4, tmp_dict_value_4);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_4 = mod_consts[207];
                    tmp_dict_value_4 = mod_consts[312];
                    tmp_res = PyDict_SetItem(tmp_dict_value_3, tmp_dict_key_4, tmp_dict_value_4);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_4 = mod_consts[163];
                    tmp_dict_value_4 = mod_consts[298];
                    tmp_res = PyDict_SetItem(tmp_dict_value_3, tmp_dict_key_4, tmp_dict_value_4);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_4 = mod_consts[301];
                    tmp_dict_value_4 = mod_consts[313];
                    tmp_res = PyDict_SetItem(tmp_dict_value_3, tmp_dict_key_4, tmp_dict_value_4);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_4 = mod_consts[210];
                    tmp_dict_value_4 = PyObject_GetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[303]);

                    if (tmp_dict_value_4 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
                            Py_INCREF(tmp_dict_value_4);
                        } else {
                            goto frame_exception_exit_2;
                        }
                    }

                    tmp_res = PyDict_SetItem(tmp_dict_value_3, tmp_dict_key_4, tmp_dict_value_4);
                    Py_DECREF(tmp_dict_value_4);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_4 = mod_consts[214];
                    tmp_dict_value_4 = mod_consts[314];
                    tmp_res = PyDict_SetItem(tmp_dict_value_3, tmp_dict_key_4, tmp_dict_value_4);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_4 = mod_consts[212];
                    tmp_dict_value_4 = PyObject_GetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[303]);

                    if (tmp_dict_value_4 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
                            Py_INCREF(tmp_dict_value_4);
                        } else {
                            goto frame_exception_exit_2;
                        }
                    }

                    tmp_res = PyDict_SetItem(tmp_dict_value_3, tmp_dict_key_4, tmp_dict_value_4);
                    Py_DECREF(tmp_dict_value_4);
                    assert(!(tmp_res != 0));
                    tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_3, tmp_dict_value_3);
                    Py_DECREF(tmp_dict_value_3);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_3 = mod_consts[306];
                    tmp_dict_value_3 = mod_consts[307];
                    tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_3, tmp_dict_value_3);
                    assert(!(tmp_res != 0));
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
                tmp_list_element_1 = DEEP_COPY_DICT(mod_consts[315]);
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_1);
                tmp_dict_key_5 = mod_consts[33];
                tmp_dict_value_5 = mod_consts[316];
                tmp_list_element_1 = _PyDict_NewPresized( 4 );
                {
                    PyObject *tmp_dict_key_6;
                    PyObject *tmp_dict_value_6;
                    tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_5, tmp_dict_value_5);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_5 = mod_consts[293];
                    tmp_dict_value_5 = mod_consts[317];
                    tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_5, tmp_dict_value_5);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_5 = mod_consts[295];
                    tmp_dict_key_6 = mod_consts[55];
                    tmp_dict_value_6 = mod_consts[318];
                    tmp_dict_value_5 = _PyDict_NewPresized( 12 );
                    tmp_res = PyDict_SetItem(tmp_dict_value_5, tmp_dict_key_6, tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_6 = mod_consts[88];
                    tmp_dict_value_6 = mod_consts[89];
                    tmp_res = PyDict_SetItem(tmp_dict_value_5, tmp_dict_key_6, tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_6 = mod_consts[207];
                    tmp_dict_value_6 = mod_consts[319];
                    tmp_res = PyDict_SetItem(tmp_dict_value_5, tmp_dict_key_6, tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_6 = mod_consts[208];
                    tmp_dict_value_6 = mod_consts[320];
                    tmp_res = PyDict_SetItem(tmp_dict_value_5, tmp_dict_key_6, tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_6 = mod_consts[163];
                    tmp_dict_value_6 = mod_consts[298];
                    tmp_res = PyDict_SetItem(tmp_dict_value_5, tmp_dict_key_6, tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_6 = mod_consts[214];
                    tmp_dict_value_6 = mod_consts[321];
                    tmp_res = PyDict_SetItem(tmp_dict_value_5, tmp_dict_key_6, tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_6 = mod_consts[210];
                    tmp_dict_value_6 = mod_consts[322];
                    tmp_res = PyDict_SetItem(tmp_dict_value_5, tmp_dict_key_6, tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_6 = mod_consts[301];
                    tmp_dict_value_6 = mod_consts[323];
                    tmp_res = PyDict_SetItem(tmp_dict_value_5, tmp_dict_key_6, tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_6 = mod_consts[209];
                    tmp_dict_value_6 = mod_consts[324];
                    tmp_res = PyDict_SetItem(tmp_dict_value_5, tmp_dict_key_6, tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_6 = mod_consts[211];
                    tmp_dict_value_6 = mod_consts[325];
                    tmp_res = PyDict_SetItem(tmp_dict_value_5, tmp_dict_key_6, tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_6 = mod_consts[212];
                    tmp_dict_value_6 = PyObject_GetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[303]);

                    if (tmp_dict_value_6 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_dict_value_6 = (PyObject *)&PyLong_Type;
                            Py_INCREF(tmp_dict_value_6);
                        } else {
                            goto frame_exception_exit_2;
                        }
                    }

                    tmp_res = PyDict_SetItem(tmp_dict_value_5, tmp_dict_key_6, tmp_dict_value_6);
                    Py_DECREF(tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_6 = mod_consts[213];
                    tmp_dict_value_6 = PyObject_GetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[303]);

                    if (tmp_dict_value_6 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_dict_value_6 = (PyObject *)&PyLong_Type;
                            Py_INCREF(tmp_dict_value_6);
                        } else {
                            goto frame_exception_exit_2;
                        }
                    }

                    tmp_res = PyDict_SetItem(tmp_dict_value_5, tmp_dict_key_6, tmp_dict_value_6);
                    Py_DECREF(tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_5, tmp_dict_value_5);
                    Py_DECREF(tmp_dict_value_5);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_5 = mod_consts[306];
                    tmp_dict_value_5 = mod_consts[307];
                    tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_5, tmp_dict_value_5);
                    assert(!(tmp_res != 0));
                }
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_1);
                tmp_dict_key_7 = mod_consts[33];
                tmp_dict_value_7 = mod_consts[326];
                tmp_list_element_1 = _PyDict_NewPresized( 3 );
                {
                    PyObject *tmp_dict_key_8;
                    PyObject *tmp_dict_value_8;
                    tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_7, tmp_dict_value_7);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_7 = mod_consts[295];
                    tmp_dict_key_8 = mod_consts[55];
                    tmp_dict_value_8 = mod_consts[327];
                    tmp_dict_value_7 = _PyDict_NewPresized( 12 );
                    tmp_res = PyDict_SetItem(tmp_dict_value_7, tmp_dict_key_8, tmp_dict_value_8);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_8 = mod_consts[88];
                    tmp_dict_value_8 = mod_consts[89];
                    tmp_res = PyDict_SetItem(tmp_dict_value_7, tmp_dict_key_8, tmp_dict_value_8);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_8 = mod_consts[207];
                    tmp_dict_value_8 = mod_consts[328];
                    tmp_res = PyDict_SetItem(tmp_dict_value_7, tmp_dict_key_8, tmp_dict_value_8);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_8 = mod_consts[208];
                    tmp_dict_value_8 = mod_consts[329];
                    tmp_res = PyDict_SetItem(tmp_dict_value_7, tmp_dict_key_8, tmp_dict_value_8);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_8 = mod_consts[210];
                    tmp_dict_value_8 = mod_consts[330];
                    tmp_res = PyDict_SetItem(tmp_dict_value_7, tmp_dict_key_8, tmp_dict_value_8);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_8 = mod_consts[301];
                    tmp_dict_value_8 = mod_consts[331];
                    tmp_res = PyDict_SetItem(tmp_dict_value_7, tmp_dict_key_8, tmp_dict_value_8);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_8 = mod_consts[209];
                    tmp_dict_value_8 = mod_consts[332];
                    tmp_res = PyDict_SetItem(tmp_dict_value_7, tmp_dict_key_8, tmp_dict_value_8);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_8 = mod_consts[211];
                    tmp_dict_value_8 = mod_consts[333];
                    tmp_res = PyDict_SetItem(tmp_dict_value_7, tmp_dict_key_8, tmp_dict_value_8);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_8 = mod_consts[163];
                    tmp_dict_value_8 = mod_consts[298];
                    tmp_res = PyDict_SetItem(tmp_dict_value_7, tmp_dict_key_8, tmp_dict_value_8);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_8 = mod_consts[214];
                    tmp_dict_value_8 = mod_consts[334];
                    tmp_res = PyDict_SetItem(tmp_dict_value_7, tmp_dict_key_8, tmp_dict_value_8);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_8 = mod_consts[212];
                    tmp_dict_value_8 = PyObject_GetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[303]);

                    if (tmp_dict_value_8 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_dict_value_8 = (PyObject *)&PyLong_Type;
                            Py_INCREF(tmp_dict_value_8);
                        } else {
                            goto frame_exception_exit_2;
                        }
                    }

                    tmp_res = PyDict_SetItem(tmp_dict_value_7, tmp_dict_key_8, tmp_dict_value_8);
                    Py_DECREF(tmp_dict_value_8);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_8 = mod_consts[213];
                    tmp_dict_value_8 = PyObject_GetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[303]);

                    if (tmp_dict_value_8 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_dict_value_8 = (PyObject *)&PyLong_Type;
                            Py_INCREF(tmp_dict_value_8);
                        } else {
                            goto frame_exception_exit_2;
                        }
                    }

                    tmp_res = PyDict_SetItem(tmp_dict_value_7, tmp_dict_key_8, tmp_dict_value_8);
                    Py_DECREF(tmp_dict_value_8);
                    assert(!(tmp_res != 0));
                    tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_7, tmp_dict_value_7);
                    Py_DECREF(tmp_dict_value_7);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_7 = mod_consts[306];
                    tmp_dict_value_7 = mod_consts[307];
                    tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_7, tmp_dict_value_7);
                    assert(!(tmp_res != 0));
                }
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_1);
                tmp_dict_key_9 = mod_consts[33];
                tmp_dict_value_9 = mod_consts[335];
                tmp_list_element_1 = _PyDict_NewPresized( 4 );
                {
                    PyObject *tmp_dict_key_10;
                    PyObject *tmp_dict_value_10;
                    tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_9, tmp_dict_value_9);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_9 = mod_consts[293];
                    tmp_dict_value_9 = mod_consts[336];
                    tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_9, tmp_dict_value_9);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_9 = mod_consts[295];
                    tmp_dict_key_10 = mod_consts[55];
                    tmp_dict_value_10 = mod_consts[337];
                    tmp_dict_value_9 = _PyDict_NewPresized( 12 );
                    tmp_res = PyDict_SetItem(tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[88];
                    tmp_dict_value_10 = mod_consts[89];
                    tmp_res = PyDict_SetItem(tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[207];
                    tmp_dict_value_10 = mod_consts[338];
                    tmp_res = PyDict_SetItem(tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[208];
                    tmp_dict_value_10 = mod_consts[339];
                    tmp_res = PyDict_SetItem(tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[210];
                    tmp_dict_value_10 = mod_consts[340];
                    tmp_res = PyDict_SetItem(tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[301];
                    tmp_dict_value_10 = mod_consts[341];
                    tmp_res = PyDict_SetItem(tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[209];
                    tmp_dict_value_10 = Py_None;
                    tmp_res = PyDict_SetItem(tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[211];
                    tmp_dict_value_10 = Py_None;
                    tmp_res = PyDict_SetItem(tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[163];
                    tmp_dict_value_10 = mod_consts[298];
                    tmp_res = PyDict_SetItem(tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[214];
                    tmp_dict_value_10 = mod_consts[342];
                    tmp_res = PyDict_SetItem(tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[212];
                    tmp_dict_value_10 = PyObject_GetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[303]);

                    if (tmp_dict_value_10 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_dict_value_10 = (PyObject *)&PyLong_Type;
                            Py_INCREF(tmp_dict_value_10);
                        } else {
                            goto frame_exception_exit_2;
                        }
                    }

                    tmp_res = PyDict_SetItem(tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10);
                    Py_DECREF(tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[213];
                    tmp_dict_value_10 = PyObject_GetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[303]);

                    if (tmp_dict_value_10 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_dict_value_10 = (PyObject *)&PyLong_Type;
                            Py_INCREF(tmp_dict_value_10);
                        } else {
                            goto frame_exception_exit_2;
                        }
                    }

                    tmp_res = PyDict_SetItem(tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10);
                    Py_DECREF(tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_9, tmp_dict_value_9);
                    Py_DECREF(tmp_dict_value_9);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_9 = mod_consts[306];
                    tmp_dict_value_9 = mod_consts[307];
                    tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_9, tmp_dict_value_9);
                    assert(!(tmp_res != 0));
                }
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_1);
                tmp_list_element_1 = DICT_COPY(mod_consts[343]);
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_1);
            }
            tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[344], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = mod_consts[345];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[346], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[289];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[347], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__1__real_initialize();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[348], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__2__login();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[0], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__3__extract_format_for_quality();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[148], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__4__real_extract();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[352], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_07f2ae3266047f7d1922739b2d7cf96c_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_07f2ae3266047f7d1922739b2d7cf96c_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_07f2ae3266047f7d1922739b2d7cf96c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_07f2ae3266047f7d1922739b2d7cf96c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_07f2ae3266047f7d1922739b2d7cf96c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_07f2ae3266047f7d1922739b2d7cf96c_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_07f2ae3266047f7d1922739b2d7cf96c_2 == cache_frame_07f2ae3266047f7d1922739b2d7cf96c_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_07f2ae3266047f7d1922739b2d7cf96c_2);
            cache_frame_07f2ae3266047f7d1922739b2d7cf96c_2 = NULL;
        }

        assertFrameObject(frame_07f2ae3266047f7d1922739b2d7cf96c_2);

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


                exception_lineno = 31;

                goto try_except_handler_5;
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
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31, mod_consts[354], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_5;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[250];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_490f62a4d35fc71e87711482f44cfe27->m_frame.f_lineno = 31;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_33 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31);
        locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31 = NULL;
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

        Py_DECREF(locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31);
        locals_youtube_dl$extractor$niconico$$$class__1_NiconicoIE_31 = NULL;
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
        exception_lineno = 31;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_33);
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
        PyObject *tmp_assign_source_35;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[274]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[274]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_6;
        }
        tmp_assign_source_35 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_35, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_36 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_metaclass_value_2;
        bool tmp_condition_result_7;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        tmp_key_value_4 = mod_consts[280];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_value_5 = mod_consts[280];
        tmp_metaclass_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_metaclass_value_2 == NULL) {
            tmp_metaclass_value_2 = Py_None;
        }
        assert(!(tmp_metaclass_value_2 == NULL));
        Py_INCREF(tmp_metaclass_value_2);
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_6;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[18];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_6;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_38 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_38;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[280];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[280];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 442;

        goto try_except_handler_6;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[281]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[281]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_6;
        }
        tmp_tuple_element_6 = mod_consts[355];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_490f62a4d35fc71e87711482f44cfe27->m_frame.f_lineno = 442;
        tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_39;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[282]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_6;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
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
        tmp_mod_expr_left_2 = mod_consts[283];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[284];
        tmp_getattr_default_2 = mod_consts[285];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

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
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[284]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;

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


            exception_lineno = 442;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 442;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_40;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[286];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442, mod_consts[287], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[355];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442, mod_consts[288], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_8;
        }
        if (isFrameUnusable(cache_frame_c34667799335a9c4f899a6cdfc6a0bec_3)) {
            Py_XDECREF(cache_frame_c34667799335a9c4f899a6cdfc6a0bec_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c34667799335a9c4f899a6cdfc6a0bec_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c34667799335a9c4f899a6cdfc6a0bec_3 = MAKE_CLASS_FRAME(codeobj_c34667799335a9c4f899a6cdfc6a0bec, module_youtube_dl$extractor$niconico, NULL, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c34667799335a9c4f899a6cdfc6a0bec_3->m_type_description == NULL);
        frame_c34667799335a9c4f899a6cdfc6a0bec_3 = cache_frame_c34667799335a9c4f899a6cdfc6a0bec_3;


        // Push the new frame as the currently active one.
        pushFrameStack(frame_c34667799335a9c4f899a6cdfc6a0bec_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c34667799335a9c4f899a6cdfc6a0bec_3) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[356];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442, mod_consts[346], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = DEEP_COPY_LIST_GUIDED(mod_consts[357], "Dd");
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442, mod_consts[344], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[358];
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442, mod_consts[239], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__5__call_api();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442, mod_consts[235], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__6__parse_owner();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442, mod_consts[251], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__7__fetch_page();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442, mod_consts[252], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$niconico$$$function__8__real_extract();

        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442, mod_consts[352], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c34667799335a9c4f899a6cdfc6a0bec_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c34667799335a9c4f899a6cdfc6a0bec_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c34667799335a9c4f899a6cdfc6a0bec_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c34667799335a9c4f899a6cdfc6a0bec_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c34667799335a9c4f899a6cdfc6a0bec_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c34667799335a9c4f899a6cdfc6a0bec_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c34667799335a9c4f899a6cdfc6a0bec_3 == cache_frame_c34667799335a9c4f899a6cdfc6a0bec_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c34667799335a9c4f899a6cdfc6a0bec_3);
            cache_frame_c34667799335a9c4f899a6cdfc6a0bec_3 = NULL;
        }

        assertFrameObject(frame_c34667799335a9c4f899a6cdfc6a0bec_3);

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
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442, mod_consts[354], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_8;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[355];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_490f62a4d35fc71e87711482f44cfe27->m_frame.f_lineno = 442;
            tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_41 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442);
        locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442 = NULL;
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

        Py_DECREF(locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442);
        locals_youtube_dl$extractor$niconico$$$class__2_NiconicoPlaylistIE_442 = NULL;
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
        exception_lineno = 442;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)mod_consts[355], tmp_assign_source_41);
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_490f62a4d35fc71e87711482f44cfe27);
#endif
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_490f62a4d35fc71e87711482f44cfe27);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_490f62a4d35fc71e87711482f44cfe27, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_490f62a4d35fc71e87711482f44cfe27->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_490f62a4d35fc71e87711482f44cfe27, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("youtube_dl.extractor.niconico", false);

    Py_INCREF(module_youtube_dl$extractor$niconico);
    return module_youtube_dl$extractor$niconico;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$niconico, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("youtube_dl$extractor$niconico", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
