/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030769c` (_code @ 0x30769c, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0030769c(int *param_1,int *param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = param_2[1];
  temp_v1 = *param_2;
  temp_v2 = temp_v0 + 1;
  param_2[1] = temp_v2;
  if (temp_v2 == 0x20) {
    *param_2 = temp_v1 + 4;
    param_2[1] = 0;
  }
  *param_1 = temp_v1;
  param_1[1] = temp_v0;
  return;
}

} /* extern "C" */
