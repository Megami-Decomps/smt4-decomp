/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377650` (_code @ 0x377650, 0xc0 bytes) from smt4_v1.2.0.cxi.
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
/* Supplied declaration required: FUN_00281e34. */


void FUN_00377650(float *param_1,float *param_2,float *param_3)

{
/* irregular: irregular input(s): in_s0, in_s1; 3 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float in_s1;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  temp_v3 = 0.0f;
  temp_v0 = temp_v3;
  temp_v1 = temp_v3;
  if (in_s0 != 0.0f) {
    temp_v2 = *param_1;
    temp_v0 = param_1[2];
    temp_v1 = romwright_sqrt_4(temp_v2 * temp_v2 + 0.0f + temp_v0 * temp_v0);
    if (in_s1 < temp_v1) {
      temp_v1 = in_s1 / temp_v1;
      temp_v2 = temp_v1 * temp_v2;
      temp_v0 = temp_v1 * temp_v0;
    }
    temp_v1 = romwright_sqrt_4(temp_v2 * temp_v2 + 0.0f + temp_v0 * temp_v0);
    temp_v0 = (*param_1 * temp_v1) / in_s0;
    temp_v1 = (param_1[2] * temp_v1) / in_s0;
  }
  temp_v2 = temp_v0;
  FUN_00281e34();
  *param_2 = temp_v0;
  *param_3 = romwright_sqrt_4(temp_v2 * temp_v2 + temp_v3 * temp_v3 + temp_v1 * temp_v1) / in_s1;
  return;
}
