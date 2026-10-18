/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001458a8` (_code @ 0x1458a8, 0x588 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 33 slot(s), 132 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
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
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
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
/* Supplied declaration required: FUN_002a5078. */
/* Supplied declaration required: FUN_002ad6d8. */


/* WARNING: Removing unreachable block (ram,0x00145d3c) */
/* WARNING: Removing unreachable block (ram,0x00145ba8) */
/* WARNING: Removing unreachable block (ram,0x00145a24) */
/* WARNING: Removing unreachable block (ram,0x00145a2c) */
/* WARNING: Removing unreachable block (ram,0x00145bbc) */
/* WARNING: Removing unreachable block (ram,0x00145d44) */
/* WARNING: Removing unreachable block (ram,0x00145958) */
/* WARNING: Removing unreachable block (ram,0x0014593c) */
/* WARNING: Removing unreachable block (ram,0x00145af0) */

void FUN_001458a8(float *param_1)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned char temp_v15 [80];
  float temp_v16;
  float temp_v17;
  float fStack_c8;
  unsigned int temp_v18;
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
  unsigned int temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  unsigned int temp_v38;
  float temp_v39;
  float fStack_54;
  float temp_v40;
  unsigned int temp_v41;
  float temp_v42;
  float temp_v43;
  float fStack_40;
  unsigned int temp_v44;
  float temp_v45;
  float temp_v46;
  float temp_v47;
  unsigned int temp_v48;
  
  param_1[6] = 0.0f;
  param_1[7] = 1.0f;
  param_1[8] = 0.0f;
  param_1[3] = 0.0f;
  param_1[4] = 0.0f;
  param_1[5] = -1.0f;
  temp_v0 = in_fpscr & 0xfffffff;
  temp_v4 = temp_v0 | ((unsigned int)(0.0f <= param_1[0xe] * 40.743664f) << 0x1d);
  for (temp_v5 = romwright_fabs_4(param_1[0xe] * 40.743664f); (int)temp_v5 >= 0x47800000; temp_v5 = temp_v5 - 65536.0f) {
  }
  temp_v6 = VectorFloatToUnsigned(temp_v5,3);
  temp_v7 = VectorFloatToUnsigned(0,3);
  temp_v8 = VectorFloatToUnsigned(0,3);
  temp_v2 = temp_v7 & 0xff;
  temp_v1 = temp_v6;
  temp_v3 = temp_v8 & 0xff;
  temp_v10 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v4 >> 0x16) & 3);
  temp_v12 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v4 >> 0x16) & 3);
  temp_v9 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v4 >> 0x16) & 3);
  temp_v11 = (float)(&DAT_00407fc0)[temp_v1 * 4] + (temp_v5 - temp_v10) * (float)(&DAT_00407fc8)[temp_v1 * 4];
  temp_v10 = (float)(&DAT_00407fc4)[temp_v1 * 4] + (temp_v5 - temp_v10) * (float)(&DAT_00407fcc)[temp_v1 * 4];
  temp_v5 = (float)(&DAT_00407fc0)[temp_v2 * 4] + (0.0f - temp_v12) * (float)(&DAT_00407fc8)[temp_v2 * 4];
  if (!romwright_subpiece_4_1_0(temp_v4 >> 0x1d,0)) {
    temp_v11 = -temp_v11;
  }
  temp_v13 = (float)(&DAT_00407fc0)[temp_v3 * 4] +
           (0.0f - temp_v9) * (float)*(unsigned long long *)(&DAT_00407fc8 + temp_v3 * 4);
  temp_v9 = (float)(&DAT_00407fc4)[temp_v3 * 4] +
           (0.0f - temp_v9) * (float)((unsigned long long)*(unsigned long long *)(&DAT_00407fc8 + temp_v3 * 4) >> 0x20);
  temp_v47 = (float)(&DAT_00407fc4)[temp_v2 * 4] + (0.0f - temp_v12) * (float)(&DAT_00407fcc)[temp_v2 * 4];
  temp_v46 = temp_v11 * temp_v47;
  temp_v39 = temp_v9 * temp_v47;
  temp_v42 = temp_v13 * temp_v47;
  temp_v47 = temp_v10 * temp_v47;
  temp_v45 = -temp_v5;
  temp_v40 = temp_v11 * temp_v13 + temp_v10 * temp_v9 * temp_v5;
  fStack_54 = temp_v11 * temp_v9 * temp_v5 - temp_v10 * temp_v13;
  fStack_40 = temp_v10 * temp_v13 * temp_v5 - temp_v11 * temp_v9;
  temp_v43 = temp_v10 * temp_v9 + temp_v11 * temp_v13 * temp_v5;
  temp_v41 = 0;
  temp_v44 = 0;
  temp_v48 = 0;
  temp_v4 = temp_v0 | ((unsigned int)(0.0f <= param_1[0xf] * 40.743664f) << 0x1d);
  for (temp_v5 = romwright_fabs_4(param_1[0xf] * 40.743664f); (int)temp_v5 >= 0x47800000; temp_v5 = temp_v5 - 65536.0f) {
  }
  temp_v2 = VectorFloatToUnsigned(0,3);
  temp_v6 = VectorFloatToUnsigned(temp_v5,3);
  temp_v7 = VectorFloatToUnsigned(0,3);
  temp_v1 = temp_v2;
  temp_v11 = (float)VectorUnsignedToFloat(temp_v2 & 0xffff,(unsigned char)(temp_v4 >> 0x16) & 3);
  temp_v2 = temp_v6 & 0xff;
  temp_v3 = temp_v7 & 0xff;
  temp_v10 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v4 >> 0x16) & 3);
  temp_v9 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v4 >> 0x16) & 3);
  temp_v13 = (float)(&DAT_00407fc0)[temp_v1 * 4] + (0.0f - temp_v11) * (float)(&DAT_00407fc8)[temp_v1 * 4];
  temp_v14 = (float)(&DAT_00407fc4)[temp_v1 * 4] + (0.0f - temp_v11) * (float)(&DAT_00407fcc)[temp_v1 * 4];
  temp_v11 = (float)(&DAT_00407fc0)[temp_v3 * 4] +
           (0.0f - temp_v10) * (float)*(unsigned long long *)(&DAT_00407fc8 + temp_v3 * 4);
  temp_v12 = (float)(&DAT_00407fc4)[temp_v3 * 4] +
           (0.0f - temp_v10) * (float)((unsigned long long)*(unsigned long long *)(&DAT_00407fc8 + temp_v3 * 4) >> 0x20);
  temp_v10 = (float)(&DAT_00407fc0)[temp_v2 * 4] + (temp_v5 - temp_v9) * (float)(&DAT_00407fc8)[temp_v2 * 4];
  temp_v25 = (float)(&DAT_00407fc4)[temp_v2 * 4] +
             (temp_v5 - temp_v9) * (float)(&DAT_00407fcc)[temp_v2 * 4];
  if (!romwright_subpiece_4_1_0(temp_v4 >> 0x1d,0)) {
    temp_v10 = -temp_v10;
  }
  temp_v16 = temp_v12 * temp_v25;
  temp_v23 = -temp_v10;
  temp_v19 = temp_v11 * temp_v25;
  temp_v24 = temp_v13 * temp_v25;
  temp_v25 = temp_v14 * temp_v25;
  temp_v17 = temp_v13 * temp_v12 * temp_v10 - temp_v14 * temp_v11;
  fStack_c8 = temp_v13 * temp_v11 + temp_v14 * temp_v12 * temp_v10;
  temp_v21 = temp_v14 * temp_v11 * temp_v10 - temp_v13 * temp_v12;
  temp_v20 = temp_v14 * temp_v12 + temp_v13 * temp_v11 * temp_v10;
  temp_v18 = 0;
  temp_v22 = 0;
  temp_v26 = 0;
  temp_v0 = temp_v0 | ((unsigned int)(0.0f <= param_1[0x10] * 40.743664f) << 0x1d);
  for (temp_v5 = romwright_fabs_4(param_1[0x10] * 40.743664f); (int)temp_v5 >= 0x47800000; temp_v5 = temp_v5 - 65536.0f) {
  }
  temp_v4 = VectorFloatToUnsigned(0,3);
  temp_v2 = VectorFloatToUnsigned(0,3);
  temp_v3 = VectorFloatToUnsigned(temp_v5,3);
  temp_v9 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v4 = temp_v4 & 0xff;
  temp_v1 = temp_v2;
  temp_v13 = (float)VectorUnsignedToFloat(temp_v2 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v2 = temp_v3 & 0xff;
  temp_v10 = (float)VectorUnsignedToFloat(temp_v3 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v11 = (float)(&DAT_00407fc0)[temp_v4 * 4] + (0.0f - temp_v9) * (float)(&DAT_00407fc8)[temp_v4 * 4];
  temp_v12 = (float)(&DAT_00407fc0)[temp_v2 * 4] + (temp_v5 - temp_v10) * (float)(&DAT_00407fc8)[temp_v2 * 4];
  temp_v14 = (float)(&DAT_00407fc4)[temp_v4 * 4] + (0.0f - temp_v9) * (float)(&DAT_00407fcc)[temp_v4 * 4];
  temp_v9 = (float)(&DAT_00407fc0)[temp_v1 * 4] + (0.0f - temp_v13) * (float)(&DAT_00407fc8)[temp_v1 * 4];
  temp_v5 = (float)(&DAT_00407fc4)[temp_v2 * 4] + (temp_v5 - temp_v10) * (float)(&DAT_00407fcc)[temp_v2 * 4];
  temp_v37 = (float)(&DAT_00407fc4)[temp_v1 * 4] + (0.0f - temp_v13) * (float)(&DAT_00407fcc)[temp_v1 * 4];
  if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
    temp_v12 = -temp_v12;
  }
  temp_v36 = temp_v11 * temp_v37;
  temp_v27 = temp_v5 * temp_v37;
  temp_v35 = -temp_v9;
  temp_v31 = temp_v12 * temp_v37;
  temp_v37 = temp_v14 * temp_v37;
  temp_v28 = temp_v11 * temp_v5 * temp_v9 - temp_v14 * temp_v12;
  temp_v33 = temp_v14 * temp_v12 * temp_v9 - temp_v11 * temp_v5;
  temp_v29 = temp_v11 * temp_v12 + temp_v14 * temp_v5 * temp_v9;
  temp_v32 = temp_v14 * temp_v5 + temp_v11 * temp_v12 * temp_v9;
  temp_v30 = 0;
  temp_v34 = 0;
  temp_v38 = 0;
  FUN_002a5078(temp_v15,&temp_v16,&temp_v39);
  FUN_002a5078(temp_v15,temp_v15,&temp_v27);
  FUN_002ad6d8(param_1 + 6,temp_v15);
  FUN_002ad6d8(param_1 + 3,temp_v15);
  param_1[3] = param_1[3] + *param_1;
  param_1[4] = param_1[4] + param_1[1];
  param_1[5] = param_1[5] + param_1[2];
  return;
}
