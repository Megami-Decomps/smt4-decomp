/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307e74` (_code @ 0x307e74, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00307e74(int *param_1,int param_2)

{
  int temp_v0;
  
  param_2 = param_1[1] + param_2;
  temp_v0 = *param_1 + ((int)(((unsigned int)(param_2 >> 0x1f) >> 0x1b) + param_2) >> 5) * 4;
  param_2 = param_2 % 0x20;
  *param_1 = temp_v0;
  if (param_2 < 0) {
    *param_1 = temp_v0 - 4;
    param_1[1] = param_2 + 0x20;
    return;
  }
  param_1[1] = param_2;
  return;
}

} /* extern "C" */
