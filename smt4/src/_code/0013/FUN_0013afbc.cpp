/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013afbc` (_code @ 0x13afbc, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a81a8(float *, unsigned int);

/* stack frame of param_3: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_002a81a8. */


void FUN_0013afbc(unsigned int param_1,unsigned int *param_2,float *param_3)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned int temp_v15;
  
  FUN_002a81a8(&temp_v4,param_1);
  *param_2 = temp_v7;
  param_2[1] = temp_v11;
  param_2[2] = temp_v15;
  *param_3 = temp_v4;
  param_3[1] = temp_v8;
  param_3[2] = temp_v12;
  param_3[3] = temp_v5;
  param_3[4] = temp_v9;
  param_3[5] = temp_v13;
  param_3[6] = -temp_v6;
  param_3[7] = -temp_v10;
  param_3[8] = -temp_v14;
  temp_v2 = 1.0f / romwright_sqrt_4(temp_v4 * temp_v4 + temp_v8 * temp_v8 + temp_v12 * temp_v12);
  *param_3 = temp_v4 * temp_v2;
  param_3[1] = temp_v8 * temp_v2;
  param_3[2] = temp_v12 * temp_v2;
  temp_v3 = param_3[3];
  temp_v0 = param_3[4];
  temp_v2 = param_3[5];
  temp_v1 = 1.0f / romwright_sqrt_4(temp_v3 * temp_v3 + temp_v0 * temp_v0 + temp_v2 * temp_v2);
  param_3[3] = temp_v3 * temp_v1;
  param_3[4] = temp_v0 * temp_v1;
  param_3[5] = temp_v2 * temp_v1;
  temp_v3 = param_3[6];
  temp_v2 = param_3[7];
  temp_v0 = param_3[8];
  temp_v1 = 1.0f / romwright_sqrt_4(temp_v3 * temp_v3 + temp_v2 * temp_v2 + temp_v0 * temp_v0);
  param_3[6] = temp_v3 * temp_v1;
  param_3[7] = temp_v2 * temp_v1;
  param_3[8] = temp_v0 * temp_v1;
  return;
}

} /* extern "C" */
