/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043ba3c` (_code @ 0x43ba3c, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018a924(float *, float *);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_0018a924. */


float * FUN_0043ba3c(float *param_1,float *param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  FUN_0018a924(&temp_v8,&temp_v9);
  temp_v4 = *param_2;
  temp_v3 = param_2[1];
  temp_v1 = param_2[2];
  temp_v7 = 1.0f - temp_v9;
  temp_v0 = param_3 != 0;
  temp_v2 = 1.0f / romwright_sqrt_4(temp_v4 * temp_v4 + temp_v3 * temp_v3 + temp_v1 * temp_v1);
  temp_v3 = temp_v3 * temp_v2;
  temp_v4 = temp_v4 * temp_v2;
  temp_v1 = temp_v1 * temp_v2;
  temp_v6 = temp_v7 * temp_v3 * temp_v1;
  temp_v2 = temp_v7 * temp_v4 * temp_v3;
  temp_v5 = temp_v7 * temp_v4 * temp_v1;
  *param_1 = temp_v9 + temp_v7 * temp_v4 * temp_v4;
  param_1[1] = temp_v2 - temp_v8 * temp_v1;
  param_1[2] = temp_v5 + temp_v8 * temp_v3;
  if (temp_v0) {
    param_1[3] = 0.0f;
  }
  param_1[4] = temp_v2 + temp_v8 * temp_v1;
  param_1[5] = temp_v9 + temp_v7 * temp_v3 * temp_v3;
  param_1[6] = temp_v6 - temp_v8 * temp_v4;
  if (temp_v0) {
    param_1[7] = 0.0f;
  }
  param_1[8] = temp_v5 - temp_v8 * temp_v3;
  param_1[9] = temp_v6 + temp_v8 * temp_v4;
  param_1[10] = temp_v9 + temp_v7 * temp_v1 * temp_v1;
  if (temp_v0) {
    param_1[0xb] = 0.0f;
  }
  return param_1;
}

} /* extern "C" */
