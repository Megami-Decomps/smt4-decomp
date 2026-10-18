/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00347f24` (_code @ 0x347f24, 0x2a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00347f24_arg0 fn_00347f24_arg0;
struct fn_00347f24_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0xc];
    void *field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    float field_0x1c; /* +0x1c */
    float field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    float field_0x28; /* +0x28 */
    float field_0x2c; /* +0x2c */
    float field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    float field_0x38; /* +0x38 */
    float field_0x3c; /* +0x3c */
    float field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    float field_0x58; /* +0x58 */
    float field_0x5c; /* +0x5c */
    void *field_0x60; /* +0x60 */
};

typedef int romwright_code();
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_00407ed0; /* 0x407ed0 */
extern unsigned int DAT_00407ed4; /* 0x407ed4 */
extern unsigned int DAT_00407ed8; /* 0x407ed8 */
extern unsigned int DAT_00407edc; /* 0x407edc */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0023e400. */


/* WARNING: Removing unreachable block (ram,0x00348104) */
/* WARNING: Removing unreachable block (ram,0x0034810c) */

void FUN_00347f24(fn_00347f24_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  float *pfVar6;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned int temp_v19;
  
  (**(romwright_code **)(*(int *)param_1->field_0x14 + 8))();
  if (0 < *(int *)param_1->field_0x60 + 1) {
    temp_v2 = 0;
    temp_v3 = *(int *)param_1->field_0x60 + 1;
    do {
      pfVar6 = (float *)(param_1->field_0x4 + temp_v2 * 0x14 + 0xc);
      temp_v3 = temp_v3 - 1;
      temp_v0 = temp_v2 * 0x14;
      temp_v2 = temp_v2 + 1;
      *pfVar6 = *pfVar6 + *(float *)((int)param_1->field_0x60 + 0x30);
      pfVar6 = (float *)(param_1->field_0x4 + temp_v0 + 0x10);
      *pfVar6 = *pfVar6 + *(float *)((int)param_1->field_0x60 + 0x34);
    } while (temp_v3 != 0);
  }
  temp_v7 = param_1->field_0x58 + *(float *)((int)param_1->field_0x60 + 0x38);
  param_1->field_0x58 = temp_v7;
  if ((int)temp_v7 >= 0x43b40000) {
    temp_v7 = temp_v7 - 360.0f;
    param_1->field_0x58 = temp_v7;
  }
  else {
    in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v7) << 0x1d);
    if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
      temp_v7 = temp_v7 + 360.0f;
      param_1->field_0x58 = temp_v7;
    }
  }
  temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v7 * 0.7111111f) << 0x1d);
  for (temp_v7 = romwright_fabs_4(temp_v7 * 0.7111111f); (int)temp_v7 >= 0x47800000; temp_v7 = temp_v7 - 65536.0f) {
  }
  temp_v9 = VectorFloatToUnsigned(0,3);
  temp_v10 = VectorFloatToUnsigned(0,3);
  temp_v11 = VectorFloatToUnsigned(temp_v7,3);
  temp_v5 = temp_v10;
  temp_v4 = temp_v9;
  temp_v6 = temp_v11;
  temp_v14 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v13 = (float)VectorUnsignedToFloat(temp_v10 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v12 = (float)VectorUnsignedToFloat(temp_v11 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v8 = (float)(&DAT_00407ed0)[temp_v4 * 4] + (0.0f - temp_v14) * (float)(&DAT_00407ed8)[temp_v4 * 4];
  temp_v16 = (float)(&DAT_00407ed4)[temp_v4 * 4] + (0.0f - temp_v14) * (float)(&DAT_00407edc)[temp_v4 * 4];
  temp_v14 = (float)(&DAT_00407ed0)[temp_v5 * 4] + (0.0f - temp_v13) * (float)(&DAT_00407ed8)[temp_v5 * 4];
  temp_v15 = (float)(&DAT_00407ed4)[temp_v5 * 4] + (0.0f - temp_v13) * (float)(&DAT_00407edc)[temp_v5 * 4];
  temp_v13 = (float)(&DAT_00407ed0)[temp_v6 * 4] + (temp_v7 - temp_v12) * (float)(&DAT_00407ed8)[temp_v6 * 4];
  temp_v7 = (float)(&DAT_00407ed4)[temp_v6 * 4] + (temp_v7 - temp_v12) * (float)(&DAT_00407edc)[temp_v6 * 4];
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v13 = -temp_v13;
  }
  param_1->field_0x18 = temp_v7 * temp_v15;
  param_1->field_0x3c = temp_v8 * temp_v15;
  param_1->field_0x40 = temp_v16 * temp_v15;
  param_1->field_0x1c = temp_v8 * temp_v7 * temp_v14 - temp_v16 * temp_v13;
  param_1->field_0x30 = temp_v16 * temp_v13 * temp_v14 - temp_v8 * temp_v7;
  param_1->field_0x20 = temp_v8 * temp_v13 + temp_v16 * temp_v7 * temp_v14;
  param_1->field_0x38 = -temp_v14;
  param_1->field_0x28 = temp_v13 * temp_v15;
  param_1->field_0x2c = temp_v16 * temp_v7 + temp_v8 * temp_v13 * temp_v14;
  param_1->field_0x24 = 0;
  param_1->field_0x34 = 0;
  param_1->field_0x44 = 0;
  param_1->field_0x48 = 0;
  param_1->field_0x4c = 0;
  param_1->field_0x50 = 0;
  param_1->field_0x54 = 0x3f800000;
  temp_v17 = param_1->field_0x5c + *(float *)((int)param_1->field_0x60 + 0x3c);
  param_1->field_0x5c = temp_v17;
  temp_v19 = 0x3f800000;
  temp_v18 = temp_v17;
  FUN_0023e400(&param_1->field_0x18,&param_1->field_0x18,&temp_v17);
  return;
}
