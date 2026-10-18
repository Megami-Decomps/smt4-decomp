/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003076f0` (_code @ 0x3076f0, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003076f0(int *param_1)

{
  int temp_v0;
  
  temp_v0 = param_1[1];
  param_1[1] = temp_v0 - 1;
  if (temp_v0 == 0) {
    param_1[1] = 0x1f;
    *param_1 = *param_1 - 4;
  }
  return;
}
