/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e3d0` (_code @ 0x37e3d0, 0x1bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0037e3d0_arg0 fn_0037e3d0_arg0;
struct fn_0037e3d0_arg0 {
    unsigned char pad_0x0[0x14];
    undefined4 field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    float field_0x1c; /* +0x1c */
    float field_0x20; /* +0x20 */
    uint field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    byte field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0x3];
    float field_0x30; /* +0x30 */
    byte field_0x34; /* +0x34 */
    byte field_0x35; /* +0x35 */
    unsigned char pad_0x36[0x2a];
    float field_0x60; /* +0x60 */
    unsigned char pad_0x64[0x14];
    undefined4 field_0x78; /* +0x78 */
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
    undefined4 field_0x84; /* +0x84 */
    float field_0x88; /* +0x88 */
    unsigned char pad_0x8c[0x5];
    byte field_0x91; /* +0x91 */
    byte field_0x92; /* +0x92 */
    byte field_0x93; /* +0x93 */
    byte field_0x94; /* +0x94 */
    byte field_0x95; /* +0x95 */
    unsigned char pad_0x96[0x2];
    void *field_0x98; /* +0x98 */
};

/* stack frame of param_1: 4 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned char sp57; /* 0x57: local_57 */
    unsigned char sp58; /* 0x58: local_58 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0037fb78. */
/* Supplied declaration required: FUN_003e7204. */


void FUN_0037e3d0(fn_0037e3d0_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  void *pvVar4;
  unsigned int temp_v3;
  float *pfVar6;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  unsigned long long temp_v13;
  unsigned char temp_v14 [8];
  float temp_v15 [13];
  
  if (param_1->field_0x98 != (void *)0x0) {
    temp_v1 = (unsigned int)param_1->field_0x91;
    temp_v2 = temp_v1;
    if (temp_v1 < 2) {
      temp_v2 = temp_v1 - 0x3f;
    }
    temp_v8 = param_1->field_0x88 * param_1->field_0x18;
    if (temp_v1 >= 2) {
      temp_v2 = temp_v2 - 0x40;
    }
    temp_v1 = (unsigned int)param_1->field_0x92;
    temp_v6 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v12 = param_1->field_0x14;
    temp_v6 = param_1->field_0x1c + param_1->field_0x60 * (temp_v6 * 0.015873017f + 0.0f);
    if (temp_v1 < 0x40) {
      temp_v7 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v7 = temp_v7 * 0.015873017f;
    }
    else {
      temp_v7 = (float)VectorUnsignedToFloat(temp_v1 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v7 = temp_v7 * 0.015625f;
    }
    temp_v11 = 0.007874016f;
    temp_v0 = param_1->field_0x2c;
    temp_v13 = (unsigned long long)param_1->field_0x24;
    temp_v10 = 0;
    temp_v9 = param_1->field_0x20 + temp_v7 + 0.0f;
    temp_v7 = (float)VectorUnsignedToFloat((unsigned int)param_1->field_0x93,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v14[0] = param_1->field_0x94;
    temp_v2 = 0;
    temp_v14[1] = param_1->field_0x95;
    temp_v7 = param_1->field_0x30 + (temp_v7 * 0.007874016f - 1.0f);
    do {
      pfVar6 = temp_v15 + temp_v2;
      temp_v5 = (float)VectorUnsignedToFloat((unsigned int)temp_v14[temp_v2],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = (float)((unsigned long long)temp_v10 >> 0x20) + temp_v5 * temp_v11;
      *pfVar6 = temp_v5;
      FUN_003e7204(param_1,temp_v2 & 0xff);
      temp_v2 = temp_v2 + 1;
      *pfVar6 = temp_v5 + *pfVar6;
    } while ((int)temp_v2 < 2);
    *(unsigned char *)((int)param_1->field_0x98 + 0x124) = param_1->field_0x34;
    *(unsigned char *)((int)param_1->field_0x98 + 0x125) = param_1->field_0x35;
    *(unsigned int *)((int)param_1->field_0x98 + 0xcc) = temp_v12;
    *(float *)((int)param_1->field_0x98 + 0xd0) = temp_v8;
    *(float *)((int)param_1->field_0x98 + 0xd4) = temp_v6;
    *(int *)((int)param_1->field_0x98 + 0xdc) = (int)temp_v13;
    FUN_0037fb78(param_1->field_0x98,temp_v0);
    *(float *)((int)param_1->field_0x98 + 0xe4) = temp_v7;
    *(float *)((int)param_1->field_0x98 + 0xe8) = temp_v15[0];
    *(float *)((int)param_1->field_0x98 + 0xec) = temp_v15[1];
    *(float *)((int)param_1->field_0x98 + 0xd8) = temp_v9;
    pvVar4 = param_1->field_0x98;
    temp_v12 = param_1->field_0x7c;
    temp_v3 = param_1->field_0x80;
    temp_v4 = param_1->field_0x84;
    *(unsigned int *)((int)pvVar4 + 0xac) = param_1->field_0x78;
    *(unsigned int *)((int)pvVar4 + 0xb0) = temp_v12;
    *(unsigned int *)((int)pvVar4 + 0xb4) = temp_v3;
    *(unsigned int *)((int)pvVar4 + 0xb8) = temp_v4;
  }
  return;
}
