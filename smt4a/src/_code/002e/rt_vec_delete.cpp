/* NON_MATCHING: romwright 0.5.0 decompilation of `rt_vec_delete` (_code @ 0x2e4e92, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_dtor(int, unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: __aeabi_vec_dtor. */


void rt_vec_delete(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != 0) {
    __aeabi_vec_dtor(param_1,param_2,*(unsigned int *)(param_1 - 8),*(unsigned int *)(param_1 - 4));
  }
  return;
}

} /* extern "C" */
