/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de124` (_code @ 0x2de124, 0x398 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 23 slot(s), 92 byte(s) */
typedef struct {
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
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF4; /* 0xf4: local_f4 */
} param_2_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern unsigned char DAT_00614d7c; /* 0x614d7c */
extern int DAT_006160dc; /* 0x6160dc */

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
/* Supplied declaration required: FUN_003250ac. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x002de298) */
/* WARNING: Removing unreachable block (ram,0x002de2a8) */
/* WARNING: Removing unreachable block (ram,0x002de1e0) */

void FUN_002de124(unsigned short param_1,unsigned short param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2, in_s3, in_s4; 13 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float in_s0;
  float in_s1;
  float temp_v4;
  float in_s2;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  float in_s3;
  float temp_v9;
  float in_s4;
  float temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned int uStack_f0;
  float temp_v15;
  int temp_v16;
  unsigned int temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned int uStack_a4;
  float temp_v20;
  float temp_v21;
  unsigned int uStack_98;
  float temp_v22;
  float temp_v23;
  unsigned int uStack_8c;
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
  
  temp_v12 = 0;
  temp_v0 = DAT_006160dc * 0x7c;
  *(float *)(&DAT_00614d7c + temp_v0) = in_s0;
  *(unsigned int *)(temp_v0 + 0x614d80) = 0;
  *(float *)(temp_v0 + 0x614d84) = in_s1;
  temp_v13 = -in_s3;
  *(float *)(temp_v0 + 0x614d88) = in_s0 + in_s2;
  *(unsigned int *)(temp_v0 + 0x614d8c) = 0;
  *(float *)(temp_v0 + 0x614d90) = in_s1 + in_s3;
  *(unsigned short *)(temp_v0 + 0x614d94) = param_1;
  *(unsigned short *)(temp_v0 + 0x614d96) = param_2;
  temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= in_s4 * 0.7111111f) << 0x1d);
  for (temp_v4 = romwright_fabs_4(in_s4 * 0.7111111f); (int)temp_v4 >= 0x47800000; temp_v4 = temp_v4 - 65536.0f) {
  }
  temp_v5 = VectorFloatToUnsigned(0,3);
  temp_v6 = VectorFloatToUnsigned(temp_v4,3);
  temp_v7 = VectorFloatToUnsigned(0,3);
  temp_v2 = temp_v6;
  temp_v9 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v6 = temp_v5 & 0xff;
  temp_v3 = temp_v7;
  temp_v8 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v10 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v11 = (float)(&DAT_00536d18)[temp_v6 * 4] + (0.0f - temp_v8) * (float)(&DAT_00536d20)[temp_v6 * 4];
  temp_v8 = (float)(&DAT_00536d14)[temp_v6 * 4] + (0.0f - temp_v8) * (float)(&DAT_00536d1c)[temp_v6 * 4];
  temp_v35 = (float)(&DAT_00536d18)[temp_v2 * 4] +
             (temp_v4 - temp_v9) * (float)(&DAT_00536d20)[temp_v2 * 4];
  temp_v4 = (float)(&DAT_00536d14)[temp_v2 * 4] + (temp_v4 - temp_v9) * (float)(&DAT_00536d1c)[temp_v2 * 4];
  temp_v9 = (float)(&DAT_00536d14)[temp_v3 * 4] + (0.0f - temp_v10) * (float)(&DAT_00536d1c)[temp_v3 * 4];
  temp_v10 = (float)(&DAT_00536d18)[temp_v3 * 4] + (0.0f - temp_v10) * (float)(&DAT_00536d20)[temp_v3 * 4];
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v4 = -temp_v4;
  }
  temp_v25 = temp_v10 * temp_v35;
  temp_v33 = -temp_v4;
  temp_v29 = temp_v9 * temp_v35;
  temp_v34 = temp_v8 * temp_v35;
  temp_v35 = temp_v11 * temp_v35;
  temp_v27 = temp_v8 * temp_v9 + temp_v11 * temp_v10 * temp_v4;
  temp_v30 = temp_v11 * temp_v10 + temp_v8 * temp_v9 * temp_v4;
  temp_v26 = temp_v8 * temp_v10 * temp_v4 - temp_v11 * temp_v9;
  temp_v31 = temp_v11 * temp_v9 * temp_v4 - temp_v8 * temp_v10;
  temp_v28 = 0;
  temp_v32 = 0;
  temp_v36 = 0;
  temp_v16 = 0;
  temp_v17 = 0;
  temp_v18 = 0.0f;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v14,&temp_v25,&temp_v16);
  temp_v17 = temp_v12;
  temp_v18 = (float)temp_v12;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v19,&temp_v25,&temp_v16);
  temp_v17 = temp_v12;
  temp_v18 = temp_v13;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v21,&temp_v25,&temp_v16);
  temp_v16 = temp_v12;
  temp_v17 = temp_v12;
  temp_v18 = temp_v13;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v23,&temp_v25,&temp_v16);
  temp_v14 = temp_v14 + in_s0;
  temp_v15 = temp_v15 + in_s1;
  temp_v19 = temp_v19 + in_s0;
  temp_v20 = temp_v20 + in_s1;
  temp_v21 = temp_v21 + in_s0;
  temp_v22 = temp_v22 + in_s1;
  temp_v23 = temp_v23 + in_s0;
  temp_v24 = temp_v24 + in_s1;
  *(float *)(temp_v0 + 0x614d98) = temp_v23;
  *(unsigned int *)(temp_v0 + 0x614d9c) = uStack_8c;
  *(float *)(temp_v0 + 0x614da0) = temp_v24;
  *(float *)(temp_v0 + 0x614db0) = temp_v14;
  *(unsigned int *)(temp_v0 + 0x614db4) = uStack_f0;
  *(float *)(temp_v0 + 0x614db8) = temp_v15;
  *(float *)(temp_v0 + 0x614dc8) = temp_v21;
  *(unsigned int *)(temp_v0 + 0x614dcc) = uStack_98;
  *(float *)(temp_v0 + 0x614dd0) = temp_v22;
  *(float *)(temp_v0 + 0x614de0) = temp_v19;
  *(unsigned int *)(temp_v0 + 0x614de4) = uStack_a4;
  *(float *)(temp_v0 + 0x614de8) = temp_v20;
  FUN_003250ac(temp_v0 + 0x614da4);
  FUN_003250ac(temp_v0 + 0x614dbc);
  FUN_003250ac(temp_v0 + 0x614dd4);
  FUN_003250ac(temp_v0 + 0x614dec);
  DAT_006160dc = DAT_006160dc + 1;
  return;
}
