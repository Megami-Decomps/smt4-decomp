/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a4f44` (_code @ 0x1a4f44, 0x68 bytes) from smt4a.cxi.
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


void FUN_001a4f44(float *param_1,int param_2)

{
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  temp_v0 = *(float *)(param_2 + 4);
  temp_v3 = *(float *)(param_2 + 0x14);
  temp_v2 = 0.0f;
  temp_v4 = 1.0f;
  temp_v1 = temp_v0 * temp_v0 + temp_v3 * temp_v3;
  if (temp_v1 != 0.0f) {
    temp_v4 = 1.0f / romwright_sqrt_4(temp_v1);
    temp_v2 = temp_v0 * temp_v4;
    temp_v4 = temp_v3 * temp_v4;
  }
  *param_1 = temp_v4;
  param_1[1] = temp_v2;
  param_1[10] = 1.0f;
  param_1[2] = 0.0f;
  param_1[5] = temp_v4;
  param_1[6] = 0.0f;
  param_1[8] = 0.0f;
  param_1[9] = 0.0f;
  param_1[4] = -temp_v2;
  return;
}

} /* extern "C" */
