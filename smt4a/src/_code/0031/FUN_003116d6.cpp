/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003116d6` (_code @ 0x3116d6, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_003116d6(unsigned int param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (param_2 != (unsigned int *)0x0) {
    temp_v0 = *param_3;
    temp_v1 = param_3[2];
    param_2[1] = param_3[1];
    param_2[2] = temp_v1;
    *param_2 = temp_v0;
  }
  return;
}

} /* extern "C" */
