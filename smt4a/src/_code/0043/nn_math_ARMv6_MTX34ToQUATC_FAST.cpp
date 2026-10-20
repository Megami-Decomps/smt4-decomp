/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_math_ARMv6_MTX34ToQUATC_FAST` (_code @ 0x43b84c, 0x198 bytes) from smt4a.cxi.
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


void nn_math_ARMv6_MTX34ToQUATC_FAST(float *param_1,float *param_2)

{
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  temp_v7 = *param_2;
  temp_v8 = param_2[5];
  temp_v0 = param_2[10];
  temp_v1 = param_2[9];
  temp_v2 = param_2[6];
  temp_v3 = param_2[2];
  temp_v4 = param_2[8];
  temp_v5 = param_2[4];
  temp_v6 = param_2[1];
  temp_v9 = temp_v7 + temp_v8 + temp_v0;
  if (0.0f < temp_v9) {
    temp_v7 = romwright_sqrt_4(temp_v9 + 1.0f);
    temp_v0 = 0.5f / temp_v7;
    param_1[3] = temp_v7 * 0.5f;
    *param_1 = (temp_v1 - temp_v2) * temp_v0;
    param_1[1] = (temp_v3 - temp_v4) * temp_v0;
    param_1[2] = (temp_v5 - temp_v6) * temp_v0;
    return;
  }
  if (temp_v8 > temp_v7) {
    if (temp_v0 <= temp_v8) {
      temp_v0 = romwright_sqrt_4((temp_v8 - (temp_v0 + temp_v7)) + 1.0f);
      temp_v7 = temp_v0 * 0.5f;
      if (temp_v0 != 0.0f) {
        temp_v0 = 0.5f / temp_v0;
      }
      param_1[1] = temp_v7;
      param_1[3] = (temp_v3 - temp_v4) * temp_v0;
      param_1[2] = (temp_v2 + temp_v1) * temp_v0;
      *param_1 = (temp_v5 + temp_v6) * temp_v0;
      return;
    }
  }
  else if (temp_v0 <= temp_v7) {
    temp_v0 = romwright_sqrt_4((temp_v7 - (temp_v8 + temp_v0)) + 1.0f);
    temp_v7 = temp_v0 * 0.5f;
    if (temp_v0 != 0.0f) {
      temp_v0 = 0.5f / temp_v0;
    }
    *param_1 = temp_v7;
    param_1[1] = (temp_v6 + temp_v5) * temp_v0;
    param_1[2] = (temp_v3 + temp_v4) * temp_v0;
    param_1[3] = (temp_v1 - temp_v2) * temp_v0;
    return;
  }
  temp_v0 = romwright_sqrt_4((temp_v0 - (temp_v7 + temp_v8)) + 1.0f);
  temp_v7 = temp_v0 * 0.5f;
  if (temp_v0 != 0.0f) {
    temp_v0 = 0.5f / temp_v0;
  }
  param_1[2] = temp_v7;
  param_1[3] = (temp_v5 - temp_v6) * temp_v0;
  *param_1 = (temp_v4 + temp_v3) * temp_v0;
  param_1[1] = (temp_v1 + temp_v2) * temp_v0;
  return;
}

} /* extern "C" */
