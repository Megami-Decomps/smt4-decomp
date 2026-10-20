/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a515c` (_code @ 0x1a515c, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_math_VEC3Cross(float *, float *, float *);

typedef struct fn_001a515c_arg2 fn_001a515c_arg2;
struct fn_001a515c_arg2 {
    unsigned char pad_0x0[0x4];
    float field_0x4; /* +0x4 */
    unsigned char pad_0x8[0xc];
    float field_0x14; /* +0x14 */
    unsigned char pad_0x18[0xc];
    float field_0x24; /* +0x24 */
};

/* stack frame of param_3: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
extern int FUN_001b1570(float *);
/* Supplied declaration required: nn_math_VEC3Cross. */


void FUN_001a515c(float *param_1,float *param_2,fn_001a515c_arg2 *param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
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
  float temp_v11;
  float temp_v12;
  
  temp_v1 = param_3->field_0x4;
  temp_v2 = param_3->field_0x14;
  temp_v3 = param_3->field_0x24;
  temp_v7 = *param_2 * temp_v1 + param_2[1] * temp_v2 + param_2[2] * temp_v3;
  temp_v8 = param_2[4] * temp_v1 + param_2[5] * temp_v2 + param_2[6] * temp_v3;
  temp_v9 = param_2[8] * temp_v1 + param_2[9] * temp_v2 + param_2[10] * temp_v3;
  temp_v10 = -param_1[3];
  temp_v11 = -param_1[7];
  temp_v12 = -param_1[0xb];
  temp_v0 = FUN_001b1570(&temp_v7);
  temp_v1 = 1.0f;
  temp_v2 = 0.0f;
  if (temp_v0 == 0) {
    temp_v7 = 0.0f;
    temp_v8 = 1.0f;
    temp_v9 = 0.0f;
  }
  nn_math_VEC3Cross(&temp_v4,&temp_v7,&temp_v10);
  temp_v0 = FUN_001b1570(&temp_v4);
  if (temp_v0 == 0) {
    temp_v5 = -temp_v7;
    temp_v3 = temp_v8 * temp_v8 + temp_v5 * temp_v5;
    temp_v6 = temp_v2;
    if (temp_v3 != temp_v2) {
      temp_v1 = temp_v1 / romwright_sqrt_4(temp_v3);
      temp_v4 = temp_v8 * temp_v1;
      temp_v5 = temp_v5 * temp_v1;
      nn_math_VEC3Cross(&temp_v10,&temp_v4,&temp_v7);
    }
    else {
      temp_v11 = -temp_v9;
      temp_v4 = temp_v1;
      temp_v5 = temp_v2;
      temp_v10 = temp_v2;
      temp_v12 = temp_v2;
    }
  }
  else {
    nn_math_VEC3Cross(&temp_v10,&temp_v4,&temp_v7);
  }
  param_1[2] = temp_v10;
  param_1[4] = temp_v5;
  *param_1 = temp_v4;
  param_1[1] = temp_v7;
  param_1[5] = temp_v8;
  param_1[6] = temp_v11;
  param_1[8] = temp_v6;
  param_1[9] = temp_v9;
  param_1[10] = temp_v12;
  return;
}

} /* extern "C" */
