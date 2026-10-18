/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020cb74` (_code @ 0x20cb74, 0x438 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 28 slot(s), 112 byte(s) */
typedef struct {
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
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
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
} param_8_stack;

extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_0064c054; /* 0x64c054 */
extern float DAT_0064c058; /* 0x64c058 */
extern float DAT_0064c05c; /* 0x64c05c */
extern float DAT_0064c060; /* 0x64c060 */
extern float DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern float DAT_0064c06c; /* 0x64c06c */
extern float DAT_0064c070; /* 0x64c070 */
extern float DAT_0064c074; /* 0x64c074 */
extern float DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern float DAT_0064c080; /* 0x64c080 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0019e3d0. */
/* Supplied declaration required: FUN_001aff14. */
extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void FUN_0020cb74(int param_1,float *param_2,float *param_3,unsigned int param_4,unsigned int param_5,
                 int *param_6,int param_7,int param_8)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float *pfVar3;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  float in_s0;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  int temp_v9 [3];
  float temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  float temp_v18;
  unsigned char temp_v19 [72];
  float temp_v20 [29];
  unsigned long long temp_v21;
  
  if (param_1 != 0) {
    temp_v7 = 0x3f800000;
    temp_v8 = 0.0f;
    if (((DAT_005c4c2c & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c2c), temp_v0 != 0)) {
      DAT_0064c054 = temp_v7;
      DAT_0064c058 = temp_v8;
      DAT_0064c05c = temp_v8;
      DAT_0064c060 = temp_v8;
      DAT_0064c064 = temp_v8;
      DAT_0064c068 = temp_v7;
      DAT_0064c06c = temp_v8;
      DAT_0064c070 = temp_v8;
      DAT_0064c074 = temp_v8;
      DAT_0064c078 = temp_v8;
      DAT_0064c07c = temp_v7;
      DAT_0064c080 = temp_v8;
    }
    nn_math_ARMv6_MTX34CopyAsm(temp_v19,&DAT_0064c054);
    temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == temp_v8) << 0x1e);
    temp_v2 = 0;
    if (romwright_subpiece_4_1_0(temp_v4 >> 0x1e,0)) {
      temp_v2 = *param_6 == 0x3f800000;
    }
    temp_v3 = 0;
    if (temp_v2) {
      temp_v3 = param_6[1] == 0x3f800000;
    }
    if (!temp_v3) {
      temp_v9[1] = 0;
      temp_v9[0] = 0x3f800000;
      temp_v9[2] = 0;
      temp_v5 = -(*param_3 + param_3[2] * 0.5f);
      temp_v14 = -(param_3[1] + param_3[3] * 0.5f);
      temp_v6 = -0.0f;
      temp_v11 = 0;
      temp_v12 = 0x3f800000;
      temp_v13 = 0;
      temp_v15 = 0;
      temp_v16 = 0;
      temp_v17 = 0x3f800000;
      temp_v18 = -0.0f;
      temp_v10 = temp_v5;
      temp_v8 = temp_v14;
      nn_math_ARMv6_MTX34MultAsm(temp_v19,temp_v9);
      temp_v9[0] = *param_6;
      temp_v12 = param_6[1];
      temp_v11 = 0;
      temp_v9[1] = 0;
      temp_v9[2] = 0;
      temp_v10 = 0.0f;
      temp_v13 = 0;
      temp_v14 = 0.0f;
      temp_v15 = 0;
      temp_v16 = 0;
      temp_v18 = 0.0f;
      temp_v17 = temp_v7;
      nn_math_ARMv6_MTX34MultAsm(temp_v19,temp_v9);
      FUN_001aff14(temp_v9,1);
      nn_math_ARMv6_MTX34MultAsm(temp_v19,temp_v9);
      temp_v10 = -temp_v5;
      temp_v14 = -temp_v8;
      temp_v9[1] = 0;
      temp_v9[0] = 0x3f800000;
      temp_v9[2] = 0;
      temp_v11 = 0;
      temp_v12 = 0x3f800000;
      temp_v13 = 0;
      temp_v18 = -temp_v6;
      temp_v15 = 0;
      temp_v16 = 0;
      temp_v17 = 0x3f800000;
      nn_math_ARMv6_MTX34MultAsm(temp_v19,temp_v9);
    }
    temp_v9[1] = 0;
    temp_v9[2] = 0;
    temp_v10 = 0.0f;
    temp_v11 = 0;
    temp_v13 = 0;
    temp_v14 = 0.0f;
    temp_v15 = 0;
    temp_v16 = 0;
    temp_v18 = 0.0f;
    temp_v17 = temp_v7;
    nn_math_ARMv6_MTX34MultAsm(temp_v19,temp_v9);
    temp_v20[1] = param_3[1];
    temp_v20[0] = *param_3;
    temp_v20[3] = *param_3;
    temp_v20[4] = param_3[1] + param_3[3];
    temp_v20[7] = param_3[1];
    temp_v20[6] = *param_3 + param_3[2];
    temp_v20[9] = *param_3 + param_3[2];
    temp_v20[10] = param_3[1] + param_3[3];
    if (param_8 != 0) {
      temp_v20[0] = 258.0f - temp_v20[0];
      temp_v20[3] = 258.0f - temp_v20[3];
      temp_v20[6] = 258.0f - temp_v20[6];
      temp_v20[9] = 258.0f - temp_v20[9];
    }
    if (param_7 == 0) {
      temp_v8 = *param_2;
      temp_v5 = param_2[1];
      temp_v6 = param_2[2];
    }
    else {
      temp_v8 = *param_2;
      temp_v6 = param_2[2];
      temp_v5 = -param_2[1];
    }
    temp_v21 = (unsigned long long)(unsigned int)temp_v6;
    temp_v0 = 0;
    do {
      pfVar3 = temp_v20 + temp_v0 * 3;
      nn_math_ARMv6_VEC3TransformAsm_2AD44C(pfVar3,temp_v19);
      temp_v1 = temp_v0 + 1;
      *pfVar3 = *pfVar3 + temp_v8;
      temp_v20[temp_v0 * 3 + 1] = temp_v20[temp_v0 * 3 + 1] + temp_v5;
      temp_v20[temp_v0 * 3 + 2] = temp_v20[temp_v0 * 3 + 2] + (float)temp_v21;
      temp_v0 = temp_v1;
    } while (temp_v1 < 4);
    VectorSignedToFloat(*(unsigned int *)(param_1 + 0x14),(unsigned char)(temp_v4 >> 0x16) & 3);
    VectorSignedToFloat(*(unsigned int *)(param_1 + 0x14),(unsigned char)(temp_v4 >> 0x16) & 3);
    VectorSignedToFloat(*(unsigned int *)(param_1 + 0x18),(unsigned char)(temp_v4 >> 0x16) & 3);
    VectorSignedToFloat(*(unsigned int *)(param_1 + 0x18),(unsigned char)(temp_v4 >> 0x16) & 3);
    if (param_7 == 0) {
      FUN_0019e3d0(param_5);
      return;
    }
    FUN_0019e3d0(param_5);
  }
  return;
}
