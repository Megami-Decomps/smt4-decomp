/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00395dbc` (_code @ 0x395dbc, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00395830(int);

/* Supplied declaration required: FUN_00395830. */


void FUN_00395dbc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0xc);
  if (*(int *)(temp_v0 + 0x58) % 10 == 0) {
    FUN_00395830(param_1);
  }
  *(float *)(temp_v0 + 0x28) = *(float *)(temp_v0 + 0x28) + *(float *)(param_1 + 0x10);
  *(float *)(temp_v0 + 0x2c) = *(float *)(temp_v0 + 0x2c) + *(float *)(param_1 + 0x14);
  *(float *)(temp_v0 + 0x30) = *(float *)(temp_v0 + 0x30) + *(float *)(param_1 + 0x18);
  return;
}

} /* extern "C" */
