/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d824` (_code @ 0x37d824, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00235c44. */


void FUN_0037d824(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    FUN_00235c44(temp_v0);
  }
  *(unsigned int *)(param_1 + 0xc4) = 0;
  return;
}
