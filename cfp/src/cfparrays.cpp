#include "cfpheader.cpp"
#include "cfparrays.h"

#include "cfparray1f.cpp"
#include "cfparray1d.cpp"
#include "cfparray2f.cpp"
#include "cfparray2d.cpp"
#include "cfparray3f.cpp"
#include "cfparray3d.cpp"
#include "cfparray4f.cpp"
#include "cfparray4d.cpp"

const cfp_api CFP_NAMESPACE = {
  // array1f
  {
    cfp_array1f_ctor_default,
    cfp_array1f_ctor,
    cfp_array1f_ctor_copy,
    cfp_array1f_ctor_header,
    cfp_array1f_dtor,

    cfp_array1f_deep_copy,

    cfp_array1f_rate,
    cfp_array1f_set_rate,
    cfp_array1f_cache_size,
    cfp_array1f_set_cache_size,
    cfp_array1f_clear_cache,
    cfp_array1f_flush_cache,
    cfp_array1f_compressed_size,
    cfp_array1f_compressed_data,
    cfp_array1f_size,
    cfp_array1f_resize,

    cfp_array1f_get_array,
    cfp_array1f_set_array,
    cfp_array1f_get_flat,
    cfp_array1f_set_flat,
    cfp_array1f_get,
    cfp_array1f_set,

    cfp_array1f_ref,
    cfp_array1f_ref_flat,

    cfp_array1f_ptr,
    cfp_array1f_ptr_flat,

    cfp_array1f_begin,
    cfp_array1f_end,

    {
      cfp_array1f_cfp_ref1f_set,
      cfp_array1f_cfp_ref1f_get,
      cfp_array1f_cfp_ref1f_ptr,
      cfp_array1f_cfp_ref1f_copy,
    },

    {
      cfp_array1f_cfp_ptr1f_set,
      cfp_array1f_cfp_ptr1f_set_at,
      cfp_array1f_cfp_ptr1f_get,
      cfp_array1f_cfp_ptr1f_get_at,
      cfp_array1f_cfp_ptr1f_ref,
      cfp_array1f_cfp_ptr1f_ref_at,
      cfp_array1f_cfp_ptr1f_lt,
      cfp_array1f_cfp_ptr1f_gt,
      cfp_array1f_cfp_ptr1f_leq,
      cfp_array1f_cfp_ptr1f_geq,
      cfp_array1f_cfp_ptr1f_eq,
      cfp_array1f_cfp_ptr1f_neq,
      cfp_array1f_cfp_ptr1f_distance,
      cfp_array1f_cfp_ptr1f_next,
      cfp_array1f_cfp_ptr1f_prev,
      cfp_array1f_cfp_ptr1f_inc,
      cfp_array1f_cfp_ptr1f_dec,
    },

    {
      cfp_array1f_cfp_iter1f_set,
      cfp_array1f_cfp_iter1f_set_at,
      cfp_array1f_cfp_iter1f_get,
      cfp_array1f_cfp_iter1f_get_at,
      cfp_array1f_cfp_iter1f_ref,
      cfp_array1f_cfp_iter1f_ref_at,
      cfp_array1f_cfp_iter1f_ptr,
      cfp_array1f_cfp_iter1f_ptr_at,
      cfp_array1f_cfp_iter1f_lt,
      cfp_array1f_cfp_iter1f_gt,
      cfp_array1f_cfp_iter1f_leq,
      cfp_array1f_cfp_iter1f_geq,
      cfp_array1f_cfp_iter1f_eq,
      cfp_array1f_cfp_iter1f_neq,
      cfp_array1f_cfp_iter1f_distance,
      cfp_array1f_cfp_iter1f_next,
      cfp_array1f_cfp_iter1f_prev,
      cfp_array1f_cfp_iter1f_inc,
      cfp_array1f_cfp_iter1f_dec,
      cfp_array1f_cfp_iter1f_i,
    },
  },
  // array1d
  {
    cfp_array1d_ctor_default,
    cfp_array1d_ctor,
    cfp_array1d_ctor_copy,
    cfp_array1d_ctor_header,
    cfp_array1d_dtor,

    cfp_array1d_deep_copy,

    cfp_array1d_rate,
    cfp_array1d_set_rate,
    cfp_array1d_cache_size,
    cfp_array1d_set_cache_size,
    cfp_array1d_clear_cache,
    cfp_array1d_flush_cache,
    cfp_array1d_compressed_size,
    cfp_array1d_compressed_data,
    cfp_array1d_size,
    cfp_array1d_resize,

    cfp_array1d_get_array,
    cfp_array1d_set_array,
    cfp_array1d_get_flat,
    cfp_array1d_set_flat,
    cfp_array1d_get,
    cfp_array1d_set,

    cfp_array1d_ref,
    cfp_array1d_ref_flat,

    cfp_array1d_ptr,
    cfp_array1d_ptr_flat,

    cfp_array1d_begin,
    cfp_array1d_end,

    {
      cfp_array1d_cfp_ref1d_set,
      cfp_array1d_cfp_ref1d_get,
      cfp_array1d_cfp_ref1d_ptr,
      cfp_array1d_cfp_ref1d_copy,
    },

    {
      cfp_array1d_cfp_ptr1d_set,
      cfp_array1d_cfp_ptr1d_set_at,
      cfp_array1d_cfp_ptr1d_get,
      cfp_array1d_cfp_ptr1d_get_at,
      cfp_array1d_cfp_ptr1d_ref,
      cfp_array1d_cfp_ptr1d_ref_at,
      cfp_array1d_cfp_ptr1d_lt,
      cfp_array1d_cfp_ptr1d_gt,
      cfp_array1d_cfp_ptr1d_leq,
      cfp_array1d_cfp_ptr1d_geq,
      cfp_array1d_cfp_ptr1d_eq,
      cfp_array1d_cfp_ptr1d_neq,
      cfp_array1d_cfp_ptr1d_distance,
      cfp_array1d_cfp_ptr1d_next,
      cfp_array1d_cfp_ptr1d_prev,
      cfp_array1d_cfp_ptr1d_inc,
      cfp_array1d_cfp_ptr1d_dec,
    },

    {
      cfp_array1d_cfp_iter1d_set,
      cfp_array1d_cfp_iter1d_set_at,
      cfp_array1d_cfp_iter1d_get,
      cfp_array1d_cfp_iter1d_get_at,
      cfp_array1d_cfp_iter1d_ref,
      cfp_array1d_cfp_iter1d_ref_at,
      cfp_array1d_cfp_iter1d_ptr,
      cfp_array1d_cfp_iter1d_ptr_at,
      cfp_array1d_cfp_iter1d_lt,
      cfp_array1d_cfp_iter1d_gt,
      cfp_array1d_cfp_iter1d_leq,
      cfp_array1d_cfp_iter1d_geq,
      cfp_array1d_cfp_iter1d_eq,
      cfp_array1d_cfp_iter1d_neq,
      cfp_array1d_cfp_iter1d_distance,
      cfp_array1d_cfp_iter1d_next,
      cfp_array1d_cfp_iter1d_prev,
      cfp_array1d_cfp_iter1d_inc,
      cfp_array1d_cfp_iter1d_dec,
      cfp_array1d_cfp_iter1d_i,
    },
  },
  // array2f
  {
    cfp_array2f_ctor_default,
    cfp_array2f_ctor,
    cfp_array2f_ctor_copy,
    cfp_array2f_ctor_header,
    cfp_array2f_dtor,

    cfp_array2f_deep_copy,

    cfp_array2f_rate,
    cfp_array2f_set_rate,
    cfp_array2f_cache_size,
    cfp_array2f_set_cache_size,
    cfp_array2f_clear_cache,
    cfp_array2f_flush_cache,
    cfp_array2f_compressed_size,
    cfp_array2f_compressed_data,
    cfp_array2f_size,
    cfp_array2f_size_x,
    cfp_array2f_size_y,
    cfp_array2f_resize,

    cfp_array2f_get_array,
    cfp_array2f_set_array,
    cfp_array2f_get_flat,
    cfp_array2f_set_flat,
    cfp_array2f_get,
    cfp_array2f_set,

    cfp_array2f_ref,
    cfp_array2f_ref_flat,

    cfp_array2f_ptr,
    cfp_array2f_ptr_flat,

    cfp_array2f_begin,
    cfp_array2f_end,

    {
      cfp_array2f_cfp_ref2f_get,
      cfp_array2f_cfp_ref2f_set,
      cfp_array2f_cfp_ref2f_copy,
      cfp_array2f_cfp_ref2f_ptr,
    },

    {
      cfp_array2f_cfp_ptr2f_set,
      cfp_array2f_cfp_ptr2f_set_at,
      cfp_array2f_cfp_ptr2f_get,
      cfp_array2f_cfp_ptr2f_get_at,
      cfp_array2f_cfp_ptr2f_ref,
      cfp_array2f_cfp_ptr2f_ref_at,
      cfp_array2f_cfp_ptr2f_lt,
      cfp_array2f_cfp_ptr2f_gt,
      cfp_array2f_cfp_ptr2f_leq,
      cfp_array2f_cfp_ptr2f_geq,
      cfp_array2f_cfp_ptr2f_eq,
      cfp_array2f_cfp_ptr2f_neq,
      cfp_array2f_cfp_ptr2f_distance,
      cfp_array2f_cfp_ptr2f_next,
      cfp_array2f_cfp_ptr2f_prev,
      cfp_array2f_cfp_ptr2f_inc,
      cfp_array2f_cfp_ptr2f_dec,
    },

    {
      cfp_array2f_cfp_iter2f_set,
      cfp_array2f_cfp_iter2f_get,
      cfp_array2f_cfp_iter2f_ref,
      cfp_array2f_cfp_iter2f_ptr,
      cfp_array2f_cfp_iter2f_inc,
      cfp_array2f_cfp_iter2f_eq,
      cfp_array2f_cfp_iter2f_neq,
      cfp_array2f_cfp_iter2f_i,
      cfp_array2f_cfp_iter2f_j,
    },
  },
  // array2d
  {
    cfp_array2d_ctor_default,
    cfp_array2d_ctor,
    cfp_array2d_ctor_copy,
    cfp_array2d_ctor_header,
    cfp_array2d_dtor,

    cfp_array2d_deep_copy,

    cfp_array2d_rate,
    cfp_array2d_set_rate,
    cfp_array2d_cache_size,
    cfp_array2d_set_cache_size,
    cfp_array2d_clear_cache,
    cfp_array2d_flush_cache,
    cfp_array2d_compressed_size,
    cfp_array2d_compressed_data,
    cfp_array2d_size,
    cfp_array2d_size_x,
    cfp_array2d_size_y,
    cfp_array2d_resize,

    cfp_array2d_get_array,
    cfp_array2d_set_array,
    cfp_array2d_get_flat,
    cfp_array2d_set_flat,
    cfp_array2d_get,
    cfp_array2d_set,

    cfp_array2d_ref,
    cfp_array2d_ref_flat,

    cfp_array2d_ptr,
    cfp_array2d_ptr_flat,

    cfp_array2d_begin,
    cfp_array2d_end,

    {
      cfp_array2d_cfp_ref2d_get,
      cfp_array2d_cfp_ref2d_set,
      cfp_array2d_cfp_ref2d_copy,
      cfp_array2d_cfp_ref2d_ptr,
    },

    {
      cfp_array2d_cfp_ptr2d_set,
      cfp_array2d_cfp_ptr2d_set_at,
      cfp_array2d_cfp_ptr2d_get,
      cfp_array2d_cfp_ptr2d_get_at,
      cfp_array2d_cfp_ptr2d_ref,
      cfp_array2d_cfp_ptr2d_ref_at,
      cfp_array2d_cfp_ptr2d_lt,
      cfp_array2d_cfp_ptr2d_gt,
      cfp_array2d_cfp_ptr2d_leq,
      cfp_array2d_cfp_ptr2d_geq,
      cfp_array2d_cfp_ptr2d_eq,
      cfp_array2d_cfp_ptr2d_neq,
      cfp_array2d_cfp_ptr2d_distance,
      cfp_array2d_cfp_ptr2d_next,
      cfp_array2d_cfp_ptr2d_prev,
      cfp_array2d_cfp_ptr2d_inc,
      cfp_array2d_cfp_ptr2d_dec,
    },

    {
      cfp_array2d_cfp_iter2d_set,
      cfp_array2d_cfp_iter2d_get,
      cfp_array2d_cfp_iter2d_ref,
      cfp_array2d_cfp_iter2d_ptr,
      cfp_array2d_cfp_iter2d_inc,
      cfp_array2d_cfp_iter2d_eq,
      cfp_array2d_cfp_iter2d_neq,
      cfp_array2d_cfp_iter2d_i,
      cfp_array2d_cfp_iter2d_j,
    }
  },
  // array3f
  {
    cfp_array3f_ctor_default,
    cfp_array3f_ctor,
    cfp_array3f_ctor_copy,
    cfp_array3f_ctor_header,
    cfp_array3f_dtor,

    cfp_array3f_deep_copy,

    cfp_array3f_rate,
    cfp_array3f_set_rate,
    cfp_array3f_cache_size,
    cfp_array3f_set_cache_size,
    cfp_array3f_clear_cache,
    cfp_array3f_flush_cache,
    cfp_array3f_compressed_size,
    cfp_array3f_compressed_data,
    cfp_array3f_size,
    cfp_array3f_size_x,
    cfp_array3f_size_y,
    cfp_array3f_size_z,
    cfp_array3f_resize,

    cfp_array3f_get_array,
    cfp_array3f_set_array,
    cfp_array3f_get_flat,
    cfp_array3f_set_flat,
    cfp_array3f_get,
    cfp_array3f_set,

    cfp_array3f_ref,
    cfp_array3f_ref_flat,

    cfp_array3f_ptr,
    cfp_array3f_ptr_flat,

    cfp_array3f_begin,
    cfp_array3f_end,

    {
      cfp_array3f_cfp_ref3f_get,
      cfp_array3f_cfp_ref3f_set,
      cfp_array3f_cfp_ref3f_copy,
      cfp_array3f_cfp_ref3f_ptr,
    },

    {
      cfp_array3f_cfp_ptr3f_set,
      cfp_array3f_cfp_ptr3f_set_at,
      cfp_array3f_cfp_ptr3f_get,
      cfp_array3f_cfp_ptr3f_get_at,
      cfp_array3f_cfp_ptr3f_ref,
      cfp_array3f_cfp_ptr3f_ref_at,
      cfp_array3f_cfp_ptr3f_lt,
      cfp_array3f_cfp_ptr3f_gt,
      cfp_array3f_cfp_ptr3f_leq,
      cfp_array3f_cfp_ptr3f_geq,
      cfp_array3f_cfp_ptr3f_eq,
      cfp_array3f_cfp_ptr3f_neq,
      cfp_array3f_cfp_ptr3f_distance,
      cfp_array3f_cfp_ptr3f_next,
      cfp_array3f_cfp_ptr3f_prev,
      cfp_array3f_cfp_ptr3f_inc,
      cfp_array3f_cfp_ptr3f_dec,
    },

    {
      cfp_array3f_cfp_iter3f_set,
      cfp_array3f_cfp_iter3f_get,
      cfp_array3f_cfp_iter3f_ref,
      cfp_array3f_cfp_iter3f_ptr,
      cfp_array3f_cfp_iter3f_inc,
      cfp_array3f_cfp_iter3f_eq,
      cfp_array3f_cfp_iter3f_neq,
      cfp_array3f_cfp_iter3f_i,
      cfp_array3f_cfp_iter3f_j,
      cfp_array3f_cfp_iter3f_k,
    },
  },
  // array3d
  {
    cfp_array3d_ctor_default,
    cfp_array3d_ctor,
    cfp_array3d_ctor_copy,
    cfp_array3d_ctor_header,
    cfp_array3d_dtor,

    cfp_array3d_deep_copy,

    cfp_array3d_rate,
    cfp_array3d_set_rate,
    cfp_array3d_cache_size,
    cfp_array3d_set_cache_size,
    cfp_array3d_clear_cache,
    cfp_array3d_flush_cache,
    cfp_array3d_compressed_size,
    cfp_array3d_compressed_data,
    cfp_array3d_size,
    cfp_array3d_size_x,
    cfp_array3d_size_y,
    cfp_array3d_size_z,
    cfp_array3d_resize,

    cfp_array3d_get_array,
    cfp_array3d_set_array,
    cfp_array3d_get_flat,
    cfp_array3d_set_flat,
    cfp_array3d_get,
    cfp_array3d_set,

    cfp_array3d_ref,
    cfp_array3d_ref_flat,

    cfp_array3d_ptr,
    cfp_array3d_ptr_flat,

    cfp_array3d_begin,
    cfp_array3d_end,

    {
      cfp_array3d_cfp_ref3d_get,
      cfp_array3d_cfp_ref3d_set,
      cfp_array3d_cfp_ref3d_copy,
      cfp_array3d_cfp_ref3d_ptr,
    },

    {
      cfp_array3d_cfp_ptr3d_set,
      cfp_array3d_cfp_ptr3d_set_at,
      cfp_array3d_cfp_ptr3d_get,
      cfp_array3d_cfp_ptr3d_get_at,
      cfp_array3d_cfp_ptr3d_ref,
      cfp_array3d_cfp_ptr3d_ref_at,
      cfp_array3d_cfp_ptr3d_lt,
      cfp_array3d_cfp_ptr3d_gt,
      cfp_array3d_cfp_ptr3d_leq,
      cfp_array3d_cfp_ptr3d_geq,
      cfp_array3d_cfp_ptr3d_eq,
      cfp_array3d_cfp_ptr3d_neq,
      cfp_array3d_cfp_ptr3d_distance,
      cfp_array3d_cfp_ptr3d_next,
      cfp_array3d_cfp_ptr3d_prev,
      cfp_array3d_cfp_ptr3d_inc,
      cfp_array3d_cfp_ptr3d_dec,
    },

    {
      cfp_array3d_cfp_iter3d_set,
      cfp_array3d_cfp_iter3d_get,
      cfp_array3d_cfp_iter3d_ref,
      cfp_array3d_cfp_iter3d_ptr,
      cfp_array3d_cfp_iter3d_inc,
      cfp_array3d_cfp_iter3d_eq,
      cfp_array3d_cfp_iter3d_neq,
      cfp_array3d_cfp_iter3d_i,
      cfp_array3d_cfp_iter3d_j,
      cfp_array3d_cfp_iter3d_k,
    },
  },
  // array4f
  {
    cfp_array4f_ctor_default,
    cfp_array4f_ctor,
    cfp_array4f_ctor_copy,
    cfp_array4f_ctor_header,
    cfp_array4f_dtor,

    cfp_array4f_deep_copy,

    cfp_array4f_rate,
    cfp_array4f_set_rate,
    cfp_array4f_cache_size,
    cfp_array4f_set_cache_size,
    cfp_array4f_clear_cache,
    cfp_array4f_flush_cache,
    cfp_array4f_compressed_size,
    cfp_array4f_compressed_data,
    cfp_array4f_size,
    cfp_array4f_size_x,
    cfp_array4f_size_y,
    cfp_array4f_size_z,
    cfp_array4f_size_w,
    cfp_array4f_resize,

    cfp_array4f_get_array,
    cfp_array4f_set_array,
    cfp_array4f_get_flat,
    cfp_array4f_set_flat,
    cfp_array4f_get,
    cfp_array4f_set,

    cfp_array4f_ref,
    cfp_array4f_ref_flat,

    cfp_array4f_ptr,
    cfp_array4f_ptr_flat,

    cfp_array4f_begin,
    cfp_array4f_end,

    {
      cfp_array4f_cfp_ref4f_get,
      cfp_array4f_cfp_ref4f_set,
      cfp_array4f_cfp_ref4f_copy,
      cfp_array4f_cfp_ref4f_ptr,
    },

    {
      cfp_array4f_cfp_ptr4f_set,
      cfp_array4f_cfp_ptr4f_set_at,
      cfp_array4f_cfp_ptr4f_get,
      cfp_array4f_cfp_ptr4f_get_at,
      cfp_array4f_cfp_ptr4f_ref,
      cfp_array4f_cfp_ptr4f_ref_at,
      cfp_array4f_cfp_ptr4f_lt,
      cfp_array4f_cfp_ptr4f_gt,
      cfp_array4f_cfp_ptr4f_leq,
      cfp_array4f_cfp_ptr4f_geq,
      cfp_array4f_cfp_ptr4f_eq,
      cfp_array4f_cfp_ptr4f_neq,
      cfp_array4f_cfp_ptr4f_distance,
      cfp_array4f_cfp_ptr4f_next,
      cfp_array4f_cfp_ptr4f_prev,
      cfp_array4f_cfp_ptr4f_inc,
      cfp_array4f_cfp_ptr4f_dec,
    },

    {
      cfp_array4f_cfp_iter4f_set,
      cfp_array4f_cfp_iter4f_get,
      cfp_array4f_cfp_iter4f_ref,
      cfp_array4f_cfp_iter4f_ptr,
      cfp_array4f_cfp_iter4f_inc,
      cfp_array4f_cfp_iter4f_eq,
      cfp_array4f_cfp_iter4f_neq,
      cfp_array4f_cfp_iter4f_i,
      cfp_array4f_cfp_iter4f_j,
      cfp_array4f_cfp_iter4f_k,
      cfp_array4f_cfp_iter4f_l,
    },
  },
  // array4d
  {
    cfp_array4d_ctor_default,
    cfp_array4d_ctor,
    cfp_array4d_ctor_copy,
    cfp_array4d_ctor_header,
    cfp_array4d_dtor,

    cfp_array4d_deep_copy,

    cfp_array4d_rate,
    cfp_array4d_set_rate,
    cfp_array4d_cache_size,
    cfp_array4d_set_cache_size,
    cfp_array4d_clear_cache,
    cfp_array4d_flush_cache,
    cfp_array4d_compressed_size,
    cfp_array4d_compressed_data,
    cfp_array4d_size,
    cfp_array4d_size_x,
    cfp_array4d_size_y,
    cfp_array4d_size_z,
    cfp_array4d_size_w,
    cfp_array4d_resize,

    cfp_array4d_get_array,
    cfp_array4d_set_array,
    cfp_array4d_get_flat,
    cfp_array4d_set_flat,
    cfp_array4d_get,
    cfp_array4d_set,

    cfp_array4d_ref,
    cfp_array4d_ref_flat,

    cfp_array4d_ptr,
    cfp_array4d_ptr_flat,

    cfp_array4d_begin,
    cfp_array4d_end,

    {
      cfp_array4d_cfp_ref4d_get,
      cfp_array4d_cfp_ref4d_set,
      cfp_array4d_cfp_ref4d_copy,
      cfp_array4d_cfp_ref4d_ptr,
    },

    {
      cfp_array4d_cfp_ptr4d_set,
      cfp_array4d_cfp_ptr4d_set_at,
      cfp_array4d_cfp_ptr4d_get,
      cfp_array4d_cfp_ptr4d_get_at,
      cfp_array4d_cfp_ptr4d_ref,
      cfp_array4d_cfp_ptr4d_ref_at,
      cfp_array4d_cfp_ptr4d_lt,
      cfp_array4d_cfp_ptr4d_gt,
      cfp_array4d_cfp_ptr4d_leq,
      cfp_array4d_cfp_ptr4d_geq,
      cfp_array4d_cfp_ptr4d_eq,
      cfp_array4d_cfp_ptr4d_neq,
      cfp_array4d_cfp_ptr4d_distance,
      cfp_array4d_cfp_ptr4d_next,
      cfp_array4d_cfp_ptr4d_prev,
      cfp_array4d_cfp_ptr4d_inc,
      cfp_array4d_cfp_ptr4d_dec,
    },

    {
      cfp_array4d_cfp_iter4d_set,
      cfp_array4d_cfp_iter4d_get,
      cfp_array4d_cfp_iter4d_ref,
      cfp_array4d_cfp_iter4d_ptr,
      cfp_array4d_cfp_iter4d_inc,
      cfp_array4d_cfp_iter4d_eq,
      cfp_array4d_cfp_iter4d_neq,
      cfp_array4d_cfp_iter4d_i,
      cfp_array4d_cfp_iter4d_j,
      cfp_array4d_cfp_iter4d_k,
      cfp_array4d_cfp_iter4d_l,
    },
  },
  // header
  {
    cfp_header_ctor_buffer,
    cfp_header_ctor_array1f,
    cfp_header_ctor_array1d,
    cfp_header_ctor_array2f,
    cfp_header_ctor_array2d,
    cfp_header_ctor_array3f,
    cfp_header_ctor_array3d,
    cfp_header_ctor_array4f,
    cfp_header_ctor_array4d,
    cfp_header_dtor,

    cfp_header_scalar_type,
    cfp_header_dimensionality,
    cfp_header_size_x,
    cfp_header_size_y,
    cfp_header_size_z,
    cfp_header_size_w,
    cfp_header_rate,

    cfp_header_data,
    cfp_header_size,
  },
};
