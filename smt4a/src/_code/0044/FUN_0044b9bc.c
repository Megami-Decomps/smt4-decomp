/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044b9bc` (_code @ 0x44b9bc, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


unsigned int FUN_0044b9bc(float *param_1)

{
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  if ((~(unsigned int)param_1[0xf] & 0x10) != 0) {
    temp_v3 = param_1[4];
    temp_v0 = param_1[1] * param_1[6] - param_1[2] * param_1[5];
    temp_v1 = param_1[2] * temp_v3 - *param_1 * param_1[6];
    temp_v3 = *param_1 * param_1[5] - param_1[1] * temp_v3;
    param_1[8] = temp_v0;
    param_1[9] = temp_v1;
    param_1[10] = temp_v3;
    temp_v2 = *param_1;
    temp_v4 = param_1[1];
    temp_v0 = temp_v0 * temp_v0 + temp_v1 * temp_v1 + temp_v3 * temp_v3;
    temp_v3 = temp_v2 * temp_v2 + temp_v4 * temp_v4 + param_1[2] * param_1[2];
    if ((temp_v3 < 1e-06f) || (temp_v0 < (float)0x358637bd)) {
      return 0;
    }
    temp_v3 = 1.0f / romwright_sqrt_4(temp_v3);
    *param_1 = temp_v2 * temp_v3;
    param_1[1] = temp_v4 * temp_v3;
    param_1[2] = param_1[2] * temp_v3;
    temp_v0 = 1.0f / romwright_sqrt_4(temp_v0);
    temp_v3 = param_1[8] * temp_v0;
    param_1[8] = temp_v3;
    temp_v1 = param_1[9] * temp_v0;
    param_1[9] = temp_v1;
    temp_v0 = param_1[10] * temp_v0;
    param_1[10] = temp_v0;
    param_1[4] = temp_v1 * param_1[2] - temp_v0 * param_1[1];
    param_1[5] = temp_v0 * *param_1 - temp_v3 * param_1[2];
    param_1[6] = temp_v3 * param_1[1] - temp_v1 * *param_1;
    param_1[0xf] = (float)((unsigned int)param_1[0xf] | 0x800);
  }
  return 1;
}
