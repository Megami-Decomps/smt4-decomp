/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025247c` (_code @ 0x25247c, 0x3c bytes) from smt4_v1.2.0.cxi.
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


void FUN_0025247c(float *param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4, in_s5; 6 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float in_s1;
  float temp_v1;
  float in_s2;
  float temp_v2;
  float in_s3;
  float temp_v3;
  float in_s4;
  float in_s5;
  
  temp_v3 = in_s3 - in_s0;
  temp_v0 = in_s4 - in_s1;
  temp_v1 = in_s5 - in_s2;
  temp_v2 = 1.0f / romwright_sqrt_4(temp_v3 * temp_v3 + temp_v0 * temp_v0 + temp_v1 * temp_v1);
  *param_1 = temp_v3 * temp_v2;
  param_1[1] = temp_v0 * temp_v2;
  param_1[2] = temp_v1 * temp_v2;
  return;
}
