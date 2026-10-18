/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025a8d8` (_code @ 0x25a8d8, 0xb30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0025a8d8_arg0 fn_0025a8d8_arg0;
struct fn_0025a8d8_arg0 {
    unsigned char pad_0x0[0x10];
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x48];
    float field_0x5c; /* +0x5c */
    float field_0x60; /* +0x60 */
    float field_0x64; /* +0x64 */
    float field_0x68; /* +0x68 */
    float field_0x6c; /* +0x6c */
    float field_0x70; /* +0x70 */
    float field_0x74; /* +0x74 */
    unsigned char pad_0x78[0x18];
    float field_0x90; /* +0x90 */
    float field_0x94; /* +0x94 */
    float field_0x98; /* +0x98 */
    float field_0x9c; /* +0x9c */
    float field_0xa0; /* +0xa0 */
    float field_0xa4; /* +0xa4 */
    float field_0xa8; /* +0xa8 */
    float field_0xac; /* +0xac */
    float field_0xb0; /* +0xb0 */
    float field_0xb4; /* +0xb4 */
    float field_0xb8; /* +0xb8 */
    float field_0xbc; /* +0xbc */
    unsigned char pad_0xc0[0x90];
    float field_0x150; /* +0x150 */
    float field_0x154; /* +0x154 */
    float field_0x158; /* +0x158 */
    float field_0x15c; /* +0x15c */
    float field_0x160; /* +0x160 */
    float field_0x164; /* +0x164 */
    float field_0x168; /* +0x168 */
    float field_0x16c; /* +0x16c */
    float field_0x170; /* +0x170 */
    float field_0x174; /* +0x174 */
    float field_0x178; /* +0x178 */
    float field_0x17c; /* +0x17c */
};

/* stack frame of param_1: 27 slot(s), 108 byte(s) */
typedef struct {
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
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
} param_1_stack;

extern unsigned int DAT_00407ed0; /* 0x407ed0 */
extern unsigned int DAT_00407ed4; /* 0x407ed4 */
extern unsigned int DAT_00407ed8; /* 0x407ed8 */
extern unsigned int DAT_00407edc; /* 0x407edc */
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
/* Supplied declaration required: FUN_00281e34. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x0025b084) */
/* WARNING: Removing unreachable block (ram,0x0025ad60) */
/* WARNING: Removing unreachable block (ram,0x0025aa38) */
/* WARNING: Removing unreachable block (ram,0x0025aa48) */
/* WARNING: Removing unreachable block (ram,0x0025b208) */
/* WARNING: Removing unreachable block (ram,0x0025b218) */
/* WARNING: Removing unreachable block (ram,0x0025b094) */
/* WARNING: Removing unreachable block (ram,0x0025b14c) */
/* WARNING: Removing unreachable block (ram,0x0025a988) */
/* WARNING: Removing unreachable block (ram,0x0025ad74) */

void FUN_0025a8d8(fn_0025a8d8_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2; 18 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  float in_s0;
  float temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  float in_s1;
  float in_s2;
  float temp_v7;
  unsigned int temp_v8;
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
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  unsigned int temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  unsigned int temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  unsigned int temp_v42;
  float temp_v43;
  float temp_v44;
  float temp_v45;
  
  temp_v13 = in_s0 + in_s2;
  temp_v14 = in_s2 - in_s0;
  temp_v0 = param_1->field_0x10;
  temp_v12 = -in_s1;
  temp_v18 = 0.7111111f;
  temp_v16 = 0.0f;
  temp_v15 = 65536.0f;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 == 2) {
        temp_v3 = param_1->field_0x74 * 0.7111111f;
        temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v3) << 0x1d);
        for (temp_v3 = romwright_fabs_4(temp_v3); (int)temp_v3 >= 0x47800000; temp_v3 = temp_v3 - 65536.0f) {
        }
        temp_v4 = VectorFloatToUnsigned(0,3);
        temp_v5 = VectorFloatToUnsigned(temp_v3,3);
        temp_v6 = VectorFloatToUnsigned(0,3);
        temp_v1 = temp_v4 & 0xff;
        temp_v9 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
        temp_v4 = temp_v5 & 0xff;
        temp_v7 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
        temp_v5 = temp_v6 & 0xff;
        temp_v11 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
        temp_v17 = -150.0f;
        temp_v10 = (float)(&DAT_00407ed0)[temp_v4 * 4] +
                 (temp_v3 - temp_v7) * (float)(&DAT_00407ed8)[temp_v4 * 4];
        temp_v41 = (float)(&DAT_00407ed4)[temp_v4 * 4] +
                   (temp_v3 - temp_v7) * (float)(&DAT_00407edc)[temp_v4 * 4];
        temp_v3 = (float)(&DAT_00407ed0)[temp_v1 * 4] +
                (0.0f - temp_v9) * (float)(&DAT_00407ed8)[temp_v1 * 4];
        temp_v7 = (float)(&DAT_00407ed4)[temp_v1 * 4] +
                (0.0f - temp_v9) * (float)(&DAT_00407edc)[temp_v1 * 4];
        temp_v9 = (float)(&DAT_00407ed0)[temp_v5 * 4] +
                 (0.0f - temp_v11) * (float)(&DAT_00407ed8)[temp_v5 * 4];
        temp_v11 = (float)(&DAT_00407ed4)[temp_v5 * 4] +
                 (0.0f - temp_v11) * (float)(&DAT_00407edc)[temp_v5 * 4];
        if (!romwright_subpiece_4_1_0(temp_v2 >> 0x1d,0)) {
          temp_v10 = -temp_v10;
        }
        temp_v31 = temp_v11 * temp_v41;
        temp_v39 = -temp_v10;
        temp_v35 = temp_v9 * temp_v41;
        temp_v40 = temp_v3 * temp_v41;
        temp_v41 = temp_v7 * temp_v41;
        temp_v32 = temp_v3 * temp_v11 * temp_v10 - temp_v7 * temp_v9;
        temp_v37 = temp_v7 * temp_v9 * temp_v10 - temp_v3 * temp_v11;
        temp_v33 = temp_v3 * temp_v9 + temp_v7 * temp_v11 * temp_v10;
        temp_v36 = temp_v7 * temp_v11 + temp_v3 * temp_v9 * temp_v10;
        temp_v34 = 0;
        temp_v38 = 0;
        temp_v42 = 0;
        temp_v43 = -150.0f;
        temp_v44 = 0.0f;
        temp_v45 = -150.0f;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v19,&temp_v31,&temp_v43);
        temp_v3 = 150.0f;
        temp_v45 = 150.0f;
        temp_v43 = temp_v17;
        temp_v44 = temp_v16;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v22,&temp_v31,&temp_v43);
        temp_v43 = temp_v3;
        temp_v44 = temp_v16;
        temp_v45 = temp_v17;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v25,&temp_v31,&temp_v43);
        temp_v43 = temp_v3;
        temp_v44 = temp_v16;
        temp_v45 = temp_v3;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v28,&temp_v31,&temp_v43);
        temp_v19 = temp_v19 + param_1->field_0x5c;
        temp_v20 = temp_v20 + param_1->field_0x60;
        temp_v21 = temp_v21 + param_1->field_0x64;
        temp_v22 = temp_v22 + param_1->field_0x5c;
        temp_v23 = temp_v23 + param_1->field_0x60;
        temp_v24 = temp_v24 + param_1->field_0x64;
        temp_v25 = temp_v25 + param_1->field_0x5c;
        temp_v26 = temp_v26 + param_1->field_0x60;
        temp_v27 = temp_v27 + param_1->field_0x64;
        temp_v28 = temp_v28 + param_1->field_0x5c;
        temp_v29 = temp_v29 + param_1->field_0x60;
        temp_v30 = temp_v30 + param_1->field_0x64;
        param_1->field_0x150 = temp_v19;
        param_1->field_0x154 = temp_v20;
        param_1->field_0x158 = temp_v21;
        param_1->field_0x15c = temp_v22;
        param_1->field_0x160 = temp_v23;
        param_1->field_0x164 = temp_v24;
        param_1->field_0x168 = temp_v25;
        param_1->field_0x16c = temp_v26;
        param_1->field_0x170 = temp_v27;
        param_1->field_0x174 = temp_v28;
        param_1->field_0x178 = temp_v29;
        param_1->field_0x17c = temp_v30;
        temp_v18 = (*(float *)(DAT_004474f4 + 0x18) + 180.0f) * temp_v18;
        temp_v2 = (temp_v2 & 0xfffffff) | ((unsigned int)(temp_v16 <= temp_v18) << 0x1d);
        for (temp_v18 = romwright_fabs_4(temp_v18); temp_v3 = temp_v16, (int)temp_v18 >= 0x47800000;
            temp_v18 = temp_v18 - temp_v15) {
        }
        for (; (int)temp_v3 >= 0x47800000; temp_v3 = temp_v3 - temp_v15) {
        }
        temp_v4 = VectorFloatToUnsigned(temp_v16,3);
        temp_v1 = VectorFloatToUnsigned(temp_v18,3);
        temp_v5 = VectorFloatToUnsigned(temp_v3,3);
        temp_v9 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
        temp_v15 = (float)VectorUnsignedToFloat(temp_v1 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
        temp_v7 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
        temp_v4 = temp_v4 & 0xff;
        temp_v1 = temp_v1 & 0xff;
        temp_v5 = temp_v5 & 0xff;
        temp_v10 = (float)(&DAT_00407ed0)[temp_v4 * 4] +
                 (temp_v16 - temp_v9) * (float)(&DAT_00407ed8)[temp_v4 * 4];
        temp_v11 = (float)(&DAT_00407ed4)[temp_v4 * 4] +
                 (temp_v16 - temp_v9) * (float)(&DAT_00407edc)[temp_v4 * 4];
        temp_v9 = (float)(&DAT_00407ed0)[temp_v1 * 4] +
                 (temp_v18 - temp_v15) * (float)(&DAT_00407ed8)[temp_v1 * 4];
        temp_v41 = (float)(&DAT_00407ed4)[temp_v1 * 4] +
                   (temp_v18 - temp_v15) * (float)(&DAT_00407edc)[temp_v1 * 4];
        temp_v18 = (float)(&DAT_00407ed0)[temp_v5 * 4] +
                 (temp_v3 - temp_v7) * (float)(&DAT_00407ed8)[temp_v5 * 4];
        temp_v15 = (float)(&DAT_00407ed4)[temp_v5 * 4] +
                 (temp_v3 - temp_v7) * (float)(&DAT_00407edc)[temp_v5 * 4];
        if (!romwright_subpiece_4_1_0(temp_v2 >> 0x1d,0)) {
          temp_v9 = -temp_v9;
        }
        temp_v40 = temp_v10 * temp_v41;
        temp_v31 = temp_v15 * temp_v41;
        temp_v39 = -temp_v9;
        temp_v35 = temp_v18 * temp_v41;
        temp_v41 = temp_v11 * temp_v41;
        temp_v32 = temp_v10 * temp_v15 * temp_v9 - temp_v11 * temp_v18;
        temp_v33 = temp_v10 * temp_v18 + temp_v11 * temp_v15 * temp_v9;
        temp_v37 = temp_v11 * temp_v18 * temp_v9 - temp_v10 * temp_v15;
        temp_v36 = temp_v11 * temp_v15 + temp_v10 * temp_v18 * temp_v9;
        temp_v34 = 0;
        temp_v38 = 0;
        temp_v42 = 0;
        temp_v43 = temp_v14;
        temp_v45 = temp_v16;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v19,&temp_v31,&temp_v43);
        temp_v43 = temp_v14;
        temp_v44 = temp_v12;
        temp_v45 = temp_v16;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v22,&temp_v31,&temp_v43);
        temp_v43 = temp_v13;
        temp_v45 = temp_v16;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v25,&temp_v31,&temp_v43);
        temp_v43 = temp_v13;
        temp_v44 = temp_v12;
        temp_v45 = temp_v16;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v28,&temp_v31,&temp_v43);
        param_1->field_0x90 = temp_v19 + param_1->field_0x68;
        param_1->field_0x94 = temp_v20 + param_1->field_0x6c;
        param_1->field_0x98 = temp_v21 + param_1->field_0x70;
        param_1->field_0x9c = temp_v22 + param_1->field_0x68;
        param_1->field_0xa0 = temp_v23 + param_1->field_0x6c;
        param_1->field_0xa4 = temp_v24 + param_1->field_0x70;
        param_1->field_0xa8 = temp_v25 + param_1->field_0x68;
        param_1->field_0xac = temp_v26 + param_1->field_0x6c;
        param_1->field_0xb0 = temp_v27 + param_1->field_0x70;
        param_1->field_0xb4 = temp_v28 + param_1->field_0x68;
        param_1->field_0xb8 = temp_v29 + param_1->field_0x6c;
        param_1->field_0xbc = temp_v30 + param_1->field_0x70;
      }
      return;
    }
    temp_v18 = param_1->field_0x74 * 0.7111111f;
    temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v18) << 0x1d);
    for (temp_v18 = romwright_fabs_4(temp_v18); (int)temp_v18 >= 0x47800000; temp_v18 = temp_v18 - 65536.0f) {
    }
    temp_v4 = VectorFloatToUnsigned(0,3);
    temp_v6 = VectorFloatToUnsigned(temp_v18,3);
    temp_v8 = VectorFloatToUnsigned(0,3);
    temp_v1 = temp_v4 & 0xff;
    temp_v9 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v5 = temp_v6 & 0xff;
    temp_v4 = temp_v8 & 0xff;
    temp_v3 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v15 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v7 = (float)(&DAT_00407ed0)[temp_v1 * 4] + (0.0f - temp_v9) * (float)(&DAT_00407ed8)[temp_v1 * 4];
    temp_v9 = (float)(&DAT_00407ed4)[temp_v1 * 4] + (0.0f - temp_v9) * (float)(&DAT_00407edc)[temp_v1 * 4];
    temp_v39 = (float)(&DAT_00407ed0)[temp_v5 * 4] +
               (temp_v18 - temp_v15) * (float)(&DAT_00407ed8)[temp_v5 * 4];
    temp_v41 = (float)(&DAT_00407ed4)[temp_v5 * 4] +
               (temp_v18 - temp_v15) * (float)(&DAT_00407edc)[temp_v5 * 4];
    temp_v18 = (float)(&DAT_00407ed0)[temp_v4 * 4] + (0.0f - temp_v3) * (float)(&DAT_00407ed8)[temp_v4 * 4];
    temp_v15 = (float)(&DAT_00407ed4)[temp_v4 * 4] + (0.0f - temp_v3) * (float)(&DAT_00407edc)[temp_v4 * 4];
    if (!romwright_subpiece_4_1_0(temp_v2 >> 0x1d,0)) {
      temp_v39 = -temp_v39;
    }
    temp_v31 = temp_v15 * temp_v41;
    temp_v35 = temp_v18 * temp_v41;
    temp_v40 = temp_v7 * temp_v41;
    temp_v41 = temp_v9 * temp_v41;
    temp_v32 = temp_v7 * temp_v15 * temp_v39 - temp_v9 * temp_v18;
    temp_v37 = temp_v9 * temp_v18 * temp_v39 - temp_v7 * temp_v15;
    temp_v33 = temp_v7 * temp_v18 + temp_v9 * temp_v15 * temp_v39;
    temp_v36 = temp_v9 * temp_v15 + temp_v7 * temp_v18 * temp_v39;
  }
  else {
    temp_v3 = *(float *)(DAT_004474f4 + 0x4c) - param_1->field_0x68;
    FUN_00281e34();
    temp_v18 = temp_v3 * 57.32484f * temp_v18;
    temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v16 <= temp_v18) << 0x1d);
    for (temp_v18 = romwright_fabs_4(temp_v18); temp_v3 = temp_v16, (int)temp_v18 >= 0x47800000; temp_v18 = temp_v18 - temp_v15) {
    }
    for (; (int)temp_v3 >= 0x47800000; temp_v3 = temp_v3 - temp_v15) {
    }
    temp_v4 = VectorFloatToUnsigned(temp_v16,3);
    temp_v6 = VectorFloatToUnsigned(temp_v18,3);
    temp_v8 = VectorFloatToUnsigned(temp_v3,3);
    temp_v1 = temp_v4 & 0xff;
    temp_v10 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v5 = temp_v6 & 0xff;
    temp_v4 = temp_v8 & 0xff;
    temp_v7 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v15 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v9 = (float)(&DAT_00407ed0)[temp_v1 * 4] +
             (temp_v16 - temp_v10) * (float)(&DAT_00407ed8)[temp_v1 * 4];
    temp_v10 = (float)(&DAT_00407ed4)[temp_v1 * 4] +
             (temp_v16 - temp_v10) * (float)(&DAT_00407edc)[temp_v1 * 4];
    temp_v39 = (float)(&DAT_00407ed0)[temp_v5 * 4] +
               (temp_v18 - temp_v15) * (float)(&DAT_00407ed8)[temp_v5 * 4];
    temp_v41 = (float)(&DAT_00407ed4)[temp_v5 * 4] +
               (temp_v18 - temp_v15) * (float)(&DAT_00407edc)[temp_v5 * 4];
    temp_v18 = (float)(&DAT_00407ed0)[temp_v4 * 4] + (temp_v3 - temp_v7) * (float)(&DAT_00407ed8)[temp_v4 * 4]
    ;
    temp_v15 = (float)(&DAT_00407ed4)[temp_v4 * 4] + (temp_v3 - temp_v7) * (float)(&DAT_00407edc)[temp_v4 * 4]
    ;
    if (!romwright_subpiece_4_1_0(temp_v2 >> 0x1d,0)) {
      temp_v39 = -temp_v39;
    }
    temp_v31 = temp_v15 * temp_v41;
    temp_v35 = temp_v18 * temp_v41;
    temp_v40 = temp_v9 * temp_v41;
    temp_v41 = temp_v10 * temp_v41;
    temp_v32 = temp_v9 * temp_v15 * temp_v39 - temp_v10 * temp_v18;
    temp_v37 = temp_v10 * temp_v18 * temp_v39 - temp_v9 * temp_v15;
    temp_v33 = temp_v9 * temp_v18 + temp_v10 * temp_v15 * temp_v39;
    temp_v36 = temp_v10 * temp_v15 + temp_v9 * temp_v18 * temp_v39;
  }
  temp_v39 = -temp_v39;
  temp_v34 = 0;
  temp_v38 = 0;
  temp_v42 = 0;
  temp_v43 = temp_v14;
  temp_v45 = temp_v16;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v19,&temp_v31,&temp_v43);
  temp_v43 = temp_v14;
  temp_v44 = temp_v12;
  temp_v45 = temp_v16;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v22,&temp_v31,&temp_v43);
  temp_v43 = temp_v13;
  temp_v45 = temp_v16;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v25,&temp_v31,&temp_v43);
  temp_v43 = temp_v13;
  temp_v44 = temp_v12;
  temp_v45 = temp_v16;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v28,&temp_v31,&temp_v43);
  param_1->field_0x90 = temp_v19 + param_1->field_0x68;
  param_1->field_0x94 = temp_v20 + param_1->field_0x6c;
  param_1->field_0x98 = temp_v21 + param_1->field_0x70;
  param_1->field_0x9c = temp_v22 + param_1->field_0x68;
  param_1->field_0xa0 = temp_v23 + param_1->field_0x6c;
  param_1->field_0xa4 = temp_v24 + param_1->field_0x70;
  param_1->field_0xa8 = temp_v25 + param_1->field_0x68;
  param_1->field_0xac = temp_v26 + param_1->field_0x6c;
  param_1->field_0xb0 = temp_v27 + param_1->field_0x70;
  param_1->field_0xb4 = temp_v28 + param_1->field_0x68;
  param_1->field_0xb8 = temp_v29 + param_1->field_0x6c;
  param_1->field_0xbc = temp_v30 + param_1->field_0x70;
  return;
}
