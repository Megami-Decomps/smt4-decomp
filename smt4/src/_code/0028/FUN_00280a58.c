/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00280a58` (_code @ 0x280a58, 0x60 bytes) from smt4_v1.2.0.cxi.
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


unsigned char FUN_00280a58(float *param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4, in_s6, in_s7; 7 native warning(s); review required */
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  float temp_v0;
  float in_s4;
  float temp_v1;
  float in_s6;
  float in_s7;
  float temp_v2;
  float temp_v3;
  
  temp_v3 = in_s0 - in_s4;
  temp_v2 = in_s2 - in_s6;
  temp_v1 = romwright_sqrt_4(temp_v3 * temp_v3 + temp_v2 * temp_v2);
  temp_v0 = in_s3 + in_s7;
  if (temp_v1 == 0.0f) {
    temp_v1 = 0.01f;
  }
  if (temp_v0 < temp_v1) {
    *param_1 = in_s0;
    param_1[1] = in_s1;
    param_1[2] = in_s2;
  }
  else {
    *param_1 = in_s4 + (temp_v3 / temp_v1) * temp_v0;
    param_1[1] = in_s1;
    param_1[2] = in_s6 + (temp_v2 / temp_v1) * temp_v0;
  }
  return temp_v0 >= temp_v1;
}
