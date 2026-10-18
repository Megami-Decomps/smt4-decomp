/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d2efc` (_code @ 0x2d2efc, 0xc24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002d2efc_arg0 fn_002d2efc_arg0;
struct fn_002d2efc_arg0 {
    unsigned char pad_0x0[0xc];
    float field_0xc; /* +0xc */
    float field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x1c];
    undefined4 field_0x38; /* +0x38 */
};

/* stack frame of param_1: 40 slot(s), 160 byte(s) */
typedef struct {
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
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
    unsigned int sp17C; /* 0x17c: local_17c */
    unsigned int sp180; /* 0x180: local_180 */
    unsigned int sp184; /* 0x184: local_184 */
    unsigned int sp188; /* 0x188: local_188 */
    unsigned int sp18C; /* 0x18c: local_18c */
    unsigned int sp190; /* 0x190: local_190 */
    unsigned int sp194; /* 0x194: local_194 */
    unsigned int sp198; /* 0x198: local_198 */
    unsigned int sp19C; /* 0x19c: local_19c */
    unsigned int sp1A0; /* 0x1a0: local_1a0 */
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
/* Supplied declaration required: FUN_00262a8c. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x002d3978) */
/* WARNING: Removing unreachable block (ram,0x002d3660) */
/* WARNING: Removing unreachable block (ram,0x002d3390) */
/* WARNING: Removing unreachable block (ram,0x002d3080) */
/* WARNING: Removing unreachable block (ram,0x002d3090) */
/* WARNING: Removing unreachable block (ram,0x002d33a0) */
/* WARNING: Removing unreachable block (ram,0x002d3684) */
/* WARNING: Removing unreachable block (ram,0x002d398c) */
/* WARNING: Removing unreachable block (ram,0x002d2fc4) */

void FUN_002d2efc(fn_002d2efc_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  unsigned int temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  float temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  float temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  unsigned int temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  unsigned int temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  unsigned int temp_v34;
  int temp_v35;
  float temp_v36;
  unsigned int temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float temp_v43;
  int temp_v44;
  float temp_v45;
  unsigned int temp_v46;
  int temp_v47;
  unsigned int temp_v48;
  unsigned int temp_v49;
  int temp_v50;
  unsigned int temp_v51;
  unsigned int temp_v52;
  float temp_v53;
  float temp_v54;
  unsigned int temp_v55;
  float temp_v56;
  float temp_v57;
  float temp_v58;
  float temp_v59;
  float temp_v60;
  float temp_v61;
  unsigned char temp_v62 [92];
  
  temp_v21 = 0xc37a0000;
  temp_v14 = 0.0f;
  temp_v16 = 0x42c80000;
  temp_v35 = 0xc37a0000;
  temp_v15 = 0x437a0000;
  temp_v36 = 0.0f;
  temp_v37 = 0x42c80000;
  temp_v44 = 0x437a0000;
  temp_v45 = 0.0f;
  temp_v18 = 0x43960000;
  temp_v46 = 0x42c80000;
  temp_v47 = 0x437a0000;
  temp_v48 = 0x43960000;
  temp_v49 = 0x42c80000;
  temp_v50 = 0xc37a0000;
  temp_v51 = 0x43960000;
  temp_v52 = 0x42c80000;
  temp_v19 = 0x3f800000;
  temp_v53 = 0.0f;
  temp_v54 = 0.0f;
  temp_v55 = 0x3f800000;
  temp_v20 = 0.7111111f;
  temp_v2 = param_1->field_0x18 * 0.7111111f;
  temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v2) << 0x1d);
  temp_v17 = 65536.0f;
  for (temp_v2 = romwright_fabs_4(temp_v2); (int)temp_v2 >= 0x47800000; temp_v2 = temp_v2 - 65536.0f) {
  }
  temp_v3 = VectorFloatToUnsigned(0,3);
  temp_v4 = VectorFloatToUnsigned(temp_v2,3);
  temp_v5 = VectorFloatToUnsigned(0,3);
  temp_v0 = temp_v3 & 0xff;
  temp_v10 = (float)VectorUnsignedToFloat(temp_v3 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v3 = temp_v4 & 0xff;
  temp_v8 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v4 = temp_v5 & 0xff;
  temp_v6 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v9 = (float)(&DAT_00407ed0)[temp_v0 * 4] + (0.0f - temp_v10) * (float)(&DAT_00407ed8)[temp_v0 * 4];
  temp_v10 = (float)(&DAT_00407ed4)[temp_v0 * 4] + (0.0f - temp_v10) * (float)(&DAT_00407edc)[temp_v0 * 4];
  temp_v32 = (float)(&DAT_00407ed4)[temp_v3 * 4] +
              (temp_v2 - temp_v8) * (float)(&DAT_00407edc)[temp_v3 * 4];
  temp_v2 = (float)(&DAT_00407ed0)[temp_v3 * 4] + (temp_v2 - temp_v8) * (float)(&DAT_00407ed8)[temp_v3 * 4];
  temp_v8 = (float)(&DAT_00407ed0)[temp_v4 * 4] + (0.0f - temp_v6) * (float)(&DAT_00407ed8)[temp_v4 * 4];
  temp_v6 = (float)(&DAT_00407ed4)[temp_v4 * 4] + (0.0f - temp_v6) * (float)(&DAT_00407edc)[temp_v4 * 4];
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v2 = -temp_v2;
  }
  temp_v23 = temp_v6 * temp_v32;
  temp_v31 = -temp_v2;
  temp_v27 = temp_v8 * temp_v32;
  temp_v33 = temp_v10 * temp_v32;
  temp_v32 = temp_v9 * temp_v32;
  temp_v24 = temp_v9 * temp_v6 * temp_v2 - temp_v10 * temp_v8;
  temp_v29 = temp_v10 * temp_v8 * temp_v2 - temp_v9 * temp_v6;
  temp_v25 = temp_v9 * temp_v8 + temp_v10 * temp_v6 * temp_v2;
  temp_v28 = temp_v10 * temp_v6 + temp_v9 * temp_v8 * temp_v2;
  temp_v26 = 0;
  temp_v30 = 0;
  temp_v34 = 0;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v38,&temp_v23,&temp_v35);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v41,&temp_v23,&temp_v44);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v59,&temp_v23,&temp_v47);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v56,&temp_v23,&temp_v50);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(temp_v62,&temp_v23,&temp_v53);
  temp_v38 = temp_v38 + param_1->field_0xc;
  temp_v39 = temp_v39 + param_1->field_0x10;
  temp_v40 = temp_v40 + param_1->field_0x14;
  temp_v41 = temp_v41 + param_1->field_0xc;
  temp_v42 = temp_v42 + param_1->field_0x10;
  temp_v43 = temp_v43 + param_1->field_0x14;
  temp_v59 = temp_v59 + param_1->field_0xc;
  temp_v60 = temp_v60 + param_1->field_0x10;
  temp_v61 = temp_v61 + param_1->field_0x14;
  temp_v56 = temp_v56 + param_1->field_0xc;
  temp_v57 = temp_v57 + param_1->field_0x10;
  temp_v58 = temp_v58 + param_1->field_0x14;
  FUN_00262a8c((int)(short)param_1->field_0x38);
  temp_v22 = 0xc2c80000;
  temp_v35 = 0xc2c80000;
  temp_v50 = 0xc2c80000;
  temp_v2 = (param_1->field_0x18 + 90.0f) * temp_v20;
  temp_v1 = (temp_v1 & 0xfffffff) | ((unsigned int)(temp_v14 <= temp_v2) << 0x1d);
  for (temp_v2 = romwright_fabs_4(temp_v2); temp_v6 = temp_v14, (int)temp_v2 >= 0x47800000; temp_v2 = temp_v2 - temp_v17) {
  }
  for (; (int)temp_v6 >= 0x47800000; temp_v6 = temp_v6 - temp_v17) {
  }
  temp_v3 = VectorFloatToUnsigned(temp_v14,3);
  temp_v4 = VectorFloatToUnsigned(temp_v2,3);
  temp_v5 = VectorFloatToUnsigned(temp_v6,3);
  temp_v0 = temp_v3 & 0xff;
  temp_v9 = (float)VectorUnsignedToFloat(temp_v3 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v3 = temp_v4 & 0xff;
  temp_v11 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v4 = temp_v5 & 0xff;
  temp_v8 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v10 = (float)(&DAT_00407ed0)[temp_v3 * 4] + (temp_v2 - temp_v11) * (float)(&DAT_00407ed8)[temp_v3 * 4];
  temp_v33 = (float)(&DAT_00407ed4)[temp_v3 * 4] +
              (temp_v2 - temp_v11) * (float)(&DAT_00407edc)[temp_v3 * 4];
  temp_v2 = (float)(&DAT_00407ed0)[temp_v0 * 4] + (temp_v14 - temp_v9) * (float)(&DAT_00407ed8)[temp_v0 * 4];
  temp_v9 = (float)(&DAT_00407ed4)[temp_v0 * 4] + (temp_v14 - temp_v9) * (float)(&DAT_00407edc)[temp_v0 * 4]
  ;
  temp_v11 = (float)(&DAT_00407ed0)[temp_v4 * 4] + (temp_v6 - temp_v8) * (float)(&DAT_00407ed8)[temp_v4 * 4];
  temp_v6 = (float)(&DAT_00407ed4)[temp_v4 * 4] + (temp_v6 - temp_v8) * (float)(&DAT_00407edc)[temp_v4 * 4];
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v10 = -temp_v10;
  }
  temp_v23 = temp_v6 * temp_v33;
  temp_v31 = -temp_v10;
  temp_v27 = temp_v11 * temp_v33;
  temp_v32 = temp_v2 * temp_v33;
  temp_v33 = temp_v9 * temp_v33;
  temp_v24 = temp_v2 * temp_v6 * temp_v10 - temp_v9 * temp_v11;
  temp_v29 = temp_v9 * temp_v11 * temp_v10 - temp_v2 * temp_v6;
  temp_v25 = temp_v2 * temp_v11 + temp_v9 * temp_v6 * temp_v10;
  temp_v28 = temp_v9 * temp_v6 + temp_v2 * temp_v11 * temp_v10;
  temp_v26 = 0;
  temp_v30 = 0;
  temp_v34 = 0;
  temp_v36 = temp_v14;
  temp_v37 = temp_v15;
  temp_v44 = temp_v16;
  temp_v45 = temp_v14;
  temp_v46 = temp_v15;
  temp_v47 = temp_v16;
  temp_v48 = temp_v18;
  temp_v49 = temp_v15;
  temp_v51 = temp_v18;
  temp_v52 = temp_v15;
  temp_v53 = temp_v14;
  temp_v54 = temp_v14;
  temp_v55 = temp_v19;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v38,&temp_v23,&temp_v35);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v41,&temp_v23,&temp_v44);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v59,&temp_v23,&temp_v47);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v56,&temp_v23,&temp_v50);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(temp_v62,&temp_v23,&temp_v53);
  temp_v38 = temp_v38 + param_1->field_0xc;
  temp_v39 = temp_v39 + param_1->field_0x10;
  temp_v40 = temp_v40 + param_1->field_0x14;
  temp_v41 = temp_v41 + param_1->field_0xc;
  temp_v42 = temp_v42 + param_1->field_0x10;
  temp_v43 = temp_v43 + param_1->field_0x14;
  temp_v59 = temp_v59 + param_1->field_0xc;
  temp_v60 = temp_v60 + param_1->field_0x10;
  temp_v61 = temp_v61 + param_1->field_0x14;
  temp_v56 = temp_v56 + param_1->field_0xc;
  temp_v57 = temp_v57 + param_1->field_0x10;
  temp_v58 = temp_v58 + param_1->field_0x14;
  FUN_00262a8c((int)(short)param_1->field_0x38);
  temp_v2 = (param_1->field_0x18 + 180.0f) * temp_v20;
  temp_v1 = (temp_v1 & 0xfffffff) | ((unsigned int)(temp_v14 <= temp_v2) << 0x1d);
  for (temp_v2 = romwright_fabs_4(temp_v2); temp_v6 = temp_v14, (int)temp_v2 >= 0x47800000; temp_v2 = temp_v2 - temp_v17) {
  }
  for (; (int)temp_v6 >= 0x47800000; temp_v6 = temp_v6 - temp_v17) {
  }
  temp_v3 = VectorFloatToUnsigned(temp_v14,3);
  temp_v5 = VectorFloatToUnsigned(temp_v2,3);
  temp_v7 = VectorFloatToUnsigned(temp_v6,3);
  temp_v0 = temp_v3 & 0xff;
  temp_v9 = (float)VectorUnsignedToFloat(temp_v3 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v4 = temp_v5 & 0xff;
  temp_v11 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v3 = temp_v7 & 0xff;
  temp_v8 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v10 = (float)(&DAT_00407ed0)[temp_v0 * 4] + (temp_v14 - temp_v9) * (float)(&DAT_00407ed8)[temp_v0 * 4]
  ;
  temp_v12 = (float)(&DAT_00407ed4)[temp_v0 * 4] + (temp_v14 - temp_v9) * (float)(&DAT_00407edc)[temp_v0 * 4]
  ;
  temp_v9 = (float)(&DAT_00407ed0)[temp_v4 * 4] + (temp_v2 - temp_v11) * (float)(&DAT_00407ed8)[temp_v4 * 4];
  temp_v13 = (float)(&DAT_00407ed0)[temp_v3 * 4] + (temp_v6 - temp_v8) * (float)(&DAT_00407ed8)[temp_v3 * 4];
  temp_v6 = (float)(&DAT_00407ed4)[temp_v3 * 4] + (temp_v6 - temp_v8) * (float)(&DAT_00407edc)[temp_v3 * 4];
  temp_v33 = (float)(&DAT_00407ed4)[temp_v4 * 4] +
              (temp_v2 - temp_v11) * (float)(&DAT_00407edc)[temp_v4 * 4];
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v9 = -temp_v9;
  }
  temp_v23 = temp_v6 * temp_v33;
  temp_v31 = -temp_v9;
  temp_v27 = temp_v13 * temp_v33;
  temp_v32 = temp_v10 * temp_v33;
  temp_v33 = temp_v12 * temp_v33;
  temp_v25 = temp_v10 * temp_v13 + temp_v12 * temp_v6 * temp_v9;
  temp_v28 = temp_v12 * temp_v6 + temp_v10 * temp_v13 * temp_v9;
  temp_v24 = temp_v10 * temp_v6 * temp_v9 - temp_v12 * temp_v13;
  temp_v29 = temp_v12 * temp_v13 * temp_v9 - temp_v10 * temp_v6;
  temp_v26 = 0;
  temp_v30 = 0;
  temp_v34 = 0;
  temp_v35 = temp_v21;
  temp_v36 = temp_v14;
  temp_v37 = temp_v16;
  temp_v44 = temp_v15;
  temp_v45 = temp_v14;
  temp_v46 = temp_v16;
  temp_v47 = temp_v15;
  temp_v48 = temp_v18;
  temp_v49 = temp_v16;
  temp_v50 = temp_v21;
  temp_v51 = temp_v18;
  temp_v52 = temp_v16;
  temp_v53 = temp_v14;
  temp_v54 = temp_v14;
  temp_v55 = temp_v19;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v38,&temp_v23,&temp_v35);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v41,&temp_v23,&temp_v44);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v59,&temp_v23,&temp_v47);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v56,&temp_v23,&temp_v50);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(temp_v62,&temp_v23,&temp_v53);
  temp_v38 = temp_v38 + param_1->field_0xc;
  temp_v39 = temp_v39 + param_1->field_0x10;
  temp_v40 = temp_v40 + param_1->field_0x14;
  temp_v41 = temp_v41 + param_1->field_0xc;
  temp_v42 = temp_v42 + param_1->field_0x10;
  temp_v43 = temp_v43 + param_1->field_0x14;
  temp_v59 = temp_v59 + param_1->field_0xc;
  temp_v60 = temp_v60 + param_1->field_0x10;
  temp_v61 = temp_v61 + param_1->field_0x14;
  temp_v56 = temp_v56 + param_1->field_0xc;
  temp_v57 = temp_v57 + param_1->field_0x10;
  temp_v58 = temp_v58 + param_1->field_0x14;
  FUN_00262a8c((int)(short)param_1->field_0x38);
  temp_v20 = (param_1->field_0x18 + 270.0f) * temp_v20;
  temp_v1 = (temp_v1 & 0xfffffff) | ((unsigned int)(temp_v14 <= temp_v20) << 0x1d);
  for (temp_v20 = romwright_fabs_4(temp_v20); temp_v2 = temp_v14, (int)temp_v20 >= 0x47800000; temp_v20 = temp_v20 - temp_v17) {
  }
  for (; (int)temp_v2 >= 0x47800000; temp_v2 = temp_v2 - temp_v17) {
  }
  temp_v0 = VectorFloatToUnsigned(temp_v14,3);
  temp_v3 = VectorFloatToUnsigned(temp_v20,3);
  temp_v4 = VectorFloatToUnsigned(temp_v2,3);
  temp_v17 = (float)VectorUnsignedToFloat(temp_v0 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v9 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v8 = (float)VectorUnsignedToFloat(temp_v3 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v3 = temp_v3 & 0xff;
  temp_v0 = temp_v0 & 0xff;
  temp_v4 = temp_v4 & 0xff;
  temp_v6 = (float)(&DAT_00407ed0)[temp_v0 * 4] + (temp_v14 - temp_v17) * (float)(&DAT_00407ed8)[temp_v0 * 4];
  temp_v10 = (float)(&DAT_00407ed4)[temp_v0 * 4] + (temp_v14 - temp_v17) * (float)(&DAT_00407edc)[temp_v0 * 4]
  ;
  temp_v17 = (float)(&DAT_00407ed0)[temp_v3 * 4] + (temp_v20 - temp_v8) * (float)(&DAT_00407ed8)[temp_v3 * 4];
  temp_v33 = (float)(&DAT_00407ed4)[temp_v3 * 4] +
              (temp_v20 - temp_v8) * (float)(&DAT_00407edc)[temp_v3 * 4];
  temp_v20 = (float)(&DAT_00407ed0)[temp_v4 * 4] + (temp_v2 - temp_v9) * (float)(&DAT_00407ed8)[temp_v4 * 4];
  temp_v2 = (float)(&DAT_00407ed4)[temp_v4 * 4] + (temp_v2 - temp_v9) * (float)(&DAT_00407edc)[temp_v4 * 4];
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v17 = -temp_v17;
  }
  temp_v23 = temp_v2 * temp_v33;
  temp_v31 = -temp_v17;
  temp_v27 = temp_v20 * temp_v33;
  temp_v32 = temp_v6 * temp_v33;
  temp_v33 = temp_v10 * temp_v33;
  temp_v24 = temp_v6 * temp_v2 * temp_v17 - temp_v10 * temp_v20;
  temp_v29 = temp_v10 * temp_v20 * temp_v17 - temp_v6 * temp_v2;
  temp_v25 = temp_v6 * temp_v20 + temp_v10 * temp_v2 * temp_v17;
  temp_v28 = temp_v10 * temp_v2 + temp_v6 * temp_v20 * temp_v17;
  temp_v26 = 0;
  temp_v30 = 0;
  temp_v34 = 0;
  temp_v35 = temp_v22;
  temp_v36 = temp_v14;
  temp_v37 = temp_v15;
  temp_v44 = temp_v16;
  temp_v45 = temp_v14;
  temp_v46 = temp_v15;
  temp_v47 = temp_v16;
  temp_v48 = temp_v18;
  temp_v49 = temp_v15;
  temp_v50 = temp_v22;
  temp_v51 = temp_v18;
  temp_v52 = temp_v15;
  temp_v53 = temp_v14;
  temp_v54 = temp_v14;
  temp_v55 = temp_v19;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v38,&temp_v23,&temp_v35);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v41,&temp_v23,&temp_v44);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v59,&temp_v23,&temp_v47);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v56,&temp_v23,&temp_v50);
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(temp_v62,&temp_v23,&temp_v53);
  temp_v38 = temp_v38 + param_1->field_0xc;
  temp_v39 = temp_v39 + param_1->field_0x10;
  temp_v40 = temp_v40 + param_1->field_0x14;
  temp_v41 = temp_v41 + param_1->field_0xc;
  temp_v42 = temp_v42 + param_1->field_0x10;
  temp_v43 = temp_v43 + param_1->field_0x14;
  temp_v59 = temp_v59 + param_1->field_0xc;
  temp_v60 = temp_v60 + param_1->field_0x10;
  temp_v61 = temp_v61 + param_1->field_0x14;
  temp_v56 = temp_v56 + param_1->field_0xc;
  temp_v57 = temp_v57 + param_1->field_0x10;
  temp_v58 = temp_v58 + param_1->field_0x14;
  FUN_00262a8c((int)(short)param_1->field_0x38);
  return;
}
