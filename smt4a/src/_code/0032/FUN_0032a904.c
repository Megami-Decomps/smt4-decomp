/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032a904` (_code @ 0x32a904, 0x6d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0032a904_arg0 fn_0032a904_arg0;
struct fn_0032a904_arg0 {
    unsigned char pad_0x0[0x10];
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x54];
    float field_0x68; /* +0x68 */
    float field_0x6c; /* +0x6c */
    float field_0x70; /* +0x70 */
    unsigned char field_0x74; /* +0x74 */
    unsigned char pad_0x75[0x4b];
    float field_0xc0; /* +0xc0 */
    float field_0xc4; /* +0xc4 */
    float field_0xc8; /* +0xc8 */
    float field_0xcc; /* +0xcc */
    float field_0xd0; /* +0xd0 */
    float field_0xd4; /* +0xd4 */
    float field_0xd8; /* +0xd8 */
    float field_0xdc; /* +0xdc */
    float field_0xe0; /* +0xe0 */
    float field_0xe4; /* +0xe4 */
    float field_0xe8; /* +0xe8 */
    float field_0xec; /* +0xec */
};

/* stack frame of param_1: 27 slot(s), 108 byte(s) */
typedef struct {
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
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
} param_1_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern int DAT_005806a4; /* 0x5806a4 */

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
/* Supplied declaration required: FUN_0050d8e4. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x0032ade0) */
/* WARNING: Removing unreachable block (ram,0x0032af68) */
/* WARNING: Removing unreachable block (ram,0x0032af78) */
/* WARNING: Removing unreachable block (ram,0x0032aa70) */
/* WARNING: Removing unreachable block (ram,0x0032adf0) */
/* WARNING: Removing unreachable block (ram,0x0032a9bc) */
/* WARNING: Removing unreachable block (ram,0x0032aea8) */
/* WARNING: Removing unreachable block (ram,0x0032aa80) */

void FUN_0032a904(fn_0032a904_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2, in_s3; 13 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float in_s0;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  float in_s1;
  float in_s2;
  float in_s3;
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
  float temp_v29;
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
  unsigned int temp_v41;
  
  temp_v2 = param_1->field_0x10;
  temp_v14 = 0.7111111f;
  temp_v12 = 0.0f;
  temp_v13 = 65536.0f;
  if (temp_v2 != 0) {
    if (temp_v2 != 1) {
      if (temp_v2 != 2) {
        return;
      }
      temp_v14 = (*(float *)(DAT_005806a4 + 0x18) + 180.0f) * 0.7111111f;
      temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v14) << 0x1d);
      for (temp_v14 = romwright_fabs_4(temp_v14); (int)temp_v14 >= 0x47800000; temp_v14 = temp_v14 - 65536.0f) {
      }
      temp_v4 = VectorFloatToUnsigned(0,3);
      temp_v5 = VectorFloatToUnsigned(temp_v14,3);
      temp_v6 = VectorFloatToUnsigned(0,3);
      temp_v1 = temp_v4;
      temp_v7 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v3 = temp_v5;
      temp_v9 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v4 = temp_v6 & 0xff;
      temp_v13 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v10 = (float)(&DAT_00536d14)[temp_v3 * 4] +
               (temp_v14 - temp_v9) * (float)(&DAT_00536d1c)[temp_v3 * 4];
      temp_v40 = (float)(&DAT_00536d18)[temp_v3 * 4] +
                 (temp_v14 - temp_v9) * (float)(&DAT_00536d20)[temp_v3 * 4];
      temp_v14 = (float)(&DAT_00536d14)[temp_v1 * 4] + (0.0f - temp_v7) * (float)(&DAT_00536d1c)[temp_v1 * 4]
      ;
      temp_v9 = (float)(&DAT_00536d18)[temp_v1 * 4] + (0.0f - temp_v7) * (float)(&DAT_00536d20)[temp_v1 * 4]
      ;
      temp_v7 = (float)(&DAT_00536d14)[temp_v4 * 4] + (0.0f - temp_v13) * (float)(&DAT_00536d1c)[temp_v4 * 4]
      ;
      temp_v13 = (float)(&DAT_00536d18)[temp_v4 * 4] +
               (0.0f - temp_v13) * (float)(&DAT_00536d20)[temp_v4 * 4];
      if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
        temp_v10 = -temp_v10;
      }
      temp_v30 = temp_v13 * temp_v40;
      temp_v38 = -temp_v10;
      temp_v34 = temp_v7 * temp_v40;
      temp_v39 = temp_v14 * temp_v40;
      temp_v40 = temp_v9 * temp_v40;
      temp_v31 = temp_v14 * temp_v13 * temp_v10 - temp_v9 * temp_v7;
      temp_v36 = temp_v9 * temp_v7 * temp_v10 - temp_v14 * temp_v13;
      temp_v32 = temp_v14 * temp_v7 + temp_v9 * temp_v13 * temp_v10;
      temp_v35 = temp_v9 * temp_v13 + temp_v14 * temp_v7 * temp_v10;
    }
    else {
      temp_v14 = *(float *)&param_1->field_0x74 * 0.7111111f;
      temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v14) << 0x1d);
      for (temp_v14 = romwright_fabs_4(temp_v14); (int)temp_v14 >= 0x47800000; temp_v14 = temp_v14 - 65536.0f) {
      }
      temp_v4 = VectorFloatToUnsigned(0,3);
      temp_v5 = VectorFloatToUnsigned(temp_v14,3);
      temp_v6 = VectorFloatToUnsigned(0,3);
      temp_v1 = temp_v4;
      temp_v9 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v3 = temp_v5;
      temp_v7 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v4 = temp_v6 & 0xff;
      temp_v13 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v10 = (float)(&DAT_00536d14)[temp_v3 * 4] +
               (temp_v14 - temp_v7) * (float)(&DAT_00536d1c)[temp_v3 * 4];
      temp_v40 = (float)(&DAT_00536d18)[temp_v3 * 4] +
                 (temp_v14 - temp_v7) * (float)(&DAT_00536d20)[temp_v3 * 4];
      temp_v14 = (float)(&DAT_00536d14)[temp_v1 * 4] +
               (0.0f - temp_v9) * (float)(&DAT_00536d1c)[temp_v1 * 4];
      temp_v9 = (float)(&DAT_00536d18)[temp_v1 * 4] +
               (0.0f - temp_v9) * (float)(&DAT_00536d20)[temp_v1 * 4];
      temp_v7 = (float)(&DAT_00536d14)[temp_v4 * 4] + (0.0f - temp_v13) * (float)(&DAT_00536d1c)[temp_v4 * 4]
      ;
      temp_v13 = (float)(&DAT_00536d18)[temp_v4 * 4] +
               (0.0f - temp_v13) * (float)(&DAT_00536d20)[temp_v4 * 4];
      if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
        temp_v10 = -temp_v10;
      }
      temp_v39 = temp_v14 * temp_v40;
      temp_v30 = temp_v13 * temp_v40;
      temp_v38 = -temp_v10;
      temp_v34 = temp_v7 * temp_v40;
      temp_v40 = temp_v9 * temp_v40;
      temp_v32 = temp_v14 * temp_v7 + temp_v9 * temp_v13 * temp_v10;
      temp_v35 = temp_v9 * temp_v13 + temp_v14 * temp_v7 * temp_v10;
      temp_v31 = temp_v14 * temp_v13 * temp_v10 - temp_v9 * temp_v7;
      temp_v36 = temp_v9 * temp_v7 * temp_v10 - temp_v14 * temp_v13;
    }
  }
  else {
    temp_v7 = *(float *)(DAT_005806a4 + 0x50) - param_1->field_0x68;
    FUN_0050d8e4();
    temp_v14 = temp_v7 * 57.32484f * temp_v14;
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 <= temp_v14) << 0x1d);
    for (temp_v14 = romwright_fabs_4(temp_v14); temp_v7 = temp_v12, (int)temp_v14 >= 0x47800000; temp_v14 = temp_v14 - temp_v13) {
    }
    for (; (int)temp_v7 >= 0x47800000; temp_v7 = temp_v7 - temp_v13) {
    }
    temp_v4 = VectorFloatToUnsigned(temp_v12,3);
    temp_v5 = VectorFloatToUnsigned(temp_v14,3);
    temp_v6 = VectorFloatToUnsigned(temp_v7,3);
    temp_v1 = temp_v4;
    temp_v9 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v3 = temp_v5;
    temp_v10 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v4 = temp_v6 & 0xff;
    temp_v13 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v8 = (float)(&DAT_00536d14)[temp_v1 * 4] +
            (temp_v12 - temp_v9) * (float)(&DAT_00536d1c)[temp_v1 * 4];
    temp_v11 = (float)(&DAT_00536d18)[temp_v1 * 4] +
             (temp_v12 - temp_v9) * (float)(&DAT_00536d20)[temp_v1 * 4];
    temp_v9 = (float)(&DAT_00536d14)[temp_v3 * 4] +
             (temp_v14 - temp_v10) * (float)(&DAT_00536d1c)[temp_v3 * 4];
    temp_v40 = (float)(&DAT_00536d18)[temp_v3 * 4] +
               (temp_v14 - temp_v10) * (float)(&DAT_00536d20)[temp_v3 * 4];
    temp_v14 = (float)(&DAT_00536d14)[temp_v4 * 4] +
             (temp_v7 - temp_v13) * (float)(&DAT_00536d1c)[temp_v4 * 4];
    temp_v13 = (float)(&DAT_00536d18)[temp_v4 * 4] +
             (temp_v7 - temp_v13) * (float)(&DAT_00536d20)[temp_v4 * 4];
    if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
      temp_v9 = -temp_v9;
    }
    temp_v39 = temp_v8 * temp_v40;
    temp_v30 = temp_v13 * temp_v40;
    temp_v38 = -temp_v9;
    temp_v34 = temp_v14 * temp_v40;
    temp_v40 = temp_v11 * temp_v40;
    temp_v31 = temp_v8 * temp_v13 * temp_v9 - temp_v11 * temp_v14;
    temp_v32 = temp_v8 * temp_v14 + temp_v11 * temp_v13 * temp_v9;
    temp_v36 = temp_v11 * temp_v14 * temp_v9 - temp_v8 * temp_v13;
    temp_v35 = temp_v11 * temp_v13 + temp_v8 * temp_v14 * temp_v9;
  }
  temp_v13 = 0.5f;
  temp_v33 = 0;
  temp_v37 = 0;
  temp_v41 = 0;
  temp_v14 = in_s3 + in_s1 * 0.5f;
  temp_v28 = temp_v14;
  temp_v29 = temp_v12;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v15,&temp_v30,&temp_v27);
  temp_v13 = in_s3 - in_s1 * temp_v13;
  temp_v28 = temp_v13;
  temp_v29 = temp_v12;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v18,&temp_v30,&temp_v27);
  in_s2 = in_s2 + in_s0;
  temp_v27 = in_s2;
  temp_v28 = temp_v14;
  temp_v29 = temp_v12;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v21,&temp_v30,&temp_v27);
  temp_v27 = in_s2;
  temp_v28 = temp_v13;
  temp_v29 = temp_v12;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v24,&temp_v30,&temp_v27);
  param_1->field_0xc0 = temp_v15 + param_1->field_0x68;
  param_1->field_0xc4 = temp_v16 + param_1->field_0x6c;
  param_1->field_0xc8 = temp_v17 + param_1->field_0x70;
  param_1->field_0xcc = temp_v18 + param_1->field_0x68;
  param_1->field_0xd0 = temp_v19 + param_1->field_0x6c;
  param_1->field_0xd4 = temp_v20 + param_1->field_0x70;
  param_1->field_0xd8 = temp_v21 + param_1->field_0x68;
  param_1->field_0xdc = temp_v22 + param_1->field_0x6c;
  param_1->field_0xe0 = temp_v23 + param_1->field_0x70;
  param_1->field_0xe4 = temp_v24 + param_1->field_0x68;
  param_1->field_0xe8 = temp_v25 + param_1->field_0x6c;
  param_1->field_0xec = temp_v26 + param_1->field_0x70;
  return;
}
