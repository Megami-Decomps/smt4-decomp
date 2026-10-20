/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00156bfc` (_code @ 0x156bfc, 0x298 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018a924(float *, float [13]);

typedef struct fn_00156bfc_arg1 fn_00156bfc_arg1;
struct fn_00156bfc_arg1 {
    unsigned char pad_0x0[0x48];
    byte field_0x48; /* +0x48 */
    unsigned char pad_0x49[0x33];
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
    undefined4 field_0x84; /* +0x84 */
    undefined4 field_0x88; /* +0x88 */
    undefined4 field_0x8c; /* +0x8c */
    undefined4 field_0x90; /* +0x90 */
    undefined4 field_0x94; /* +0x94 */
    undefined4 field_0x98; /* +0x98 */
    undefined4 field_0x9c; /* +0x9c */
    undefined4 field_0xa0; /* +0xa0 */
    undefined4 field_0xa4; /* +0xa4 */
    undefined4 field_0xa8; /* +0xa8 */
    unsigned char pad_0xac[0x28];
    undefined4 field_0xd4; /* +0xd4 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_0018a924. */


void FUN_00156bfc(int param_1,fn_00156bfc_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  float temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned int temp_v20;
  float temp_v21;
  unsigned int temp_v22;
  float temp_v23;
  float afStack_44 [13];
  
  temp_v20 = 0;
  temp_v22 = 0xbf800000;
  param_2->field_0xd4 = *(unsigned int *)(param_1 + 0x20);
  temp_v21 = 1.0f;
  temp_v2 = *(float *)(param_1 + 0xac) - *(float *)(param_1 + 0xb8);
  temp_v4 = *(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0xbc);
  temp_v0 = *(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0xc0);
  if (temp_v2 == 0.0f && temp_v0 == 0.0f) {
    *(float *)(param_1 + 0x7c) = 1.0f;
    *(unsigned int *)(param_1 + 0x80) = 0;
    *(unsigned int *)(param_1 + 0x84) = 0;
    *(float *)(param_1 + 0x88) = -*(float *)(param_1 + 0xac);
    *(unsigned int *)(param_1 + 0x8c) = 0;
    *(unsigned int *)(param_1 + 0x90) = 0;
    *(unsigned int *)(param_1 + 0x9c) = 0;
    *(unsigned int *)(param_1 + 0xa4) = 0;
    if (0.0f >= temp_v4) {
      *(unsigned int *)(param_1 + 0x94) = 0x3f800000;
      *(float *)(param_1 + 0x98) = -*(float *)(param_1 + 0xb4);
      *(unsigned int *)(param_1 + 0xa0) = 0xbf800000;
      *(unsigned int *)(param_1 + 0xa8) = *(unsigned int *)(param_1 + 0xb0);
    }
    else {
      *(unsigned int *)(param_1 + 0x94) = 0xbf800000;
      *(unsigned int *)(param_1 + 0x98) = *(unsigned int *)(param_1 + 0xb4);
      *(unsigned int *)(param_1 + 0xa0) = 0x3f800000;
      *(float *)(param_1 + 0xa8) = -*(float *)(param_1 + 0xb0);
    }
  }
  else {
    temp_v6 = 1.0f / romwright_sqrt_4(temp_v2 * temp_v2 + temp_v4 * temp_v4 + temp_v0 * temp_v0);
    temp_v4 = temp_v4 * temp_v6;
    temp_v17 = temp_v2 * temp_v6;
    temp_v6 = temp_v0 * temp_v6;
    temp_v8 = 1.0f / romwright_sqrt_4(temp_v0 * temp_v0 + temp_v2 * temp_v2);
    temp_v0 = temp_v0 * temp_v8;
    temp_v16 = -(temp_v2 * temp_v8);
    temp_v18 = temp_v17 * 0.0f - temp_v4 * temp_v0;
    temp_v19 = temp_v6 * temp_v0 - temp_v17 * temp_v16;
    temp_v8 = temp_v4 * temp_v16 - temp_v6 * 0.0f;
    FUN_0018a924(&temp_v23,afStack_44);
    temp_v13 = *(float *)(param_1 + 0xac);
    temp_v15 = *(float *)(param_1 + 0xb0);
    temp_v14 = *(float *)(param_1 + 0xb4);
    temp_v2 = temp_v23 * temp_v8 + afStack_44[0] * temp_v0;
    temp_v9 = afStack_44[0] * temp_v8 - temp_v23 * temp_v0;
    temp_v8 = afStack_44[0] * temp_v18 - temp_v23 * temp_v16;
    temp_v0 = temp_v23 * temp_v18 + afStack_44[0] * temp_v16;
    *(float *)(param_1 + 0x7c) = temp_v2;
    *(float *)(param_1 + 0x80) = temp_v23 * temp_v19;
    *(float *)(param_1 + 0x84) = temp_v0;
    *(float *)(param_1 + 0x88) = -(temp_v13 * temp_v2 + temp_v15 * temp_v23 * temp_v19 + temp_v14 * temp_v0);
    *(float *)(param_1 + 0x8c) = temp_v9;
    *(float *)(param_1 + 0x90) = afStack_44[0] * temp_v19;
    *(float *)(param_1 + 0x94) = temp_v8;
    *(float *)(param_1 + 0x98) =
         -(temp_v13 * temp_v9 + temp_v15 * afStack_44[0] * temp_v19 + temp_v14 * temp_v8);
    *(float *)(param_1 + 0x9c) = temp_v17;
    *(float *)(param_1 + 0xa0) = temp_v4;
    *(float *)(param_1 + 0xa4) = temp_v6;
    *(float *)(param_1 + 0xa8) = -(temp_v13 * temp_v17 + temp_v15 * temp_v4 + temp_v14 * temp_v6);
  }
  temp_v1 = *(unsigned int *)(param_1 + 0x80);
  temp_v3 = *(unsigned int *)(param_1 + 0x84);
  temp_v5 = *(unsigned int *)(param_1 + 0x88);
  temp_v7 = *(unsigned int *)(param_1 + 0x8c);
  temp_v10 = *(unsigned int *)(param_1 + 0x90);
  temp_v11 = *(unsigned int *)(param_1 + 0x94);
  temp_v12 = *(unsigned int *)(param_1 + 0x98);
  param_2->field_0x7c = *(unsigned int *)(param_1 + 0x7c);
  param_2->field_0x80 = temp_v1;
  param_2->field_0x84 = temp_v3;
  param_2->field_0x88 = temp_v5;
  param_2->field_0x8c = temp_v7;
  param_2->field_0x90 = temp_v10;
  param_2->field_0x94 = temp_v11;
  param_2->field_0x98 = temp_v12;
  temp_v1 = *(unsigned int *)(param_1 + 0xa0);
  temp_v3 = *(unsigned int *)(param_1 + 0xa4);
  temp_v5 = *(unsigned int *)(param_1 + 0xa8);
  param_2->field_0x9c = *(unsigned int *)(param_1 + 0x9c);
  param_2->field_0xa0 = temp_v1;
  param_2->field_0xa4 = temp_v3;
  param_2->field_0xa8 = temp_v5;
  param_2->field_0x48 = param_2->field_0x48 | 1;
  temp_v4 = *(float *)(param_1 + 0x34);
  temp_v2 = *(float *)(param_1 + 0x24);
  temp_v0 = *(float *)(param_1 + 0x28);
  FUN_0018a924(&temp_v23,afStack_44);
  *(unsigned int *)(param_1 + 0x40) = temp_v20;
  *(unsigned int *)(param_1 + 0x44) = temp_v20;
  *(unsigned int *)(param_1 + 0x48) = temp_v20;
  *(unsigned int *)(param_1 + 0x4c) = temp_v20;
  *(unsigned int *)(param_1 + 0x54) = temp_v20;
  *(unsigned int *)(param_1 + 0x58) = temp_v20;
  *(unsigned int *)(param_1 + 0x5c) = temp_v20;
  *(unsigned int *)(param_1 + 0x60) = temp_v20;
  *(unsigned int *)(param_1 + 0x6c) = temp_v20;
  *(unsigned int *)(param_1 + 0x70) = temp_v20;
  *(unsigned int *)(param_1 + 0x74) = temp_v22;
  *(unsigned int *)(param_1 + 0x78) = temp_v20;
  temp_v21 = temp_v21 / (temp_v0 - temp_v2);
  *(float *)(param_1 + 0x3c) = (afStack_44[0] / temp_v23) / temp_v4;
  *(float *)(param_1 + 0x50) = afStack_44[0] / temp_v23;
  *(float *)(param_1 + 100) = temp_v0 * temp_v21;
  *(float *)(param_1 + 0x68) = temp_v0 * temp_v2 * temp_v21;
  return;
}

} /* extern "C" */
