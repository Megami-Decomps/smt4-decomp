/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3840` (_code @ 0x2c3840, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00146bc0. */
/* Supplied declaration required: FUN_00146dc8. */
/* Supplied declaration required: FUN_00146dd8. */
/* Supplied declaration required: FUN_00146df8. */


void FUN_002c3840(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_00146dc8(param_1 + 0x18,param_4);
  FUN_00146dd8(param_1 + 0x18,param_5);
  FUN_00146df8(param_1 + 0x18,param_6);
  temp_v0 = param_1 + 0x18;
  FUN_00146bc0(temp_v0,param_2,param_3);
  if (temp_v0 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  return;
}
