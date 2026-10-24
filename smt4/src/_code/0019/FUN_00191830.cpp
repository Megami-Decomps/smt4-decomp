/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00191830` (_code @ 0x191830, 0x434 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, unsigned int);
int FUN_002929d8(int [3], int);
int FUN_002ba1e0(unsigned int);
int VectorSignedToFloat(unsigned int, int);
int nn_math_ARMv6_MTX34CopyAsm(unsigned char [72], unsigned int *);
int nn_math_ARMv6_MTX34MultAsm(unsigned char [72], int [3]);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(float *, unsigned char [72]);

/* stack frame of param_8: 27 slot(s), 108 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
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

extern unsigned int _ZGVZN2nw4math5MTX348IdentityEvE8identity; /* 0x476634 */
extern unsigned int _ZZN2nw4math5MTX348IdentityEvE8identity; /* 0x4efd6c */
extern float DAT_004efd70; /* 0x4efd70 */
extern float DAT_004efd74; /* 0x4efd74 */
extern float DAT_004efd78; /* 0x4efd78 */
extern float DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern float DAT_004efd84; /* 0x4efd84 */
extern float DAT_004efd88; /* 0x4efd88 */
extern float DAT_004efd8c; /* 0x4efd8c */
extern float DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern float DAT_004efd98; /* 0x4efd98 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002929d8. */
/* Supplied declaration required: FUN_002ba1e0. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void FUN_00191830(int param_1,unsigned long long *param_2,float *param_3,unsigned int param_4,
                 unsigned int param_5,int *param_6,int param_7,int param_8)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2; 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float *pfVar3;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  float in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned long long temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  int temp_v11 [3];
  float temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  float temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  float temp_v20;
  unsigned char temp_v21 [72];
  float temp_v22 [29];
  unsigned long long temp_v23;
  
  temp_v5 = romwright_piece_4_4(in_s1,in_s2);
  if (param_1 != 0) {
    temp_v9 = 0x3f800000;
    temp_v10 = 0.0f;
    if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v0 != 0)) {
      _ZZN2nw4math5MTX348IdentityEvE8identity = temp_v9;
      DAT_004efd70 = temp_v10;
      DAT_004efd74 = temp_v10;
      DAT_004efd78 = temp_v10;
      DAT_004efd7c = temp_v10;
      DAT_004efd80 = temp_v9;
      DAT_004efd84 = temp_v10;
      DAT_004efd88 = temp_v10;
      DAT_004efd8c = temp_v10;
      DAT_004efd90 = temp_v10;
      DAT_004efd94 = temp_v9;
      DAT_004efd98 = temp_v10;
    }
    nn_math_ARMv6_MTX34CopyAsm(temp_v21,&_ZZN2nw4math5MTX348IdentityEvE8identity);
    temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == temp_v10) << 0x1e);
    temp_v2 = 0;
    if (romwright_subpiece_4_1_0(temp_v4 >> 0x1e,0)) {
      temp_v2 = *param_6 == 0x3f800000;
    }
    temp_v3 = 0;
    if (temp_v2) {
      temp_v3 = param_6[1] == 0x3f800000;
    }
    if (!temp_v3) {
      temp_v11[1] = 0;
      temp_v11[0] = 0x3f800000;
      temp_v11[2] = 0;
      temp_v8 = -0.0f;
      temp_v12 = -(*param_3 + param_3[2] * 0.5f);
      temp_v16 = -(param_3[1] + param_3[3] * 0.5f);
      temp_v13 = 0;
      temp_v14 = 0x3f800000;
      temp_v15 = 0;
      temp_v17 = 0;
      temp_v18 = 0;
      temp_v19 = 0x3f800000;
      temp_v20 = -0.0f;
      temp_v10 = temp_v12;
      temp_v7 = temp_v16;
      nn_math_ARMv6_MTX34MultAsm(temp_v21,temp_v11);
      temp_v11[0] = *param_6;
      temp_v14 = param_6[1];
      temp_v13 = 0;
      temp_v11[1] = 0;
      temp_v11[2] = 0;
      temp_v12 = 0.0f;
      temp_v15 = 0;
      temp_v16 = 0.0f;
      temp_v17 = 0;
      temp_v18 = 0;
      temp_v20 = 0.0f;
      temp_v19 = temp_v9;
      nn_math_ARMv6_MTX34MultAsm(temp_v21,temp_v11);
      FUN_002929d8(temp_v11,1);
      nn_math_ARMv6_MTX34MultAsm(temp_v21,temp_v11);
      temp_v12 = -temp_v10;
      temp_v16 = -temp_v7;
      temp_v11[0] = 0x3f800000;
      temp_v11[1] = 0;
      temp_v11[2] = 0;
      temp_v13 = 0;
      temp_v14 = 0x3f800000;
      temp_v15 = 0;
      temp_v20 = -temp_v8;
      temp_v17 = 0;
      temp_v19 = 0x3f800000;
      temp_v18 = 0;
      nn_math_ARMv6_MTX34MultAsm(temp_v21,temp_v11);
    }
    temp_v11[0] = (int)temp_v5;
    temp_v11[1] = 0;
    temp_v11[2] = 0;
    temp_v12 = 0.0f;
    temp_v13 = 0;
    temp_v15 = 0;
    temp_v16 = 0.0f;
    temp_v17 = 0;
    temp_v18 = 0;
    temp_v20 = 0.0f;
    temp_v14 = temp_v11[0];
    temp_v19 = temp_v11[0];
    nn_math_ARMv6_MTX34MultAsm(temp_v21,temp_v11);
    temp_v22[1] = param_3[1];
    temp_v22[0] = *param_3;
    temp_v22[2] = (float)((unsigned long long)temp_v5 >> 0x20);
    temp_v22[3] = *param_3;
    temp_v22[4] = param_3[1] + param_3[3];
    temp_v22[7] = param_3[1];
    temp_v22[6] = *param_3 + param_3[2];
    temp_v22[9] = *param_3 + param_3[2];
    temp_v22[10] = param_3[1] + param_3[3];
    if (param_8 != 0) {
      temp_v22[0] = 258.0f - temp_v22[0];
      temp_v22[3] = 258.0f - temp_v22[3];
      temp_v22[6] = 258.0f - temp_v22[6];
      temp_v22[9] = 258.0f - temp_v22[9];
    }
    if (param_7 == 0) {
      temp_v5 = *param_2;
      temp_v6 = *(unsigned int *)(param_2 + 1);
    }
    else {
      temp_v6 = *(unsigned int *)(param_2 + 1);
      temp_v5 = CONCAT44(-*(float *)((int)param_2 + 4),*(unsigned int *)param_2);
    }
    temp_v23 = (unsigned long long)temp_v6;
    temp_v0 = 0;
    temp_v22[5] = temp_v22[2];
    temp_v22[8] = temp_v22[2];
    temp_v22[0xb] = temp_v22[2];
    do {
      pfVar3 = temp_v22 + temp_v0 * 3;
      nn_math_ARMv6_VEC3TransformAsm_2AD44C(pfVar3,temp_v21);
      temp_v1 = temp_v0 + 1;
      *pfVar3 = *pfVar3 + (float)temp_v5;
      temp_v22[temp_v0 * 3 + 1] = temp_v22[temp_v0 * 3 + 1] + (float)((unsigned long long)temp_v5 >> 0x20);
      temp_v22[temp_v0 * 3 + 2] = temp_v22[temp_v0 * 3 + 2] + (float)temp_v23;
      temp_v0 = temp_v1;
    } while (temp_v1 < 4);
    VectorSignedToFloat(*(unsigned int *)(param_1 + 0x14),(unsigned char)(temp_v4 >> 0x16) & 3);
    VectorSignedToFloat(*(unsigned int *)(param_1 + 0x14),(unsigned char)(temp_v4 >> 0x16) & 3);
    VectorSignedToFloat(*(unsigned int *)(param_1 + 0x18),(unsigned char)(temp_v4 >> 0x16) & 3);
    VectorSignedToFloat(*(unsigned int *)(param_1 + 0x18),(unsigned char)(temp_v4 >> 0x16) & 3);
    if (param_7 == 0) {
      FUN_002ba1e0(param_5);
      return;
    }
    FUN_002ba1e0(param_5);
  }
  return;
}

} /* extern "C" */
