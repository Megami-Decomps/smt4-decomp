/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_math_ARMv6_MTX44PivotC_FAST` (_code @ 0x16fae4, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nn_math_ARMv6_MTX44PivotC_FAST(float *param_1,int param_2)

{
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  if (param_2 != 0 && param_2 != 4) {
    if (param_2 == 2) {
      *param_1 = -*param_1;
      param_1[1] = -param_1[1];
      param_1[2] = -param_1[2];
      param_1[3] = -param_1[3];
      param_1[4] = -param_1[4];
      param_1[5] = -param_1[5];
      param_1[6] = -param_1[6];
      param_1[7] = -param_1[7];
      return;
    }
    if (param_2 == 3) {
      temp_v1 = *param_1;
      temp_v0 = param_1[5];
      temp_v2 = param_1[2];
      temp_v3 = param_1[3];
      param_1[5] = param_1[1];
      *param_1 = -param_1[4];
      param_1[1] = -temp_v0;
      param_1[2] = -param_1[6];
      param_1[3] = -param_1[7];
      param_1[4] = temp_v1;
      param_1[6] = temp_v2;
      param_1[7] = temp_v3;
      return;
    }
    temp_v1 = *param_1;
    temp_v2 = param_1[1];
    temp_v3 = param_1[2];
    temp_v0 = param_1[7];
    param_1[7] = -param_1[3];
    *param_1 = param_1[4];
    param_1[1] = param_1[5];
    param_1[2] = param_1[6];
    param_1[3] = temp_v0;
    param_1[4] = -temp_v1;
    param_1[5] = -temp_v2;
    param_1[6] = -temp_v3;
  }
  return;
}

} /* extern "C" */
