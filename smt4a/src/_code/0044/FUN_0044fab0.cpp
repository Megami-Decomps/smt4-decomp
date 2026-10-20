/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044fab0` (_code @ 0x44fab0, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018a924(float *, float [12]);

typedef struct fn_0044fab0_arg0 fn_0044fab0_arg0;
struct fn_0044fab0_arg0 {
    unsigned char pad_0x0[0x8];
    byte field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    float field_0xc; /* +0xc */
    float field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    float *field_0x1c; /* +0x1c */
};

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

/* Supplied declaration required: FUN_0018a924. */


void FUN_0044fab0(fn_0044fab0_arg0 *param_1,float *param_2,float *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  float *pfVar2;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  float temp_v11 [12];
  
  pfVar2 = param_1->field_0x1c;
  temp_v0 = param_1->field_0x8;
  temp_v5 = pfVar2[3];
  temp_v3 = pfVar2[1];
  temp_v6 = pfVar2[2];
  FUN_0018a924(&temp_v10,temp_v11);
  temp_v7 = 1.0f;
  temp_v8 = -1.0f;
  temp_v4 = 0.0f;
  param_2[1] = 0.0f;
  param_2[2] = 0.0f;
  param_2[3] = 0.0f;
  param_2[4] = 0.0f;
  param_2[6] = 0.0f;
  param_2[7] = 0.0f;
  param_2[8] = 0.0f;
  param_2[9] = 0.0f;
  param_2[0xc] = 0.0f;
  param_2[0xd] = 0.0f;
  param_2[0xe] = -1.0f;
  temp_v1 = 1.0f / (temp_v6 - temp_v3);
  param_2[0xf] = 0.0f;
  temp_v2 = (temp_v11[0] / temp_v10) / temp_v5;
  *param_2 = temp_v2;
  param_2[5] = temp_v11[0] / temp_v10;
  param_2[10] = temp_v6 * temp_v1;
  param_2[0xb] = temp_v6 * temp_v3 * temp_v1;
  if (temp_v0 != 0 && temp_v0 != 4) {
    if (temp_v0 != 2) {
      if (temp_v0 != 3) {
        *param_2 = param_2[4];
        param_2[1] = param_2[5];
        param_2[4] = -temp_v2;
        param_2[5] = -0.0f;
        param_2[6] = -0.0f;
        param_2[7] = -0.0f;
      }
      else {
        temp_v1 = param_2[1];
        *param_2 = -0.0f;
        param_2[1] = -param_2[5];
        param_2[2] = -0.0f;
        param_2[3] = -0.0f;
        param_2[4] = temp_v2;
        param_2[5] = temp_v1;
      }
    }
    else {
      *param_2 = -temp_v2;
      param_2[1] = -0.0f;
      param_2[2] = -0.0f;
      param_2[3] = -0.0f;
      param_2[4] = -0.0f;
      param_2[5] = -param_2[5];
      param_2[6] = -0.0f;
      param_2[7] = -0.0f;
    }
  }
  temp_v1 = param_1->field_0xc;
  *(float *)&(*(unsigned int *)((unsigned char *)&temp_v9 + 0)) = param_1->field_0x10;
  (*(unsigned int *)((unsigned char *)&temp_v9 + 4)) = param_1->field_0x14;
  temp_v2 = param_1->field_0x18;
  FUN_0018a924(&temp_v10,temp_v11);
  temp_v7 = temp_v7 / (temp_v10 / temp_v11[0]);
  *param_3 = (temp_v7 / temp_v5) * temp_v1;
  param_3[1] = temp_v4;
  param_3[2] = -(float)((unsigned long long)temp_v9 >> 0x20);
  param_3[3] = temp_v4;
  param_3[4] = temp_v4;
  param_3[5] = temp_v7 * (float)temp_v9;
  param_3[6] = -temp_v2;
  param_3[7] = temp_v4;
  param_3[8] = temp_v4;
  param_3[9] = temp_v4;
  param_3[10] = temp_v8;
  param_3[0xb] = temp_v4;
  return;
}

} /* extern "C" */
