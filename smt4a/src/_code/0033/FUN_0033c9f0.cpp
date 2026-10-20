/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033c9f0` (_code @ 0x33c9f0, 0xcd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c0b98(...);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(...);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(...);

typedef struct fn_0033c9f0_arg0 fn_0033c9f0_arg0;
struct fn_0033c9f0_arg0 {
    unsigned char pad_0x0[0xc];
    float field_0xc; /* +0xc */
    float field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x1c];
    undefined4 field_0x38; /* +0x38 */
};

/* stack frame of param_2: 40 slot(s), 160 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
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
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
    unsigned int sp16C; /* 0x16c: local_16c */
    unsigned int sp170; /* 0x170: local_170 */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp178; /* 0x178: local_178 */
    unsigned int sp180; /* 0x180: local_180 */
    unsigned int sp184; /* 0x184: local_184 */
    unsigned int sp188; /* 0x188: local_188 */
} param_2_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */

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
/* Supplied declaration required: FUN_002c0b98. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x0033d4f4) */
/* WARNING: Removing unreachable block (ram,0x0033d1d0) */
/* WARNING: Removing unreachable block (ram,0x0033ced0) */
/* WARNING: Removing unreachable block (ram,0x0033cb88) */
/* WARNING: Removing unreachable block (ram,0x0033cb98) */
/* WARNING: Removing unreachable block (ram,0x0033cee0) */
/* WARNING: Removing unreachable block (ram,0x0033d1e0) */
/* WARNING: Removing unreachable block (ram,0x0033d504) */
/* WARNING: Removing unreachable block (ram,0x0033cadc) */

void FUN_0033c9f0(fn_0033c9f0_arg0 *param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  unsigned int temp_v1;
  float temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
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
  unsigned int temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned int temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  unsigned int temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  unsigned int temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  unsigned int temp_v36;
  float temp_v37;
  float temp_v38;
  unsigned int temp_v39;
  float temp_v40;
  unsigned int temp_v41;
  float temp_v42;
  unsigned char temp_v43 [52];
  float temp_v44;
  float temp_v45;
  float temp_v46;
  float temp_v47;
  float temp_v48;
  float temp_v49;
  float temp_v50;
  float temp_v51;
  float temp_v52;
  float temp_v53;
  float temp_v54;
  float temp_v55;
  float temp_v56;
  unsigned int temp_v57;
  float temp_v58;
  float temp_v59;
  float temp_v60;
  float temp_v61;
  
  temp_v16 = 100.0f;
  temp_v17 = 0x43960000;
  if (param_2 == 2) {
    temp_v15 = temp_v16;
    temp_v16 = 40.0f;
  }
  else {
    temp_v15 = 250.0f;
    if (param_2 == 5 || param_2 == 6) {
      temp_v15 = 580.0f;
    }
  }
  temp_v2 = 0.0f;
  temp_v20 = 0x3f800000;
  temp_v21 = 0.7111111f;
  temp_v18 = -temp_v15;
  temp_v23 = 0.0f;
  temp_v60 = 0.0f;
  temp_v57 = 0x43960000;
  temp_v41 = 0x43960000;
  temp_v37 = 0.0f;
  temp_v38 = 0.0f;
  temp_v39 = 0x3f800000;
  temp_v3 = param_1->field_0x18 * 0.7111111f;
  temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v3) << 0x1d);
  temp_v19 = 65536.0f;
  for (temp_v3 = romwright_fabs_4(temp_v3); (int)temp_v3 >= 0x47800000; temp_v3 = temp_v3 - 65536.0f) {
  }
  temp_v4 = VectorFloatToUnsigned(0,3);
  temp_v5 = VectorFloatToUnsigned(temp_v3,3);
  temp_v6 = VectorFloatToUnsigned(0,3);
  temp_v0 = temp_v4 & 0xff;
  temp_v9 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v4 = temp_v5 & 0xff;
  temp_v13 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v5 = temp_v6 & 0xff;
  temp_v7 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v10 = (float)(&DAT_00536d14)[temp_v4 * 4] + (temp_v3 - temp_v13) * (float)(&DAT_00536d1c)[temp_v4 * 4];
  temp_v35 = (float)(&DAT_00536d18)[temp_v4 * 4] +
              (temp_v3 - temp_v13) * (float)(&DAT_00536d20)[temp_v4 * 4];
  temp_v3 = (float)(&DAT_00536d14)[temp_v0 * 4] + (0.0f - temp_v9) * (float)(&DAT_00536d1c)[temp_v0 * 4];
  temp_v9 = (float)(&DAT_00536d18)[temp_v0 * 4] + (0.0f - temp_v9) * (float)(&DAT_00536d20)[temp_v0 * 4];
  temp_v13 = (float)(&DAT_00536d14)[temp_v5 * 4] + (0.0f - temp_v7) * (float)(&DAT_00536d1c)[temp_v5 * 4];
  temp_v7 = (float)(&DAT_00536d18)[temp_v5 * 4] + (0.0f - temp_v7) * (float)(&DAT_00536d20)[temp_v5 * 4];
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v10 = -temp_v10;
  }
  temp_v25 = temp_v7 * temp_v35;
  temp_v33 = -temp_v10;
  temp_v29 = temp_v13 * temp_v35;
  temp_v34 = temp_v3 * temp_v35;
  temp_v35 = temp_v9 * temp_v35;
  temp_v26 = temp_v3 * temp_v7 * temp_v10 - temp_v9 * temp_v13;
  temp_v31 = temp_v9 * temp_v13 * temp_v10 - temp_v3 * temp_v7;
  temp_v27 = temp_v3 * temp_v13 + temp_v9 * temp_v7 * temp_v10;
  temp_v30 = temp_v9 * temp_v7 + temp_v3 * temp_v13 * temp_v10;
  temp_v28 = 0;
  temp_v32 = 0;
  temp_v36 = 0;
  temp_v22 = temp_v18;
  temp_v24 = temp_v16;
  temp_v40 = temp_v18;
  temp_v42 = temp_v16;
  temp_v56 = temp_v15;
  temp_v58 = temp_v16;
  temp_v59 = temp_v15;
  temp_v61 = temp_v16;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v25,&temp_v22);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v47,&temp_v25,&temp_v59);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v50,&temp_v25,&temp_v56);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v53,&temp_v25,&temp_v40);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(temp_v43,&temp_v25,&temp_v37);
  temp_v3 = 120.0f;
  temp_v44 = temp_v44 + param_1->field_0xc;
  temp_v45 = temp_v45 + param_1->field_0x10;
  temp_v46 = temp_v46 + param_1->field_0x14;
  temp_v47 = temp_v47 + param_1->field_0xc;
  temp_v48 = temp_v48 + param_1->field_0x10;
  temp_v49 = temp_v49 + param_1->field_0x14;
  temp_v50 = temp_v50 + param_1->field_0xc;
  temp_v51 = temp_v51 + param_1->field_0x10;
  temp_v52 = temp_v52 + param_1->field_0x14;
  temp_v53 = temp_v53 + param_1->field_0xc;
  temp_v54 = temp_v54 + param_1->field_0x10;
  temp_v55 = temp_v55 + param_1->field_0x14;
  if (param_2 == 2) {
    temp_v45 = temp_v45 - 120.0f;
    temp_v48 = temp_v48 - 120.0f;
    temp_v51 = temp_v51 - 120.0f;
    temp_v54 = temp_v54 - 120.0f;
  }
  FUN_002c0b98((int)(short)param_1->field_0x38);
  temp_v9 = -temp_v16;
  temp_v7 = (param_1->field_0x18 + 90.0f) * temp_v21;
  temp_v1 = (temp_v1 & 0xfffffff) | ((unsigned int)(temp_v2 <= temp_v7) << 0x1d);
  for (temp_v7 = romwright_fabs_4(temp_v7); temp_v10 = temp_v2, (int)temp_v7 >= 0x47800000; temp_v7 = temp_v7 - temp_v19) {
  }
  for (; (int)temp_v10 >= 0x47800000; temp_v10 = temp_v10 - temp_v19) {
  }
  temp_v0 = VectorFloatToUnsigned(temp_v2,3);
  temp_v4 = VectorFloatToUnsigned(temp_v7,3);
  temp_v6 = VectorFloatToUnsigned(temp_v10,3);
  temp_v5 = temp_v4 & 0xff;
  temp_v11 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v4 = temp_v0 & 0xff;
  temp_v13 = (float)VectorUnsignedToFloat(temp_v0 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v0 = temp_v6 & 0xff;
  temp_v14 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v12 = (float)(&DAT_00536d14)[temp_v5 * 4] + (temp_v7 - temp_v11) * (float)(&DAT_00536d1c)[temp_v5 * 4];
  temp_v35 = (float)(&DAT_00536d18)[temp_v5 * 4] +
              (temp_v7 - temp_v11) * (float)(&DAT_00536d20)[temp_v5 * 4];
  temp_v7 = (float)(&DAT_00536d14)[temp_v4 * 4] + (temp_v2 - temp_v13) * (float)(&DAT_00536d1c)[temp_v4 * 4];
  temp_v13 = (float)(&DAT_00536d18)[temp_v4 * 4] + (temp_v2 - temp_v13) * (float)(&DAT_00536d20)[temp_v4 * 4];
  temp_v11 = (float)(&DAT_00536d14)[temp_v0 * 4] + (temp_v10 - temp_v14) * (float)(&DAT_00536d1c)[temp_v0 * 4]
  ;
  temp_v10 = (float)(&DAT_00536d18)[temp_v0 * 4] + (temp_v10 - temp_v14) * (float)(&DAT_00536d20)[temp_v0 * 4]
  ;
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v12 = -temp_v12;
  }
  temp_v25 = temp_v10 * temp_v35;
  temp_v33 = -temp_v12;
  temp_v29 = temp_v11 * temp_v35;
  temp_v34 = temp_v7 * temp_v35;
  temp_v35 = temp_v13 * temp_v35;
  temp_v27 = temp_v7 * temp_v11 + temp_v13 * temp_v10 * temp_v12;
  temp_v30 = temp_v13 * temp_v10 + temp_v7 * temp_v11 * temp_v12;
  temp_v26 = temp_v7 * temp_v10 * temp_v12 - temp_v13 * temp_v11;
  temp_v31 = temp_v13 * temp_v11 * temp_v12 - temp_v7 * temp_v10;
  temp_v28 = 0;
  temp_v32 = 0;
  temp_v36 = 0;
  temp_v22 = temp_v9;
  temp_v23 = temp_v2;
  temp_v24 = temp_v15;
  temp_v37 = temp_v2;
  temp_v38 = temp_v2;
  temp_v39 = temp_v20;
  temp_v40 = temp_v9;
  temp_v41 = temp_v17;
  temp_v42 = temp_v15;
  temp_v56 = temp_v16;
  temp_v57 = temp_v17;
  temp_v58 = temp_v15;
  temp_v59 = temp_v16;
  temp_v60 = temp_v2;
  temp_v61 = temp_v15;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v25,&temp_v22);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v47,&temp_v25,&temp_v59);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v50,&temp_v25,&temp_v56);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v53,&temp_v25,&temp_v40);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(temp_v43,&temp_v25,&temp_v37);
  temp_v44 = temp_v44 + param_1->field_0xc;
  temp_v45 = temp_v45 + param_1->field_0x10;
  temp_v46 = temp_v46 + param_1->field_0x14;
  temp_v47 = temp_v47 + param_1->field_0xc;
  temp_v48 = temp_v48 + param_1->field_0x10;
  temp_v49 = temp_v49 + param_1->field_0x14;
  temp_v50 = temp_v50 + param_1->field_0xc;
  temp_v51 = temp_v51 + param_1->field_0x10;
  temp_v52 = temp_v52 + param_1->field_0x14;
  temp_v53 = temp_v53 + param_1->field_0xc;
  temp_v54 = temp_v54 + param_1->field_0x10;
  temp_v55 = temp_v55 + param_1->field_0x14;
  if (param_2 == 2) {
    temp_v45 = temp_v45 - temp_v3;
    temp_v48 = temp_v48 - temp_v3;
    temp_v51 = temp_v51 - temp_v3;
    temp_v54 = temp_v54 - temp_v3;
  }
  FUN_002c0b98((int)(short)param_1->field_0x38);
  temp_v7 = (param_1->field_0x18 + 180.0f) * temp_v21;
  temp_v1 = (temp_v1 & 0xfffffff) | ((unsigned int)(temp_v2 <= temp_v7) << 0x1d);
  for (temp_v7 = romwright_fabs_4(temp_v7); temp_v10 = temp_v2, (int)temp_v7 >= 0x47800000; temp_v7 = temp_v7 - temp_v19) {
  }
  for (; (int)temp_v10 >= 0x47800000; temp_v10 = temp_v10 - temp_v19) {
  }
  temp_v4 = VectorFloatToUnsigned(temp_v2,3);
  temp_v6 = VectorFloatToUnsigned(temp_v7,3);
  temp_v8 = VectorFloatToUnsigned(temp_v10,3);
  temp_v5 = temp_v4 & 0xff;
  temp_v11 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v0 = temp_v6 & 0xff;
  temp_v14 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v4 = temp_v8 & 0xff;
  temp_v13 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v12 = (float)(&DAT_00536d14)[temp_v0 * 4] + (temp_v7 - temp_v14) * (float)(&DAT_00536d1c)[temp_v0 * 4];
  temp_v35 = (float)(&DAT_00536d18)[temp_v0 * 4] +
              (temp_v7 - temp_v14) * (float)(&DAT_00536d20)[temp_v0 * 4];
  temp_v7 = (float)(&DAT_00536d14)[temp_v5 * 4] + (temp_v2 - temp_v11) * (float)(&DAT_00536d1c)[temp_v5 * 4];
  temp_v11 = (float)(&DAT_00536d18)[temp_v5 * 4] + (temp_v2 - temp_v11) * (float)(&DAT_00536d20)[temp_v5 * 4];
  temp_v14 = (float)(&DAT_00536d14)[temp_v4 * 4] + (temp_v10 - temp_v13) * (float)(&DAT_00536d1c)[temp_v4 * 4]
  ;
  temp_v10 = (float)(&DAT_00536d18)[temp_v4 * 4] + (temp_v10 - temp_v13) * (float)(&DAT_00536d20)[temp_v4 * 4]
  ;
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v12 = -temp_v12;
  }
  temp_v25 = temp_v10 * temp_v35;
  temp_v33 = -temp_v12;
  temp_v29 = temp_v14 * temp_v35;
  temp_v34 = temp_v7 * temp_v35;
  temp_v35 = temp_v11 * temp_v35;
  temp_v26 = temp_v7 * temp_v10 * temp_v12 - temp_v11 * temp_v14;
  temp_v31 = temp_v11 * temp_v14 * temp_v12 - temp_v7 * temp_v10;
  temp_v27 = temp_v7 * temp_v14 + temp_v11 * temp_v10 * temp_v12;
  temp_v30 = temp_v11 * temp_v10 + temp_v7 * temp_v14 * temp_v12;
  temp_v28 = 0;
  temp_v32 = 0;
  temp_v36 = 0;
  temp_v22 = temp_v18;
  temp_v23 = temp_v2;
  temp_v24 = temp_v16;
  temp_v37 = temp_v2;
  temp_v38 = temp_v2;
  temp_v39 = temp_v20;
  temp_v40 = temp_v18;
  temp_v41 = temp_v17;
  temp_v42 = temp_v16;
  temp_v56 = temp_v15;
  temp_v57 = temp_v17;
  temp_v58 = temp_v16;
  temp_v59 = temp_v15;
  temp_v60 = temp_v2;
  temp_v61 = temp_v16;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v25,&temp_v22);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v47,&temp_v25,&temp_v59);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v50,&temp_v25,&temp_v56);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v53,&temp_v25,&temp_v40);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(temp_v43,&temp_v25,&temp_v37);
  temp_v44 = temp_v44 + param_1->field_0xc;
  temp_v45 = temp_v45 + param_1->field_0x10;
  temp_v46 = temp_v46 + param_1->field_0x14;
  temp_v47 = temp_v47 + param_1->field_0xc;
  temp_v48 = temp_v48 + param_1->field_0x10;
  temp_v49 = temp_v49 + param_1->field_0x14;
  temp_v50 = temp_v50 + param_1->field_0xc;
  temp_v51 = temp_v51 + param_1->field_0x10;
  temp_v52 = temp_v52 + param_1->field_0x14;
  temp_v53 = temp_v53 + param_1->field_0xc;
  temp_v54 = temp_v54 + param_1->field_0x10;
  temp_v55 = temp_v55 + param_1->field_0x14;
  if (param_2 == 2) {
    temp_v45 = temp_v45 - temp_v3;
    temp_v48 = temp_v48 - temp_v3;
    temp_v51 = temp_v51 - temp_v3;
    temp_v54 = temp_v54 - temp_v3;
  }
  FUN_002c0b98((int)(short)param_1->field_0x38);
  temp_v21 = (param_1->field_0x18 + 270.0f) * temp_v21;
  temp_v1 = (temp_v1 & 0xfffffff) | ((unsigned int)(temp_v2 <= temp_v21) << 0x1d);
  for (temp_v21 = romwright_fabs_4(temp_v21); temp_v18 = temp_v2, (int)temp_v21 >= 0x47800000; temp_v21 = temp_v21 - temp_v19) {
  }
  for (; (int)temp_v18 >= 0x47800000; temp_v18 = temp_v18 - temp_v19) {
  }
  temp_v4 = VectorFloatToUnsigned(temp_v2,3);
  temp_v0 = VectorFloatToUnsigned(temp_v21,3);
  temp_v5 = VectorFloatToUnsigned(temp_v18,3);
  temp_v13 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v7 = (float)VectorUnsignedToFloat(temp_v0 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v4 = temp_v4 & 0xff;
  temp_v0 = temp_v0 & 0xff;
  temp_v19 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v5 = temp_v5 & 0xff;
  temp_v10 = (float)(&DAT_00536d14)[temp_v4 * 4] + (temp_v2 - temp_v13) * (float)(&DAT_00536d1c)[temp_v4 * 4];
  temp_v11 = (float)(&DAT_00536d18)[temp_v4 * 4] + (temp_v2 - temp_v13) * (float)(&DAT_00536d20)[temp_v4 * 4];
  temp_v13 = (float)(&DAT_00536d14)[temp_v0 * 4] + (temp_v21 - temp_v7) * (float)(&DAT_00536d1c)[temp_v0 * 4];
  temp_v35 = (float)(&DAT_00536d18)[temp_v0 * 4] +
              (temp_v21 - temp_v7) * (float)(&DAT_00536d20)[temp_v0 * 4];
  temp_v21 = (float)(&DAT_00536d14)[temp_v5 * 4] + (temp_v18 - temp_v19) * (float)(&DAT_00536d1c)[temp_v5 * 4]
  ;
  temp_v18 = (float)(&DAT_00536d18)[temp_v5 * 4] + (temp_v18 - temp_v19) * (float)(&DAT_00536d20)[temp_v5 * 4]
  ;
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v13 = -temp_v13;
  }
  temp_v34 = temp_v10 * temp_v35;
  temp_v25 = temp_v18 * temp_v35;
  temp_v33 = -temp_v13;
  temp_v29 = temp_v21 * temp_v35;
  temp_v35 = temp_v11 * temp_v35;
  temp_v26 = temp_v10 * temp_v18 * temp_v13 - temp_v11 * temp_v21;
  temp_v31 = temp_v11 * temp_v21 * temp_v13 - temp_v10 * temp_v18;
  temp_v27 = temp_v10 * temp_v21 + temp_v11 * temp_v18 * temp_v13;
  temp_v30 = temp_v11 * temp_v18 + temp_v10 * temp_v21 * temp_v13;
  temp_v28 = 0;
  temp_v32 = 0;
  temp_v36 = 0;
  temp_v22 = temp_v9;
  temp_v23 = temp_v2;
  temp_v24 = temp_v15;
  temp_v37 = temp_v2;
  temp_v38 = temp_v2;
  temp_v39 = temp_v20;
  temp_v40 = temp_v9;
  temp_v41 = temp_v17;
  temp_v42 = temp_v15;
  temp_v56 = temp_v16;
  temp_v57 = temp_v17;
  temp_v58 = temp_v15;
  temp_v59 = temp_v16;
  temp_v60 = temp_v2;
  temp_v61 = temp_v15;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v25,&temp_v22);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v47,&temp_v25,&temp_v59);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v50,&temp_v25,&temp_v56);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v53,&temp_v25,&temp_v40);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(temp_v43,&temp_v25,&temp_v37);
  temp_v44 = temp_v44 + param_1->field_0xc;
  temp_v45 = temp_v45 + param_1->field_0x10;
  temp_v46 = temp_v46 + param_1->field_0x14;
  temp_v47 = temp_v47 + param_1->field_0xc;
  temp_v48 = temp_v48 + param_1->field_0x10;
  temp_v49 = temp_v49 + param_1->field_0x14;
  temp_v50 = temp_v50 + param_1->field_0xc;
  temp_v51 = temp_v51 + param_1->field_0x10;
  temp_v52 = temp_v52 + param_1->field_0x14;
  temp_v53 = temp_v53 + param_1->field_0xc;
  temp_v54 = temp_v54 + param_1->field_0x10;
  temp_v55 = temp_v55 + param_1->field_0x14;
  if (param_2 == 2) {
    temp_v45 = temp_v45 - temp_v3;
    temp_v48 = temp_v48 - temp_v3;
    temp_v51 = temp_v51 - temp_v3;
    temp_v54 = temp_v54 - temp_v3;
  }
  FUN_002c0b98((int)(short)param_1->field_0x38);
  return;
}

} /* extern "C" */
