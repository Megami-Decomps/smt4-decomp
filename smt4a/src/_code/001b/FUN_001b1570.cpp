/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b1570` (_code @ 0x1b1570, 0x54 bytes) from smt4a.cxi.
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


unsigned char FUN_001b1570(float *param_1,float *param_2)

{
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  temp_v4 = *param_2;
  temp_v2 = param_2[1];
  temp_v3 = param_2[2];
  temp_v0 = temp_v4 * temp_v4 + temp_v2 * temp_v2 + temp_v3 * temp_v3;
  if (temp_v0 != 0.0f) {
    temp_v1 = 1.0f / romwright_sqrt_4(temp_v0);
    *param_1 = temp_v4 * temp_v1;
    param_1[1] = temp_v2 * temp_v1;
    param_1[2] = temp_v3 * temp_v1;
  }
  return temp_v0 != 0.0f;
}

} /* extern "C" */
