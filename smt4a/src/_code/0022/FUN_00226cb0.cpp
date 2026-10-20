/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00226cb0` (_code @ 0x226cb0, 0x1d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


float * FUN_00226cb0(float *param_1,float *param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = param_1[5] = param_1[10] = param_1[0xf] = 1.0f;
    param_1[1] = param_1[2] = param_1[4] = param_1[3] = 0.0f;
    param_1[6] = param_1[8] = param_1[9] = param_1[7] = 0.0f;
    param_1[0xc] = param_1[0xd] = param_1[0xe] = param_1[0xb] = 0.0f;
    *param_1 = *param_2;
    param_1[5] = param_2[1];
    param_1[10] = param_2[2];
    return param_1;
  }
  if (param_3 != 1) {
    if (param_3 == 2) {
      *param_1 = *param_1 * *param_2;
      param_1[1] = param_1[1] * param_2[1];
      param_1[2] = param_1[2] * param_2[2];
      param_1[4] = param_1[4] * *param_2;
      param_1[5] = param_1[5] * param_2[1];
      param_1[6] = param_1[6] * param_2[2];
      param_1[8] = param_1[8] * *param_2;
      param_1[9] = param_1[9] * param_2[1];
      param_1[10] = param_1[10] * param_2[2];
      param_1[0xc] = param_1[0xc] * *param_2;
      param_1[0xd] = param_1[0xd] * param_2[1];
      param_1[0xe] = param_1[0xe] * param_2[2];
      return param_1;
    }
    return 0;
  }
  *param_1 = *param_1 * *param_2;
  param_1[1] = param_1[1] * *param_2;
  param_1[2] = param_1[2] * *param_2;
  param_1[4] = param_1[4] * param_2[1];
  param_1[5] = param_1[5] * param_2[1];
  param_1[6] = param_1[6] * param_2[1];
  param_1[8] = param_1[8] * param_2[2];
  param_1[9] = param_1[9] * param_2[2];
  param_1[10] = param_1[10] * param_2[2];
  return param_1;
}

} /* extern "C" */
