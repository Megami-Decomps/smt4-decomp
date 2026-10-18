/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00395fd8` (_code @ 0x395fd8, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00395a4c. */


void FUN_00395fd8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0xc);
  if (*(int *)(temp_v0 + 0x58) % 10 == 0) {
    FUN_00395a4c(param_1);
  }
  *(float *)(temp_v0 + 0x28) = *(float *)(temp_v0 + 0x28) + *(float *)(param_1 + 0x10);
  *(float *)(temp_v0 + 0x2c) = *(float *)(temp_v0 + 0x2c) + *(float *)(param_1 + 0x14);
  *(float *)(temp_v0 + 0x30) = *(float *)(temp_v0 + 0x30) + *(float *)(param_1 + 0x18);
  return;
}
