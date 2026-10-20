/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018aa5c` (_code @ 0x18aa5c, 0xf4 bytes) from smt4a.cxi.
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


void FUN_0018aa5c(float *param_1,float *param_2,float *param_3,float *param_4)

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
  float temp_v10;
  float temp_v11;
  
  temp_v5 = *param_2;
  temp_v6 = param_2[1];
  temp_v7 = param_2[2];
  temp_v3 = temp_v5 - *param_4;
  temp_v1 = temp_v6 - param_4[1];
  temp_v0 = temp_v7 - param_4[2];
  temp_v2 = 1.0f / romwright_sqrt_4(temp_v3 * temp_v3 + temp_v1 * temp_v1 + temp_v0 * temp_v0);
  temp_v0 = temp_v0 * temp_v2;
  temp_v1 = temp_v1 * temp_v2;
  temp_v3 = temp_v3 * temp_v2;
  temp_v9 = param_3[1] * temp_v0 - param_3[2] * temp_v1;
  temp_v2 = *param_3 * temp_v1 - param_3[1] * temp_v3;
  temp_v4 = param_3[2] * temp_v3 - *param_3 * temp_v0;
  temp_v8 = 1.0f / romwright_sqrt_4(temp_v9 * temp_v9 + temp_v4 * temp_v4 + temp_v2 * temp_v2);
  temp_v2 = temp_v2 * temp_v8;
  temp_v9 = temp_v9 * temp_v8;
  temp_v4 = temp_v4 * temp_v8;
  *param_1 = temp_v9;
  param_1[1] = temp_v4;
  param_1[2] = temp_v2;
  param_1[8] = temp_v3;
  param_1[9] = temp_v1;
  param_1[10] = temp_v0;
  temp_v8 = temp_v1 * temp_v2 - temp_v0 * temp_v4;
  temp_v10 = temp_v0 * temp_v9 - temp_v3 * temp_v2;
  temp_v11 = temp_v3 * temp_v4 - temp_v1 * temp_v9;
  param_1[4] = temp_v8;
  param_1[5] = temp_v10;
  param_1[6] = temp_v11;
  param_1[3] = -(temp_v5 * temp_v9 + temp_v6 * temp_v4 + temp_v7 * temp_v2);
  param_1[7] = -(temp_v5 * temp_v8 + temp_v6 * temp_v10 + temp_v7 * temp_v11);
  param_1[0xb] = -(temp_v5 * temp_v3 + temp_v6 * temp_v1 + temp_v7 * temp_v0);
  return;
}

} /* extern "C" */
