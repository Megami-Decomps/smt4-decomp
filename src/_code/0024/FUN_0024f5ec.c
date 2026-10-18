/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024f5ec` (_code @ 0x24f5ec, 0xec bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


void FUN_0024f5ec(float *param_1,float *param_2,float *param_3,float *param_4)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4, in_s5, in_s6, in_s7, in_s8; 9 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float in_s1;
  float in_s2;
  float in_s3;
  float temp_v1;
  float in_s4;
  float in_s5;
  float in_s6;
  float in_s7;
  float in_s8;
  
  temp_v0 = (in_s3 - in_s0) * (in_s7 - in_s4) - (in_s4 - in_s1) * (in_s6 - in_s3);
  *param_1 = (in_s4 - in_s1) * (in_s8 - in_s5) - (in_s5 - in_s2) * (in_s7 - in_s4);
  *param_2 = (in_s5 - in_s2) * (in_s6 - in_s3) - (in_s3 - in_s0) * (in_s8 - in_s5);
  *param_3 = temp_v0;
  temp_v1 = *param_1;
  temp_v0 = 1.0f / romwright_sqrt_4(temp_v1 * temp_v1 + *param_2 * *param_2 + temp_v0 * temp_v0);
  *param_1 = temp_v1 * temp_v0;
  *param_2 = *param_2 * temp_v0;
  *param_3 = *param_3 * temp_v0;
  if (((unsigned int)*param_1 < 0xb8d1b717) && ((int)*param_1 < 0x38d1b717)) {
    *param_1 = 0.0f;
  }
  if (((unsigned int)*param_2 < 0xb8d1b717) && ((int)*param_2 < 0x38d1b717)) {
    *param_2 = 0.0f;
  }
  if (((unsigned int)*param_3 < 0xb8d1b717) && ((int)*param_3 < 0x38d1b717)) {
    *param_3 = 0.0f;
  }
  *param_4 = -(*param_1 * in_s6 + *param_2 * in_s7) + -(*param_3 * in_s8);
  return;
}
