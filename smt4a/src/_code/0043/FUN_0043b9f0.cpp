/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043b9f0` (_code @ 0x43b9f0, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0043b9f0(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  
  param_1[1] = 0;
  *param_1 = 0x3f800000;
  param_1[2] = 0;
  param_1[3] = *param_2;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0;
  temp_v0 = param_2[1];
  param_1[8] = 0;
  param_1[7] = temp_v0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xb] = param_2[2];
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  return;
}

} /* extern "C" */
