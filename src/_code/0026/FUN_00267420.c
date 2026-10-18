/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00267420` (_code @ 0x267420, 0xb48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 40 slot(s), 160 byte(s) */
typedef struct {
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
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
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
} param_1_stack;

extern unsigned int DAT_00407fc0; /* 0x407fc0 */
extern unsigned int DAT_00407fc4; /* 0x407fc4 */
extern unsigned int DAT_00407fc8; /* 0x407fc8 */
extern unsigned int DAT_00407fcc; /* 0x407fcc */

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
/* Supplied declaration required: FUN_00262cb8. */
/* Supplied declaration required: FUN_002ad6d8. */


/* WARNING: Removing unreachable block (ram,0x00267df8) */
/* WARNING: Removing unreachable block (ram,0x00267b30) */
/* WARNING: Removing unreachable block (ram,0x00267888) */
/* WARNING: Removing unreachable block (ram,0x002675b8) */
/* WARNING: Removing unreachable block (ram,0x002675c8) */
/* WARNING: Removing unreachable block (ram,0x00267898) */
/* WARNING: Removing unreachable block (ram,0x00267b40) */
/* WARNING: Removing unreachable block (ram,0x00267e08) */
/* WARNING: Removing unreachable block (ram,0x002674f8) */

void FUN_00267420(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2, in_s3, in_s4, in_s6; 17 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  unsigned int temp_v1;
  float in_s0;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float in_s1;
  float temp_v6;
  float in_s2;
  float temp_v7;
  float in_s3;
  float temp_v8;
  float in_s4;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float in_s6;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned int temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
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
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  unsigned char temp_v43 [32];
  float temp_v44;
  float temp_v45;
  unsigned int temp_v46;
  float temp_v47;
  float temp_v48;
  float temp_v49;
  float temp_v50 [2];
  float temp_v51;
  float temp_v52;
  float temp_v53;
  float temp_v54;
  float temp_v55 [2];
  float temp_v56;
  
  temp_v8 = 0.0f;
  temp_v18 = 0.7111111f;
  temp_v47 = -(in_s4 * 0.5f);
  temp_v15 = in_s6 * 0.5f;
  temp_v14 = in_s4 * 0.5f;
  temp_v50[0] = -(in_s4 * 0.5f);
  temp_v17 = 0x3f800000;
  temp_v48 = 0.0f;
  temp_v53 = 0.0f;
  temp_v44 = 0.0f;
  temp_v45 = 0.0f;
  temp_v46 = 0x3f800000;
  temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= in_s3 * 0.7111111f) << 0x1d);
  temp_v16 = 65536.0f;
  for (temp_v9 = romwright_fabs_4(in_s3 * 0.7111111f); (int)temp_v9 >= 0x47800000; temp_v9 = temp_v9 - 65536.0f) {
  }
  temp_v2 = VectorFloatToUnsigned(0,3);
  temp_v3 = VectorFloatToUnsigned(temp_v9,3);
  temp_v4 = VectorFloatToUnsigned(0,3);
  temp_v0 = temp_v2 & 0xff;
  temp_v6 = (float)VectorUnsignedToFloat(temp_v2 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v2 = temp_v3 & 0xff;
  temp_v7 = (float)VectorUnsignedToFloat(temp_v3 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v3 = temp_v4 & 0xff;
  temp_v5 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v13 = (float)(&DAT_00407fc0)[temp_v2 * 4] + (temp_v9 - temp_v7) * (float)(&DAT_00407fc8)[temp_v2 * 4];
  temp_v29 = (float)(&DAT_00407fc4)[temp_v2 * 4] +
              (temp_v9 - temp_v7) * (float)(&DAT_00407fcc)[temp_v2 * 4];
  temp_v7 = (float)(&DAT_00407fc4)[temp_v0 * 4] + (0.0f - temp_v6) * (float)(&DAT_00407fcc)[temp_v0 * 4];
  temp_v9 = (float)(&DAT_00407fc0)[temp_v0 * 4] + (0.0f - temp_v6) * (float)(&DAT_00407fc8)[temp_v0 * 4];
  temp_v6 = (float)(&DAT_00407fc0)[temp_v3 * 4] + (0.0f - temp_v5) * (float)(&DAT_00407fc8)[temp_v3 * 4];
  temp_v5 = (float)(&DAT_00407fc4)[temp_v3 * 4] + (0.0f - temp_v5) * (float)(&DAT_00407fcc)[temp_v3 * 4];
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v13 = -temp_v13;
  }
  temp_v19 = temp_v5 * temp_v29;
  temp_v27 = -temp_v13;
  temp_v23 = temp_v6 * temp_v29;
  temp_v28 = temp_v9 * temp_v29;
  temp_v29 = temp_v7 * temp_v29;
  temp_v20 = temp_v9 * temp_v5 * temp_v13 - temp_v7 * temp_v6;
  temp_v21 = temp_v9 * temp_v6 + temp_v7 * temp_v5 * temp_v13;
  temp_v25 = temp_v7 * temp_v6 * temp_v13 - temp_v9 * temp_v5;
  temp_v24 = temp_v7 * temp_v5 + temp_v9 * temp_v6 * temp_v13;
  temp_v22 = 0;
  temp_v26 = 0;
  temp_v30 = 0;
  temp_v49 = temp_v15;
  temp_v51 = temp_v15;
  temp_v52 = temp_v14;
  temp_v54 = temp_v15;
  temp_v55[0] = temp_v14;
  temp_v56 = temp_v15;
  FUN_002ad6d8(&temp_v31,&temp_v19,&temp_v47);
  FUN_002ad6d8(&temp_v34,&temp_v19,&temp_v52);
  FUN_002ad6d8(&temp_v37,&temp_v19,temp_v55);
  FUN_002ad6d8(&temp_v40,&temp_v19,temp_v50);
  FUN_002ad6d8(temp_v43,&temp_v19,&temp_v44);
  temp_v31 = temp_v31 + in_s0;
  temp_v32 = temp_v32 + in_s1;
  temp_v33 = temp_v33 + in_s2;
  temp_v34 = temp_v34 + in_s0;
  temp_v35 = temp_v35 + in_s1;
  temp_v36 = temp_v36 + in_s2;
  temp_v37 = temp_v37 + in_s0;
  temp_v38 = temp_v38 + in_s1;
  temp_v39 = temp_v39 + in_s2;
  temp_v40 = temp_v40 + in_s0;
  temp_v41 = temp_v41 + in_s1;
  temp_v42 = temp_v42 + in_s2;
  FUN_00262cb8(param_1);
  temp_v5 = -temp_v15;
  temp_v9 = (in_s3 + 90.0f) * temp_v18;
  temp_v1 = (temp_v1 & 0xfffffff) | ((unsigned int)(temp_v8 <= temp_v9) << 0x1d);
  for (temp_v9 = romwright_fabs_4(temp_v9); temp_v6 = temp_v8, (int)temp_v9 >= 0x47800000; temp_v9 = temp_v9 - temp_v16) {
  }
  for (; (int)temp_v6 >= 0x47800000; temp_v6 = temp_v6 - temp_v16) {
  }
  temp_v4 = VectorFloatToUnsigned(temp_v8,3);
  temp_v0 = VectorFloatToUnsigned(temp_v9,3);
  temp_v2 = VectorFloatToUnsigned(temp_v6,3);
  temp_v3 = temp_v0 & 0xff;
  temp_v10 = (float)VectorUnsignedToFloat(temp_v0 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v0 = temp_v4 & 0xff;
  temp_v7 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v11 = (float)VectorUnsignedToFloat(temp_v2 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v2 = temp_v2 & 0xff;
  temp_v13 = (float)(&DAT_00407fc0)[temp_v0 * 4] + (temp_v8 - temp_v7) * (float)(&DAT_00407fc8)[temp_v0 * 4];
  temp_v12 = (float)(&DAT_00407fc4)[temp_v0 * 4] + (temp_v8 - temp_v7) * (float)(&DAT_00407fcc)[temp_v0 * 4];
  temp_v7 = (float)(&DAT_00407fc0)[temp_v3 * 4] + (temp_v9 - temp_v10) * (float)(&DAT_00407fc8)[temp_v3 * 4];
  temp_v29 = (float)(&DAT_00407fc4)[temp_v3 * 4] +
              (temp_v9 - temp_v10) * (float)(&DAT_00407fcc)[temp_v3 * 4];
  temp_v9 = (float)(&DAT_00407fc0)[temp_v2 * 4] + (temp_v6 - temp_v11) * (float)(&DAT_00407fc8)[temp_v2 * 4];
  temp_v6 = (float)(&DAT_00407fc4)[temp_v2 * 4] + (temp_v6 - temp_v11) * (float)(&DAT_00407fcc)[temp_v2 * 4];
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v7 = -temp_v7;
  }
  temp_v19 = temp_v6 * temp_v29;
  temp_v27 = -temp_v7;
  temp_v23 = temp_v9 * temp_v29;
  temp_v28 = temp_v13 * temp_v29;
  temp_v29 = temp_v12 * temp_v29;
  temp_v20 = temp_v13 * temp_v6 * temp_v7 - temp_v12 * temp_v9;
  temp_v25 = temp_v12 * temp_v9 * temp_v7 - temp_v13 * temp_v6;
  temp_v21 = temp_v13 * temp_v9 + temp_v12 * temp_v6 * temp_v7;
  temp_v24 = temp_v12 * temp_v6 + temp_v13 * temp_v9 * temp_v7;
  temp_v22 = 0;
  temp_v26 = 0;
  temp_v30 = 0;
  temp_v44 = temp_v8;
  temp_v45 = temp_v8;
  temp_v46 = temp_v17;
  temp_v47 = temp_v5;
  temp_v48 = temp_v8;
  temp_v49 = temp_v14;
  temp_v50[0] = temp_v5;
  temp_v51 = temp_v14;
  temp_v52 = temp_v15;
  temp_v53 = temp_v8;
  temp_v54 = temp_v14;
  temp_v55[0] = temp_v15;
  temp_v56 = temp_v14;
  FUN_002ad6d8(&temp_v31,&temp_v19,&temp_v47);
  FUN_002ad6d8(&temp_v34,&temp_v19,&temp_v52);
  FUN_002ad6d8(&temp_v37,&temp_v19,temp_v55);
  FUN_002ad6d8(&temp_v40,&temp_v19,temp_v50);
  FUN_002ad6d8(temp_v43,&temp_v19,&temp_v44);
  temp_v31 = temp_v31 + in_s0;
  temp_v32 = temp_v32 + in_s1;
  temp_v33 = temp_v33 + in_s2;
  temp_v34 = temp_v34 + in_s0;
  temp_v35 = temp_v35 + in_s1;
  temp_v36 = temp_v36 + in_s2;
  temp_v37 = temp_v37 + in_s0;
  temp_v38 = temp_v38 + in_s1;
  temp_v39 = temp_v39 + in_s2;
  temp_v40 = temp_v40 + in_s0;
  temp_v41 = temp_v41 + in_s1;
  temp_v42 = temp_v42 + in_s2;
  FUN_00262cb8(param_1);
  temp_v47 = -temp_v14;
  temp_v9 = (in_s3 + 180.0f) * temp_v18;
  temp_v1 = (temp_v1 & 0xfffffff) | ((unsigned int)(temp_v8 <= temp_v9) << 0x1d);
  for (temp_v9 = romwright_fabs_4(temp_v9); temp_v6 = temp_v8, (int)temp_v9 >= 0x47800000; temp_v9 = temp_v9 - temp_v16) {
  }
  for (; (int)temp_v6 >= 0x47800000; temp_v6 = temp_v6 - temp_v16) {
  }
  temp_v3 = VectorFloatToUnsigned(temp_v8,3);
  temp_v0 = VectorFloatToUnsigned(temp_v9,3);
  temp_v4 = VectorFloatToUnsigned(temp_v6,3);
  temp_v2 = temp_v0 & 0xff;
  temp_v13 = (float)VectorUnsignedToFloat(temp_v0 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v0 = temp_v3 & 0xff;
  temp_v7 = (float)VectorUnsignedToFloat(temp_v3 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v3 = temp_v4 & 0xff;
  temp_v11 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v10 = (float)(&DAT_00407fc0)[temp_v2 * 4] + (temp_v9 - temp_v13) * (float)(&DAT_00407fc8)[temp_v2 * 4]
  ;
  temp_v29 = (float)(&DAT_00407fc4)[temp_v2 * 4] +
              (temp_v9 - temp_v13) * (float)(&DAT_00407fcc)[temp_v2 * 4];
  temp_v9 = (float)(&DAT_00407fc0)[temp_v0 * 4] + (temp_v8 - temp_v7) * (float)(&DAT_00407fc8)[temp_v0 * 4];
  temp_v7 = (float)(&DAT_00407fc4)[temp_v0 * 4] + (temp_v8 - temp_v7) * (float)(&DAT_00407fcc)[temp_v0 * 4];
  temp_v13 = (float)(&DAT_00407fc0)[temp_v3 * 4] + (temp_v6 - temp_v11) * (float)(&DAT_00407fc8)[temp_v3 * 4];
  temp_v6 = (float)(&DAT_00407fc4)[temp_v3 * 4] + (temp_v6 - temp_v11) * (float)(&DAT_00407fcc)[temp_v3 * 4];
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v10 = -temp_v10;
  }
  temp_v19 = temp_v6 * temp_v29;
  temp_v27 = -temp_v10;
  temp_v23 = temp_v13 * temp_v29;
  temp_v28 = temp_v9 * temp_v29;
  temp_v29 = temp_v7 * temp_v29;
  temp_v20 = temp_v9 * temp_v6 * temp_v10 - temp_v7 * temp_v13;
  temp_v25 = temp_v7 * temp_v13 * temp_v10 - temp_v9 * temp_v6;
  temp_v21 = temp_v9 * temp_v13 + temp_v7 * temp_v6 * temp_v10;
  temp_v24 = temp_v7 * temp_v6 + temp_v9 * temp_v13 * temp_v10;
  temp_v22 = 0;
  temp_v26 = 0;
  temp_v30 = 0;
  temp_v44 = temp_v8;
  temp_v45 = temp_v8;
  temp_v46 = temp_v17;
  temp_v48 = temp_v8;
  temp_v49 = temp_v15;
  temp_v50[0] = temp_v47;
  temp_v51 = temp_v15;
  temp_v52 = temp_v14;
  temp_v53 = temp_v8;
  temp_v54 = temp_v15;
  temp_v55[0] = temp_v14;
  temp_v56 = temp_v15;
  FUN_002ad6d8(&temp_v31,&temp_v19,&temp_v47);
  FUN_002ad6d8(&temp_v34,&temp_v19,&temp_v52);
  FUN_002ad6d8(&temp_v37,&temp_v19,temp_v55);
  FUN_002ad6d8(&temp_v40,&temp_v19,temp_v50);
  FUN_002ad6d8(temp_v43,&temp_v19,&temp_v44);
  temp_v31 = temp_v31 + in_s0;
  temp_v32 = temp_v32 + in_s1;
  temp_v33 = temp_v33 + in_s2;
  temp_v34 = temp_v34 + in_s0;
  temp_v35 = temp_v35 + in_s1;
  temp_v36 = temp_v36 + in_s2;
  temp_v37 = temp_v37 + in_s0;
  temp_v38 = temp_v38 + in_s1;
  temp_v39 = temp_v39 + in_s2;
  temp_v40 = temp_v40 + in_s0;
  temp_v41 = temp_v41 + in_s1;
  temp_v42 = temp_v42 + in_s2;
  FUN_00262cb8(param_1);
  temp_v18 = (in_s3 + 270.0f) * temp_v18;
  temp_v1 = (temp_v1 & 0xfffffff) | ((unsigned int)(temp_v8 <= temp_v18) << 0x1d);
  for (temp_v18 = romwright_fabs_4(temp_v18); temp_v9 = temp_v8, (int)temp_v18 >= 0x47800000; temp_v18 = temp_v18 - temp_v16) {
  }
  for (; (int)temp_v9 >= 0x47800000; temp_v9 = temp_v9 - temp_v16) {
  }
  temp_v2 = VectorFloatToUnsigned(temp_v8,3);
  temp_v3 = VectorFloatToUnsigned(temp_v18,3);
  temp_v4 = VectorFloatToUnsigned(temp_v9,3);
  temp_v0 = temp_v2 & 0xff;
  temp_v13 = (float)VectorUnsignedToFloat(temp_v2 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v2 = temp_v3 & 0xff;
  temp_v6 = (float)VectorUnsignedToFloat(temp_v3 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v3 = temp_v4 & 0xff;
  temp_v16 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v10 = (float)(&DAT_00407fc0)[temp_v0 * 4] + (temp_v8 - temp_v13) * (float)(&DAT_00407fc8)[temp_v0 * 4];
  temp_v11 = (float)(&DAT_00407fc0)[temp_v2 * 4] + (temp_v18 - temp_v6) * (float)(&DAT_00407fc8)[temp_v2 * 4];
  temp_v7 = (float)(&DAT_00407fc0)[temp_v3 * 4] + (temp_v9 - temp_v16) * (float)(&DAT_00407fc8)[temp_v3 * 4];
  temp_v13 = (float)(&DAT_00407fc4)[temp_v0 * 4] + (temp_v8 - temp_v13) * (float)(&DAT_00407fcc)[temp_v0 * 4];
  temp_v9 = (float)(&DAT_00407fc4)[temp_v3 * 4] + (temp_v9 - temp_v16) * (float)(&DAT_00407fcc)[temp_v3 * 4]
  ;
  temp_v29 = (float)(&DAT_00407fc4)[temp_v2 * 4] +
              (temp_v18 - temp_v6) * (float)(&DAT_00407fcc)[temp_v2 * 4];
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v11 = -temp_v11;
  }
  temp_v19 = temp_v9 * temp_v29;
  temp_v27 = -temp_v11;
  temp_v23 = temp_v7 * temp_v29;
  temp_v28 = temp_v10 * temp_v29;
  temp_v29 = temp_v13 * temp_v29;
  temp_v20 = temp_v10 * temp_v9 * temp_v11 - temp_v13 * temp_v7;
  temp_v21 = temp_v10 * temp_v7 + temp_v13 * temp_v9 * temp_v11;
  temp_v25 = temp_v13 * temp_v7 * temp_v11 - temp_v10 * temp_v9;
  temp_v24 = temp_v13 * temp_v9 + temp_v10 * temp_v7 * temp_v11;
  temp_v22 = 0;
  temp_v26 = 0;
  temp_v30 = 0;
  temp_v44 = temp_v8;
  temp_v45 = temp_v8;
  temp_v46 = temp_v17;
  temp_v47 = temp_v5;
  temp_v48 = temp_v8;
  temp_v49 = temp_v14;
  temp_v50[0] = temp_v5;
  temp_v51 = temp_v14;
  temp_v52 = temp_v15;
  temp_v53 = temp_v8;
  temp_v54 = temp_v14;
  temp_v55[0] = temp_v15;
  temp_v56 = temp_v14;
  FUN_002ad6d8(&temp_v31,&temp_v19,&temp_v47);
  FUN_002ad6d8(&temp_v34,&temp_v19,&temp_v52);
  FUN_002ad6d8(&temp_v37,&temp_v19,temp_v55);
  FUN_002ad6d8(&temp_v40,&temp_v19,temp_v50);
  FUN_002ad6d8(temp_v43,&temp_v19,&temp_v44);
  temp_v31 = temp_v31 + in_s0;
  temp_v32 = temp_v32 + in_s1;
  temp_v33 = temp_v33 + in_s2;
  temp_v34 = temp_v34 + in_s0;
  temp_v35 = temp_v35 + in_s1;
  temp_v36 = temp_v36 + in_s2;
  temp_v37 = temp_v37 + in_s0;
  temp_v38 = temp_v38 + in_s1;
  temp_v39 = temp_v39 + in_s2;
  temp_v40 = temp_v40 + in_s0;
  temp_v41 = temp_v41 + in_s1;
  temp_v42 = temp_v42 + in_s2;
  FUN_00262cb8(param_1);
  return;
}
