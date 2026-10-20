/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_math_VEC3SafeNormalize` (_code @ 0x43b658, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


void nn_math_VEC3SafeNormalize(float *param_1,float *param_2,float *param_3)

{
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  temp_v3 = *param_2;
  temp_v1 = param_2[1];
  temp_v2 = param_2[2];
  temp_v0 = temp_v3 * temp_v3 + temp_v1 * temp_v1 + temp_v2 * temp_v2;
  if (temp_v0 == 0.0f) {
    temp_v0 = *param_3;
    temp_v1 = param_3[1];
    param_1[2] = param_3[2];
    *param_1 = temp_v0;
    param_1[1] = temp_v1;
    return;
  }
  temp_v0 = 1.0f / romwright_sqrt_4(temp_v0);
  *param_1 = temp_v3 * temp_v0;
  param_1[1] = temp_v1 * temp_v0;
  param_1[2] = temp_v2 * temp_v0;
  return;
}

} /* extern "C" */
