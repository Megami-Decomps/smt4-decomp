/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fb3c` (_code @ 0x30fb3c, 0x548 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0030fb3c_arg0 fn_0030fb3c_arg0;
struct fn_0030fb3c_arg0 {
    unsigned char pad_0x0[0x10];
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x54];
    float field_0x68; /* +0x68 */
    float field_0x6c; /* +0x6c */
    float field_0x70; /* +0x70 */
    float field_0x74; /* +0x74 */
    unsigned char pad_0x78[0x78];
    unsigned char field_0xf0; /* +0xf0 */
    unsigned char pad_0xf1[0x3];
    unsigned char field_0xf4; /* +0xf4 */
    unsigned char pad_0xf5[0x3];
    unsigned char field_0xf8; /* +0xf8 */
    unsigned char pad_0xf9[0x3];
    unsigned char field_0xfc; /* +0xfc */
    unsigned char pad_0xfd[0x3];
    unsigned char field_0x100; /* +0x100 */
    unsigned char pad_0x101[0x3];
    unsigned char field_0x104; /* +0x104 */
    unsigned char pad_0x105[0x3];
    unsigned char field_0x108; /* +0x108 */
    unsigned char pad_0x109[0x3];
    unsigned char field_0x10c; /* +0x10c */
    unsigned char pad_0x10d[0x3];
    unsigned char field_0x110; /* +0x110 */
    unsigned char pad_0x111[0x3];
    unsigned char field_0x114; /* +0x114 */
    unsigned char pad_0x115[0xb];
    float field_0x120; /* +0x120 */
    float field_0x124; /* +0x124 */
    float field_0x128; /* +0x128 */
    float field_0x12c; /* +0x12c */
    float field_0x130; /* +0x130 */
    float field_0x134; /* +0x134 */
    float field_0x138; /* +0x138 */
    float field_0x13c; /* +0x13c */
    float field_0x140; /* +0x140 */
    undefined4 field_0x144; /* +0x144 */
    undefined4 field_0x148; /* +0x148 */
    undefined4 field_0x14c; /* +0x14c */
};

/* stack frame of param_2: 27 slot(s), 108 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_2_stack;

extern unsigned int DAT_00407fc0; /* 0x407fc0 */
extern unsigned int DAT_00407fc4; /* 0x407fc4 */
extern unsigned int DAT_00407fc8; /* 0x407fc8 */
extern unsigned int DAT_00407fcc; /* 0x407fcc */
extern int DAT_004474f4; /* 0x4474f4 */

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
/* Supplied declaration required: FUN_002820a4. */
/* Supplied declaration required: FUN_002ad6d8. */


/* WARNING: Removing unreachable block (ram,0x0030ffd8) */
/* WARNING: Removing unreachable block (ram,0x0030fc78) */
/* WARNING: Removing unreachable block (ram,0x0030fc98) */
/* WARNING: Removing unreachable block (ram,0x0030ffe8) */
/* WARNING: Removing unreachable block (ram,0x0030fbd4) */

void FUN_0030fb3c(fn_0030fb3c_arg0 *param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1; 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  float *pfVar3;
  unsigned int in_fpscr;
  float in_s0;
  float in_s1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  unsigned int temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  unsigned int temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  unsigned int temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  
  temp_v13 = 0.7111111f;
  temp_v11 = 0.0f;
  temp_v12 = 65536.0f;
  if (param_1->field_0x10 != 0) {
    if (param_1->field_0x10 != 1) {
      return;
    }
    temp_v13 = param_1->field_0x74 * 0.7111111f;
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v13) << 0x1d);
    for (temp_v13 = romwright_fabs_4(temp_v13); (int)temp_v13 >= 0x47800000; temp_v13 = temp_v13 - 65536.0f) {
    }
    temp_v2 = VectorFloatToUnsigned(0,3);
    temp_v3 = VectorFloatToUnsigned(temp_v13,3);
    temp_v4 = VectorFloatToUnsigned(0,3);
    temp_v1 = temp_v2 & 0xff;
    temp_v6 = (float)VectorUnsignedToFloat(temp_v2 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v2 = temp_v3 & 0xff;
    temp_v8 = (float)VectorUnsignedToFloat(temp_v3 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v3 = temp_v4 & 0xff;
    temp_v12 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v7 = (float)(&DAT_00407fc0)[temp_v1 * 4] + (0.0f - temp_v6) * (float)(&DAT_00407fc8)[temp_v1 * 4];
    temp_v9 = (float)(&DAT_00407fc4)[temp_v1 * 4] + (0.0f - temp_v6) * (float)(&DAT_00407fcc)[temp_v1 * 4];
    temp_v34 = (float)(&DAT_00407fc0)[temp_v2 * 4] +
               (temp_v13 - temp_v8) * (float)(&DAT_00407fc8)[temp_v2 * 4];
    temp_v36 = (float)(&DAT_00407fc4)[temp_v2 * 4] +
               (temp_v13 - temp_v8) * (float)(&DAT_00407fcc)[temp_v2 * 4];
    temp_v6 = (float)(&DAT_00407fc0)[temp_v3 * 4] + (0.0f - temp_v12) * (float)(&DAT_00407fc8)[temp_v3 * 4];
    temp_v13 = (float)(&DAT_00407fc4)[temp_v3 * 4] + (0.0f - temp_v12) * (float)(&DAT_00407fcc)[temp_v3 * 4];
    if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
      temp_v34 = -temp_v34;
    }
    temp_v26 = temp_v13 * temp_v36;
    temp_v30 = temp_v6 * temp_v36;
    temp_v35 = temp_v7 * temp_v36;
    temp_v36 = temp_v9 * temp_v36;
    temp_v27 = temp_v7 * temp_v13 * temp_v34 - temp_v9 * temp_v6;
    temp_v32 = temp_v9 * temp_v6 * temp_v34 - temp_v7 * temp_v13;
    temp_v28 = temp_v7 * temp_v6 + temp_v9 * temp_v13 * temp_v34;
    temp_v31 = temp_v9 * temp_v13 + temp_v7 * temp_v6 * temp_v34;
  }
  else {
    temp_v6 = *(float *)(DAT_004474f4 + 0x4c) - param_1->field_0x68;
    FUN_002820a4();
    temp_v13 = temp_v6 * 57.32484f * temp_v13;
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11 <= temp_v13) << 0x1d);
    for (temp_v13 = romwright_fabs_4(temp_v13); temp_v6 = temp_v11, (int)temp_v13 >= 0x47800000; temp_v13 = temp_v13 - temp_v12) {
    }
    for (; (int)temp_v6 >= 0x47800000; temp_v6 = temp_v6 - temp_v12) {
    }
    temp_v4 = VectorFloatToUnsigned(temp_v11,3);
    temp_v1 = VectorFloatToUnsigned(temp_v13,3);
    temp_v5 = VectorFloatToUnsigned(temp_v6,3);
    temp_v2 = temp_v1 & 0xff;
    temp_v9 = (float)VectorUnsignedToFloat(temp_v1 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v1 = temp_v4 & 0xff;
    temp_v3 = temp_v5 & 0xff;
    temp_v12 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v7 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v8 = (float)(&DAT_00407fc0)[temp_v1 * 4] +
             (temp_v11 - temp_v12) * (float)(&DAT_00407fc8)[temp_v1 * 4];
    temp_v10 = (float)(&DAT_00407fc4)[temp_v1 * 4] +
             (temp_v11 - temp_v12) * (float)(&DAT_00407fcc)[temp_v1 * 4];
    temp_v34 = (float)(&DAT_00407fc0)[temp_v2 * 4] +
               (temp_v13 - temp_v9) * (float)(&DAT_00407fc8)[temp_v2 * 4];
    temp_v36 = (float)(&DAT_00407fc4)[temp_v2 * 4] +
               (temp_v13 - temp_v9) * (float)(&DAT_00407fcc)[temp_v2 * 4];
    temp_v12 = (float)(&DAT_00407fc0)[temp_v3 * 4] + (temp_v6 - temp_v7) * (float)(&DAT_00407fc8)[temp_v3 * 4]
    ;
    temp_v13 = (float)(&DAT_00407fc4)[temp_v3 * 4] + (temp_v6 - temp_v7) * (float)(&DAT_00407fcc)[temp_v3 * 4]
    ;
    if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
      temp_v34 = -temp_v34;
    }
    temp_v26 = temp_v13 * temp_v36;
    temp_v30 = temp_v12 * temp_v36;
    temp_v35 = temp_v8 * temp_v36;
    temp_v36 = temp_v10 * temp_v36;
    temp_v27 = temp_v8 * temp_v13 * temp_v34 - temp_v10 * temp_v12;
    temp_v32 = temp_v10 * temp_v12 * temp_v34 - temp_v8 * temp_v13;
    temp_v28 = temp_v8 * temp_v12 + temp_v10 * temp_v13 * temp_v34;
    temp_v31 = temp_v10 * temp_v13 + temp_v8 * temp_v12 * temp_v34;
  }
  temp_v34 = -temp_v34;
  temp_v13 = -in_s0;
  temp_v29 = 0;
  temp_v33 = 0;
  temp_v37 = 0;
  temp_v38 = temp_v13;
  temp_v40 = temp_v11;
  FUN_002ad6d8(&temp_v14,&temp_v26,&temp_v38);
  in_s1 = -in_s1;
  temp_v38 = temp_v13;
  temp_v39 = in_s1;
  temp_v40 = temp_v11;
  FUN_002ad6d8(&temp_v17,&temp_v26,&temp_v38);
  temp_v40 = temp_v11;
  FUN_002ad6d8(&temp_v20,&temp_v26,&temp_v38);
  temp_v39 = in_s1;
  temp_v40 = temp_v11;
  FUN_002ad6d8(&temp_v23,&temp_v26,&temp_v38);
  temp_v14 = temp_v14 + param_1->field_0x68;
  temp_v15 = temp_v15 + param_1->field_0x6c;
  temp_v16 = temp_v16 + param_1->field_0x70;
  temp_v17 = temp_v17 + param_1->field_0x68;
  temp_v18 = temp_v18 + param_1->field_0x6c;
  temp_v19 = temp_v19 + param_1->field_0x70;
  temp_v20 = temp_v20 + param_1->field_0x68;
  temp_v21 = temp_v21 + param_1->field_0x6c;
  temp_v22 = temp_v22 + param_1->field_0x70;
  temp_v13 = param_1->field_0x6c;
  temp_v11 = param_1->field_0x70;
  if (param_2 != 1) {
    param_1->field_0x120 = temp_v14;
    param_1->field_0x124 = temp_v15;
    param_1->field_0x128 = temp_v16;
    param_1->field_0x12c = temp_v17;
    param_1->field_0x130 = temp_v18;
    param_1->field_0x134 = temp_v19;
    pfVar3 = (float *)&param_1->field_0x144;
    param_1->field_0x138 = temp_v20;
    param_1->field_0x13c = temp_v21;
    param_1->field_0x140 = temp_v22;
  }
  else {
    *(float *)&param_1->field_0xf0 = temp_v14;
    *(float *)&param_1->field_0xf4 = temp_v15;
    *(float *)&param_1->field_0xf8 = temp_v16;
    *(float *)&param_1->field_0xfc = temp_v17;
    *(float *)&param_1->field_0x100 = temp_v18;
    *(float *)&param_1->field_0x104 = temp_v19;
    pfVar3 = (float *)&param_1->field_0x114;
    *(float *)&param_1->field_0x108 = temp_v20;
    *(float *)&param_1->field_0x10c = temp_v21;
    *(float *)&param_1->field_0x110 = temp_v22;
  }
  *pfVar3 = temp_v23 + param_1->field_0x68;
  pfVar3[1] = temp_v24 + temp_v13;
  pfVar3[2] = temp_v25 + temp_v11;
  return;
}
