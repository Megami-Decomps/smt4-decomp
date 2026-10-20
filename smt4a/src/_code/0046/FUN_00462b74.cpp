/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00462b74` (_code @ 0x462b74, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d326c(...);
int FUN_001d3278(...);
int FUN_004663fc(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int nw_snd_internal_driver_Voice_SetPanCurve(...);
int nw_snd_internal_driver_Voice_SetPanMode(...);

typedef struct fn_00462b74_arg0 fn_00462b74_arg0;
struct fn_00462b74_arg0 {
    unsigned char pad_0x0[0x14];
    uint field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    float field_0x1c; /* +0x1c */
    float field_0x20; /* +0x20 */
    float field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    char field_0x2c; /* +0x2c */
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
    byte field_0x96; /* +0x96 */
    byte field_0x97; /* +0x97 */
    byte field_0x98; /* +0x98 */
    unsigned char pad_0x99[0x3];
    void *field_0x9c; /* +0x9c */
    unsigned char pad_0xa0[0x3];
    char field_0xa3; /* +0xa3 */
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
/* Supplied declaration required: FUN_001d326c. */
/* Supplied declaration required: FUN_001d3278. */
/* Supplied declaration required: FUN_004663fc. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetPanCurve. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetPanMode. */


void FUN_00462b74(fn_00462b74_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  unsigned int temp_v0;
  void *pvVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  float *pfVar6;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  long long temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  unsigned char temp_v14 [8];
  float temp_v15 [13];
  
  if (param_1->field_0x9c != (void *)0x0) {
    temp_v0 = (unsigned int)param_1->field_0x91;
    temp_v13 = (unsigned long long)param_1->field_0x14;
    temp_v9 = param_1->field_0x88 * param_1->field_0x18;
    temp_v11 = 0.0f;
    if (temp_v0 < 2) {
      temp_v6 = (float)VectorSignedToFloat(temp_v0 - 0x3f,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    else {
      temp_v6 = (float)VectorSignedToFloat(temp_v0 - 0x40,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    temp_v0 = (unsigned int)param_1->field_0x92;
    if (temp_v0 < 0x40) {
      temp_v7 = (float)VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v7 = temp_v7 * 0.015873017f;
    }
    else {
      temp_v7 = (float)VectorUnsignedToFloat(temp_v0 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v7 = temp_v7 * 0.015625f;
    }
    temp_v0 = (unsigned int)param_1->field_0x97;
    if ((int)param_1->field_0x2c != 0xffffffff) {
      temp_v0 = (int)param_1->field_0x2c;
    }
    temp_v10 = param_1->field_0x20 + temp_v7 + 0.0f;
    temp_v7 = (float)VectorSignedToFloat(param_1->field_0x96 - 0x40,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v12 = 0.007874016f;
    temp_v3 = 0;
    VectorUnsignedToFloat((unsigned int)param_1->field_0x98,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = param_1->field_0x24 + temp_v7 * 0.015625f;
    temp_v8 = (unsigned long long)
             (unsigned int)(param_1->field_0x1c + param_1->field_0x60 * (temp_v6 * 0.015873017f + 0.0f)) << 0x20
    ;
    temp_v6 = (float)VectorUnsignedToFloat((unsigned int)param_1->field_0x93,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v14[0] = param_1->field_0x94;
    temp_v14[1] = param_1->field_0x95;
    temp_v6 = param_1->field_0x30 + (temp_v6 * 0.007874016f - 1.0f);
    do {
      pfVar6 = temp_v15 + temp_v3;
      *pfVar6 = temp_v11;
      temp_v5 = (float)VectorUnsignedToFloat((unsigned int)temp_v14[temp_v3],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = temp_v11 + temp_v5 * temp_v12;
      *pfVar6 = temp_v5;
      FUN_001d3278(param_1,temp_v3 & 0xff);
      temp_v1 = (unsigned int)((unsigned long long)temp_v8 >> 0x20);
      temp_v2 = (unsigned int)temp_v13;
      temp_v3 = temp_v3 + 1;
      *pfVar6 = temp_v5 + *pfVar6;
    } while ((int)temp_v3 < 2);
    nw_snd_internal_driver_Voice_SetPanMode
              (*(unsigned int *)((int)param_1->field_0x9c + 0x1a8),param_1->field_0x34);
    nw_snd_internal_driver_Voice_SetPanCurve
              (*(unsigned int *)((int)param_1->field_0x9c + 0x1a8),param_1->field_0x35);
    *(unsigned int *)((int)param_1->field_0x9c + 0x140) = temp_v2;
    *(float *)((int)param_1->field_0x9c + 0x144) = temp_v9;
    *(unsigned int *)((int)param_1->field_0x9c + 0x148) = temp_v1;
    *(float *)((int)param_1->field_0x9c + 0x150) = temp_v7;
    FUN_001d326c(param_1->field_0x9c,temp_v0);
    *(float *)((int)param_1->field_0x9c + 0x158) = temp_v6;
    *(float *)((int)param_1->field_0x9c + 0x15c) = temp_v15[0];
    *(float *)((int)param_1->field_0x9c + 0x160) = temp_v15[1];
    *(float *)((int)param_1->field_0x9c + 0x14c) = temp_v10;
    pvVar2 = param_1->field_0x9c;
    temp_v1 = param_1->field_0x7c;
    temp_v2 = param_1->field_0x80;
    temp_v4 = param_1->field_0x84;
    *(unsigned int *)((int)pvVar2 + 0xb4) = param_1->field_0x78;
    *(unsigned int *)((int)pvVar2 + 0xb8) = temp_v1;
    *(unsigned int *)((int)pvVar2 + 0xbc) = temp_v2;
    *(unsigned int *)((int)pvVar2 + 0xc0) = temp_v4;
    FUN_004663fc(param_1->field_0x9c,(int)param_1->field_0xa3);
  }
  return;
}

} /* extern "C" */
