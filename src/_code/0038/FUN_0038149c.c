/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038149c` (_code @ 0x38149c, 0x1f8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_002ad5a0. */


float * FUN_0038149c(float *param_1,float *param_2,float *param_3)

{
/* irregular: 1 native warning(s); review required */
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
  float afStack_34 [10];
  
  temp_v3 = *param_2 - *param_3;
  temp_v1 = param_2[1] - param_3[1];
  temp_v0 = param_2[2] - param_3[2];
  if (temp_v3 != 0.0f || temp_v0 != 0.0f) {
    temp_v5 = -temp_v3;
    temp_v6 = 1.0f / romwright_sqrt_4(temp_v3 * temp_v3 + temp_v1 * temp_v1 + temp_v0 * temp_v0);
    temp_v1 = temp_v1 * temp_v6;
    temp_v3 = temp_v3 * temp_v6;
    temp_v6 = temp_v0 * temp_v6;
    temp_v2 = 1.0f / romwright_sqrt_4(temp_v0 * temp_v0 + 0.0f + temp_v5 * temp_v5);
    temp_v0 = temp_v0 * temp_v2;
    temp_v5 = temp_v5 * temp_v2;
    temp_v8 = temp_v6 * temp_v0 - temp_v3 * temp_v5;
    temp_v9 = temp_v3 * temp_v2 * 0.0f - temp_v1 * temp_v0;
    temp_v7 = temp_v1 * temp_v5 - temp_v6 * temp_v2 * 0.0f;
    FUN_002ad5a0(&temp_v10,afStack_34);
    temp_v2 = temp_v7 * temp_v10 + afStack_34[0] * temp_v0;
    temp_v4 = temp_v9 * temp_v10 + afStack_34[0] * temp_v5;
    temp_v0 = temp_v7 * afStack_34[0] - temp_v10 * temp_v0;
    temp_v5 = temp_v9 * afStack_34[0] - temp_v10 * temp_v5;
    *param_1 = temp_v2;
    param_1[1] = temp_v8 * temp_v10;
    param_1[2] = temp_v4;
    param_1[3] = -(*param_2 * temp_v2 + param_2[1] * temp_v8 * temp_v10) + -(param_2[2] * temp_v4);
    param_1[4] = temp_v0;
    param_1[5] = temp_v8 * afStack_34[0];
    param_1[6] = temp_v5;
    param_1[7] = -(*param_2 * temp_v0 + param_2[1] * temp_v8 * afStack_34[0] + param_2[2] * temp_v5);
    param_1[8] = temp_v3;
    param_1[9] = temp_v1;
    param_1[10] = temp_v6;
    param_1[0xb] = -(*param_2 * temp_v3 + param_2[1] * temp_v1) + -(param_2[2] * temp_v6);
    return param_1;
  }
  *param_1 = 1.0f;
  param_1[1] = 0.0f;
  param_1[2] = 0.0f;
  param_1[3] = -*param_2;
  param_1[4] = 0.0f;
  param_1[5] = 0.0f;
  param_1[8] = 0.0f;
  param_1[10] = 0.0f;
  if (0.0f < temp_v1) {
    param_1[6] = -1.0f;
    param_1[7] = param_2[2];
    param_1[9] = 1.0f;
    param_1[0xb] = -param_2[1];
    return param_1;
  }
  param_1[6] = 1.0f;
  param_1[7] = -param_2[2];
  param_1[9] = -1.0f;
  param_1[0xb] = param_2[1];
  return param_1;
}
