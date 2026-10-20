/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00203460` (_code @ 0x203460, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e2ac; /* 0x43e2ac */


void FUN_00203460(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  
  if (param_1 < 2) {
    temp_v0 = DAT_0043e2ac + 0x88 + param_1 * 8;
    *(unsigned int *)(temp_v0 + 0x24b2c) = param_2;
    *(unsigned int *)(temp_v0 + 0x24b30) = param_3;
  }
  return;
}

} /* extern "C" */
