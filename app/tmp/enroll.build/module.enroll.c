/* Generated code for Python module 'enroll'
 * created by Nuitka version 1.3.5
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

/* The "module_enroll" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_enroll;
PyDictObject *moduledict_enroll;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[226];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[226];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("enroll"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 226; i++) {
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
void checkModuleConstants_enroll(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 226; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8dbcac59607ed2e6a4364de9605884f8;
static PyCodeObject *codeobj_6e98abe0085ed831929380678d8474c9;
static PyCodeObject *codeobj_0deea1d116ff9eac989685c3dd4722e6;
static PyCodeObject *codeobj_2654673c19c847ea172ed4bca99042ef;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[220]); CHECK_OBJECT(module_filename_obj);
    codeobj_8dbcac59607ed2e6a4364de9605884f8 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[221], mod_consts[221], mod_consts[222], NULL, 1, 0, 0);
    codeobj_6e98abe0085ed831929380678d8474c9 = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[221], mod_consts[221], mod_consts[223], NULL, 1, 0, 0);
    codeobj_0deea1d116ff9eac989685c3dd4722e6 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[224], mod_consts[224], NULL, NULL, 0, 0, 0);
    codeobj_2654673c19c847ea172ed4bca99042ef = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[166], mod_consts[166], mod_consts[225], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_enroll$$$function__1_enroll$$$coroutine__1_enroll(struct Nuitka_CellObject **closure);


NUITKA_LOCAL_MODULE PyObject *impl_enroll$$$function__1_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_LOCAL_MODULE PyObject *impl_enroll$$$function__2_get_callable_name_desc(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_enroll$$$function__1_enroll(PyObject *annotations);


// The module function definitions.
static PyObject *impl_enroll$$$function__1_enroll(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_item = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_item;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_COROUTINE_enroll$$$function__1_enroll$$$coroutine__1_enroll(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct enroll$$$function__1_enroll$$$coroutine__1_enroll_locals {
    PyObject *var_response;
    PyObject *var_e;
    PyObject *var_imagesUrls;
    PyObject *var_userId;
    PyObject *var_credential;
    PyObject *var_name;
    PyObject *var_description;
    PyObject *var_department;
    PyObject *var_member_type;
    PyObject *var_expired;
    PyObject *var_isForceUpdate;
    PyObject *var_start;
    PyObject *var_milvus_client;
    PyObject *var_face_extractor;
    PyObject *var_db;
    PyObject *var_face_ids;
    PyObject *var_minio_client;
    nuitka_bool var_minio_is_work;
    PyObject *var_list_img_bytes;
    PyObject *var_url_exceptions;
    PyObject *var_old_milvus_data;
    nuitka_bool var_needToSearchMilvus;
    nuitka_bool var_updateByCode;
    nuitka_bool var_create;
    PyObject *var_embs_duplicate_code;
    PyObject *var_time_str;
    PyObject *var_img_url;
    PyObject *var_res;
    PyObject *var_face_vectors;
    PyObject *var_face_aligneds;
    PyObject *var_dossiers;
    PyObject *var_latest_dossier;
    PyObject *var_latest_embs;
    PyObject *var_score_matching;
    PyObject *var_existed_faces;
    PyObject *var_best_face;
    PyObject *var__face;
    PyObject *var_existed_face;
    PyObject *var_existed_faceid;
    PyObject *var_localUserId;
    PyObject *var_existed_dossier;
    PyObject *var_new_dict;
    PyObject *var_faces;
    PyObject *var_face;
    PyObject *var_effective_rows;
    PyObject *var_updated_dossier;
    PyObject *var_face_vector;
    PyObject *var_face_aligned;
    PyObject *var_original_url;
    PyObject *var_uuid_str;
    PyObject *var_norm_path;
    PyObject *var_embedding_encoded;
    PyObject *var_created_face;
    PyObject *var_milvusFace;
    PyObject *var_img_encode;
    PyObject *var_dos;
    PyObject *var_old_localUserId;
    PyObject *var_data;
    PyObject *var_old_ids;
    PyObject *var_effected_rows;
    PyObject *var_created_dossier;
    PyObject *var_old_embedding;
    PyObject *var_id_;
    PyObject *outline_0_var_emb;
    PyObject *outline_1_var_face;
    PyObject *tmp_for_loop_10__for_iterator;
    PyObject *tmp_for_loop_10__iter_value;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_for_loop_2__for_iterator;
    PyObject *tmp_for_loop_2__iter_value;
    PyObject *tmp_for_loop_3__for_iterator;
    PyObject *tmp_for_loop_3__iter_value;
    PyObject *tmp_for_loop_4__for_iterator;
    PyObject *tmp_for_loop_4__iter_value;
    PyObject *tmp_for_loop_5__for_iterator;
    PyObject *tmp_for_loop_5__iter_value;
    PyObject *tmp_for_loop_6__for_iterator;
    PyObject *tmp_for_loop_6__iter_value;
    PyObject *tmp_for_loop_7__for_iterator;
    PyObject *tmp_for_loop_7__iter_value;
    PyObject *tmp_for_loop_8__for_iterator;
    PyObject *tmp_for_loop_8__iter_value;
    PyObject *tmp_for_loop_9__for_iterator;
    PyObject *tmp_for_loop_9__iter_value;
    PyObject *tmp_listcomp_1__$0;
    PyObject *tmp_listcomp_1__contraction;
    PyObject *tmp_listcomp_1__iter_value_0;
    PyObject *tmp_listcomp_2__$0;
    PyObject *tmp_listcomp_2__contraction;
    PyObject *tmp_listcomp_2__iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    PyObject *tmp_tuple_unpack_2__element_1;
    PyObject *tmp_tuple_unpack_2__element_2;
    PyObject *tmp_tuple_unpack_2__element_3;
    PyObject *tmp_tuple_unpack_2__source_iter;
    PyObject *tmp_tuple_unpack_3__element_1;
    PyObject *tmp_tuple_unpack_3__element_2;
    PyObject *tmp_tuple_unpack_3__element_3;
    PyObject *tmp_tuple_unpack_3__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    struct Nuitka_FrameObject *frame_8dbcac59607ed2e6a4364de9605884f8_2;
    char const *type_description_2;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    int exception_keeper_lineno_15;
    struct Nuitka_FrameObject *frame_6e98abe0085ed831929380678d8474c9_3;
    char const *type_description_3;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    int exception_keeper_lineno_22;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    int exception_keeper_lineno_29;
    struct Nuitka_ExceptionStackItem exception_preserved_4;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    int exception_keeper_lineno_31;
};

static PyObject *enroll$$$function__1_enroll$$$coroutine__1_enroll_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

    // Heap access if used.
    struct enroll$$$function__1_enroll$$$coroutine__1_enroll_locals *coroutine_heap = (struct enroll$$$function__1_enroll$$$coroutine__1_enroll_locals *)coroutine->m_heap_storage;

    // Dispatch to yield based on return label index:


    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8dbcac59607ed2e6a4364de9605884f8_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6e98abe0085ed831929380678d8474c9_3 = NULL;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_response = NULL;
    coroutine_heap->var_e = NULL;
    coroutine_heap->var_imagesUrls = NULL;
    coroutine_heap->var_userId = NULL;
    coroutine_heap->var_credential = NULL;
    coroutine_heap->var_name = NULL;
    coroutine_heap->var_description = NULL;
    coroutine_heap->var_department = NULL;
    coroutine_heap->var_member_type = NULL;
    coroutine_heap->var_expired = NULL;
    coroutine_heap->var_isForceUpdate = NULL;
    coroutine_heap->var_start = NULL;
    coroutine_heap->var_milvus_client = NULL;
    coroutine_heap->var_face_extractor = NULL;
    coroutine_heap->var_db = NULL;
    coroutine_heap->var_face_ids = NULL;
    coroutine_heap->var_minio_client = NULL;
    coroutine_heap->var_minio_is_work = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->var_list_img_bytes = NULL;
    coroutine_heap->var_url_exceptions = NULL;
    coroutine_heap->var_old_milvus_data = NULL;
    coroutine_heap->var_needToSearchMilvus = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->var_updateByCode = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->var_create = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->var_embs_duplicate_code = NULL;
    coroutine_heap->var_time_str = NULL;
    coroutine_heap->var_img_url = NULL;
    coroutine_heap->var_res = NULL;
    coroutine_heap->var_face_vectors = NULL;
    coroutine_heap->var_face_aligneds = NULL;
    coroutine_heap->var_dossiers = NULL;
    coroutine_heap->var_latest_dossier = NULL;
    coroutine_heap->var_latest_embs = NULL;
    coroutine_heap->var_score_matching = NULL;
    coroutine_heap->var_existed_faces = NULL;
    coroutine_heap->var_best_face = NULL;
    coroutine_heap->var__face = NULL;
    coroutine_heap->var_existed_face = NULL;
    coroutine_heap->var_existed_faceid = NULL;
    coroutine_heap->var_localUserId = NULL;
    coroutine_heap->var_existed_dossier = NULL;
    coroutine_heap->var_new_dict = NULL;
    coroutine_heap->var_faces = NULL;
    coroutine_heap->var_face = NULL;
    coroutine_heap->var_effective_rows = NULL;
    coroutine_heap->var_updated_dossier = NULL;
    coroutine_heap->var_face_vector = NULL;
    coroutine_heap->var_face_aligned = NULL;
    coroutine_heap->var_original_url = NULL;
    coroutine_heap->var_uuid_str = NULL;
    coroutine_heap->var_norm_path = NULL;
    coroutine_heap->var_embedding_encoded = NULL;
    coroutine_heap->var_created_face = NULL;
    coroutine_heap->var_milvusFace = NULL;
    coroutine_heap->var_img_encode = NULL;
    coroutine_heap->var_dos = NULL;
    coroutine_heap->var_old_localUserId = NULL;
    coroutine_heap->var_data = NULL;
    coroutine_heap->var_old_ids = NULL;
    coroutine_heap->var_effected_rows = NULL;
    coroutine_heap->var_created_dossier = NULL;
    coroutine_heap->var_old_embedding = NULL;
    coroutine_heap->var_id_ = NULL;
    coroutine_heap->outline_0_var_emb = NULL;
    coroutine_heap->outline_1_var_face = NULL;
    coroutine_heap->tmp_for_loop_10__for_iterator = NULL;
    coroutine_heap->tmp_for_loop_10__iter_value = NULL;
    coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
    coroutine_heap->tmp_for_loop_1__iter_value = NULL;
    coroutine_heap->tmp_for_loop_2__for_iterator = NULL;
    coroutine_heap->tmp_for_loop_2__iter_value = NULL;
    coroutine_heap->tmp_for_loop_3__for_iterator = NULL;
    coroutine_heap->tmp_for_loop_3__iter_value = NULL;
    coroutine_heap->tmp_for_loop_4__for_iterator = NULL;
    coroutine_heap->tmp_for_loop_4__iter_value = NULL;
    coroutine_heap->tmp_for_loop_5__for_iterator = NULL;
    coroutine_heap->tmp_for_loop_5__iter_value = NULL;
    coroutine_heap->tmp_for_loop_6__for_iterator = NULL;
    coroutine_heap->tmp_for_loop_6__iter_value = NULL;
    coroutine_heap->tmp_for_loop_7__for_iterator = NULL;
    coroutine_heap->tmp_for_loop_7__iter_value = NULL;
    coroutine_heap->tmp_for_loop_8__for_iterator = NULL;
    coroutine_heap->tmp_for_loop_8__iter_value = NULL;
    coroutine_heap->tmp_for_loop_9__for_iterator = NULL;
    coroutine_heap->tmp_for_loop_9__iter_value = NULL;
    coroutine_heap->tmp_listcomp_1__$0 = NULL;
    coroutine_heap->tmp_listcomp_1__contraction = NULL;
    coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
    coroutine_heap->tmp_listcomp_2__$0 = NULL;
    coroutine_heap->tmp_listcomp_2__contraction = NULL;
    coroutine_heap->tmp_listcomp_2__iter_value_0 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    coroutine_heap->tmp_tuple_unpack_2__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_2__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_2__element_3 = NULL;
    coroutine_heap->tmp_tuple_unpack_2__source_iter = NULL;
    coroutine_heap->tmp_tuple_unpack_3__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_3__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_3__element_3 = NULL;
    coroutine_heap->tmp_tuple_unpack_3__source_iter = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;
    coroutine_heap->type_description_2 = NULL;
    coroutine_heap->type_description_3 = NULL;

    // Actual coroutine body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_2654673c19c847ea172ed4bca99042ef, module_enroll, sizeof(nuitka_bool)+sizeof(nuitka_bool)+sizeof(nuitka_bool)+sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    coroutine->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);
#endif

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    pushFrameStack(coroutine->m_frame);

    // Taking a reference prevents reuse of generator frame while it is being used.
    Py_INCREF(coroutine->m_frame->m_frame.f_back);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 0x3b0
        EXC_TYPE_F(coroutine) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(coroutine) == Py_None) EXC_TYPE_F(coroutine) = NULL;
        Py_XINCREF(EXC_TYPE_F(coroutine));
#endif
        EXC_VALUE_F(coroutine) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
        ASSIGN_EXC_TRACEBACK_F(coroutine, EXC_TRACEBACK(thread_state));
        Py_XINCREF(EXC_TRACEBACK_F(coroutine));
#endif
    }

#endif

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 34;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 34;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 34;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_response == NULL);
        coroutine_heap->var_response = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 35;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 35;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[3];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(coroutine_heap->var_response);
            tmp_expression_value_2 = coroutine_heap->var_response;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 35;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[5];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 35;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[7]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 35;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_format_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_format_spec_2 = mod_consts[5];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 35;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_2);

            coroutine_heap->exception_lineno = 35;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 35;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 35;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_1 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 36;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[7]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 39;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 39;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[9]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 39;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (coroutine_heap->exception_keeper_tb_1 == NULL) {
        coroutine_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        coroutine_heap->exception_keeper_tb_1 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_1, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&coroutine_heap->exception_keeper_type_1, &coroutine_heap->exception_keeper_value_1, &coroutine_heap->exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
        assert(coroutine_heap->var_e == NULL);
        Py_INCREF(tmp_assign_source_2);
        coroutine_heap->var_e = tmp_assign_source_2;
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(coroutine_heap->var_e);
        tmp_isinstance_inst_1 = coroutine_heap->var_e;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 41;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 41;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 42;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[12]);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 42;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_2 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[8], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 42;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_assattr_target_3;
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(coroutine_heap->var_e);
        tmp_expression_value_4 = coroutine_heap->var_e;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[14]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 45;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_list_element_1 = _PyDict_NewPresized( 1 );
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_3, 0, tmp_list_element_1);
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_3 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[15], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 43;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 48;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_expression_value_5 = coroutine_heap->var_response;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[8]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 48;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        coroutine->m_frame->m_frame.f_lineno = 48;
        tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 48;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_4 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[17], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 48;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 49;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 49;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_args_element_value_4 = coroutine_heap->var_response;
        coroutine->m_frame->m_frame.f_lineno = 49;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 49;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        coroutine->m_frame->m_frame.f_lineno = 49;
        coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 49;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        goto try_return_handler_4;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF(coroutine_heap->var_e);
    coroutine_heap->var_e = NULL;

    goto try_return_handler_3;
    // Exception handler code:
    try_except_handler_4:;
    coroutine_heap->exception_keeper_type_2 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_2 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_2 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_e);
    coroutine_heap->var_e = NULL;

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 38;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_1);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_6;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[7]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 51;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[20]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 51;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_imagesUrls == NULL);
        coroutine_heap->var_imagesUrls = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_7;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[7]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 52;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[21]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 52;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_userId == NULL);
        coroutine_heap->var_userId = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_8;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[7]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 53;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[22]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 53;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_credential == NULL);
        coroutine_heap->var_credential = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_9;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[7]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 54;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[23]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 54;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_name == NULL);
        coroutine_heap->var_name = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_10;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[7]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 55;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[13]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 55;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_description == NULL);
        coroutine_heap->var_description = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_11;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[7]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 56;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[24]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 56;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_department == NULL);
        coroutine_heap->var_department = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_12;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[7]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 57;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[25]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 57;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_member_type == NULL);
        coroutine_heap->var_member_type = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_called_instance_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[7]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 58;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[26]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 58;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            coroutine_heap->exception_lineno = 58;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[7]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 58;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[26]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 58;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 58;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 58;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[28]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 58;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(coroutine_heap->var_expired == NULL);
        coroutine_heap->var_expired = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_15;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[7]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 59;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[29]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 59;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_isForceUpdate == NULL);
        coroutine_heap->var_isForceUpdate = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 61;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 61;
        tmp_assign_source_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[30]);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 61;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_start == NULL);
        coroutine_heap->var_start = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 62;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 62;
        tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 62;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_milvus_client == NULL);
        coroutine_heap->var_milvus_client = tmp_assign_source_13;
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 63;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[2]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 63;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[32];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 63;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            coroutine->m_frame->m_frame.f_lineno = 63;
            tmp_sub_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[30]);
            if (tmp_sub_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 63;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            CHECK_OBJECT(coroutine_heap->var_start);
            tmp_sub_expr_right_1 = coroutine_heap->var_start;
            tmp_format_value_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_left_1);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 63;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_3 = mod_consts[5];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 63;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[33];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(coroutine_heap->var_member_type);
            tmp_format_value_4 = coroutine_heap->var_member_type;
            tmp_format_spec_4 = mod_consts[5];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 63;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_5 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_7);

            coroutine_heap->exception_lineno = 63;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 63;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 63;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 65;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 65;
        tmp_assign_source_14 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 65;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_face_extractor == NULL);
        coroutine_heap->var_face_extractor = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 66;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 66;
        tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 66;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_db == NULL);
        coroutine_heap->var_db = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_LIST_EMPTY(0);
        assert(coroutine_heap->var_face_ids == NULL);
        coroutine_heap->var_face_ids = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 69;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        coroutine->m_frame->m_frame.f_lineno = 69;
        tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS(tmp_called_value_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 69;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(coroutine_heap->var_minio_client == NULL);
        coroutine_heap->var_minio_client = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_assign_source_18;
        tmp_assign_source_18 = NUITKA_BOOL_TRUE;
        coroutine_heap->var_minio_is_work = tmp_assign_source_18;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_4;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 71;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        coroutine->m_frame->m_frame.f_lineno = 71;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[2],
            PyTuple_GET_ITEM(mod_consts[37], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 71;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    coroutine_heap->exception_keeper_type_4 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_4 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_4 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 2.
    coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (coroutine_heap->exception_keeper_tb_4 == NULL) {
        coroutine_heap->exception_keeper_tb_4 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_4);
    } else if (coroutine_heap->exception_keeper_lineno_4 != 0) {
        coroutine_heap->exception_keeper_tb_4 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_4, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_4);
    }

    PUBLISH_CURRENT_EXCEPTION(&coroutine_heap->exception_keeper_type_4, &coroutine_heap->exception_keeper_value_4, &coroutine_heap->exception_keeper_tb_4);
    {
        nuitka_bool tmp_assign_source_19;
        tmp_assign_source_19 = NUITKA_BOOL_FALSE;
        coroutine_heap->var_minio_is_work = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_5;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 74;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        coroutine->m_frame->m_frame.f_lineno = 74;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[38],
            PyTuple_GET_ITEM(mod_consts[39], 0)
        );

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 74;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    coroutine_heap->exception_keeper_type_5 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_5 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_5 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_2);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_5;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_5;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_5;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_2);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_LIST_EMPTY(0);
        assert(coroutine_heap->var_list_img_bytes == NULL);
        coroutine_heap->var_list_img_bytes = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_LIST_EMPTY(0);
        assert(coroutine_heap->var_url_exceptions == NULL);
        coroutine_heap->var_url_exceptions = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_LIST_EMPTY(0);
        assert(coroutine_heap->var_old_milvus_data == NULL);
        coroutine_heap->var_old_milvus_data = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_assign_source_23;
        tmp_assign_source_23 = NUITKA_BOOL_TRUE;
        coroutine_heap->var_needToSearchMilvus = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_assign_source_24;
        tmp_assign_source_24 = NUITKA_BOOL_FALSE;
        coroutine_heap->var_updateByCode = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_assign_source_25;
        tmp_assign_source_25 = NUITKA_BOOL_FALSE;
        coroutine_heap->var_create = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_LIST_EMPTY(0);
        assert(coroutine_heap->var_embs_duplicate_code == NULL);
        coroutine_heap->var_embs_duplicate_code = tmp_assign_source_26;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_instance_8;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 86;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 86;
        tmp_called_instance_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[28]);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 86;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 86;
        tmp_assign_source_27 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[40],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        Py_DECREF(tmp_called_instance_7);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 86;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->var_time_str == NULL);
        coroutine_heap->var_time_str = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(coroutine_heap->var_imagesUrls);
        tmp_iter_arg_1 = coroutine_heap->var_imagesUrls;
        tmp_assign_source_28 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 87;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->tmp_for_loop_1__for_iterator == NULL);
        coroutine_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_28;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = coroutine_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_29 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_29 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                coroutine_heap->exception_lineno = 87;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = coroutine_heap->tmp_for_loop_1__iter_value;
            coroutine_heap->tmp_for_loop_1__iter_value = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_30 = coroutine_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = coroutine_heap->var_img_url;
            coroutine_heap->var_img_url = tmp_assign_source_30;
            Py_INCREF(coroutine_heap->var_img_url);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 88;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[43]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 88;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(coroutine_heap->var_img_url);
        tmp_args_element_value_6 = coroutine_heap->var_img_url;
        coroutine->m_frame->m_frame.f_lineno = 88;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 88;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = coroutine_heap->var_res;
            coroutine_heap->var_res = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(coroutine_heap->var_res);
        tmp_expression_value_18 = coroutine_heap->var_res;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[44]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_cmp_expr_right_2 = mod_consts[45];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_20;
        if (coroutine_heap->var_list_img_bytes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[46]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 90;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_19 = coroutine_heap->var_list_img_bytes;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[47]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 90;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(coroutine_heap->var_res);
        tmp_expression_value_20 = coroutine_heap->var_res;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[48]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_12);

            coroutine_heap->exception_lineno = 90;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        coroutine->m_frame->m_frame.f_lineno = 90;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 90;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_format_value_5;
        PyObject *tmp_format_spec_5;
        PyObject *tmp_args_element_value_10;
        if (coroutine_heap->var_url_exceptions == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[49]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 92;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_21 = coroutine_heap->var_url_exceptions;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[47]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 92;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_13);

            coroutine_heap->exception_lineno = 92;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(coroutine_heap->var_img_url);
        tmp_format_value_5 = coroutine_heap->var_img_url;
        tmp_format_spec_5 = mod_consts[5];
        tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_13);

            coroutine_heap->exception_lineno = 92;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[51];
        PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
        tmp_args_element_value_9 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_13);

            coroutine_heap->exception_lineno = 92;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(coroutine_heap->var_img_url);
        tmp_args_element_value_10 = coroutine_heap->var_img_url;
        coroutine->m_frame->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_args_element_value_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_13);

            coroutine_heap->exception_lineno = 92;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        coroutine->m_frame->m_frame.f_lineno = 92;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 92;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_end_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 87;
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_9:;
    coroutine_heap->exception_keeper_type_6 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_6 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_6 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
    coroutine_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
    coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_6;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_6;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_6;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_4:;
    Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
    coroutine_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
    coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        nuitka_digit tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_1;
        if (coroutine_heap->var_url_exceptions == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[49]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 94;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_len_arg_1 = coroutine_heap->var_url_exceptions;
        tmp_cmp_expr_left_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 94;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_3 = 0;
        tmp_condition_result_5 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 95;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (coroutine_heap->var_url_exceptions == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[49]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 95;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_11 = coroutine_heap->var_url_exceptions;
        coroutine->m_frame->m_frame.f_lineno = 95;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_11);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 95;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 95;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_instance_9;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 97;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 97;
        tmp_assign_source_32 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[30]);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 97;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = coroutine_heap->var_start;
            assert(old != NULL);
            coroutine_heap->var_start = tmp_assign_source_32;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(coroutine_heap->var_face_extractor);
        tmp_expression_value_22 = coroutine_heap->var_face_extractor;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[53]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 98;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        if (coroutine_heap->var_list_img_bytes == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[46]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 98;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_12 = coroutine_heap->var_list_img_bytes;
        CHECK_OBJECT(coroutine_heap->var_imagesUrls);
        tmp_args_element_value_13 = coroutine_heap->var_imagesUrls;
        coroutine->m_frame->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_called_value_16);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 98;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_33 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 98;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__source_iter == NULL);
        coroutine_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_33;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_34 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            coroutine_heap->exception_lineno = 98;
            goto try_except_handler_11;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__element_1 == NULL);
        coroutine_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_35 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_35 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            coroutine_heap->exception_lineno = 98;
            goto try_except_handler_11;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__element_2 == NULL);
        coroutine_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_35;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        coroutine_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(coroutine_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

                    coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                    coroutine_heap->exception_lineno = 98;
                    goto try_except_handler_11;
                }
            }
        } else {
            Py_DECREF(coroutine_heap->tmp_iterator_attempt);

            coroutine_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            coroutine_heap->exception_value = mod_consts[54];
            Py_INCREF(coroutine_heap->exception_value);
            coroutine_heap->exception_tb = NULL;

            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            coroutine_heap->exception_lineno = 98;
            goto try_except_handler_11;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    coroutine_heap->exception_keeper_type_7 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_7 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_7 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_7;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_7;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_7;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

    goto try_except_handler_10;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    coroutine_heap->exception_keeper_type_8 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_8 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_8 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_8;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_8;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_8;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_36 = coroutine_heap->tmp_tuple_unpack_1__element_1;
        assert(coroutine_heap->var_face_vectors == NULL);
        Py_INCREF(tmp_assign_source_36);
        coroutine_heap->var_face_vectors = tmp_assign_source_36;
    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_37 = coroutine_heap->tmp_tuple_unpack_1__element_2;
        assert(coroutine_heap->var_face_aligneds == NULL);
        Py_INCREF(tmp_assign_source_37);
        coroutine_heap->var_face_aligneds = tmp_assign_source_37;
    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 99;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[2]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 99;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_tuple_element_4 = mod_consts[55];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_6;
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_called_instance_10 == NULL)) {
                tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
            }

            if (tmp_called_instance_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 99;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            coroutine->m_frame->m_frame.f_lineno = 99;
            tmp_sub_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[30]);
            if (tmp_sub_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 99;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(coroutine_heap->var_start);
            tmp_sub_expr_right_2 = coroutine_heap->var_start;
            tmp_format_value_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            Py_DECREF(tmp_sub_expr_left_2);
            if (tmp_format_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 99;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_6 = mod_consts[5];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
            Py_DECREF(tmp_format_value_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 99;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_string_concat_values_4);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_14 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_17);

            coroutine_heap->exception_lineno = 99;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 99;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 99;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 103;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[57]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 103;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(coroutine_heap->var_face_vectors);
        tmp_expression_value_25 = coroutine_heap->var_face_vectors;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[58]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_18);

            coroutine_heap->exception_lineno = 103;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(coroutine_heap->var_face_vectors);
        tmp_expression_value_26 = coroutine_heap->var_face_vectors;
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[59]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_19);

            coroutine_heap->exception_lineno = 103;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 103;
        tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_18);

            coroutine_heap->exception_lineno = 103;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_cmp_expr_left_4);

            coroutine_heap->exception_lineno = 103;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[61]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_cmp_expr_left_4);

            coroutine_heap->exception_lineno = 103;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_15 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_18);

            coroutine_heap->exception_lineno = 103;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 103;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 103;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 103;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_6 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_assattr_target_5;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 104;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[62]);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 104;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_5 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[8], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 104;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = DEEP_COPY_LIST_GUIDED(mod_consts[63], "d");
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_6 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[15], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 105;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = mod_consts[64];
        tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_7;
            PyObject *tmp_called_value_20;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_format_spec_7;
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
            CHECK_OBJECT(coroutine_heap->var_face_vectors);
            tmp_expression_value_29 = coroutine_heap->var_face_vectors;
            tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[58]);
            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 110;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            CHECK_OBJECT(coroutine_heap->var_face_vectors);
            tmp_expression_value_30 = coroutine_heap->var_face_vectors;
            tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[59]);
            if (tmp_args_element_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                Py_DECREF(tmp_called_value_20);

                coroutine_heap->exception_lineno = 110;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            coroutine->m_frame->m_frame.f_lineno = 110;
            tmp_format_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_format_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 110;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_7 = mod_consts[5];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_7, tmp_format_spec_7);
            Py_DECREF(tmp_format_value_7);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 110;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_string_concat_values_5);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 110;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 110;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_2;
        coroutine_heap->exception_lineno = 110;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    branch_no_5:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(coroutine_heap->var_userId);
        tmp_cmp_expr_left_5 = coroutine_heap->var_userId;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 113;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(coroutine_heap->var_db);
        tmp_args_element_value_18 = coroutine_heap->var_db;
        CHECK_OBJECT(coroutine_heap->var_userId);
        tmp_args_element_value_19 = coroutine_heap->var_userId;
        coroutine->m_frame->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_assign_source_38 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_11,
                mod_consts[66],
                call_args
            );
        }

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 113;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->var_dossiers == NULL);
        coroutine_heap->var_dossiers = tmp_assign_source_38;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(coroutine_heap->var_credential);
        tmp_cmp_expr_left_6 = coroutine_heap->var_credential;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_8 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 115;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(coroutine_heap->var_db);
        tmp_args_element_value_20 = coroutine_heap->var_db;
        CHECK_OBJECT(coroutine_heap->var_credential);
        tmp_args_element_value_21 = coroutine_heap->var_credential;
        coroutine->m_frame->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_assign_source_39 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_12,
                mod_consts[67],
                call_args
            );
        }

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 115;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->var_dossiers == NULL);
        coroutine_heap->var_dossiers = tmp_assign_source_39;
    }
    branch_no_7:;
    branch_end_6:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_7;
        nuitka_digit tmp_cmp_expr_right_7;
        PyObject *tmp_len_arg_2;
        if (coroutine_heap->var_dossiers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[68]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 117;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_len_arg_2 = coroutine_heap->var_dossiers;
        tmp_cmp_expr_left_7 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 117;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_7 = 0;
        tmp_condition_result_9 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_condition_result_9 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_1;
        if (coroutine_heap->var_dossiers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[68]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 118;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_31 = coroutine_heap->var_dossiers;
        tmp_subscript_value_1 = mod_consts[69];
        tmp_assign_source_40 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_31, tmp_subscript_value_1, -1);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 118;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->var_latest_dossier == NULL);
        coroutine_heap->var_latest_dossier = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(coroutine_heap->var_latest_dossier);
        tmp_called_instance_13 = coroutine_heap->var_latest_dossier;
        coroutine->m_frame->m_frame.f_lineno = 119;
        tmp_expression_value_32 = CALL_METHOD_NO_ARGS(tmp_called_instance_13, mod_consts[70]);
        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_subscript_value_2 = mod_consts[71];
        tmp_assign_source_41 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->var_latest_embs == NULL);
        coroutine_heap->var_latest_embs = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_22;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 120;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[72]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 120;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(coroutine_heap->var_latest_embs);
            tmp_iter_arg_3 = coroutine_heap->var_latest_embs;
            tmp_assign_source_43 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 120;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            assert(coroutine_heap->tmp_listcomp_1__$0 == NULL);
            coroutine_heap->tmp_listcomp_1__$0 = tmp_assign_source_43;
        }
        {
            PyObject *tmp_assign_source_44;
            tmp_assign_source_44 = MAKE_LIST_EMPTY(0);
            assert(coroutine_heap->tmp_listcomp_1__contraction == NULL);
            coroutine_heap->tmp_listcomp_1__contraction = tmp_assign_source_44;
        }
        if (isFrameUnusable(cache_frame_8dbcac59607ed2e6a4364de9605884f8_2)) {
            Py_XDECREF(cache_frame_8dbcac59607ed2e6a4364de9605884f8_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_8dbcac59607ed2e6a4364de9605884f8_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_8dbcac59607ed2e6a4364de9605884f8_2 = MAKE_FUNCTION_FRAME(codeobj_8dbcac59607ed2e6a4364de9605884f8, module_enroll, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_8dbcac59607ed2e6a4364de9605884f8_2->m_type_description == NULL);
        coroutine_heap->frame_8dbcac59607ed2e6a4364de9605884f8_2 = cache_frame_8dbcac59607ed2e6a4364de9605884f8_2;


        // Push the new frame as the currently active one.
        pushFrameStack(coroutine_heap->frame_8dbcac59607ed2e6a4364de9605884f8_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(coroutine_heap->frame_8dbcac59607ed2e6a4364de9605884f8_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_45;
            CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
            tmp_next_source_2 = coroutine_heap->tmp_listcomp_1__$0;
            tmp_assign_source_45 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_45 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                    coroutine_heap->type_description_2 = "o";
                    coroutine_heap->exception_lineno = 120;
                    goto try_except_handler_13;
                }
            }

            {
                PyObject *old = coroutine_heap->tmp_listcomp_1__iter_value_0;
                coroutine_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_45;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_46;
            CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__iter_value_0);
            tmp_assign_source_46 = coroutine_heap->tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = coroutine_heap->outline_0_var_emb;
                coroutine_heap->outline_0_var_emb = tmp_assign_source_46;
                Py_INCREF(coroutine_heap->outline_0_var_emb);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_called_instance_14;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_kw_call_dict_value_0_1;
            PyObject *tmp_expression_value_35;
            CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
            tmp_append_list_1 = coroutine_heap->tmp_listcomp_1__contraction;
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 120;
                coroutine_heap->type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[73]);
            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 120;
                coroutine_heap->type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_called_instance_14 == NULL)) {
                tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            if (tmp_called_instance_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                Py_DECREF(tmp_called_value_22);

                coroutine_heap->exception_lineno = 120;
                coroutine_heap->type_description_2 = "o";
                goto try_except_handler_13;
            }
            CHECK_OBJECT(coroutine_heap->outline_0_var_emb);
            tmp_args_element_value_23 = coroutine_heap->outline_0_var_emb;
            coroutine_heap->frame_8dbcac59607ed2e6a4364de9605884f8_2->m_frame.f_lineno = 120;
            tmp_kw_call_arg_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_14, mod_consts[75], tmp_args_element_value_23);
            if (tmp_kw_call_arg_value_0_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                Py_DECREF(tmp_called_value_22);

                coroutine_heap->exception_lineno = 120;
                coroutine_heap->type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_kw_call_arg_value_0_1);

                coroutine_heap->exception_lineno = 120;
                coroutine_heap->type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[76]);
            if (tmp_kw_call_dict_value_0_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_kw_call_arg_value_0_1);

                coroutine_heap->exception_lineno = 120;
                coroutine_heap->type_description_2 = "o";
                goto try_except_handler_13;
            }
            coroutine_heap->frame_8dbcac59607ed2e6a4364de9605884f8_2->m_frame.f_lineno = 120;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_1};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_22, args, kw_values, mod_consts[77]);
            }

            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 120;
                coroutine_heap->type_description_2 = "o";
                goto try_except_handler_13;
            }
            assert(PyList_Check(tmp_append_list_1));
            coroutine_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (coroutine_heap->tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 120;
                coroutine_heap->type_description_2 = "o";
                goto try_except_handler_13;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 120;
            coroutine_heap->type_description_2 = "o";
            goto try_except_handler_13;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
        tmp_args_element_value_22 = coroutine_heap->tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_22);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
        Py_DECREF(coroutine_heap->tmp_listcomp_1__$0);
        coroutine_heap->tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
        Py_DECREF(coroutine_heap->tmp_listcomp_1__contraction);
        coroutine_heap->tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(coroutine_heap->tmp_listcomp_1__iter_value_0);
        coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_13:;
        coroutine_heap->exception_keeper_type_9 = coroutine_heap->exception_type;
        coroutine_heap->exception_keeper_value_9 = coroutine_heap->exception_value;
        coroutine_heap->exception_keeper_tb_9 = coroutine_heap->exception_tb;
        coroutine_heap->exception_keeper_lineno_9 = coroutine_heap->exception_lineno;
        coroutine_heap->exception_type = NULL;
        coroutine_heap->exception_value = NULL;
        coroutine_heap->exception_tb = NULL;
        coroutine_heap->exception_lineno = 0;

        CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
        Py_DECREF(coroutine_heap->tmp_listcomp_1__$0);
        coroutine_heap->tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
        Py_DECREF(coroutine_heap->tmp_listcomp_1__contraction);
        coroutine_heap->tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(coroutine_heap->tmp_listcomp_1__iter_value_0);
        coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_9;
        coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_9;
        coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_9;
        coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_9;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(coroutine_heap->frame_8dbcac59607ed2e6a4364de9605884f8_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(coroutine_heap->frame_8dbcac59607ed2e6a4364de9605884f8_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto try_return_handler_12;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(coroutine_heap->frame_8dbcac59607ed2e6a4364de9605884f8_2);
#endif

        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine_heap->frame_8dbcac59607ed2e6a4364de9605884f8_2, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine_heap->frame_8dbcac59607ed2e6a4364de9605884f8_2->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine_heap->frame_8dbcac59607ed2e6a4364de9605884f8_2, coroutine_heap->exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            coroutine_heap->frame_8dbcac59607ed2e6a4364de9605884f8_2,
            coroutine_heap->type_description_2,
            coroutine_heap->outline_0_var_emb
        );


        // Release cached frame if used for exception.
        if (coroutine_heap->frame_8dbcac59607ed2e6a4364de9605884f8_2 == cache_frame_8dbcac59607ed2e6a4364de9605884f8_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_8dbcac59607ed2e6a4364de9605884f8_2);
            cache_frame_8dbcac59607ed2e6a4364de9605884f8_2 = NULL;
        }

        assertFrameObject(coroutine_heap->frame_8dbcac59607ed2e6a4364de9605884f8_2);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_12;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_XDECREF(coroutine_heap->outline_0_var_emb);
        coroutine_heap->outline_0_var_emb = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_12:;
        coroutine_heap->exception_keeper_type_10 = coroutine_heap->exception_type;
        coroutine_heap->exception_keeper_value_10 = coroutine_heap->exception_value;
        coroutine_heap->exception_keeper_tb_10 = coroutine_heap->exception_tb;
        coroutine_heap->exception_keeper_lineno_10 = coroutine_heap->exception_lineno;
        coroutine_heap->exception_type = NULL;
        coroutine_heap->exception_value = NULL;
        coroutine_heap->exception_tb = NULL;
        coroutine_heap->exception_lineno = 0;

        Py_XDECREF(coroutine_heap->outline_0_var_emb);
        coroutine_heap->outline_0_var_emb = NULL;
        // Re-raise.
        coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_10;
        coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_10;
        coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_10;
        coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_10;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        coroutine_heap->exception_lineno = 120;
        goto try_except_handler_8;
        outline_result_1:;
        coroutine->m_frame->m_frame.f_lineno = 120;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 120;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = coroutine_heap->var_latest_embs;
            assert(old != NULL);
            coroutine_heap->var_latest_embs = tmp_assign_source_42;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_36;
        tmp_called_value_23 = LOOKUP_BUILTIN(mod_consts[78]);
        assert(tmp_called_value_23 != NULL);
        CHECK_OBJECT(coroutine_heap->var_latest_embs);
        tmp_expression_value_36 = coroutine_heap->var_latest_embs;
        tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[79]);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 121;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 121;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_24);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 121;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(coroutine_heap->var_face_vectors);
        tmp_expression_value_37 = coroutine_heap->var_face_vectors;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[58]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(coroutine_heap->var_latest_embs);
        tmp_expression_value_38 = coroutine_heap->var_latest_embs;
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[59]);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_24);

            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 122;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->var_score_matching == NULL);
        coroutine_heap->var_score_matching = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_40;
        int tmp_truth_name_2;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[57]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(coroutine_heap->var_score_matching);
        tmp_cmp_expr_left_8 = coroutine_heap->var_score_matching;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_25);

            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[80]);
        if (tmp_cmp_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_25);

            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_26 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_right_8);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_25);

            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 123;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_10);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_call_result_10);

            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_10 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_10);
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        nuitka_bool tmp_assign_source_48;
        tmp_assign_source_48 = NUITKA_BOOL_TRUE;
        coroutine_heap->var_updateByCode = tmp_assign_source_48;
    }
    {
        nuitka_bool tmp_assign_source_49;
        tmp_assign_source_49 = NUITKA_BOOL_FALSE;
        coroutine_heap->var_needToSearchMilvus = tmp_assign_source_49;
    }
    branch_no_9:;
    branch_no_8:;
    {
        bool tmp_condition_result_11;
        assert(coroutine_heap->var_needToSearchMilvus != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_11 = coroutine_heap->var_needToSearchMilvus == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(coroutine_heap->var_milvus_client);
        tmp_expression_value_41 = coroutine_heap->var_milvus_client;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[81]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 128;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(coroutine_heap->var_face_vectors);
        tmp_tuple_element_6 = coroutine_heap->var_face_vectors;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_6);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[82]);
        coroutine->m_frame->m_frame.f_lineno = 128;
        tmp_assign_source_50 = CALL_FUNCTION(tmp_called_value_26, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 128;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->var_existed_faces == NULL);
        coroutine_heap->var_existed_faces = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(coroutine_heap->var_existed_faces);
        tmp_expression_value_42 = coroutine_heap->var_existed_faces;
        tmp_subscript_value_3 = mod_consts[83];
        tmp_assign_source_51 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_42, tmp_subscript_value_3, 0);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 129;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->var_best_face == NULL);
        coroutine_heap->var_best_face = tmp_assign_source_51;
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(coroutine_heap->var_best_face);
        tmp_cmp_expr_left_9 = coroutine_heap->var_best_face;
        tmp_cmp_expr_right_9 = mod_consts[69];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 130;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    coroutine_heap->var_create = NUITKA_BOOL_UNASSIGNED;
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = DEEP_COPY_LIST_GUIDED(mod_consts[84], "d");
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_7 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[15], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 132;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[85];
        coroutine->m_frame->m_frame.f_lineno = 137;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_3 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_3;
        coroutine_heap->exception_lineno = 137;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    goto branch_end_11;
    branch_no_11:;
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(coroutine_heap->var_best_face);
        tmp_cmp_expr_left_10 = coroutine_heap->var_best_face;
        tmp_cmp_expr_right_10 = Py_None;
        tmp_condition_result_13 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(coroutine_heap->var_existed_faces);
        tmp_iter_arg_4 = coroutine_heap->var_existed_faces;
        tmp_assign_source_52 = MAKE_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 141;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->tmp_for_loop_2__for_iterator == NULL);
        coroutine_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_52;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = coroutine_heap->tmp_for_loop_2__for_iterator;
        tmp_assign_source_53 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_53 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                coroutine_heap->exception_lineno = 141;
                goto try_except_handler_14;
            }
        }

        {
            PyObject *old = coroutine_heap->tmp_for_loop_2__iter_value;
            coroutine_heap->tmp_for_loop_2__iter_value = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_2__iter_value);
        tmp_assign_source_54 = coroutine_heap->tmp_for_loop_2__iter_value;
        {
            PyObject *old = coroutine_heap->var__face;
            coroutine_heap->var__face = tmp_assign_source_54;
            Py_INCREF(coroutine_heap->var__face);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(coroutine_heap->var__face);
        tmp_expression_value_44 = coroutine_heap->var__face;
        tmp_subscript_value_4 = mod_consts[83];
        tmp_expression_value_43 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_44, tmp_subscript_value_4, 0);
        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 142;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[86]);
        Py_DECREF(tmp_expression_value_43);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 142;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        if (coroutine_heap->var_best_face == NULL) {
            Py_DECREF(tmp_cmp_expr_left_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[87]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 142;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_expression_value_46 = coroutine_heap->var_best_face;
        tmp_subscript_value_5 = mod_consts[83];
        tmp_expression_value_45 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_46, tmp_subscript_value_5, 0);
        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_11);

            coroutine_heap->exception_lineno = 142;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_cmp_expr_right_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[86]);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_cmp_expr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_11);

            coroutine_heap->exception_lineno = 142;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_condition_result_14 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        Py_DECREF(tmp_cmp_expr_right_11);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 142;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(coroutine_heap->var__face);
        tmp_assign_source_55 = coroutine_heap->var__face;
        {
            PyObject *old = coroutine_heap->var_best_face;
            coroutine_heap->var_best_face = tmp_assign_source_55;
            Py_INCREF(coroutine_heap->var_best_face);
            Py_XDECREF(old);
        }

    }
    branch_no_13:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 141;
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_14;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_14:;
    coroutine_heap->exception_keeper_type_11 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_11 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_11 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_11 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_for_loop_2__iter_value);
    coroutine_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_2__for_iterator);
    coroutine_heap->tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_11;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_11;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_11;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_11;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    Py_XDECREF(coroutine_heap->tmp_for_loop_2__iter_value);
    coroutine_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_2__for_iterator);
    coroutine_heap->tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_6;
        if (coroutine_heap->var_best_face == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[87]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 144;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_47 = coroutine_heap->var_best_face;
        tmp_subscript_value_6 = mod_consts[83];
        tmp_assign_source_56 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_47, tmp_subscript_value_6, 0);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 144;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->var_existed_face == NULL);
        coroutine_heap->var_existed_face = tmp_assign_source_56;
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_string_concat_values_6;
        PyObject *tmp_tuple_element_7;
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 145;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[2]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 145;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_tuple_element_7 = mod_consts[88];
        tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_8;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_format_spec_8;
            PyObject *tmp_format_value_9;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_format_spec_9;
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_7);
            CHECK_OBJECT(coroutine_heap->var_existed_face);
            tmp_expression_value_49 = coroutine_heap->var_existed_face;
            tmp_format_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[89]);
            if (tmp_format_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 145;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_format_spec_8 = mod_consts[5];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_8, tmp_format_spec_8);
            Py_DECREF(tmp_format_value_8);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 145;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[90];
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 2, tmp_tuple_element_7);
            CHECK_OBJECT(coroutine_heap->var_existed_face);
            tmp_expression_value_50 = coroutine_heap->var_existed_face;
            tmp_format_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[86]);
            if (tmp_format_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 145;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_format_spec_9 = mod_consts[5];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_9, tmp_format_spec_9);
            Py_DECREF(tmp_format_value_9);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 145;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 3, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_string_concat_values_6);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_args_element_value_27 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_6);
        Py_DECREF(tmp_string_concat_values_6);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_27);

            coroutine_heap->exception_lineno = 145;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 145;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 145;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_11);
    }
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = Py_None;
        assert(coroutine_heap->var_existed_face == NULL);
        Py_INCREF(tmp_assign_source_57);
        coroutine_heap->var_existed_face = tmp_assign_source_57;
    }
    branch_end_12:;
    branch_end_11:;
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_expression_value_52;
        if (coroutine_heap->var_existed_face == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[91]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 149;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_left_12 = coroutine_heap->var_existed_face;
        tmp_cmp_expr_right_12 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_12 != tmp_cmp_expr_right_12) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (coroutine_heap->var_existed_face == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[91]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 149;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_51 = coroutine_heap->var_existed_face;
        tmp_cmp_expr_left_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[86]);
        if (tmp_cmp_expr_left_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 149;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_13);

            coroutine_heap->exception_lineno = 149;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[80]);
        if (tmp_cmp_expr_right_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_13);

            coroutine_heap->exception_lineno = 149;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_and_right_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        Py_DECREF(tmp_cmp_expr_left_13);
        Py_DECREF(tmp_cmp_expr_right_13);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 149;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_15 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_15 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_expression_value_54;
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 150;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[92]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 150;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (coroutine_heap->var_db == NULL) {
            Py_DECREF(tmp_called_value_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 150;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_28 = coroutine_heap->var_db;
        if (coroutine_heap->var_existed_face == NULL) {
            Py_DECREF(tmp_called_value_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[91]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 150;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_54 = coroutine_heap->var_existed_face;
        tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[89]);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_28);

            coroutine_heap->exception_lineno = 150;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_28, call_args);
        }

        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 150;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->var_existed_faceid == NULL);
        coroutine_heap->var_existed_faceid = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_expression_value_55;
        CHECK_OBJECT(coroutine_heap->var_existed_faceid);
        tmp_expression_value_55 = coroutine_heap->var_existed_faceid;
        tmp_assign_source_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[94]);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 151;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->var_localUserId == NULL);
        coroutine_heap->var_localUserId = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 152;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[95]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 152;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (coroutine_heap->var_db == NULL) {
            Py_DECREF(tmp_called_value_29);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 152;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_30 = coroutine_heap->var_db;
        CHECK_OBJECT(coroutine_heap->var_localUserId);
        tmp_args_element_value_31 = coroutine_heap->var_localUserId;
        coroutine->m_frame->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_29, call_args);
        }

        Py_DECREF(tmp_called_value_29);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 152;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->var_existed_dossier == NULL);
        coroutine_heap->var_existed_dossier = tmp_assign_source_60;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_14;
        nuitka_digit tmp_cmp_expr_right_14;
        PyObject *tmp_len_arg_3;
        if (coroutine_heap->var_dossiers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[68]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 154;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_len_arg_3 = coroutine_heap->var_dossiers;
        tmp_cmp_expr_left_14 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_cmp_expr_left_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 154;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_14 = 0;
        tmp_condition_result_16 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        Py_DECREF(tmp_cmp_expr_left_14);
        if (tmp_condition_result_16 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_7;
        if (coroutine_heap->var_dossiers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[68]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 155;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_57 = coroutine_heap->var_dossiers;
        tmp_subscript_value_7 = mod_consts[69];
        tmp_assign_source_61 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_57, tmp_subscript_value_7, -1);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 155;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = coroutine_heap->var_latest_dossier;
            coroutine_heap->var_latest_dossier = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        CHECK_OBJECT(coroutine_heap->var_userId);
        tmp_cmp_expr_left_15 = coroutine_heap->var_userId;
        tmp_cmp_expr_right_15 = Py_None;
        tmp_condition_result_17 = (tmp_cmp_expr_left_15 != tmp_cmp_expr_right_15) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(coroutine_heap->var_latest_dossier);
        tmp_expression_value_58 = coroutine_heap->var_latest_dossier;
        tmp_cmp_expr_left_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[21]);
        if (tmp_cmp_expr_left_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 157;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(coroutine_heap->var_existed_dossier);
        tmp_expression_value_59 = coroutine_heap->var_existed_dossier;
        tmp_subscript_value_8 = mod_consts[21];
        tmp_cmp_expr_right_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_8);
        if (tmp_cmp_expr_right_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_16);

            coroutine_heap->exception_lineno = 157;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_18 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        Py_DECREF(tmp_cmp_expr_left_16);
        Py_DECREF(tmp_cmp_expr_right_16);
        if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 157;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        nuitka_bool tmp_assign_source_62;
        tmp_assign_source_62 = NUITKA_BOOL_TRUE;
        coroutine_heap->var_updateByCode = tmp_assign_source_62;
    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_call_result_12;
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 160;
        tmp_call_result_12 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_15,
            mod_consts[2],
            PyTuple_GET_ITEM(mod_consts[96], 0)
        );

        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_12);
    }
    goto branch_end_17;
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_19;
        int tmp_truth_name_3;
        CHECK_OBJECT(coroutine_heap->var_isForceUpdate);
        tmp_truth_name_3 = CHECK_IF_TRUE(coroutine_heap->var_isForceUpdate);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 162;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_19 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        nuitka_bool tmp_assign_source_63;
        tmp_assign_source_63 = NUITKA_BOOL_TRUE;
        coroutine_heap->var_updateByCode = tmp_assign_source_63;
    }
    {
        PyObject *tmp_called_instance_16;
        PyObject *tmp_call_result_13;
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 165;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 165;
        tmp_call_result_13 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_16,
            mod_consts[2],
            PyTuple_GET_ITEM(mod_consts[97], 0)
        );

        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 165;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_13);
    }
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_assattr_target_8;
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 167;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assattr_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[98]);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 167;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_8 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[8], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 167;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_list_element_2;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(coroutine_heap->var_existed_dossier);
        tmp_list_element_2 = coroutine_heap->var_existed_dossier;
        tmp_assattr_value_9 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_9, 0, tmp_list_element_2);
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_9 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[15], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 168;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    branch_end_18:;
    branch_end_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        if (coroutine_heap->var_credential == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[22]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_left_17 = coroutine_heap->var_credential;
        tmp_cmp_expr_right_17 = Py_None;
        tmp_condition_result_20 = (tmp_cmp_expr_left_17 != tmp_cmp_expr_right_17) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(coroutine_heap->var_latest_dossier);
        tmp_expression_value_61 = coroutine_heap->var_latest_dossier;
        tmp_cmp_expr_left_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[22]);
        if (tmp_cmp_expr_left_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 171;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(coroutine_heap->var_existed_dossier);
        tmp_expression_value_62 = coroutine_heap->var_existed_dossier;
        tmp_subscript_value_9 = mod_consts[22];
        tmp_cmp_expr_right_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_62, tmp_subscript_value_9);
        if (tmp_cmp_expr_right_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_18);

            coroutine_heap->exception_lineno = 171;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_21 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        Py_DECREF(tmp_cmp_expr_left_18);
        Py_DECREF(tmp_cmp_expr_right_18);
        if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 171;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        nuitka_bool tmp_assign_source_64;
        tmp_assign_source_64 = NUITKA_BOOL_TRUE;
        coroutine_heap->var_updateByCode = tmp_assign_source_64;
    }
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_call_result_14;
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 173;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 173;
        tmp_call_result_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_17,
            mod_consts[2],
            PyTuple_GET_ITEM(mod_consts[99], 0)
        );

        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 173;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_14);
    }
    goto branch_end_20;
    branch_no_20:;
    {
        nuitka_bool tmp_condition_result_22;
        int tmp_truth_name_4;
        CHECK_OBJECT(coroutine_heap->var_isForceUpdate);
        tmp_truth_name_4 = CHECK_IF_TRUE(coroutine_heap->var_isForceUpdate);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 175;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
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
        nuitka_bool tmp_assign_source_65;
        tmp_assign_source_65 = NUITKA_BOOL_TRUE;
        coroutine_heap->var_updateByCode = tmp_assign_source_65;
    }
    {
        PyObject *tmp_called_instance_18;
        PyObject *tmp_call_result_15;
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 178;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 178;
        tmp_call_result_15 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_18,
            mod_consts[2],
            PyTuple_GET_ITEM(mod_consts[97], 0)
        );

        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 178;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_15);
    }
    goto branch_end_21;
    branch_no_21:;
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_assattr_target_10;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 180;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assattr_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[98]);
        if (tmp_assattr_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 180;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_10 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[8], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 180;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_list_element_3;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(coroutine_heap->var_existed_dossier);
        tmp_list_element_3 = coroutine_heap->var_existed_dossier;
        tmp_assattr_value_11 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_11, 0, tmp_list_element_3);
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_11 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[15], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    branch_end_21:;
    branch_end_20:;
    branch_no_19:;
    branch_end_16:;
    goto branch_end_15;
    branch_no_15:;
    {
        nuitka_bool tmp_condition_result_23;
        int tmp_truth_name_5;
        CHECK_OBJECT(coroutine_heap->var_isForceUpdate);
        tmp_truth_name_5 = CHECK_IF_TRUE(coroutine_heap->var_isForceUpdate);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 184;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_23 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        nuitka_bool tmp_assign_source_66;
        tmp_assign_source_66 = NUITKA_BOOL_TRUE;
        coroutine_heap->var_create = tmp_assign_source_66;
    }
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_assattr_target_12;
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 188;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assattr_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[98]);
        if (tmp_assattr_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 188;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_12 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[8], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 188;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_list_element_4;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(coroutine_heap->var_existed_dossier);
        tmp_list_element_4 = coroutine_heap->var_existed_dossier;
        tmp_assattr_value_13 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_13, 0, tmp_list_element_4);
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_13 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[15], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 189;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    branch_end_22:;
    branch_end_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        bool tmp_condition_result_24;
        PyObject *tmp_cmp_expr_left_19;
        nuitka_digit tmp_cmp_expr_right_19;
        PyObject *tmp_len_arg_4;
        if (coroutine_heap->var_dossiers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[68]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 192;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_len_arg_4 = coroutine_heap->var_dossiers;
        tmp_cmp_expr_left_19 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_cmp_expr_left_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 192;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_19 = 0;
        tmp_condition_result_24 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        Py_DECREF(tmp_cmp_expr_left_19);
        if (tmp_condition_result_24 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        nuitka_bool tmp_assign_source_67;
        tmp_assign_source_67 = NUITKA_BOOL_TRUE;
        coroutine_heap->var_updateByCode = tmp_assign_source_67;
    }
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_call_result_16;
        tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_19 == NULL)) {
            tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 195;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 195;
        tmp_call_result_16 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_19,
            mod_consts[2],
            PyTuple_GET_ITEM(mod_consts[100], 0)
        );

        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 195;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_16);
    }
    goto branch_end_23;
    branch_no_23:;
    {
        nuitka_bool tmp_assign_source_68;
        tmp_assign_source_68 = NUITKA_BOOL_TRUE;
        coroutine_heap->var_create = tmp_assign_source_68;
    }
    branch_end_23:;
    branch_end_14:;
    branch_no_10:;
    {
        bool tmp_condition_result_25;
        assert(coroutine_heap->var_updateByCode != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_25 = coroutine_heap->var_updateByCode == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_subscript_value_10;
        if (coroutine_heap->var_dossiers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[68]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 201;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_65 = coroutine_heap->var_dossiers;
        tmp_subscript_value_10 = mod_consts[69];
        tmp_assign_source_69 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_65, tmp_subscript_value_10, -1);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 201;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = coroutine_heap->var_latest_dossier;
            coroutine_heap->var_latest_dossier = tmp_assign_source_69;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_expression_value_66;
        CHECK_OBJECT(coroutine_heap->var_latest_dossier);
        tmp_expression_value_66 = coroutine_heap->var_latest_dossier;
        tmp_assign_source_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[94]);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 202;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = coroutine_heap->var_localUserId;
            coroutine_heap->var_localUserId = tmp_assign_source_70;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        CHECK_OBJECT(coroutine_heap->var_userId);
        tmp_cmp_expr_left_20 = coroutine_heap->var_userId;
        tmp_cmp_expr_right_20 = Py_None;
        tmp_condition_result_26 = (tmp_cmp_expr_left_20 != tmp_cmp_expr_right_20) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_string_concat_values_7;
        PyObject *tmp_tuple_element_8;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 204;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[2]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 204;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_tuple_element_8 = mod_consts[101];
        tmp_string_concat_values_7 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_10;
            PyObject *tmp_format_spec_10;
            PyObject *tmp_format_value_11;
            PyObject *tmp_format_spec_11;
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 0, tmp_tuple_element_8);
            CHECK_OBJECT(coroutine_heap->var_localUserId);
            tmp_format_value_10 = coroutine_heap->var_localUserId;
            tmp_format_spec_10 = mod_consts[5];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_10, tmp_format_spec_10);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 204;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[102];
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 2, tmp_tuple_element_8);
            CHECK_OBJECT(coroutine_heap->var_userId);
            tmp_format_value_11 = coroutine_heap->var_userId;
            tmp_format_spec_11 = mod_consts[5];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_11, tmp_format_spec_11);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 204;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 3, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_string_concat_values_7);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_args_element_value_32 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_7);
        Py_DECREF(tmp_string_concat_values_7);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_30);

            coroutine_heap->exception_lineno = 204;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 204;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 204;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_17);
    }
    goto branch_end_25;
    branch_no_25:;
    {
        bool tmp_condition_result_27;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        if (coroutine_heap->var_credential == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[22]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 205;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_left_21 = coroutine_heap->var_credential;
        tmp_cmp_expr_right_21 = Py_None;
        tmp_condition_result_27 = (tmp_cmp_expr_left_21 != tmp_cmp_expr_right_21) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_string_concat_values_8;
        PyObject *tmp_tuple_element_9;
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 206;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[2]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 206;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_tuple_element_9 = mod_consts[101];
        tmp_string_concat_values_8 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_12;
            PyObject *tmp_format_spec_12;
            PyObject *tmp_format_value_13;
            PyObject *tmp_format_spec_13;
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 0, tmp_tuple_element_9);
            CHECK_OBJECT(coroutine_heap->var_localUserId);
            tmp_format_value_12 = coroutine_heap->var_localUserId;
            tmp_format_spec_12 = mod_consts[5];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tmp_format_value_12, tmp_format_spec_12);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 206;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[103];
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 2, tmp_tuple_element_9);
            if (coroutine_heap->var_credential == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[22]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 206;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }

            tmp_format_value_13 = coroutine_heap->var_credential;
            tmp_format_spec_13 = mod_consts[5];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tmp_format_value_13, tmp_format_spec_13);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 206;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 3, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_string_concat_values_8);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_args_element_value_33 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_8);
        Py_DECREF(tmp_string_concat_values_8);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_31);

            coroutine_heap->exception_lineno = 206;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 206;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 206;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_18);
    }
    branch_no_26:;
    branch_end_25:;
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_instance_20;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[7]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 208;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_instance_20 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 208;
        tmp_assign_source_71 = CALL_METHOD_NO_ARGS(tmp_called_instance_20, mod_consts[104]);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 208;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->var_new_dict == NULL);
        coroutine_heap->var_new_dict = tmp_assign_source_71;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_19;
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 209;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[105]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 209;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (coroutine_heap->var_db == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 209;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_tuple_element_10 = coroutine_heap->var_db;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_10);
        CHECK_OBJECT(coroutine_heap->var_localUserId);
        tmp_tuple_element_10 = coroutine_heap->var_localUserId;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_10);
        CHECK_OBJECT(coroutine_heap->var_new_dict);
        tmp_dircall_arg3_1 = coroutine_heap->var_new_dict;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_19 = impl_enroll$$$function__1_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 209;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 211;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[106]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 211;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (coroutine_heap->var_db == NULL) {
            Py_DECREF(tmp_called_value_32);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 211;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_34 = coroutine_heap->var_db;
        CHECK_OBJECT(coroutine_heap->var_localUserId);
        tmp_args_element_value_35 = coroutine_heap->var_localUserId;
        coroutine->m_frame->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_assign_source_72 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_32, call_args);
        }

        Py_DECREF(tmp_called_value_32);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 211;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->var_faces == NULL);
        coroutine_heap->var_faces = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(coroutine_heap->var_faces);
        tmp_iter_arg_5 = coroutine_heap->var_faces;
        tmp_assign_source_73 = MAKE_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 212;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->tmp_for_loop_3__for_iterator == NULL);
        coroutine_heap->tmp_for_loop_3__for_iterator = tmp_assign_source_73;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_3__for_iterator);
        tmp_next_source_4 = coroutine_heap->tmp_for_loop_3__for_iterator;
        tmp_assign_source_74 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_74 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                coroutine_heap->exception_lineno = 212;
                goto try_except_handler_15;
            }
        }

        {
            PyObject *old = coroutine_heap->tmp_for_loop_3__iter_value;
            coroutine_heap->tmp_for_loop_3__iter_value = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_3__iter_value);
        tmp_assign_source_75 = coroutine_heap->tmp_for_loop_3__iter_value;
        {
            PyObject *old = coroutine_heap->var_face;
            coroutine_heap->var_face = tmp_assign_source_75;
            Py_INCREF(coroutine_heap->var_face);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_expression_value_72;
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[107]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        if (coroutine_heap->var_db == NULL) {
            Py_DECREF(tmp_called_value_33);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_args_element_value_36 = coroutine_heap->var_db;
        CHECK_OBJECT(coroutine_heap->var_face);
        tmp_expression_value_72 = coroutine_heap->var_face;
        tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[89]);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_33);

            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        coroutine->m_frame->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37};
            tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_33, call_args);
        }

        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = coroutine_heap->var_effective_rows;
            coroutine_heap->var_effective_rows = tmp_assign_source_76;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_28;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        CHECK_OBJECT(coroutine_heap->var_effective_rows);
        tmp_cmp_expr_left_22 = coroutine_heap->var_effective_rows;
        tmp_cmp_expr_right_22 = mod_consts[83];
        tmp_operand_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_condition_result_28 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_raise_type_4;
        tmp_raise_type_4 = PyExc_AssertionError;
        coroutine_heap->exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        coroutine_heap->exception_lineno = 214;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_15;
    }
    branch_no_27:;
    {
        bool tmp_condition_result_29;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_list_element_5;
        PyObject *tmp_expression_value_74;
        if (coroutine_heap->var_milvus_client == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[108]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 215;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_73 = coroutine_heap->var_milvus_client;
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[109]);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 215;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(coroutine_heap->var_face);
        tmp_expression_value_74 = coroutine_heap->var_face;
        tmp_list_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[89]);
        if (tmp_list_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_34);

            coroutine_heap->exception_lineno = 215;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_args_element_value_38 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_args_element_value_38, 0, tmp_list_element_5);
        coroutine->m_frame->m_frame.f_lineno = 215;
        tmp_operand_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 215;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 215;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_condition_result_29 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_raise_type_5;
        tmp_raise_type_5 = PyExc_AssertionError;
        coroutine_heap->exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        coroutine_heap->exception_lineno = 215;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_15;
    }
    branch_no_28:;
    {
        PyObject *tmp_called_instance_21;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_39;
        if (coroutine_heap->var_old_milvus_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[110]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 216;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_instance_21 = coroutine_heap->var_old_milvus_data;
        CHECK_OBJECT(coroutine_heap->var_face);
        tmp_args_element_value_39 = coroutine_heap->var_face;
        coroutine->m_frame->m_frame.f_lineno = 216;
        tmp_call_result_20 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_21, mod_consts[47], tmp_args_element_value_39);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 216;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_string_concat_values_9;
        PyObject *tmp_tuple_element_11;
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 217;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[2]);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 217;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_tuple_element_11 = mod_consts[111];
        tmp_string_concat_values_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_14;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_format_spec_14;
            PyTuple_SET_ITEM0(tmp_string_concat_values_9, 0, tmp_tuple_element_11);
            CHECK_OBJECT(coroutine_heap->var_face);
            tmp_expression_value_76 = coroutine_heap->var_face;
            tmp_format_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[89]);
            if (tmp_format_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 217;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            tmp_format_spec_14 = mod_consts[5];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tmp_format_value_14, tmp_format_spec_14);
            Py_DECREF(tmp_format_value_14);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 217;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_9, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_string_concat_values_9);
        goto try_except_handler_15;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_args_element_value_40 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_9);
        Py_DECREF(tmp_string_concat_values_9);
        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_35);

            coroutine_heap->exception_lineno = 217;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        coroutine->m_frame->m_frame.f_lineno = 217;
        tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 217;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        Py_DECREF(tmp_call_result_21);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 212;
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_15;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_15:;
    coroutine_heap->exception_keeper_type_12 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_12 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_12 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_12 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_for_loop_3__iter_value);
    coroutine_heap->tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_3__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_3__for_iterator);
    coroutine_heap->tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_12;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_12;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_12;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_12;

    goto try_except_handler_8;
    // End of try:
    try_end_8:;
    Py_XDECREF(coroutine_heap->tmp_for_loop_3__iter_value);
    coroutine_heap->tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_3__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_3__for_iterator);
    coroutine_heap->tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 219;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[95]);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 219;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (coroutine_heap->var_db == NULL) {
            Py_DECREF(tmp_called_value_36);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 219;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_41 = coroutine_heap->var_db;
        CHECK_OBJECT(coroutine_heap->var_localUserId);
        tmp_args_element_value_42 = coroutine_heap->var_localUserId;
        coroutine->m_frame->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_36, call_args);
        }

        Py_DECREF(tmp_called_value_36);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 219;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->var_updated_dossier == NULL);
        coroutine_heap->var_updated_dossier = tmp_assign_source_77;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(coroutine_heap->var_updated_dossier);
        tmp_ass_subscribed_1 = coroutine_heap->var_updated_dossier;
        tmp_ass_subscript_1 = mod_consts[20];
        coroutine_heap->tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 220;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(coroutine_heap->var_updated_dossier);
        tmp_ass_subscribed_2 = coroutine_heap->var_updated_dossier;
        tmp_ass_subscript_2 = mod_consts[71];
        coroutine_heap->tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 221;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        tmp_called_value_37 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(coroutine_heap->var_face_vectors);
        tmp_args_element_value_43 = coroutine_heap->var_face_vectors;
        CHECK_OBJECT(coroutine_heap->var_face_aligneds);
        tmp_args_element_value_44 = coroutine_heap->var_face_aligneds;
        CHECK_OBJECT(coroutine_heap->var_imagesUrls);
        tmp_args_element_value_45 = coroutine_heap->var_imagesUrls;
        coroutine->m_frame->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_37, call_args);
        }

        if (tmp_iter_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 223;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_78 = MAKE_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 223;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->tmp_for_loop_4__for_iterator == NULL);
        coroutine_heap->tmp_for_loop_4__for_iterator = tmp_assign_source_78;
    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_79;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_4__for_iterator);
        tmp_next_source_5 = coroutine_heap->tmp_for_loop_4__for_iterator;
        tmp_assign_source_79 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_79 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                coroutine_heap->exception_lineno = 223;
                goto try_except_handler_16;
            }
        }

        {
            PyObject *old = coroutine_heap->tmp_for_loop_4__iter_value;
            coroutine_heap->tmp_for_loop_4__iter_value = tmp_assign_source_79;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_iter_arg_7;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_4__iter_value);
        tmp_iter_arg_7 = coroutine_heap->tmp_for_loop_4__iter_value;
        tmp_assign_source_80 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 223;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_2__source_iter;
            coroutine_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_80;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = coroutine_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_81 = UNPACK_NEXT(tmp_unpack_3, 0, 3);
        if (tmp_assign_source_81 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            coroutine_heap->exception_lineno = 223;
            goto try_except_handler_18;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_2__element_1;
            coroutine_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_81;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = coroutine_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_82 = UNPACK_NEXT(tmp_unpack_4, 1, 3);
        if (tmp_assign_source_82 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            coroutine_heap->exception_lineno = 223;
            goto try_except_handler_18;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_2__element_2;
            coroutine_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_82;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = coroutine_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_83 = UNPACK_NEXT(tmp_unpack_5, 2, 3);
        if (tmp_assign_source_83 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            coroutine_heap->exception_lineno = 223;
            goto try_except_handler_18;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_2__element_3;
            coroutine_heap->tmp_tuple_unpack_2__element_3 = tmp_assign_source_83;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = coroutine_heap->tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        coroutine_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(coroutine_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

                    coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                    coroutine_heap->exception_lineno = 223;
                    goto try_except_handler_18;
                }
            }
        } else {
            Py_DECREF(coroutine_heap->tmp_iterator_attempt);

            coroutine_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            coroutine_heap->exception_value = mod_consts[112];
            Py_INCREF(coroutine_heap->exception_value);
            coroutine_heap->exception_tb = NULL;

            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            coroutine_heap->exception_lineno = 223;
            goto try_except_handler_18;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_18:;
    coroutine_heap->exception_keeper_type_13 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_13 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_13 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_13 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_2__source_iter);
    coroutine_heap->tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_13;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_13;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_13;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_13;

    goto try_except_handler_17;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_17:;
    coroutine_heap->exception_keeper_type_14 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_14 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_14 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_14 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_1);
    coroutine_heap->tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_2);
    coroutine_heap->tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_3);
    coroutine_heap->tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_14;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_14;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_14;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_14;

    goto try_except_handler_16;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_2__source_iter);
    coroutine_heap->tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_84;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__element_1);
        tmp_assign_source_84 = coroutine_heap->tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = coroutine_heap->var_face_vector;
            coroutine_heap->var_face_vector = tmp_assign_source_84;
            Py_INCREF(coroutine_heap->var_face_vector);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_1);
    coroutine_heap->tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_85;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__element_2);
        tmp_assign_source_85 = coroutine_heap->tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = coroutine_heap->var_face_aligned;
            coroutine_heap->var_face_aligned = tmp_assign_source_85;
            Py_INCREF(coroutine_heap->var_face_aligned);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_2);
    coroutine_heap->tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_86;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__element_3);
        tmp_assign_source_86 = coroutine_heap->tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = coroutine_heap->var_original_url;
            coroutine_heap->var_original_url = tmp_assign_source_86;
            Py_INCREF(coroutine_heap->var_original_url);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_3);
    coroutine_heap->tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_instance_22;
        tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_called_instance_22 == NULL)) {
            tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_called_instance_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 224;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        coroutine->m_frame->m_frame.f_lineno = 224;
        tmp_assign_source_87 = CALL_METHOD_NO_ARGS(tmp_called_instance_22, mod_consts[114]);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 224;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = coroutine_heap->var_uuid_str;
            coroutine_heap->var_uuid_str = tmp_assign_source_87;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_string_concat_values_10;
        PyObject *tmp_tuple_element_12;
        tmp_tuple_element_12 = mod_consts[115];
        tmp_string_concat_values_10 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_15;
            PyObject *tmp_format_spec_15;
            PyObject *tmp_format_value_16;
            PyObject *tmp_format_spec_16;
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 0, tmp_tuple_element_12);
            CHECK_OBJECT(coroutine_heap->var_time_str);
            tmp_format_value_15 = coroutine_heap->var_time_str;
            tmp_format_spec_15 = mod_consts[5];
            tmp_tuple_element_12 = BUILTIN_FORMAT(tmp_format_value_15, tmp_format_spec_15);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 225;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[116];
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 2, tmp_tuple_element_12);
            CHECK_OBJECT(coroutine_heap->var_uuid_str);
            tmp_format_value_16 = coroutine_heap->var_uuid_str;
            tmp_format_spec_16 = mod_consts[5];
            tmp_tuple_element_12 = BUILTIN_FORMAT(tmp_format_value_16, tmp_format_spec_16);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 225;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 3, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[117];
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 4, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_string_concat_values_10);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_assign_source_88 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_10);
        Py_DECREF(tmp_string_concat_values_10);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 225;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = coroutine_heap->var_norm_path;
            coroutine_heap->var_norm_path = tmp_assign_source_88;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_args_element_value_46;
        tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_instance_23 == NULL)) {
            tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_instance_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 227;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        CHECK_OBJECT(coroutine_heap->var_face_vector);
        tmp_args_element_value_46 = coroutine_heap->var_face_vector;
        coroutine->m_frame->m_frame.f_lineno = 227;
        tmp_assign_source_89 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_23, mod_consts[118], tmp_args_element_value_46);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 227;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = coroutine_heap->var_embedding_encoded;
            coroutine_heap->var_embedding_encoded = tmp_assign_source_89;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 228;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[119]);
        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 228;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        if (coroutine_heap->var_db == NULL) {
            Py_DECREF(tmp_called_value_38);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 228;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_kw_call_arg_value_0_2 = coroutine_heap->var_db;
        if (coroutine_heap->var_localUserId == NULL) {
            Py_DECREF(tmp_called_value_38);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[94]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 228;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_kw_call_dict_value_0_2 = coroutine_heap->var_localUserId;
        CHECK_OBJECT(coroutine_heap->var_original_url);
        tmp_kw_call_dict_value_1_1 = coroutine_heap->var_original_url;
        CHECK_OBJECT(coroutine_heap->var_norm_path);
        tmp_kw_call_dict_value_2_1 = coroutine_heap->var_norm_path;
        CHECK_OBJECT(coroutine_heap->var_embedding_encoded);
        tmp_kw_call_dict_value_3_1 = coroutine_heap->var_embedding_encoded;
        coroutine->m_frame->m_frame.f_lineno = 228;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_assign_source_90 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_38, args, kw_values, mod_consts[120]);
        }

        Py_DECREF(tmp_called_value_38);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 228;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = coroutine_heap->var_created_face;
            coroutine_heap->var_created_face = tmp_assign_source_90;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_24;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_47;
        CHECK_OBJECT(coroutine_heap->var_updated_dossier);
        tmp_expression_value_79 = coroutine_heap->var_updated_dossier;
        tmp_subscript_value_11 = mod_consts[20];
        tmp_called_instance_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_11);
        if (tmp_called_instance_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 231;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        CHECK_OBJECT(coroutine_heap->var_original_url);
        tmp_args_element_value_47 = coroutine_heap->var_original_url;
        coroutine->m_frame->m_frame.f_lineno = 231;
        tmp_call_result_22 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_24, mod_consts[47], tmp_args_element_value_47);
        Py_DECREF(tmp_called_instance_24);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 231;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_instance_25;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_48;
        CHECK_OBJECT(coroutine_heap->var_updated_dossier);
        tmp_expression_value_80 = coroutine_heap->var_updated_dossier;
        tmp_subscript_value_12 = mod_consts[71];
        tmp_called_instance_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_80, tmp_subscript_value_12);
        if (tmp_called_instance_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 232;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        CHECK_OBJECT(coroutine_heap->var_embedding_encoded);
        tmp_args_element_value_48 = coroutine_heap->var_embedding_encoded;
        coroutine->m_frame->m_frame.f_lineno = 232;
        tmp_call_result_23 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_25, mod_consts[47], tmp_args_element_value_48);
        Py_DECREF(tmp_called_instance_25);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 232;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_39;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 233;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        CHECK_OBJECT(coroutine_heap->var_created_face);
        tmp_expression_value_81 = coroutine_heap->var_created_face;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[89]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 233;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        if (coroutine_heap->var_localUserId == NULL) {
            Py_DECREF(tmp_kw_call_value_0_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[94]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 233;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_kw_call_value_1_1 = coroutine_heap->var_localUserId;
        CHECK_OBJECT(coroutine_heap->var_face_vector);
        tmp_kw_call_value_2_1 = coroutine_heap->var_face_vector;
        coroutine->m_frame->m_frame.f_lineno = 233;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_assign_source_91 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_39, kw_values, mod_consts[122]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 233;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = coroutine_heap->var_milvusFace;
            coroutine_heap->var_milvusFace = tmp_assign_source_91;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_instance_26;
        PyObject *tmp_args_element_value_49;
        if (coroutine_heap->var_milvus_client == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[108]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 234;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_called_instance_26 = coroutine_heap->var_milvus_client;
        CHECK_OBJECT(coroutine_heap->var_milvusFace);
        tmp_args_element_value_49 = coroutine_heap->var_milvusFace;
        coroutine->m_frame->m_frame.f_lineno = 234;
        tmp_operand_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_26, mod_consts[123], tmp_args_element_value_49);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 234;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 234;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_condition_result_30 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_6 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[124];
        coroutine_heap->exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        coroutine_heap->exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        coroutine_heap->exception_lineno = 234;
        RAISE_EXCEPTION_WITH_VALUE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    branch_no_29:;
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_expression_value_83;
        if (coroutine_heap->var_face_ids == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[125]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 235;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_expression_value_82 = coroutine_heap->var_face_ids;
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[47]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 235;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        CHECK_OBJECT(coroutine_heap->var_created_face);
        tmp_expression_value_83 = coroutine_heap->var_created_face;
        tmp_args_element_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[89]);
        if (tmp_args_element_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_40);

            coroutine_heap->exception_lineno = 235;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        coroutine->m_frame->m_frame.f_lineno = 235;
        tmp_call_result_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_50);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 235;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_string_concat_values_11;
        PyObject *tmp_tuple_element_13;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 236;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[2]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 236;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_tuple_element_13 = mod_consts[126];
        tmp_string_concat_values_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_17;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_format_spec_17;
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 0, tmp_tuple_element_13);
            CHECK_OBJECT(coroutine_heap->var_created_face);
            tmp_expression_value_85 = coroutine_heap->var_created_face;
            tmp_format_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[89]);
            if (tmp_format_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 236;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            tmp_format_spec_17 = mod_consts[5];
            tmp_tuple_element_13 = BUILTIN_FORMAT(tmp_format_value_17, tmp_format_spec_17);
            Py_DECREF(tmp_format_value_17);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 236;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_string_concat_values_11);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_args_element_value_51 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_11);
        Py_DECREF(tmp_string_concat_values_11);
        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_41);

            coroutine_heap->exception_lineno = 236;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        coroutine->m_frame->m_frame.f_lineno = 236;
        tmp_call_result_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_51);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 236;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        bool tmp_condition_result_31;
        assert(coroutine_heap->var_minio_is_work != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_31 = coroutine_heap->var_minio_is_work == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_instance_27;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_called_instance_28;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_subscript_value_13;
        tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_called_instance_28 == NULL)) {
            tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_called_instance_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 240;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_args_element_value_52 = mod_consts[129];
        CHECK_OBJECT(coroutine_heap->var_face_aligned);
        tmp_args_element_value_53 = coroutine_heap->var_face_aligned;
        coroutine->m_frame->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53};
            tmp_expression_value_86 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_28,
                mod_consts[128],
                call_args
            );
        }

        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 240;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_subscript_value_13 = mod_consts[130];
        tmp_called_instance_27 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_86, tmp_subscript_value_13, 1);
        Py_DECREF(tmp_expression_value_86);
        if (tmp_called_instance_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 240;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        coroutine->m_frame->m_frame.f_lineno = 240;
        tmp_assign_source_92 = CALL_METHOD_NO_ARGS(tmp_called_instance_27, mod_consts[131]);
        Py_DECREF(tmp_called_instance_27);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 240;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = coroutine_heap->var_img_encode;
            coroutine_heap->var_img_encode = tmp_assign_source_92;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_29;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_args_element_value_55;
        if (coroutine_heap->var_minio_client == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[132]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 241;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_called_instance_29 = coroutine_heap->var_minio_client;
        CHECK_OBJECT(coroutine_heap->var_img_encode);
        tmp_args_element_value_54 = coroutine_heap->var_img_encode;
        CHECK_OBJECT(coroutine_heap->var_norm_path);
        tmp_args_element_value_55 = coroutine_heap->var_norm_path;
        coroutine->m_frame->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = {tmp_args_element_value_54, tmp_args_element_value_55};
            tmp_call_result_26 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_29,
                mod_consts[133],
                call_args
            );
        }

        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 241;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_26);
    }
    branch_no_30:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 223;
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_16:;
    coroutine_heap->exception_keeper_type_15 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_15 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_15 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_15 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_for_loop_4__iter_value);
    coroutine_heap->tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_4__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_4__for_iterator);
    coroutine_heap->tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_15;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_15;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_15;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_15;

    goto try_except_handler_8;
    // End of try:
    try_end_11:;
    Py_XDECREF(coroutine_heap->tmp_for_loop_4__iter_value);
    coroutine_heap->tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_4__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_4__for_iterator);
    coroutine_heap->tmp_for_loop_4__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_subscript_value_14;
        if (coroutine_heap->var_dossiers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[68]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 244;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_87 = coroutine_heap->var_dossiers;
        tmp_subscript_value_14 = mod_consts[134];
        tmp_iter_arg_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_87, tmp_subscript_value_14);
        if (tmp_iter_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 244;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_93 = MAKE_ITERATOR(tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 244;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->tmp_for_loop_5__for_iterator == NULL);
        coroutine_heap->tmp_for_loop_5__for_iterator = tmp_assign_source_93;
    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_94;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_5__for_iterator);
        tmp_next_source_6 = coroutine_heap->tmp_for_loop_5__for_iterator;
        tmp_assign_source_94 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_94 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                coroutine_heap->exception_lineno = 244;
                goto try_except_handler_19;
            }
        }

        {
            PyObject *old = coroutine_heap->tmp_for_loop_5__iter_value;
            coroutine_heap->tmp_for_loop_5__iter_value = tmp_assign_source_94;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_95;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_5__iter_value);
        tmp_assign_source_95 = coroutine_heap->tmp_for_loop_5__iter_value;
        {
            PyObject *old = coroutine_heap->var_dos;
            coroutine_heap->var_dos = tmp_assign_source_95;
            Py_INCREF(coroutine_heap->var_dos);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_expression_value_88;
        CHECK_OBJECT(coroutine_heap->var_dos);
        tmp_expression_value_88 = coroutine_heap->var_dos;
        tmp_assign_source_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[94]);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 245;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        {
            PyObject *old = coroutine_heap->var_old_localUserId;
            coroutine_heap->var_old_localUserId = tmp_assign_source_96;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_57;
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 246;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[106]);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 246;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        if (coroutine_heap->var_db == NULL) {
            Py_DECREF(tmp_called_value_42);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 246;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }

        tmp_args_element_value_56 = coroutine_heap->var_db;
        CHECK_OBJECT(coroutine_heap->var_old_localUserId);
        tmp_args_element_value_57 = coroutine_heap->var_old_localUserId;
        coroutine->m_frame->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_57};
            tmp_assign_source_97 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_42, call_args);
        }

        Py_DECREF(tmp_called_value_42);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 246;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        {
            PyObject *old = coroutine_heap->var_data;
            coroutine_heap->var_data = tmp_assign_source_97;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_98;
        // Tried code:
        {
            PyObject *tmp_assign_source_99;
            PyObject *tmp_iter_arg_9;
            CHECK_OBJECT(coroutine_heap->var_data);
            tmp_iter_arg_9 = coroutine_heap->var_data;
            tmp_assign_source_99 = MAKE_ITERATOR(tmp_iter_arg_9);
            if (tmp_assign_source_99 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 247;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_20;
            }
            {
                PyObject *old = coroutine_heap->tmp_listcomp_2__$0;
                coroutine_heap->tmp_listcomp_2__$0 = tmp_assign_source_99;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_100;
            tmp_assign_source_100 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = coroutine_heap->tmp_listcomp_2__contraction;
                coroutine_heap->tmp_listcomp_2__contraction = tmp_assign_source_100;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_6e98abe0085ed831929380678d8474c9_3)) {
            Py_XDECREF(cache_frame_6e98abe0085ed831929380678d8474c9_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6e98abe0085ed831929380678d8474c9_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6e98abe0085ed831929380678d8474c9_3 = MAKE_FUNCTION_FRAME(codeobj_6e98abe0085ed831929380678d8474c9, module_enroll, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6e98abe0085ed831929380678d8474c9_3->m_type_description == NULL);
        coroutine_heap->frame_6e98abe0085ed831929380678d8474c9_3 = cache_frame_6e98abe0085ed831929380678d8474c9_3;


        // Push the new frame as the currently active one.
        pushFrameStack(coroutine_heap->frame_6e98abe0085ed831929380678d8474c9_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(coroutine_heap->frame_6e98abe0085ed831929380678d8474c9_3) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_7:;
        {
            PyObject *tmp_next_source_7;
            PyObject *tmp_assign_source_101;
            CHECK_OBJECT(coroutine_heap->tmp_listcomp_2__$0);
            tmp_next_source_7 = coroutine_heap->tmp_listcomp_2__$0;
            tmp_assign_source_101 = ITERATOR_NEXT(tmp_next_source_7);
            if (tmp_assign_source_101 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_7;
                } else {

                    FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                    coroutine_heap->type_description_2 = "o";
                    coroutine_heap->exception_lineno = 247;
                    goto try_except_handler_21;
                }
            }

            {
                PyObject *old = coroutine_heap->tmp_listcomp_2__iter_value_0;
                coroutine_heap->tmp_listcomp_2__iter_value_0 = tmp_assign_source_101;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_102;
            CHECK_OBJECT(coroutine_heap->tmp_listcomp_2__iter_value_0);
            tmp_assign_source_102 = coroutine_heap->tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = coroutine_heap->outline_1_var_face;
                coroutine_heap->outline_1_var_face = tmp_assign_source_102;
                Py_INCREF(coroutine_heap->outline_1_var_face);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_expression_value_90;
            CHECK_OBJECT(coroutine_heap->tmp_listcomp_2__contraction);
            tmp_append_list_2 = coroutine_heap->tmp_listcomp_2__contraction;
            CHECK_OBJECT(coroutine_heap->outline_1_var_face);
            tmp_expression_value_90 = coroutine_heap->outline_1_var_face;
            tmp_append_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[89]);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 247;
                coroutine_heap->type_description_2 = "o";
                goto try_except_handler_21;
            }
            assert(PyList_Check(tmp_append_list_2));
            coroutine_heap->tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (coroutine_heap->tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 247;
                coroutine_heap->type_description_2 = "o";
                goto try_except_handler_21;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 247;
            coroutine_heap->type_description_2 = "o";
            goto try_except_handler_21;
        }
        goto loop_start_7;
        loop_end_7:;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp_2__contraction);
        tmp_assign_source_98 = coroutine_heap->tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_98);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp_2__$0);
        Py_DECREF(coroutine_heap->tmp_listcomp_2__$0);
        coroutine_heap->tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp_2__contraction);
        Py_DECREF(coroutine_heap->tmp_listcomp_2__contraction);
        coroutine_heap->tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(coroutine_heap->tmp_listcomp_2__iter_value_0);
        coroutine_heap->tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_21:;
        coroutine_heap->exception_keeper_type_16 = coroutine_heap->exception_type;
        coroutine_heap->exception_keeper_value_16 = coroutine_heap->exception_value;
        coroutine_heap->exception_keeper_tb_16 = coroutine_heap->exception_tb;
        coroutine_heap->exception_keeper_lineno_16 = coroutine_heap->exception_lineno;
        coroutine_heap->exception_type = NULL;
        coroutine_heap->exception_value = NULL;
        coroutine_heap->exception_tb = NULL;
        coroutine_heap->exception_lineno = 0;

        CHECK_OBJECT(coroutine_heap->tmp_listcomp_2__$0);
        Py_DECREF(coroutine_heap->tmp_listcomp_2__$0);
        coroutine_heap->tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp_2__contraction);
        Py_DECREF(coroutine_heap->tmp_listcomp_2__contraction);
        coroutine_heap->tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(coroutine_heap->tmp_listcomp_2__iter_value_0);
        coroutine_heap->tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_16;
        coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_16;
        coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_16;
        coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_16;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(coroutine_heap->frame_6e98abe0085ed831929380678d8474c9_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto frame_no_exception_2;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION(coroutine_heap->frame_6e98abe0085ed831929380678d8474c9_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();


        goto try_return_handler_20;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(coroutine_heap->frame_6e98abe0085ed831929380678d8474c9_3);
#endif

        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine_heap->frame_6e98abe0085ed831929380678d8474c9_3, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine_heap->frame_6e98abe0085ed831929380678d8474c9_3->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine_heap->frame_6e98abe0085ed831929380678d8474c9_3, coroutine_heap->exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            coroutine_heap->frame_6e98abe0085ed831929380678d8474c9_3,
            coroutine_heap->type_description_2,
            coroutine_heap->outline_1_var_face
        );


        // Release cached frame if used for exception.
        if (coroutine_heap->frame_6e98abe0085ed831929380678d8474c9_3 == cache_frame_6e98abe0085ed831929380678d8474c9_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_6e98abe0085ed831929380678d8474c9_3);
            cache_frame_6e98abe0085ed831929380678d8474c9_3 = NULL;
        }

        assertFrameObject(coroutine_heap->frame_6e98abe0085ed831929380678d8474c9_3);

        // Put the previous frame back on top.
        popFrameStack();


        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_20;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_XDECREF(coroutine_heap->outline_1_var_face);
        coroutine_heap->outline_1_var_face = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_20:;
        coroutine_heap->exception_keeper_type_17 = coroutine_heap->exception_type;
        coroutine_heap->exception_keeper_value_17 = coroutine_heap->exception_value;
        coroutine_heap->exception_keeper_tb_17 = coroutine_heap->exception_tb;
        coroutine_heap->exception_keeper_lineno_17 = coroutine_heap->exception_lineno;
        coroutine_heap->exception_type = NULL;
        coroutine_heap->exception_value = NULL;
        coroutine_heap->exception_tb = NULL;
        coroutine_heap->exception_lineno = 0;

        Py_XDECREF(coroutine_heap->outline_1_var_face);
        coroutine_heap->outline_1_var_face = NULL;
        // Re-raise.
        coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_17;
        coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_17;
        coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_17;
        coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_17;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        coroutine_heap->exception_lineno = 247;
        goto try_except_handler_19;
        outline_result_2:;
        {
            PyObject *old = coroutine_heap->var_old_ids;
            coroutine_heap->var_old_ids = tmp_assign_source_98;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_32;
        PyObject *tmp_cmp_expr_left_23;
        nuitka_digit tmp_cmp_expr_right_23;
        PyObject *tmp_len_arg_5;
        CHECK_OBJECT(coroutine_heap->var_old_ids);
        tmp_len_arg_5 = coroutine_heap->var_old_ids;
        tmp_cmp_expr_left_23 = BUILTIN_LEN(tmp_len_arg_5);
        if (tmp_cmp_expr_left_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 249;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_cmp_expr_right_23 = 0;
        tmp_condition_result_32 = RICH_COMPARE_LE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
        Py_DECREF(tmp_cmp_expr_left_23);
        if (tmp_condition_result_32 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_string_concat_values_12;
        PyObject *tmp_tuple_element_15;
        tmp_raise_type_7 = PyExc_AssertionError;
        tmp_tuple_element_15 = mod_consts[135];
        tmp_string_concat_values_12 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_18;
            PyObject *tmp_format_spec_18;
            PyTuple_SET_ITEM0(tmp_string_concat_values_12, 0, tmp_tuple_element_15);
            CHECK_OBJECT(coroutine_heap->var_old_localUserId);
            tmp_format_value_18 = coroutine_heap->var_old_localUserId;
            tmp_format_spec_18 = mod_consts[5];
            tmp_tuple_element_15 = BUILTIN_FORMAT(tmp_format_value_18, tmp_format_spec_18);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 249;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_12, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_string_concat_values_12);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_tuple_element_14 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_12);
        Py_DECREF(tmp_string_concat_values_12);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 249;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_raise_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_2, 0, tmp_tuple_element_14);
        coroutine_heap->exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        coroutine_heap->exception_value = tmp_raise_value_2;
        coroutine_heap->exception_lineno = 249;
        RAISE_EXCEPTION_WITH_VALUE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_19;
    }
    branch_no_31:;
    {
        bool tmp_condition_result_33;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_called_instance_30;
        PyObject *tmp_args_element_value_58;
        if (coroutine_heap->var_milvus_client == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[108]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 250;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }

        tmp_called_instance_30 = coroutine_heap->var_milvus_client;
        CHECK_OBJECT(coroutine_heap->var_old_ids);
        tmp_args_element_value_58 = coroutine_heap->var_old_ids;
        coroutine->m_frame->m_frame.f_lineno = 250;
        tmp_operand_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_30, mod_consts[109], tmp_args_element_value_58);
        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 250;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 250;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_condition_result_33 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_3;
        tmp_raise_type_8 = PyExc_AssertionError;
        tmp_raise_value_3 = mod_consts[136];
        coroutine_heap->exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        coroutine_heap->exception_value = tmp_raise_value_3;
        Py_INCREF(tmp_raise_value_3);
        coroutine_heap->exception_lineno = 250;
        RAISE_EXCEPTION_WITH_VALUE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_19;
    }
    branch_no_32:;
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 251;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[137]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 251;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        if (coroutine_heap->var_db == NULL) {
            Py_DECREF(tmp_called_value_43);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 251;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }

        tmp_args_element_value_59 = coroutine_heap->var_db;
        CHECK_OBJECT(coroutine_heap->var_old_localUserId);
        tmp_args_element_value_60 = coroutine_heap->var_old_localUserId;
        coroutine->m_frame->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = {tmp_args_element_value_59, tmp_args_element_value_60};
            tmp_assign_source_103 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_43, call_args);
        }

        Py_DECREF(tmp_called_value_43);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 251;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        {
            PyObject *old = coroutine_heap->var_effected_rows;
            coroutine_heap->var_effected_rows = tmp_assign_source_103;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_cmp_expr_left_24;
        PyObject *tmp_cmp_expr_right_24;
        CHECK_OBJECT(coroutine_heap->var_effected_rows);
        tmp_cmp_expr_left_24 = coroutine_heap->var_effected_rows;
        tmp_cmp_expr_right_24 = mod_consts[83];
        tmp_operand_value_6 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
        if (tmp_operand_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 252;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 252;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_condition_result_34 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_raise_type_9;
        tmp_raise_type_9 = PyExc_AssertionError;
        coroutine_heap->exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        coroutine_heap->exception_lineno = 252;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_19;
    }
    branch_no_33:;
    {
        PyObject *tmp_called_instance_31;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_value_61;
        if (coroutine_heap->var_embs_duplicate_code == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[138]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 253;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }

        tmp_called_instance_31 = coroutine_heap->var_embs_duplicate_code;
        CHECK_OBJECT(coroutine_heap->var_data);
        tmp_args_element_value_61 = coroutine_heap->var_data;
        coroutine->m_frame->m_frame.f_lineno = 253;
        tmp_call_result_27 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_31, mod_consts[47], tmp_args_element_value_61);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 253;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        CHECK_OBJECT(coroutine_heap->var_userId);
        tmp_cmp_expr_left_25 = coroutine_heap->var_userId;
        tmp_cmp_expr_right_25 = Py_None;
        tmp_condition_result_35 = (tmp_cmp_expr_left_25 != tmp_cmp_expr_right_25) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_string_concat_values_13;
        PyObject *tmp_tuple_element_16;
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 256;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[2]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 256;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_tuple_element_16 = mod_consts[139];
        tmp_string_concat_values_13 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_19;
            PyObject *tmp_format_spec_19;
            PyObject *tmp_format_value_20;
            PyObject *tmp_format_spec_20;
            PyTuple_SET_ITEM0(tmp_string_concat_values_13, 0, tmp_tuple_element_16);
            CHECK_OBJECT(coroutine_heap->var_old_localUserId);
            tmp_format_value_19 = coroutine_heap->var_old_localUserId;
            tmp_format_spec_19 = mod_consts[5];
            tmp_tuple_element_16 = BUILTIN_FORMAT(tmp_format_value_19, tmp_format_spec_19);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 256;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_13, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_string_concat_values_13, 2, tmp_tuple_element_16);
            CHECK_OBJECT(coroutine_heap->var_userId);
            tmp_format_value_20 = coroutine_heap->var_userId;
            tmp_format_spec_20 = mod_consts[5];
            tmp_tuple_element_16 = BUILTIN_FORMAT(tmp_format_value_20, tmp_format_spec_20);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 256;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_13, 3, tmp_tuple_element_16);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_string_concat_values_13);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_args_element_value_62 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_13);
        Py_DECREF(tmp_string_concat_values_13);
        if (tmp_args_element_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_44);

            coroutine_heap->exception_lineno = 256;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        coroutine->m_frame->m_frame.f_lineno = 256;
        tmp_call_result_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_62);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 256;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        Py_DECREF(tmp_call_result_28);
    }
    goto branch_end_34;
    branch_no_34:;
    {
        bool tmp_condition_result_36;
        PyObject *tmp_cmp_expr_left_26;
        PyObject *tmp_cmp_expr_right_26;
        if (coroutine_heap->var_credential == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[22]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 257;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }

        tmp_cmp_expr_left_26 = coroutine_heap->var_credential;
        tmp_cmp_expr_right_26 = Py_None;
        tmp_condition_result_36 = (tmp_cmp_expr_left_26 != tmp_cmp_expr_right_26) ? true : false;
        if (tmp_condition_result_36 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_call_result_29;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_string_concat_values_14;
        PyObject *tmp_tuple_element_17;
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 258;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[2]);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 258;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_tuple_element_17 = mod_consts[139];
        tmp_string_concat_values_14 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_21;
            PyObject *tmp_format_spec_21;
            PyObject *tmp_format_value_22;
            PyObject *tmp_format_spec_22;
            PyTuple_SET_ITEM0(tmp_string_concat_values_14, 0, tmp_tuple_element_17);
            CHECK_OBJECT(coroutine_heap->var_old_localUserId);
            tmp_format_value_21 = coroutine_heap->var_old_localUserId;
            tmp_format_spec_21 = mod_consts[5];
            tmp_tuple_element_17 = BUILTIN_FORMAT(tmp_format_value_21, tmp_format_spec_21);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 258;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_14, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = mod_consts[141];
            PyTuple_SET_ITEM0(tmp_string_concat_values_14, 2, tmp_tuple_element_17);
            if (coroutine_heap->var_credential == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[22]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 258;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_13;
            }

            tmp_format_value_22 = coroutine_heap->var_credential;
            tmp_format_spec_22 = mod_consts[5];
            tmp_tuple_element_17 = BUILTIN_FORMAT(tmp_format_value_22, tmp_format_spec_22);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 258;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_14, 3, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_string_concat_values_14);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_args_element_value_63 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_14);
        Py_DECREF(tmp_string_concat_values_14);
        if (tmp_args_element_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_45);

            coroutine_heap->exception_lineno = 258;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        coroutine->m_frame->m_frame.f_lineno = 258;
        tmp_call_result_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_63);
        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_element_value_63);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 258;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        Py_DECREF(tmp_call_result_29);
    }
    branch_no_35:;
    branch_end_34:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 244;
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_19;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_19:;
    coroutine_heap->exception_keeper_type_18 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_18 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_18 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_18 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_for_loop_5__iter_value);
    coroutine_heap->tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_5__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_5__for_iterator);
    coroutine_heap->tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_18;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_18;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_18;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_18;

    goto try_except_handler_8;
    // End of try:
    try_end_12:;
    Py_XDECREF(coroutine_heap->tmp_for_loop_5__iter_value);
    coroutine_heap->tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_5__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_5__for_iterator);
    coroutine_heap->tmp_for_loop_5__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_assattr_target_14;
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 260;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assattr_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[142]);
        if (tmp_assattr_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 260;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_14 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[8], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 260;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_list_element_6;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(coroutine_heap->var_updated_dossier);
        tmp_list_element_6 = coroutine_heap->var_updated_dossier;
        tmp_assattr_value_15 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_15, 0, tmp_list_element_6);
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_15 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[15], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 261;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_call_result_30;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 263;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[2]);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 263;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_46);

            coroutine_heap->exception_lineno = 263;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[95]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_46);

            coroutine_heap->exception_lineno = 263;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (coroutine_heap->var_db == NULL) {
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_47);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 263;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_65 = coroutine_heap->var_db;
        if (coroutine_heap->var_localUserId == NULL) {
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_47);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[94]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 263;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_66 = coroutine_heap->var_localUserId;
        coroutine->m_frame->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66};
            tmp_args_element_value_64 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_47, call_args);
        }

        Py_DECREF(tmp_called_value_47);
        if (tmp_args_element_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_46);

            coroutine_heap->exception_lineno = 263;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 263;
        tmp_call_result_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_64);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_64);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 263;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_30);
    }
    branch_no_24:;
    {
        bool tmp_condition_result_37;
        assert(coroutine_heap->var_create != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_37 = coroutine_heap->var_create == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_37 != false) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_kw_call_dict_value_2_2;
        PyObject *tmp_kw_call_dict_value_3_2;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 266;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[143]);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 266;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (coroutine_heap->var_db == NULL) {
            Py_DECREF(tmp_called_value_48);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 266;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_kw_call_arg_value_0_3 = coroutine_heap->var_db;
        CHECK_OBJECT(coroutine_heap->var_userId);
        tmp_kw_call_dict_value_0_3 = coroutine_heap->var_userId;
        if (coroutine_heap->var_credential == NULL) {
            Py_DECREF(tmp_called_value_48);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[22]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 266;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_kw_call_dict_value_1_2 = coroutine_heap->var_credential;
        CHECK_OBJECT(coroutine_heap->var_name);
        tmp_kw_call_dict_value_2_2 = coroutine_heap->var_name;
        CHECK_OBJECT(coroutine_heap->var_description);
        tmp_kw_call_dict_value_3_2 = coroutine_heap->var_description;
        CHECK_OBJECT(coroutine_heap->var_department);
        tmp_kw_call_dict_value_4_1 = coroutine_heap->var_department;
        CHECK_OBJECT(coroutine_heap->var_member_type);
        tmp_kw_call_dict_value_5_1 = coroutine_heap->var_member_type;
        CHECK_OBJECT(coroutine_heap->var_expired);
        tmp_kw_call_dict_value_6_1 = coroutine_heap->var_expired;
        CHECK_OBJECT(coroutine_heap->var_isForceUpdate);
        tmp_kw_call_dict_value_7_1 = coroutine_heap->var_isForceUpdate;
        coroutine->m_frame->m_frame.f_lineno = 266;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[8] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1};
            tmp_assign_source_104 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_48, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_48);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 266;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->var_created_dossier == NULL);
        coroutine_heap->var_created_dossier = tmp_assign_source_104;
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_called_value_49;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        tmp_called_value_49 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(coroutine_heap->var_face_vectors);
        tmp_args_element_value_67 = coroutine_heap->var_face_vectors;
        CHECK_OBJECT(coroutine_heap->var_face_aligneds);
        tmp_args_element_value_68 = coroutine_heap->var_face_aligneds;
        CHECK_OBJECT(coroutine_heap->var_imagesUrls);
        tmp_args_element_value_69 = coroutine_heap->var_imagesUrls;
        coroutine->m_frame->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69};
            tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_49, call_args);
        }

        if (tmp_iter_arg_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 270;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_105 = MAKE_ITERATOR(tmp_iter_arg_10);
        Py_DECREF(tmp_iter_arg_10);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 270;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->tmp_for_loop_6__for_iterator == NULL);
        coroutine_heap->tmp_for_loop_6__for_iterator = tmp_assign_source_105;
    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_106;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_6__for_iterator);
        tmp_next_source_8 = coroutine_heap->tmp_for_loop_6__for_iterator;
        tmp_assign_source_106 = ITERATOR_NEXT(tmp_next_source_8);
        if (tmp_assign_source_106 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_8;
            } else {

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                coroutine_heap->exception_lineno = 270;
                goto try_except_handler_22;
            }
        }

        {
            PyObject *old = coroutine_heap->tmp_for_loop_6__iter_value;
            coroutine_heap->tmp_for_loop_6__iter_value = tmp_assign_source_106;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_iter_arg_11;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_6__iter_value);
        tmp_iter_arg_11 = coroutine_heap->tmp_for_loop_6__iter_value;
        tmp_assign_source_107 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 270;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_3__source_iter;
            coroutine_heap->tmp_tuple_unpack_3__source_iter = tmp_assign_source_107;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = coroutine_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_108 = UNPACK_NEXT(tmp_unpack_6, 0, 3);
        if (tmp_assign_source_108 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            coroutine_heap->exception_lineno = 270;
            goto try_except_handler_24;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_3__element_1;
            coroutine_heap->tmp_tuple_unpack_3__element_1 = tmp_assign_source_108;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = coroutine_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_109 = UNPACK_NEXT(tmp_unpack_7, 1, 3);
        if (tmp_assign_source_109 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            coroutine_heap->exception_lineno = 270;
            goto try_except_handler_24;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_3__element_2;
            coroutine_heap->tmp_tuple_unpack_3__element_2 = tmp_assign_source_109;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_8 = coroutine_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_110 = UNPACK_NEXT(tmp_unpack_8, 2, 3);
        if (tmp_assign_source_110 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            coroutine_heap->exception_lineno = 270;
            goto try_except_handler_24;
        }
        {
            PyObject *old = coroutine_heap->tmp_tuple_unpack_3__element_3;
            coroutine_heap->tmp_tuple_unpack_3__element_3 = tmp_assign_source_110;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = coroutine_heap->tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        coroutine_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(coroutine_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

                    coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                    coroutine_heap->exception_lineno = 270;
                    goto try_except_handler_24;
                }
            }
        } else {
            Py_DECREF(coroutine_heap->tmp_iterator_attempt);

            coroutine_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            coroutine_heap->exception_value = mod_consts[112];
            Py_INCREF(coroutine_heap->exception_value);
            coroutine_heap->exception_tb = NULL;

            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            coroutine_heap->exception_lineno = 270;
            goto try_except_handler_24;
        }
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_24:;
    coroutine_heap->exception_keeper_type_19 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_19 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_19 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_19 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_3__source_iter);
    coroutine_heap->tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_19;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_19;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_19;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_19;

    goto try_except_handler_23;
    // End of try:
    try_end_13:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_23:;
    coroutine_heap->exception_keeper_type_20 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_20 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_20 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_20 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_1);
    coroutine_heap->tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_2);
    coroutine_heap->tmp_tuple_unpack_3__element_2 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_3);
    coroutine_heap->tmp_tuple_unpack_3__element_3 = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_20;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_20;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_20;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_20;

    goto try_except_handler_22;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_3__source_iter);
    coroutine_heap->tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_111;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__element_1);
        tmp_assign_source_111 = coroutine_heap->tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = coroutine_heap->var_face_vector;
            coroutine_heap->var_face_vector = tmp_assign_source_111;
            Py_INCREF(coroutine_heap->var_face_vector);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_1);
    coroutine_heap->tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_112;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__element_2);
        tmp_assign_source_112 = coroutine_heap->tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = coroutine_heap->var_face_aligned;
            coroutine_heap->var_face_aligned = tmp_assign_source_112;
            Py_INCREF(coroutine_heap->var_face_aligned);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_2);
    coroutine_heap->tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_113;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__element_3);
        tmp_assign_source_113 = coroutine_heap->tmp_tuple_unpack_3__element_3;
        {
            PyObject *old = coroutine_heap->var_original_url;
            coroutine_heap->var_original_url = tmp_assign_source_113;
            Py_INCREF(coroutine_heap->var_original_url);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_3);
    coroutine_heap->tmp_tuple_unpack_3__element_3 = NULL;

    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_called_instance_32;
        tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_called_instance_32 == NULL)) {
            tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_called_instance_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 271;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        coroutine->m_frame->m_frame.f_lineno = 271;
        tmp_assign_source_114 = CALL_METHOD_NO_ARGS(tmp_called_instance_32, mod_consts[114]);
        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 271;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = coroutine_heap->var_uuid_str;
            coroutine_heap->var_uuid_str = tmp_assign_source_114;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_string_concat_values_15;
        PyObject *tmp_tuple_element_18;
        tmp_tuple_element_18 = mod_consts[115];
        tmp_string_concat_values_15 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_23;
            PyObject *tmp_format_spec_23;
            PyObject *tmp_format_value_24;
            PyObject *tmp_format_spec_24;
            PyTuple_SET_ITEM0(tmp_string_concat_values_15, 0, tmp_tuple_element_18);
            CHECK_OBJECT(coroutine_heap->var_time_str);
            tmp_format_value_23 = coroutine_heap->var_time_str;
            tmp_format_spec_23 = mod_consts[5];
            tmp_tuple_element_18 = BUILTIN_FORMAT(tmp_format_value_23, tmp_format_spec_23);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 272;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_15, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = mod_consts[116];
            PyTuple_SET_ITEM0(tmp_string_concat_values_15, 2, tmp_tuple_element_18);
            CHECK_OBJECT(coroutine_heap->var_uuid_str);
            tmp_format_value_24 = coroutine_heap->var_uuid_str;
            tmp_format_spec_24 = mod_consts[5];
            tmp_tuple_element_18 = BUILTIN_FORMAT(tmp_format_value_24, tmp_format_spec_24);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 272;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_15, 3, tmp_tuple_element_18);
            tmp_tuple_element_18 = mod_consts[117];
            PyTuple_SET_ITEM0(tmp_string_concat_values_15, 4, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_string_concat_values_15);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_assign_source_115 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_15);
        Py_DECREF(tmp_string_concat_values_15);
        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 272;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = coroutine_heap->var_norm_path;
            coroutine_heap->var_norm_path = tmp_assign_source_115;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_instance_33;
        PyObject *tmp_args_element_value_70;
        tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_instance_33 == NULL)) {
            tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_instance_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 274;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(coroutine_heap->var_face_vector);
        tmp_args_element_value_70 = coroutine_heap->var_face_vector;
        coroutine->m_frame->m_frame.f_lineno = 274;
        tmp_assign_source_116 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_33, mod_consts[118], tmp_args_element_value_70);
        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 274;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = coroutine_heap->var_embedding_encoded;
            coroutine_heap->var_embedding_encoded = tmp_assign_source_116;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_kw_call_dict_value_2_3;
        PyObject *tmp_kw_call_dict_value_3_3;
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 275;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[119]);
        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 275;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        if (coroutine_heap->var_db == NULL) {
            Py_DECREF(tmp_called_value_50);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 275;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_kw_call_arg_value_0_4 = coroutine_heap->var_db;
        if (coroutine_heap->var_created_dossier == NULL) {
            Py_DECREF(tmp_called_value_50);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[145]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 275;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_expression_value_99 = coroutine_heap->var_created_dossier;
        tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[94]);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_50);

            coroutine_heap->exception_lineno = 275;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(coroutine_heap->var_original_url);
        tmp_kw_call_dict_value_1_3 = coroutine_heap->var_original_url;
        CHECK_OBJECT(coroutine_heap->var_norm_path);
        tmp_kw_call_dict_value_2_3 = coroutine_heap->var_norm_path;
        CHECK_OBJECT(coroutine_heap->var_embedding_encoded);
        tmp_kw_call_dict_value_3_3 = coroutine_heap->var_embedding_encoded;
        coroutine->m_frame->m_frame.f_lineno = 275;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_3, tmp_kw_call_dict_value_3_3};
            tmp_assign_source_117 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_50, args, kw_values, mod_consts[120]);
        }

        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 275;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = coroutine_heap->var_created_face;
            coroutine_heap->var_created_face = tmp_assign_source_117;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_call_result_31;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_expression_value_101;
        tmp_called_value_51 = LOOKUP_BUILTIN(mod_consts[78]);
        assert(tmp_called_value_51 != NULL);
        CHECK_OBJECT(coroutine_heap->var_face_vector);
        tmp_expression_value_100 = coroutine_heap->var_face_vector;
        tmp_args_element_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[79]);
        if (tmp_args_element_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 278;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(coroutine_heap->var_face_vector);
        tmp_expression_value_101 = coroutine_heap->var_face_vector;
        tmp_args_element_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[146]);
        if (tmp_args_element_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_args_element_value_71);

            coroutine_heap->exception_lineno = 278;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        coroutine->m_frame->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = {tmp_args_element_value_71, tmp_args_element_value_72};
            tmp_call_result_31 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_51, call_args);
        }

        Py_DECREF(tmp_args_element_value_71);
        Py_DECREF(tmp_args_element_value_72);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 278;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_value_52;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_kw_call_value_2_2;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 279;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(coroutine_heap->var_created_face);
        tmp_expression_value_102 = coroutine_heap->var_created_face;
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[89]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 279;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        if (coroutine_heap->var_created_dossier == NULL) {
            Py_DECREF(tmp_kw_call_value_0_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[145]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 279;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_expression_value_103 = coroutine_heap->var_created_dossier;
        tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[94]);
        if (tmp_kw_call_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);

            coroutine_heap->exception_lineno = 279;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(coroutine_heap->var_face_vector);
        tmp_kw_call_value_2_2 = coroutine_heap->var_face_vector;
        coroutine->m_frame->m_frame.f_lineno = 279;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};

            tmp_assign_source_118 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_52, kw_values, mod_consts[122]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        Py_DECREF(tmp_kw_call_value_1_2);
        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 279;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = coroutine_heap->var_milvusFace;
            coroutine_heap->var_milvusFace = tmp_assign_source_118;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_38;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_called_instance_34;
        PyObject *tmp_args_element_value_73;
        if (coroutine_heap->var_milvus_client == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[108]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 280;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_called_instance_34 = coroutine_heap->var_milvus_client;
        CHECK_OBJECT(coroutine_heap->var_milvusFace);
        tmp_args_element_value_73 = coroutine_heap->var_milvusFace;
        coroutine->m_frame->m_frame.f_lineno = 280;
        tmp_operand_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_34, mod_consts[123], tmp_args_element_value_73);
        if (tmp_operand_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 280;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        Py_DECREF(tmp_operand_value_7);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 280;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_condition_result_38 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_38 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_4;
        tmp_raise_type_10 = PyExc_AssertionError;
        tmp_raise_value_4 = mod_consts[124];
        coroutine_heap->exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        coroutine_heap->exception_value = tmp_raise_value_4;
        Py_INCREF(tmp_raise_value_4);
        coroutine_heap->exception_lineno = 280;
        RAISE_EXCEPTION_WITH_VALUE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    branch_no_37:;
    {
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_call_result_32;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_expression_value_105;
        if (coroutine_heap->var_face_ids == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[125]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 281;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_expression_value_104 = coroutine_heap->var_face_ids;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[47]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 281;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(coroutine_heap->var_created_face);
        tmp_expression_value_105 = coroutine_heap->var_created_face;
        tmp_args_element_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[89]);
        if (tmp_args_element_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_53);

            coroutine_heap->exception_lineno = 281;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        coroutine->m_frame->m_frame.f_lineno = 281;
        tmp_call_result_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_74);
        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_args_element_value_74);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 281;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_call_result_33;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_string_concat_values_16;
        PyObject *tmp_tuple_element_19;
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 282;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[2]);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 282;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_tuple_element_19 = mod_consts[135];
        tmp_string_concat_values_16 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_25;
            PyObject *tmp_expression_value_107;
            PyObject *tmp_format_spec_25;
            PyObject *tmp_format_value_26;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_format_spec_26;
            PyTuple_SET_ITEM0(tmp_string_concat_values_16, 0, tmp_tuple_element_19);
            if (coroutine_heap->var_created_dossier == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[145]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 282;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_15;
            }

            tmp_expression_value_107 = coroutine_heap->var_created_dossier;
            tmp_format_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[94]);
            if (tmp_format_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 282;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_15;
            }
            tmp_format_spec_25 = mod_consts[5];
            tmp_tuple_element_19 = BUILTIN_FORMAT(tmp_format_value_25, tmp_format_spec_25);
            Py_DECREF(tmp_format_value_25);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 282;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_16, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = mod_consts[147];
            PyTuple_SET_ITEM0(tmp_string_concat_values_16, 2, tmp_tuple_element_19);
            CHECK_OBJECT(coroutine_heap->var_created_face);
            tmp_expression_value_108 = coroutine_heap->var_created_face;
            tmp_format_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[89]);
            if (tmp_format_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 282;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_15;
            }
            tmp_format_spec_26 = mod_consts[5];
            tmp_tuple_element_19 = BUILTIN_FORMAT(tmp_format_value_26, tmp_format_spec_26);
            Py_DECREF(tmp_format_value_26);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 282;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_16, 3, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_string_concat_values_16);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_args_element_value_75 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_16);
        Py_DECREF(tmp_string_concat_values_16);
        if (tmp_args_element_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_54);

            coroutine_heap->exception_lineno = 282;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        coroutine->m_frame->m_frame.f_lineno = 282;
        tmp_call_result_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_75);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_element_value_75);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 282;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        bool tmp_condition_result_39;
        assert(coroutine_heap->var_minio_is_work != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_39 = coroutine_heap->var_minio_is_work == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_instance_35;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_called_instance_36;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_subscript_value_15;
        tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_called_instance_36 == NULL)) {
            tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_called_instance_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 286;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_args_element_value_76 = mod_consts[129];
        CHECK_OBJECT(coroutine_heap->var_face_aligned);
        tmp_args_element_value_77 = coroutine_heap->var_face_aligned;
        coroutine->m_frame->m_frame.f_lineno = 286;
        {
            PyObject *call_args[] = {tmp_args_element_value_76, tmp_args_element_value_77};
            tmp_expression_value_109 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_36,
                mod_consts[128],
                call_args
            );
        }

        if (tmp_expression_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 286;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_subscript_value_15 = mod_consts[130];
        tmp_called_instance_35 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_109, tmp_subscript_value_15, 1);
        Py_DECREF(tmp_expression_value_109);
        if (tmp_called_instance_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 286;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        coroutine->m_frame->m_frame.f_lineno = 286;
        tmp_assign_source_119 = CALL_METHOD_NO_ARGS(tmp_called_instance_35, mod_consts[131]);
        Py_DECREF(tmp_called_instance_35);
        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 286;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = coroutine_heap->var_img_encode;
            coroutine_heap->var_img_encode = tmp_assign_source_119;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_37;
        PyObject *tmp_call_result_34;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_args_element_value_79;
        if (coroutine_heap->var_minio_client == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[132]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 287;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_called_instance_37 = coroutine_heap->var_minio_client;
        CHECK_OBJECT(coroutine_heap->var_img_encode);
        tmp_args_element_value_78 = coroutine_heap->var_img_encode;
        CHECK_OBJECT(coroutine_heap->var_norm_path);
        tmp_args_element_value_79 = coroutine_heap->var_norm_path;
        coroutine->m_frame->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = {tmp_args_element_value_78, tmp_args_element_value_79};
            tmp_call_result_34 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_37,
                mod_consts[133],
                call_args
            );
        }

        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 287;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_34);
    }
    branch_no_38:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 270;
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_22:;
    coroutine_heap->exception_keeper_type_21 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_21 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_21 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_21 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_for_loop_6__iter_value);
    coroutine_heap->tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_6__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_6__for_iterator);
    coroutine_heap->tmp_for_loop_6__for_iterator = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_21;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_21;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_21;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_21;

    goto try_except_handler_8;
    // End of try:
    try_end_15:;
    Py_XDECREF(coroutine_heap->tmp_for_loop_6__iter_value);
    coroutine_heap->tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_6__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_6__for_iterator);
    coroutine_heap->tmp_for_loop_6__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_assattr_target_16;
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 289;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assattr_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[142]);
        if (tmp_assattr_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 289;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_16 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[8], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 289;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_list_element_7;
        PyObject *tmp_called_instance_38;
        PyObject *tmp_assattr_target_17;
        if (coroutine_heap->var_created_dossier == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[145]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 290;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_instance_38 = coroutine_heap->var_created_dossier;
        coroutine->m_frame->m_frame.f_lineno = 290;
        tmp_list_element_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_38, mod_consts[70]);
        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 290;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assattr_value_17 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_17, 0, tmp_list_element_7);
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_17 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[15], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 290;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    branch_no_36:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_8:;
    coroutine_heap->exception_keeper_type_22 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_22 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_22 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_22 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 3.
    coroutine_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (coroutine_heap->exception_keeper_tb_22 == NULL) {
        coroutine_heap->exception_keeper_tb_22 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_22);
    } else if (coroutine_heap->exception_keeper_lineno_22 != 0) {
        coroutine_heap->exception_keeper_tb_22 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_22, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_22);
    }

    PUBLISH_CURRENT_EXCEPTION(&coroutine_heap->exception_keeper_type_22, &coroutine_heap->exception_keeper_value_22, &coroutine_heap->exception_keeper_tb_22);
    // Tried code:
    {
        bool tmp_condition_result_40;
        PyObject *tmp_cmp_expr_left_27;
        PyObject *tmp_cmp_expr_right_27;
        tmp_cmp_expr_left_27 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_27 = PyExc_Exception;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_27, tmp_cmp_expr_right_27);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_40 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_40 != false) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = EXC_VALUE(PyThreadState_GET());
        assert(coroutine_heap->var_e == NULL);
        Py_INCREF(tmp_assign_source_120);
        coroutine_heap->var_e = tmp_assign_source_120;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_39;
        PyObject *tmp_call_result_35;
        tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_39 == NULL)) {
            tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 294;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        coroutine->m_frame->m_frame.f_lineno = 294;
        tmp_call_result_35 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_39,
            mod_consts[2],
            PyTuple_GET_ITEM(mod_consts[148], 0)
        );

        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 294;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_instance_40;
        PyObject *tmp_call_result_36;
        if (coroutine_heap->var_db == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 295;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_called_instance_40 = coroutine_heap->var_db;
        coroutine->m_frame->m_frame.f_lineno = 295;
        tmp_call_result_36 = CALL_METHOD_NO_ARGS(tmp_called_instance_40, mod_consts[149]);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 295;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_iter_arg_12;
        if (coroutine_heap->var_old_milvus_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[110]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_iter_arg_12 = coroutine_heap->var_old_milvus_data;
        tmp_assign_source_121 = MAKE_ITERATOR(tmp_iter_arg_12);
        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        assert(coroutine_heap->tmp_for_loop_7__for_iterator == NULL);
        coroutine_heap->tmp_for_loop_7__for_iterator = tmp_assign_source_121;
    }
    // Tried code:
    loop_start_9:;
    {
        PyObject *tmp_next_source_9;
        PyObject *tmp_assign_source_122;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_7__for_iterator);
        tmp_next_source_9 = coroutine_heap->tmp_for_loop_7__for_iterator;
        tmp_assign_source_122 = ITERATOR_NEXT(tmp_next_source_9);
        if (tmp_assign_source_122 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_9;
            } else {

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                coroutine_heap->exception_lineno = 297;
                goto try_except_handler_27;
            }
        }

        {
            PyObject *old = coroutine_heap->tmp_for_loop_7__iter_value;
            coroutine_heap->tmp_for_loop_7__iter_value = tmp_assign_source_122;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_123;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_7__iter_value);
        tmp_assign_source_123 = coroutine_heap->tmp_for_loop_7__iter_value;
        {
            PyObject *old = coroutine_heap->var_face;
            coroutine_heap->var_face = tmp_assign_source_123;
            Py_INCREF(coroutine_heap->var_face);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_expression_value_114;
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 298;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[73]);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 298;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_55);

            coroutine_heap->exception_lineno = 298;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[75]);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_55);

            coroutine_heap->exception_lineno = 298;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        CHECK_OBJECT(coroutine_heap->var_face);
        tmp_expression_value_113 = coroutine_heap->var_face;
        tmp_args_element_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[150]);
        if (tmp_args_element_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_called_value_56);

            coroutine_heap->exception_lineno = 298;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        coroutine->m_frame->m_frame.f_lineno = 298;
        tmp_kw_call_arg_value_0_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_80);
        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_args_element_value_80);
        if (tmp_kw_call_arg_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_55);

            coroutine_heap->exception_lineno = 298;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_kw_call_arg_value_0_5);

            coroutine_heap->exception_lineno = 298;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_kw_call_dict_value_0_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[76]);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_kw_call_arg_value_0_5);

            coroutine_heap->exception_lineno = 298;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        coroutine->m_frame->m_frame.f_lineno = 298;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_assign_source_124 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_55, args, kw_values, mod_consts[77]);
        }

        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_kw_call_arg_value_0_5);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 298;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        {
            PyObject *old = coroutine_heap->var_old_embedding;
            coroutine_heap->var_old_embedding = tmp_assign_source_124;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_called_value_57;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_kw_call_value_2_3;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 299;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        CHECK_OBJECT(coroutine_heap->var_face);
        tmp_expression_value_115 = coroutine_heap->var_face;
        tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[89]);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 299;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        CHECK_OBJECT(coroutine_heap->var_face);
        tmp_expression_value_116 = coroutine_heap->var_face;
        tmp_kw_call_value_1_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[94]);
        if (tmp_kw_call_value_1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_3);

            coroutine_heap->exception_lineno = 299;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        CHECK_OBJECT(coroutine_heap->var_old_embedding);
        tmp_kw_call_value_2_3 = coroutine_heap->var_old_embedding;
        coroutine->m_frame->m_frame.f_lineno = 299;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3};

            tmp_assign_source_125 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_57, kw_values, mod_consts[122]);
        }

        Py_DECREF(tmp_kw_call_value_0_3);
        Py_DECREF(tmp_kw_call_value_1_3);
        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 299;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        {
            PyObject *old = coroutine_heap->var_milvusFace;
            coroutine_heap->var_milvusFace = tmp_assign_source_125;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_41;
        PyObject *tmp_call_result_37;
        PyObject *tmp_args_element_value_81;
        if (coroutine_heap->var_milvus_client == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[108]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 300;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_called_instance_41 = coroutine_heap->var_milvus_client;
        CHECK_OBJECT(coroutine_heap->var_milvusFace);
        tmp_args_element_value_81 = coroutine_heap->var_milvusFace;
        coroutine->m_frame->m_frame.f_lineno = 300;
        tmp_call_result_37 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_41, mod_consts[123], tmp_args_element_value_81);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 300;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_call_result_38;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_string_concat_values_17;
        PyObject *tmp_tuple_element_20;
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 301;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[2]);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 301;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_tuple_element_20 = mod_consts[151];
        tmp_string_concat_values_17 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_27;
            PyObject *tmp_expression_value_118;
            PyObject *tmp_format_spec_27;
            PyTuple_SET_ITEM0(tmp_string_concat_values_17, 0, tmp_tuple_element_20);
            CHECK_OBJECT(coroutine_heap->var_face);
            tmp_expression_value_118 = coroutine_heap->var_face;
            tmp_format_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[89]);
            if (tmp_format_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 301;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_16;
            }
            tmp_format_spec_27 = mod_consts[5];
            tmp_tuple_element_20 = BUILTIN_FORMAT(tmp_format_value_27, tmp_format_spec_27);
            Py_DECREF(tmp_format_value_27);
            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 301;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_17, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_string_concat_values_17);
        goto try_except_handler_27;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_args_element_value_82 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_17);
        Py_DECREF(tmp_string_concat_values_17);
        if (tmp_args_element_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_58);

            coroutine_heap->exception_lineno = 301;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        coroutine->m_frame->m_frame.f_lineno = 301;
        tmp_call_result_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_58, tmp_args_element_value_82);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_82);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 301;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        Py_DECREF(tmp_call_result_38);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 297;
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_27;
    }
    goto loop_start_9;
    loop_end_9:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_27:;
    coroutine_heap->exception_keeper_type_23 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_23 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_23 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_23 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_for_loop_7__iter_value);
    coroutine_heap->tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_7__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_7__for_iterator);
    coroutine_heap->tmp_for_loop_7__for_iterator = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_23;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_23;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_23;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_23;

    goto try_except_handler_26;
    // End of try:
    try_end_17:;
    Py_XDECREF(coroutine_heap->tmp_for_loop_7__iter_value);
    coroutine_heap->tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_7__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_7__for_iterator);
    coroutine_heap->tmp_for_loop_7__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_iter_arg_13;
        if (coroutine_heap->var_face_ids == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[125]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 303;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_iter_arg_13 = coroutine_heap->var_face_ids;
        tmp_assign_source_126 = MAKE_ITERATOR(tmp_iter_arg_13);
        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 303;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        assert(coroutine_heap->tmp_for_loop_8__for_iterator == NULL);
        coroutine_heap->tmp_for_loop_8__for_iterator = tmp_assign_source_126;
    }
    // Tried code:
    loop_start_10:;
    {
        PyObject *tmp_next_source_10;
        PyObject *tmp_assign_source_127;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_8__for_iterator);
        tmp_next_source_10 = coroutine_heap->tmp_for_loop_8__for_iterator;
        tmp_assign_source_127 = ITERATOR_NEXT(tmp_next_source_10);
        if (tmp_assign_source_127 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_10;
            } else {

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                coroutine_heap->exception_lineno = 303;
                goto try_except_handler_28;
            }
        }

        {
            PyObject *old = coroutine_heap->tmp_for_loop_8__iter_value;
            coroutine_heap->tmp_for_loop_8__iter_value = tmp_assign_source_127;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_128;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_8__iter_value);
        tmp_assign_source_128 = coroutine_heap->tmp_for_loop_8__iter_value;
        {
            PyObject *old = coroutine_heap->var_id_;
            coroutine_heap->var_id_ = tmp_assign_source_128;
            Py_INCREF(coroutine_heap->var_id_);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_42;
        PyObject *tmp_call_result_39;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_list_element_8;
        if (coroutine_heap->var_milvus_client == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[108]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 304;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }

        tmp_called_instance_42 = coroutine_heap->var_milvus_client;
        CHECK_OBJECT(coroutine_heap->var_id_);
        tmp_list_element_8 = coroutine_heap->var_id_;
        tmp_args_element_value_83 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_args_element_value_83, 0, tmp_list_element_8);
        coroutine->m_frame->m_frame.f_lineno = 304;
        tmp_call_result_39 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_42, mod_consts[109], tmp_args_element_value_83);
        Py_DECREF(tmp_args_element_value_83);
        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 304;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_call_result_40;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_string_concat_values_18;
        PyObject *tmp_tuple_element_21;
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 305;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[2]);
        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 305;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
        tmp_tuple_element_21 = mod_consts[111];
        tmp_string_concat_values_18 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_28;
            PyObject *tmp_format_spec_28;
            PyTuple_SET_ITEM0(tmp_string_concat_values_18, 0, tmp_tuple_element_21);
            CHECK_OBJECT(coroutine_heap->var_id_);
            tmp_format_value_28 = coroutine_heap->var_id_;
            tmp_format_spec_28 = mod_consts[5];
            tmp_tuple_element_21 = BUILTIN_FORMAT(tmp_format_value_28, tmp_format_spec_28);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 305;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_18, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_called_value_59);
        Py_DECREF(tmp_string_concat_values_18);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_args_element_value_84 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_18);
        Py_DECREF(tmp_string_concat_values_18);
        if (tmp_args_element_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_59);

            coroutine_heap->exception_lineno = 305;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
        coroutine->m_frame->m_frame.f_lineno = 305;
        tmp_call_result_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_59, tmp_args_element_value_84);
        Py_DECREF(tmp_called_value_59);
        Py_DECREF(tmp_args_element_value_84);
        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 305;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
        Py_DECREF(tmp_call_result_40);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 303;
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }
    goto loop_start_10;
    loop_end_10:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_28:;
    coroutine_heap->exception_keeper_type_24 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_24 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_24 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_24 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_for_loop_8__iter_value);
    coroutine_heap->tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_8__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_8__for_iterator);
    coroutine_heap->tmp_for_loop_8__for_iterator = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_24;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_24;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_24;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_24;

    goto try_except_handler_26;
    // End of try:
    try_end_18:;
    Py_XDECREF(coroutine_heap->tmp_for_loop_8__iter_value);
    coroutine_heap->tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_8__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_8__for_iterator);
    coroutine_heap->tmp_for_loop_8__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_iter_arg_14;
        if (coroutine_heap->var_embs_duplicate_code == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[138]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 308;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_iter_arg_14 = coroutine_heap->var_embs_duplicate_code;
        tmp_assign_source_129 = MAKE_ITERATOR(tmp_iter_arg_14);
        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 308;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        assert(coroutine_heap->tmp_for_loop_9__for_iterator == NULL);
        coroutine_heap->tmp_for_loop_9__for_iterator = tmp_assign_source_129;
    }
    // Tried code:
    loop_start_11:;
    {
        PyObject *tmp_next_source_11;
        PyObject *tmp_assign_source_130;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_9__for_iterator);
        tmp_next_source_11 = coroutine_heap->tmp_for_loop_9__for_iterator;
        tmp_assign_source_130 = ITERATOR_NEXT(tmp_next_source_11);
        if (tmp_assign_source_130 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_11;
            } else {

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                coroutine_heap->exception_lineno = 308;
                goto try_except_handler_29;
            }
        }

        {
            PyObject *old = coroutine_heap->tmp_for_loop_9__iter_value;
            coroutine_heap->tmp_for_loop_9__iter_value = tmp_assign_source_130;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_131;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_9__iter_value);
        tmp_assign_source_131 = coroutine_heap->tmp_for_loop_9__iter_value;
        {
            PyObject *old = coroutine_heap->var_data;
            coroutine_heap->var_data = tmp_assign_source_131;
            Py_INCREF(coroutine_heap->var_data);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_iter_arg_15;
        CHECK_OBJECT(coroutine_heap->var_data);
        tmp_iter_arg_15 = coroutine_heap->var_data;
        tmp_assign_source_132 = MAKE_ITERATOR(tmp_iter_arg_15);
        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 309;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        {
            PyObject *old = coroutine_heap->tmp_for_loop_10__for_iterator;
            coroutine_heap->tmp_for_loop_10__for_iterator = tmp_assign_source_132;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_12:;
    {
        PyObject *tmp_next_source_12;
        PyObject *tmp_assign_source_133;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_10__for_iterator);
        tmp_next_source_12 = coroutine_heap->tmp_for_loop_10__for_iterator;
        tmp_assign_source_133 = ITERATOR_NEXT(tmp_next_source_12);
        if (tmp_assign_source_133 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_12;
            } else {

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                coroutine_heap->exception_lineno = 309;
                goto try_except_handler_30;
            }
        }

        {
            PyObject *old = coroutine_heap->tmp_for_loop_10__iter_value;
            coroutine_heap->tmp_for_loop_10__iter_value = tmp_assign_source_133;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_134;
        CHECK_OBJECT(coroutine_heap->tmp_for_loop_10__iter_value);
        tmp_assign_source_134 = coroutine_heap->tmp_for_loop_10__iter_value;
        {
            PyObject *old = coroutine_heap->var_face;
            coroutine_heap->var_face = tmp_assign_source_134;
            Py_INCREF(coroutine_heap->var_face);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_expression_value_123;
        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_120 == NULL)) {
            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_expression_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 310;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[73]);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 310;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_60);

            coroutine_heap->exception_lineno = 310;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[75]);
        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_60);

            coroutine_heap->exception_lineno = 310;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        CHECK_OBJECT(coroutine_heap->var_face);
        tmp_expression_value_122 = coroutine_heap->var_face;
        tmp_args_element_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[150]);
        if (tmp_args_element_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_61);

            coroutine_heap->exception_lineno = 310;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        coroutine->m_frame->m_frame.f_lineno = 310;
        tmp_kw_call_arg_value_0_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_61, tmp_args_element_value_85);
        Py_DECREF(tmp_called_value_61);
        Py_DECREF(tmp_args_element_value_85);
        if (tmp_kw_call_arg_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_60);

            coroutine_heap->exception_lineno = 310;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_kw_call_arg_value_0_6);

            coroutine_heap->exception_lineno = 310;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        tmp_kw_call_dict_value_0_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[76]);
        if (tmp_kw_call_dict_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_kw_call_arg_value_0_6);

            coroutine_heap->exception_lineno = 310;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        coroutine->m_frame->m_frame.f_lineno = 310;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
            tmp_assign_source_135 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_60, args, kw_values, mod_consts[77]);
        }

        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_kw_call_arg_value_0_6);
        Py_DECREF(tmp_kw_call_dict_value_0_6);
        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 310;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = coroutine_heap->var_old_embedding;
            coroutine_heap->var_old_embedding = tmp_assign_source_135;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_value_62;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_kw_call_value_2_4;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 311;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        CHECK_OBJECT(coroutine_heap->var_face);
        tmp_expression_value_124 = coroutine_heap->var_face;
        tmp_kw_call_value_0_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[89]);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 311;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        CHECK_OBJECT(coroutine_heap->var_face);
        tmp_expression_value_125 = coroutine_heap->var_face;
        tmp_kw_call_value_1_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[94]);
        if (tmp_kw_call_value_1_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_4);

            coroutine_heap->exception_lineno = 311;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        CHECK_OBJECT(coroutine_heap->var_old_embedding);
        tmp_kw_call_value_2_4 = coroutine_heap->var_old_embedding;
        coroutine->m_frame->m_frame.f_lineno = 311;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4};

            tmp_assign_source_136 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_62, kw_values, mod_consts[122]);
        }

        Py_DECREF(tmp_kw_call_value_0_4);
        Py_DECREF(tmp_kw_call_value_1_4);
        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 311;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = coroutine_heap->var_milvusFace;
            coroutine_heap->var_milvusFace = tmp_assign_source_136;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_43;
        PyObject *tmp_call_result_41;
        PyObject *tmp_args_element_value_86;
        if (coroutine_heap->var_milvus_client == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[108]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 312;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_called_instance_43 = coroutine_heap->var_milvus_client;
        CHECK_OBJECT(coroutine_heap->var_milvusFace);
        tmp_args_element_value_86 = coroutine_heap->var_milvusFace;
        coroutine->m_frame->m_frame.f_lineno = 312;
        tmp_call_result_41 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_43, mod_consts[123], tmp_args_element_value_86);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 312;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_call_result_42;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_string_concat_values_19;
        PyObject *tmp_tuple_element_22;
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 313;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        tmp_called_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[2]);
        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 313;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        tmp_tuple_element_22 = mod_consts[152];
        tmp_string_concat_values_19 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_29;
            PyObject *tmp_expression_value_127;
            PyObject *tmp_format_spec_29;
            PyObject *tmp_format_value_30;
            PyObject *tmp_expression_value_128;
            PyObject *tmp_format_spec_30;
            PyTuple_SET_ITEM0(tmp_string_concat_values_19, 0, tmp_tuple_element_22);
            CHECK_OBJECT(coroutine_heap->var_face);
            tmp_expression_value_127 = coroutine_heap->var_face;
            tmp_format_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[94]);
            if (tmp_format_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 313;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_18;
            }
            tmp_format_spec_29 = mod_consts[5];
            tmp_tuple_element_22 = BUILTIN_FORMAT(tmp_format_value_29, tmp_format_spec_29);
            Py_DECREF(tmp_format_value_29);
            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 313;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_19, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = mod_consts[153];
            PyTuple_SET_ITEM0(tmp_string_concat_values_19, 2, tmp_tuple_element_22);
            CHECK_OBJECT(coroutine_heap->var_face);
            tmp_expression_value_128 = coroutine_heap->var_face;
            tmp_format_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[89]);
            if (tmp_format_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 313;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_18;
            }
            tmp_format_spec_30 = mod_consts[5];
            tmp_tuple_element_22 = BUILTIN_FORMAT(tmp_format_value_30, tmp_format_spec_30);
            Py_DECREF(tmp_format_value_30);
            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 313;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_19, 3, tmp_tuple_element_22);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_called_value_63);
        Py_DECREF(tmp_string_concat_values_19);
        goto try_except_handler_30;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_args_element_value_87 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_19);
        Py_DECREF(tmp_string_concat_values_19);
        if (tmp_args_element_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_63);

            coroutine_heap->exception_lineno = 313;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        coroutine->m_frame->m_frame.f_lineno = 313;
        tmp_call_result_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_63, tmp_args_element_value_87);
        Py_DECREF(tmp_called_value_63);
        Py_DECREF(tmp_args_element_value_87);
        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 313;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        Py_DECREF(tmp_call_result_42);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 309;
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_30;
    }
    goto loop_start_12;
    loop_end_12:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_30:;
    coroutine_heap->exception_keeper_type_25 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_25 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_25 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_25 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_for_loop_10__iter_value);
    coroutine_heap->tmp_for_loop_10__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_10__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_10__for_iterator);
    coroutine_heap->tmp_for_loop_10__for_iterator = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_25;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_25;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_25;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_25;

    goto try_except_handler_29;
    // End of try:
    try_end_19:;
    Py_XDECREF(coroutine_heap->tmp_for_loop_10__iter_value);
    coroutine_heap->tmp_for_loop_10__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_10__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_10__for_iterator);
    coroutine_heap->tmp_for_loop_10__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 308;
        coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_29;
    }
    goto loop_start_11;
    loop_end_11:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_29:;
    coroutine_heap->exception_keeper_type_26 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_26 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_26 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_26 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_for_loop_9__iter_value);
    coroutine_heap->tmp_for_loop_9__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_9__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_9__for_iterator);
    coroutine_heap->tmp_for_loop_9__for_iterator = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_26;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_26;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_26;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_26;

    goto try_except_handler_26;
    // End of try:
    try_end_20:;
    Py_XDECREF(coroutine_heap->tmp_for_loop_9__iter_value);
    coroutine_heap->tmp_for_loop_9__iter_value = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_for_loop_9__for_iterator);
    Py_DECREF(coroutine_heap->tmp_for_loop_9__for_iterator);
    coroutine_heap->tmp_for_loop_9__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_44;
        PyObject *tmp_call_result_43;
        tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_called_instance_44 == NULL)) {
            tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_called_instance_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 315;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        coroutine->m_frame->m_frame.f_lineno = 315;
        tmp_call_result_43 = CALL_METHOD_NO_ARGS(tmp_called_instance_44, mod_consts[155]);
        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 315;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        nuitka_bool tmp_condition_result_41;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(coroutine_heap->var_e);
        tmp_isinstance_inst_2 = coroutine_heap->var_e;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 316;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 316;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_condition_result_41 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_call_result_44;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_expression_value_129;
        tmp_called_value_64 = LOOKUP_BUILTIN(mod_consts[78]);
        assert(tmp_called_value_64 != NULL);
        tmp_args_element_value_88 = mod_consts[157];
        CHECK_OBJECT(coroutine_heap->var_e);
        tmp_expression_value_129 = coroutine_heap->var_e;
        tmp_args_element_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[158]);
        if (tmp_args_element_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 318;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        coroutine->m_frame->m_frame.f_lineno = 318;
        {
            PyObject *call_args[] = {tmp_args_element_value_88, tmp_args_element_value_89};
            tmp_call_result_44 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_64, call_args);
        }

        Py_DECREF(tmp_args_element_value_89);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 318;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        bool tmp_condition_result_42;
        PyObject *tmp_cmp_expr_left_28;
        nuitka_digit tmp_cmp_expr_right_28;
        PyObject *tmp_len_arg_6;
        PyObject *tmp_expression_value_130;
        CHECK_OBJECT(coroutine_heap->var_e);
        tmp_expression_value_130 = coroutine_heap->var_e;
        tmp_len_arg_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[158]);
        if (tmp_len_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 319;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_cmp_expr_left_28 = BUILTIN_LEN(tmp_len_arg_6);
        Py_DECREF(tmp_len_arg_6);
        if (tmp_cmp_expr_left_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 319;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_cmp_expr_right_28 = 0;
        tmp_condition_result_42 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
        Py_DECREF(tmp_cmp_expr_left_28);
        if (tmp_condition_result_42 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_called_value_65;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_assattr_target_18;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 320;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        CHECK_OBJECT(coroutine_heap->var_e);
        tmp_expression_value_131 = coroutine_heap->var_e;
        tmp_args_element_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[158]);
        if (tmp_args_element_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 320;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        coroutine->m_frame->m_frame.f_lineno = 320;
        tmp_assattr_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_65, tmp_args_element_value_90);
        Py_DECREF(tmp_args_element_value_90);
        if (tmp_assattr_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 320;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_18 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[8], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 320;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
    }
    goto branch_end_41;
    branch_no_41:;
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_assattr_target_19;
        tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_132 == NULL)) {
            tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 323;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_assattr_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[12]);
        if (tmp_assattr_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 323;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_19 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[8], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 323;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
    }
    branch_end_41:;
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_list_element_9;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_assattr_target_20;
        tmp_dict_key_2 = mod_consts[160];
        CHECK_OBJECT(coroutine_heap->var_e);
        tmp_expression_value_133 = coroutine_heap->var_e;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[161]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 326;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_list_element_9 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_134;
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_list_element_9, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(coroutine_heap->tmp_res != 0));
            tmp_dict_key_2 = mod_consts[13];
            CHECK_OBJECT(coroutine_heap->var_e);
            tmp_expression_value_134 = coroutine_heap->var_e;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[14]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 327;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_list_element_9, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(coroutine_heap->tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_list_element_9);
        goto try_except_handler_26;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        tmp_assattr_value_20 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_20, 0, tmp_list_element_9);
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_20 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[15], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_value_20);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 324;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
    }
    goto branch_end_40;
    branch_no_40:;
    {
        nuitka_bool tmp_condition_result_43;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(coroutine_heap->var_e);
        tmp_isinstance_inst_3 = coroutine_heap->var_e;
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_isinstance_cls_3 == NULL)) {
            tmp_isinstance_cls_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 330;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 330;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_condition_result_43 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_assattr_target_21;
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 331;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_assattr_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[12]);
        if (tmp_assattr_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 331;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_21 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[8], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_value_21);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 331;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_list_element_10;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_assattr_target_22;
        tmp_dict_key_3 = mod_consts[160];
        CHECK_OBJECT(coroutine_heap->var_e);
        tmp_expression_value_136 = coroutine_heap->var_e;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[161]);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 334;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_list_element_10 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_137;
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_list_element_10, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(coroutine_heap->tmp_res != 0));
            tmp_dict_key_3 = mod_consts[13];
            CHECK_OBJECT(coroutine_heap->var_e);
            tmp_expression_value_137 = coroutine_heap->var_e;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[14]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 335;
                coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_list_element_10, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(coroutine_heap->tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_list_element_10);
        goto try_except_handler_26;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        tmp_assattr_value_22 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_22, 0, tmp_list_element_10);
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_22 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[15], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_value_22);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 332;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
    }
    goto branch_end_42;
    branch_no_42:;
    {
        bool tmp_condition_result_44;
        PyObject *tmp_cmp_expr_left_29;
        PyObject *tmp_cmp_expr_right_29;
        PyObject *tmp_expression_value_138;
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_expression_value_138 = coroutine_heap->var_response;
        tmp_cmp_expr_left_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[8]);
        if (tmp_cmp_expr_left_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 339;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_cmp_expr_right_29 = Py_None;
        tmp_condition_result_44 = (tmp_cmp_expr_left_29 == tmp_cmp_expr_right_29) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_29);
        if (tmp_condition_result_44 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_assattr_target_23;
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 340;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_assattr_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[162]);
        if (tmp_assattr_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 340;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_23 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_23, mod_consts[8], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_value_23);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 340;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
    }
    branch_no_43:;
    branch_end_42:;
    branch_end_40:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_26:;
    coroutine_heap->exception_keeper_type_27 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_27 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_27 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_27 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_e);
    coroutine_heap->var_e = NULL;

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_27;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_27;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_27;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_27;

    goto try_except_handler_25;
    // End of try:
    try_end_21:;
    Py_XDECREF(coroutine_heap->var_e);
    coroutine_heap->var_e = NULL;

    goto branch_end_39;
    branch_no_39:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 85;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
    branch_end_39:;
    goto try_end_22;
    // Exception handler code:
    try_except_handler_25:;
    coroutine_heap->exception_keeper_type_28 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_28 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_28 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_28 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_3);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_28;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_28;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_28;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_28;

    goto try_except_handler_7;
    // End of try:
    try_end_22:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_3);

    goto try_end_16;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_16:;
    goto try_end_23;
    // Exception handler code:
    try_except_handler_7:;
    coroutine_heap->exception_keeper_type_29 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_29 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_29 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_29 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 4.
    coroutine_heap->exception_preserved_4 = GET_CURRENT_EXCEPTION();

    if (coroutine_heap->exception_keeper_tb_29 == NULL) {
        coroutine_heap->exception_keeper_tb_29 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_29);
    } else if (coroutine_heap->exception_keeper_lineno_29 != 0) {
        coroutine_heap->exception_keeper_tb_29 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_29, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_29);
    }

    PUBLISH_CURRENT_EXCEPTION(&coroutine_heap->exception_keeper_type_29, &coroutine_heap->exception_keeper_value_29, &coroutine_heap->exception_keeper_tb_29);
    // Tried code:
    {
        PyObject *tmp_called_instance_45;
        PyObject *tmp_call_result_45;
        if (coroutine_heap->var_db == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 343;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }

        tmp_called_instance_45 = coroutine_heap->var_db;
        coroutine->m_frame->m_frame.f_lineno = 343;
        tmp_call_result_45 = CALL_METHOD_NO_ARGS(tmp_called_instance_45, mod_consts[163]);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 343;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_instance_46;
        PyObject *tmp_call_result_46;
        tmp_called_instance_46 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_46 == NULL)) {
            tmp_called_instance_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 344;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        coroutine->m_frame->m_frame.f_lineno = 344;
        tmp_call_result_46 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_46,
            mod_consts[2],
            PyTuple_GET_ITEM(mod_consts[164], 0)
        );

        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 344;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_instance_47;
        PyObject *tmp_call_result_47;
        if (coroutine_heap->var_db == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 345;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }

        tmp_called_instance_47 = coroutine_heap->var_db;
        coroutine->m_frame->m_frame.f_lineno = 345;
        tmp_call_result_47 = CALL_METHOD_NO_ARGS(tmp_called_instance_47, mod_consts[165]);
        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 345;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_called_value_66;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_assattr_target_24;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 346;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_expression_value_140 = coroutine_heap->var_response;
        tmp_args_element_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[8]);
        if (tmp_args_element_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 346;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        coroutine->m_frame->m_frame.f_lineno = 346;
        tmp_assattr_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_66, tmp_args_element_value_91);
        Py_DECREF(tmp_args_element_value_91);
        if (tmp_assattr_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 346;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_24 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_24, mod_consts[17], tmp_assattr_value_24);
        Py_DECREF(tmp_assattr_value_24);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 346;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_called_value_68;
        PyObject *tmp_args_element_value_93;
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 347;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 347;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_args_element_value_93 = coroutine_heap->var_response;
        coroutine->m_frame->m_frame.f_lineno = 347;
        tmp_args_element_value_92 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_68, tmp_args_element_value_93);
        if (tmp_args_element_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 347;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        coroutine->m_frame->m_frame.f_lineno = 347;
        coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_67, tmp_args_element_value_92);
        Py_DECREF(tmp_args_element_value_92);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 347;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        goto try_return_handler_31;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_31:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_4);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_31:;
    coroutine_heap->exception_keeper_type_30 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_30 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_30 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_30 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_4);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_30;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_30;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_30;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_23:;
    {
        PyObject *tmp_called_instance_48;
        PyObject *tmp_call_result_48;
        if (coroutine_heap->var_db == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 343;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_48 = coroutine_heap->var_db;
        coroutine->m_frame->m_frame.f_lineno = 343;
        tmp_call_result_48 = CALL_METHOD_NO_ARGS(tmp_called_instance_48, mod_consts[163]);
        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 343;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_called_instance_49;
        PyObject *tmp_call_result_49;
        tmp_called_instance_49 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_49 == NULL)) {
            tmp_called_instance_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 344;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 344;
        tmp_call_result_49 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_49,
            mod_consts[2],
            PyTuple_GET_ITEM(mod_consts[164], 0)
        );

        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 344;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_instance_50;
        PyObject *tmp_call_result_50;
        if (coroutine_heap->var_db == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[93]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 345;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_50 = coroutine_heap->var_db;
        coroutine->m_frame->m_frame.f_lineno = 345;
        tmp_call_result_50 = CALL_METHOD_NO_ARGS(tmp_called_instance_50, mod_consts[165]);
        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 345;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_called_value_69;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_assattr_target_25;
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 346;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_expression_value_141 = coroutine_heap->var_response;
        tmp_args_element_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[8]);
        if (tmp_args_element_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 346;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 346;
        tmp_assattr_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_69, tmp_args_element_value_94);
        Py_DECREF(tmp_args_element_value_94);
        if (tmp_assattr_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 346;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_assattr_target_25 = coroutine_heap->var_response;
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_25, mod_consts[17], tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_value_25);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 346;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_called_value_71;
        PyObject *tmp_args_element_value_96;
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 347;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 347;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_args_element_value_96 = coroutine_heap->var_response;
        coroutine->m_frame->m_frame.f_lineno = 347;
        tmp_args_element_value_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_71, tmp_args_element_value_96);
        if (tmp_args_element_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 347;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 347;
        coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_70, tmp_args_element_value_95);
        Py_DECREF(tmp_args_element_value_95);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 347;
            coroutine_heap->type_description_1 = "cooooooooooooooooobooobbbooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

    Nuitka_Frame_MarkAsNotExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    // Allow re-use of the frame again.
    Py_DECREF(coroutine->m_frame);
    goto frame_no_exception_3;

    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    Py_DECREF(coroutine->m_frame);
    goto try_return_handler_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[0],
            coroutine_heap->var_response,
            coroutine_heap->var_e,
            coroutine_heap->var_imagesUrls,
            coroutine_heap->var_userId,
            coroutine_heap->var_credential,
            coroutine_heap->var_name,
            coroutine_heap->var_description,
            coroutine_heap->var_department,
            coroutine_heap->var_member_type,
            coroutine_heap->var_expired,
            coroutine_heap->var_isForceUpdate,
            coroutine_heap->var_start,
            coroutine_heap->var_milvus_client,
            coroutine_heap->var_face_extractor,
            coroutine_heap->var_db,
            coroutine_heap->var_face_ids,
            coroutine_heap->var_minio_client,
            (int)coroutine_heap->var_minio_is_work,
            coroutine_heap->var_list_img_bytes,
            coroutine_heap->var_url_exceptions,
            coroutine_heap->var_old_milvus_data,
            (int)coroutine_heap->var_needToSearchMilvus,
            (int)coroutine_heap->var_updateByCode,
            (int)coroutine_heap->var_create,
            coroutine_heap->var_embs_duplicate_code,
            coroutine_heap->var_time_str,
            coroutine_heap->var_img_url,
            coroutine_heap->var_res,
            coroutine_heap->var_face_vectors,
            coroutine_heap->var_face_aligneds,
            coroutine_heap->var_dossiers,
            coroutine_heap->var_latest_dossier,
            coroutine_heap->var_latest_embs,
            coroutine_heap->var_score_matching,
            coroutine_heap->var_existed_faces,
            coroutine_heap->var_best_face,
            coroutine_heap->var__face,
            coroutine_heap->var_existed_face,
            coroutine_heap->var_existed_faceid,
            coroutine_heap->var_localUserId,
            coroutine_heap->var_existed_dossier,
            coroutine_heap->var_new_dict,
            coroutine_heap->var_faces,
            coroutine_heap->var_face,
            coroutine_heap->var_effective_rows,
            coroutine_heap->var_updated_dossier,
            coroutine_heap->var_face_vector,
            coroutine_heap->var_face_aligned,
            coroutine_heap->var_original_url,
            coroutine_heap->var_uuid_str,
            coroutine_heap->var_norm_path,
            coroutine_heap->var_embedding_encoded,
            coroutine_heap->var_created_face,
            coroutine_heap->var_milvusFace,
            coroutine_heap->var_img_encode,
            coroutine_heap->var_dos,
            coroutine_heap->var_old_localUserId,
            coroutine_heap->var_data,
            coroutine_heap->var_old_ids,
            coroutine_heap->var_effected_rows,
            coroutine_heap->var_created_dossier,
            coroutine_heap->var_old_embedding,
            coroutine_heap->var_id_
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    Py_DECREF(coroutine->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(coroutine_heap->var_response);
    Py_DECREF(coroutine_heap->var_response);
    coroutine_heap->var_response = NULL;
    Py_XDECREF(coroutine_heap->var_imagesUrls);
    coroutine_heap->var_imagesUrls = NULL;
    Py_XDECREF(coroutine_heap->var_userId);
    coroutine_heap->var_userId = NULL;
    Py_XDECREF(coroutine_heap->var_credential);
    coroutine_heap->var_credential = NULL;
    Py_XDECREF(coroutine_heap->var_name);
    coroutine_heap->var_name = NULL;
    Py_XDECREF(coroutine_heap->var_description);
    coroutine_heap->var_description = NULL;
    Py_XDECREF(coroutine_heap->var_department);
    coroutine_heap->var_department = NULL;
    Py_XDECREF(coroutine_heap->var_member_type);
    coroutine_heap->var_member_type = NULL;
    Py_XDECREF(coroutine_heap->var_expired);
    coroutine_heap->var_expired = NULL;
    Py_XDECREF(coroutine_heap->var_isForceUpdate);
    coroutine_heap->var_isForceUpdate = NULL;
    Py_XDECREF(coroutine_heap->var_start);
    coroutine_heap->var_start = NULL;
    Py_XDECREF(coroutine_heap->var_milvus_client);
    coroutine_heap->var_milvus_client = NULL;
    Py_XDECREF(coroutine_heap->var_face_extractor);
    coroutine_heap->var_face_extractor = NULL;
    Py_XDECREF(coroutine_heap->var_db);
    coroutine_heap->var_db = NULL;
    Py_XDECREF(coroutine_heap->var_face_ids);
    coroutine_heap->var_face_ids = NULL;
    Py_XDECREF(coroutine_heap->var_minio_client);
    coroutine_heap->var_minio_client = NULL;
    coroutine_heap->var_minio_is_work = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(coroutine_heap->var_list_img_bytes);
    coroutine_heap->var_list_img_bytes = NULL;
    Py_XDECREF(coroutine_heap->var_url_exceptions);
    coroutine_heap->var_url_exceptions = NULL;
    Py_XDECREF(coroutine_heap->var_old_milvus_data);
    coroutine_heap->var_old_milvus_data = NULL;
    coroutine_heap->var_needToSearchMilvus = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->var_updateByCode = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->var_create = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(coroutine_heap->var_embs_duplicate_code);
    coroutine_heap->var_embs_duplicate_code = NULL;
    Py_XDECREF(coroutine_heap->var_time_str);
    coroutine_heap->var_time_str = NULL;
    Py_XDECREF(coroutine_heap->var_img_url);
    coroutine_heap->var_img_url = NULL;
    Py_XDECREF(coroutine_heap->var_res);
    coroutine_heap->var_res = NULL;
    Py_XDECREF(coroutine_heap->var_face_vectors);
    coroutine_heap->var_face_vectors = NULL;
    Py_XDECREF(coroutine_heap->var_face_aligneds);
    coroutine_heap->var_face_aligneds = NULL;
    Py_XDECREF(coroutine_heap->var_dossiers);
    coroutine_heap->var_dossiers = NULL;
    Py_XDECREF(coroutine_heap->var_latest_dossier);
    coroutine_heap->var_latest_dossier = NULL;
    Py_XDECREF(coroutine_heap->var_latest_embs);
    coroutine_heap->var_latest_embs = NULL;
    Py_XDECREF(coroutine_heap->var_score_matching);
    coroutine_heap->var_score_matching = NULL;
    Py_XDECREF(coroutine_heap->var_existed_faces);
    coroutine_heap->var_existed_faces = NULL;
    Py_XDECREF(coroutine_heap->var_best_face);
    coroutine_heap->var_best_face = NULL;
    Py_XDECREF(coroutine_heap->var__face);
    coroutine_heap->var__face = NULL;
    Py_XDECREF(coroutine_heap->var_existed_face);
    coroutine_heap->var_existed_face = NULL;
    Py_XDECREF(coroutine_heap->var_existed_faceid);
    coroutine_heap->var_existed_faceid = NULL;
    Py_XDECREF(coroutine_heap->var_localUserId);
    coroutine_heap->var_localUserId = NULL;
    Py_XDECREF(coroutine_heap->var_existed_dossier);
    coroutine_heap->var_existed_dossier = NULL;
    Py_XDECREF(coroutine_heap->var_new_dict);
    coroutine_heap->var_new_dict = NULL;
    Py_XDECREF(coroutine_heap->var_faces);
    coroutine_heap->var_faces = NULL;
    Py_XDECREF(coroutine_heap->var_face);
    coroutine_heap->var_face = NULL;
    Py_XDECREF(coroutine_heap->var_effective_rows);
    coroutine_heap->var_effective_rows = NULL;
    Py_XDECREF(coroutine_heap->var_updated_dossier);
    coroutine_heap->var_updated_dossier = NULL;
    Py_XDECREF(coroutine_heap->var_face_vector);
    coroutine_heap->var_face_vector = NULL;
    Py_XDECREF(coroutine_heap->var_face_aligned);
    coroutine_heap->var_face_aligned = NULL;
    Py_XDECREF(coroutine_heap->var_original_url);
    coroutine_heap->var_original_url = NULL;
    Py_XDECREF(coroutine_heap->var_uuid_str);
    coroutine_heap->var_uuid_str = NULL;
    Py_XDECREF(coroutine_heap->var_norm_path);
    coroutine_heap->var_norm_path = NULL;
    Py_XDECREF(coroutine_heap->var_embedding_encoded);
    coroutine_heap->var_embedding_encoded = NULL;
    Py_XDECREF(coroutine_heap->var_created_face);
    coroutine_heap->var_created_face = NULL;
    Py_XDECREF(coroutine_heap->var_milvusFace);
    coroutine_heap->var_milvusFace = NULL;
    Py_XDECREF(coroutine_heap->var_img_encode);
    coroutine_heap->var_img_encode = NULL;
    Py_XDECREF(coroutine_heap->var_dos);
    coroutine_heap->var_dos = NULL;
    Py_XDECREF(coroutine_heap->var_old_localUserId);
    coroutine_heap->var_old_localUserId = NULL;
    Py_XDECREF(coroutine_heap->var_data);
    coroutine_heap->var_data = NULL;
    Py_XDECREF(coroutine_heap->var_old_ids);
    coroutine_heap->var_old_ids = NULL;
    Py_XDECREF(coroutine_heap->var_effected_rows);
    coroutine_heap->var_effected_rows = NULL;
    Py_XDECREF(coroutine_heap->var_created_dossier);
    coroutine_heap->var_created_dossier = NULL;
    Py_XDECREF(coroutine_heap->var_old_embedding);
    coroutine_heap->var_old_embedding = NULL;
    Py_XDECREF(coroutine_heap->var_id_);
    coroutine_heap->var_id_ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_31 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_31 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_31 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_31 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_response);
    coroutine_heap->var_response = NULL;
    Py_XDECREF(coroutine_heap->var_imagesUrls);
    coroutine_heap->var_imagesUrls = NULL;
    Py_XDECREF(coroutine_heap->var_userId);
    coroutine_heap->var_userId = NULL;
    Py_XDECREF(coroutine_heap->var_credential);
    coroutine_heap->var_credential = NULL;
    Py_XDECREF(coroutine_heap->var_name);
    coroutine_heap->var_name = NULL;
    Py_XDECREF(coroutine_heap->var_description);
    coroutine_heap->var_description = NULL;
    Py_XDECREF(coroutine_heap->var_department);
    coroutine_heap->var_department = NULL;
    Py_XDECREF(coroutine_heap->var_member_type);
    coroutine_heap->var_member_type = NULL;
    Py_XDECREF(coroutine_heap->var_expired);
    coroutine_heap->var_expired = NULL;
    Py_XDECREF(coroutine_heap->var_isForceUpdate);
    coroutine_heap->var_isForceUpdate = NULL;
    Py_XDECREF(coroutine_heap->var_start);
    coroutine_heap->var_start = NULL;
    Py_XDECREF(coroutine_heap->var_milvus_client);
    coroutine_heap->var_milvus_client = NULL;
    Py_XDECREF(coroutine_heap->var_face_extractor);
    coroutine_heap->var_face_extractor = NULL;
    Py_XDECREF(coroutine_heap->var_db);
    coroutine_heap->var_db = NULL;
    Py_XDECREF(coroutine_heap->var_face_ids);
    coroutine_heap->var_face_ids = NULL;
    Py_XDECREF(coroutine_heap->var_minio_client);
    coroutine_heap->var_minio_client = NULL;
    coroutine_heap->var_minio_is_work = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(coroutine_heap->var_list_img_bytes);
    coroutine_heap->var_list_img_bytes = NULL;
    Py_XDECREF(coroutine_heap->var_url_exceptions);
    coroutine_heap->var_url_exceptions = NULL;
    Py_XDECREF(coroutine_heap->var_old_milvus_data);
    coroutine_heap->var_old_milvus_data = NULL;
    coroutine_heap->var_needToSearchMilvus = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->var_updateByCode = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->var_create = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(coroutine_heap->var_embs_duplicate_code);
    coroutine_heap->var_embs_duplicate_code = NULL;
    Py_XDECREF(coroutine_heap->var_time_str);
    coroutine_heap->var_time_str = NULL;
    Py_XDECREF(coroutine_heap->var_img_url);
    coroutine_heap->var_img_url = NULL;
    Py_XDECREF(coroutine_heap->var_res);
    coroutine_heap->var_res = NULL;
    Py_XDECREF(coroutine_heap->var_face_vectors);
    coroutine_heap->var_face_vectors = NULL;
    Py_XDECREF(coroutine_heap->var_face_aligneds);
    coroutine_heap->var_face_aligneds = NULL;
    Py_XDECREF(coroutine_heap->var_dossiers);
    coroutine_heap->var_dossiers = NULL;
    Py_XDECREF(coroutine_heap->var_latest_dossier);
    coroutine_heap->var_latest_dossier = NULL;
    Py_XDECREF(coroutine_heap->var_latest_embs);
    coroutine_heap->var_latest_embs = NULL;
    Py_XDECREF(coroutine_heap->var_score_matching);
    coroutine_heap->var_score_matching = NULL;
    Py_XDECREF(coroutine_heap->var_existed_faces);
    coroutine_heap->var_existed_faces = NULL;
    Py_XDECREF(coroutine_heap->var_best_face);
    coroutine_heap->var_best_face = NULL;
    Py_XDECREF(coroutine_heap->var__face);
    coroutine_heap->var__face = NULL;
    Py_XDECREF(coroutine_heap->var_existed_face);
    coroutine_heap->var_existed_face = NULL;
    Py_XDECREF(coroutine_heap->var_existed_faceid);
    coroutine_heap->var_existed_faceid = NULL;
    Py_XDECREF(coroutine_heap->var_localUserId);
    coroutine_heap->var_localUserId = NULL;
    Py_XDECREF(coroutine_heap->var_existed_dossier);
    coroutine_heap->var_existed_dossier = NULL;
    Py_XDECREF(coroutine_heap->var_new_dict);
    coroutine_heap->var_new_dict = NULL;
    Py_XDECREF(coroutine_heap->var_faces);
    coroutine_heap->var_faces = NULL;
    Py_XDECREF(coroutine_heap->var_face);
    coroutine_heap->var_face = NULL;
    Py_XDECREF(coroutine_heap->var_effective_rows);
    coroutine_heap->var_effective_rows = NULL;
    Py_XDECREF(coroutine_heap->var_updated_dossier);
    coroutine_heap->var_updated_dossier = NULL;
    Py_XDECREF(coroutine_heap->var_face_vector);
    coroutine_heap->var_face_vector = NULL;
    Py_XDECREF(coroutine_heap->var_face_aligned);
    coroutine_heap->var_face_aligned = NULL;
    Py_XDECREF(coroutine_heap->var_original_url);
    coroutine_heap->var_original_url = NULL;
    Py_XDECREF(coroutine_heap->var_uuid_str);
    coroutine_heap->var_uuid_str = NULL;
    Py_XDECREF(coroutine_heap->var_norm_path);
    coroutine_heap->var_norm_path = NULL;
    Py_XDECREF(coroutine_heap->var_embedding_encoded);
    coroutine_heap->var_embedding_encoded = NULL;
    Py_XDECREF(coroutine_heap->var_created_face);
    coroutine_heap->var_created_face = NULL;
    Py_XDECREF(coroutine_heap->var_milvusFace);
    coroutine_heap->var_milvusFace = NULL;
    Py_XDECREF(coroutine_heap->var_img_encode);
    coroutine_heap->var_img_encode = NULL;
    Py_XDECREF(coroutine_heap->var_dos);
    coroutine_heap->var_dos = NULL;
    Py_XDECREF(coroutine_heap->var_old_localUserId);
    coroutine_heap->var_old_localUserId = NULL;
    Py_XDECREF(coroutine_heap->var_data);
    coroutine_heap->var_data = NULL;
    Py_XDECREF(coroutine_heap->var_old_ids);
    coroutine_heap->var_old_ids = NULL;
    Py_XDECREF(coroutine_heap->var_effected_rows);
    coroutine_heap->var_effected_rows = NULL;
    Py_XDECREF(coroutine_heap->var_created_dossier);
    coroutine_heap->var_created_dossier = NULL;
    Py_XDECREF(coroutine_heap->var_old_embedding);
    coroutine_heap->var_old_embedding = NULL;
    Py_XDECREF(coroutine_heap->var_id_);
    coroutine_heap->var_id_ = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_31;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_31;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_31;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_31;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_enroll$$$function__1_enroll$$$coroutine__1_enroll(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        enroll$$$function__1_enroll$$$coroutine__1_enroll_context,
        module_enroll,
        mod_consts[166],
        NULL,
        codeobj_2654673c19c847ea172ed4bca99042ef,
        closure,
        1,
        sizeof(struct enroll$$$function__1_enroll$$$coroutine__1_enroll_locals)
    );
}


NUITKA_LOCAL_MODULE PyObject *impl_enroll$$$function__1_complex_call_helper_pos_star_dict(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_star_arg_dict = python_pars[2];
    PyObject *tmp_mapping_1__dict = NULL;
    PyObject *tmp_mapping_1__iter = NULL;
    PyObject *tmp_mapping_1__key = NULL;
    PyObject *tmp_mapping_1__keys = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_type_arg_1 = par_star_arg_dict;
        tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        tmp_cmp_expr_right_1 = (PyObject *)&PyDict_Type;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_expression_value_1 = par_star_arg_dict;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[167]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_2;
        }
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_2;
        }
        assert(tmp_mapping_1__keys == NULL);
        tmp_mapping_1__keys = tmp_assign_source_1;
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

    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = exception_keeper_type_1;
        tmp_cmp_expr_right_2 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_mod_expr_left_1 = mod_consts[168];
        if (par_called == NULL) {

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[169]);
            exception_tb = NULL;
            ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl_enroll$$$function__2_get_callable_name_desc(dir_call_args);
        }
        assert(!(tmp_tuple_element_1 == NULL));
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            if (par_star_arg_dict == NULL) {

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[170]);
                exception_tb = NULL;
                ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



                goto tuple_build_exception_1;
            }

            tmp_type_arg_2 = par_star_arg_dict;
            tmp_expression_value_2 = BUILTIN_TYPE1(tmp_type_arg_2);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[171]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        Py_DECREF(exception_keeper_type_1);
        Py_XDECREF(exception_keeper_value_1);
        Py_XDECREF(exception_keeper_tb_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    branch_end_2:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(tmp_mapping_1__keys);
        tmp_iter_arg_1 = tmp_mapping_1__keys;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_mapping_1__iter == NULL);
        tmp_mapping_1__iter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_DICT_EMPTY();
        assert(tmp_mapping_1__dict == NULL);
        tmp_mapping_1__dict = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_mapping_1__iter);
        tmp_next_source_1 = tmp_mapping_1__iter;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_mapping_1__key;
            tmp_mapping_1__key = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_key_value_1 = tmp_mapping_1__key;
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_dict_arg_value_1 = tmp_mapping_1__dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg1_2;
        tmp_mod_expr_left_2 = mod_consts[172];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[169]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_2 = par_called;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_tuple_element_2 = impl_enroll$$$function__2_get_callable_name_desc(dir_call_args);
        }
        assert(!(tmp_tuple_element_2 == NULL));
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_tuple_element_2 = tmp_mapping_1__key;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[170]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_expression_value_3 = par_star_arg_dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_subscript_value_1 = tmp_mapping_1__key;
        tmp_dictset_value = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_dictset_dict = tmp_mapping_1__dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_dictset_key = tmp_mapping_1__key;
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_assign_source_5 = tmp_mapping_1__dict;
        {
            PyObject *old = par_star_arg_dict;
            par_star_arg_dict = tmp_assign_source_5;
            Py_INCREF(par_star_arg_dict);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_kwargs_value_1;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[169]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_value_2 = par_called;
        if (par_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[173]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_args_value_1 = par_args;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[170]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_kwargs_value_1 = par_star_arg_dict;
        tmp_return_value = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_LOCAL_MODULE PyObject *impl_enroll$$$function__2_get_callable_name_desc(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_func_arg_1;
        CHECK_OBJECT(par_called);
        tmp_func_arg_1 = par_called;
        tmp_return_value = _PyObject_FunctionStr(tmp_func_arg_1);
        assert(!(tmp_return_value == NULL));
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_enroll$$$function__1_enroll(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_enroll$$$function__1_enroll,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2654673c19c847ea172ed4bca99042ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_enroll,
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

function_impl_code functable_enroll[] = {
    impl_enroll$$$function__1_enroll,
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

    function_impl_code *current = functable_enroll;
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

    if (offset > sizeof(functable_enroll) || offset < 0) {
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
        functable_enroll[offset],
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
        module_enroll,
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
PyObject *modulecode_enroll(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("enroll");

    // Store the module for future use.
    module_enroll = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 1
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
        PRINT_STRING("enroll: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("enroll: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("enroll: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initenroll\n");

    moduledict_enroll = MODULE_DICT(module_enroll);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_enroll,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_enroll,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[5]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_enroll,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_enroll,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_enroll,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_enroll);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_enroll, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_enroll, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_enroll, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_enroll);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    struct Nuitka_FrameObject *frame_0deea1d116ff9eac989685c3dd4722e6;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_enroll, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_enroll, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_0deea1d116ff9eac989685c3dd4722e6 = MAKE_MODULE_FRAME(codeobj_0deea1d116ff9eac989685c3dd4722e6, module_enroll);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_0deea1d116ff9eac989685c3dd4722e6);
    assert(Py_REFCNT(frame_0deea1d116ff9eac989685c3dd4722e6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[176]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[176]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[177], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[176]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[176]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[178], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_enroll, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[180];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[30];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[27];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[181];
        tmp_level_value_3 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_enroll,
                mod_consts[27],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[27]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[154];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        tmp_import_name_from_2 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_enroll,
                mod_consts[182],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[182]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[113];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 6;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[183];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[184];
        tmp_level_value_6 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 8;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_enroll,
                mod_consts[19],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[185];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[186];
        tmp_level_value_7 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 9;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_enroll,
                mod_consts[18],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[18]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[127];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = Py_None;
        tmp_level_value_8 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 10;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[187];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = Py_None;
        tmp_level_value_9 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 11;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[74];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = Py_None;
        tmp_level_value_10 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 12;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[42];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = Py_None;
        tmp_level_value_11 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 13;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[188];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[189];
        tmp_level_value_12 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 15;
        tmp_assign_source_16 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_enroll,
                mod_consts[34],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[34]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_enroll,
                mod_consts[156],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[156]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_18);
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[190];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[191];
        tmp_level_value_13 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 16;
        tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_enroll,
                mod_consts[31],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[31]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_enroll,
                mod_consts[121],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[121]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_21);
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[192];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[193];
        tmp_level_value_14 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 17;
        tmp_assign_source_22 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_enroll,
                mod_consts[65],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[65]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_enroll,
                mod_consts[194],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[194]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_24);
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
        PyObject *tmp_assign_source_25;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[195];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[196];
        tmp_level_value_15 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 18;
        tmp_assign_source_25 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_25;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_11 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_enroll,
                mod_consts[197],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[197]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_12 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_enroll,
                mod_consts[35],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[35]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_27);
    }
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

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[198];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[199];
        tmp_level_value_16 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 19;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_enroll,
                mod_consts[200],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[200]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[201];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[202];
        tmp_level_value_17 = mod_consts[203];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 20;
        tmp_assign_source_29 = IMPORT_MODULE5(tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_14 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_enroll,
                mod_consts[0],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[0]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_15 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_enroll,
                mod_consts[11],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[11]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_16 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_enroll,
                mod_consts[16],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[16]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_17 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_enroll,
                mod_consts[52],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[52]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_18 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_enroll,
                mod_consts[50],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[50]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_34);
    }
    goto try_end_5;
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

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[204];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[205];
        tmp_level_value_18 = mod_consts[203];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 21;
        tmp_assign_source_35 = IMPORT_MODULE5(tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_35;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_19 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_enroll,
                mod_consts[206],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[206]);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_20 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_enroll,
                mod_consts[10],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[10]);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_37);
    }
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

    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[207];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[208];
        tmp_level_value_19 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 22;
        tmp_import_name_from_21 = IMPORT_MODULE5(tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_enroll,
                mod_consts[36],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[36]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[209];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[210];
        tmp_level_value_20 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 23;
        tmp_import_name_from_22 = IMPORT_MODULE5(tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_enroll,
                mod_consts[211],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[211]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[212];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_enroll;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[213];
        tmp_level_value_21 = mod_consts[83];
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 24;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_enroll,
                mod_consts[159],
                mod_consts[83]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[159]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_40);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[214]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[215]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[216]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 26;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[217]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[200]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 27;
        tmp_assign_source_41 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[218]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        assert(!(tmp_args_element_value_1 == NULL));
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 28;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[211]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        frame_0deea1d116ff9eac989685c3dd4722e6->m_frame.f_lineno = 29;
        tmp_assign_source_43 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[7];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_44 = MAKE_FUNCTION_enroll$$$function__1_enroll(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_enroll, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_44);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0deea1d116ff9eac989685c3dd4722e6);
#endif
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0deea1d116ff9eac989685c3dd4722e6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0deea1d116ff9eac989685c3dd4722e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0deea1d116ff9eac989685c3dd4722e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0deea1d116ff9eac989685c3dd4722e6, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("enroll", false);

    Py_INCREF(module_enroll);
    return module_enroll;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 1
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_enroll, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("enroll", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}


/* Visibility definitions to make the DLL entry point exported */
#if defined(__GNUC__)

#if PYTHON_VERSION < 0x300

#if defined(_WIN32)
#define NUITKA_MODULE_INIT_FUNCTION __declspec(dllexport) PyMODINIT_FUNC
#else
#define NUITKA_MODULE_INIT_FUNCTION PyMODINIT_FUNC __attribute__((visibility("default")))
#endif

#else

#if defined(_WIN32)
#define NUITKA_MODULE_INIT_FUNCTION __declspec(dllexport) PyObject *
#else

#ifdef __cplusplus
#define NUITKA_MODULE_INIT_FUNCTION extern "C" __attribute__((visibility("default"))) PyObject *
#else
#define NUITKA_MODULE_INIT_FUNCTION __attribute__((visibility("default"))) PyObject *
#endif

#endif
#endif

#else
#define NUITKA_MODULE_INIT_FUNCTION PyMODINIT_FUNC
#endif

/* The name of the entry point for DLLs changed between CPython versions, and
 * this is here to hide that.
 */
#if PYTHON_VERSION < 0x300
#define MOD_INIT_DECL(name) NUITKA_MODULE_INIT_FUNCTION init##name(void)
#else
#define MOD_INIT_DECL(name) NUITKA_MODULE_INIT_FUNCTION PyInit_##name(void)
#endif

#if PYTHON_VERSION >= 0x300
static setattrofunc orig_PyModule_Type_tp_setattro;
static PyObject *orig_dunder_file_value;

/* This is used one time only. */
static int Nuitka_TopLevelModule_tp_setattro(PyObject *module, PyObject *name, PyObject *value) {
    PyModule_Type.tp_setattro = orig_PyModule_Type_tp_setattro;

    if (orig_dunder_file_value != NULL) {
        UPDATE_STRING_DICT0(
            moduledict_enroll,
            (Nuitka_StringObject *)const_str_plain___file__,
            orig_dunder_file_value
        );
    }

    // Prevent "__spec__" update as well.
#if PYTHON_VERSION >= 0x340
    if (PyUnicode_Check(name) && PyUnicode_Compare(name, const_str_plain___spec__) == 0) {
        return 0;
    }
#endif

    return orig_PyModule_Type_tp_setattro(module, name, value);
}
#endif

#if PYTHON_VERSION >= 0x300
static struct PyModuleDef mdef_enroll = {
    PyModuleDef_HEAD_INIT,
    NULL,                /* m_name, filled later */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
};
#endif

/* The exported interface to CPython. On import of the module, this function
 * gets called. It has to have an exact function name, in cases it's a shared
 * library export. This is hidden behind the MOD_INIT_DECL macro.
 */

// Actual name might be different when loaded as a package.
static char const *module_full_name = "enroll";

MOD_INIT_DECL(enroll) {
    if (_Py_PackageContext != NULL) {
        module_full_name = _Py_PackageContext;
    }

#if PYTHON_VERSION < 0x300
    PyObject *module = Py_InitModule4(
        module_full_name,        // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    mdef_enroll.m_name = module_full_name;
    PyObject *module = PyModule_Create(&mdef_enroll);
    CHECK_OBJECT(module);

    bool res = Nuitka_SetModuleString(module_full_name, module);
    assert(res != false);
#endif

#if PYTHON_VERSION < 0x300
    modulecode_enroll(module, NULL);

    // TODO: Our "__file__" value will not be respected by CPython and one
    // way we could avoid it, is by having a capsule type, that when it gets
    // released, we are called.
#else
    PyObject *result = modulecode_enroll(module, NULL);

    if (result != NULL) {
        // Make sure we undo the change of the "__file__" attribute during importing. We do not
        // know how to achieve it for Python2 though. TODO: Find something for Python2 too.
        orig_PyModule_Type_tp_setattro = PyModule_Type.tp_setattro;
        PyModule_Type.tp_setattro = Nuitka_TopLevelModule_tp_setattro;

        orig_dunder_file_value = DICT_GET_ITEM_WITH_HASH_ERROR1((PyObject *)moduledict_enroll, const_str_plain___file__);
    }

    return result;
#endif
}
