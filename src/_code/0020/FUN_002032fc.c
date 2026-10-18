/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002032fc` (_code @ 0x2032fc, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */


void FUN_002032fc(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  
  if (param_1 < 2) {
    temp_v0 = DAT_0043e2ac + 0x88 + param_1 * 8;
    *(unsigned int *)(temp_v0 + 0x24b2c) = param_2;
    *(unsigned int *)(temp_v0 + 0x24b30) = param_3;
  }
  return;
}
