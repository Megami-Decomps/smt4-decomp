/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_math_VEC3Cross` (_code @ 0x226210, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nn_math_VEC3Cross(float *param_1,float *param_2,float *param_3)

{
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  
  temp_v4 = *param_3;
  temp_v5 = param_3[1];
  temp_v3 = *param_2;
  temp_v1 = param_3[2];
  temp_v0 = param_2[1];
  temp_v2 = param_2[2];
  *param_1 = temp_v0 * temp_v1 - temp_v2 * temp_v5;
  param_1[1] = temp_v2 * temp_v4 - temp_v3 * temp_v1;
  param_1[2] = temp_v3 * temp_v5 - temp_v0 * temp_v4;
  return;
}
