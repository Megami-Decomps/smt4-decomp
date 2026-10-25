/* NON_MATCHING: four-argument scaled-magnitude call and float result recovered; remaining raw emitter draft has mixed float/integer fields and stale callee contracts. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_00291060(...);
int FUN_0029118c(...);
int FUN_00291310(double, float *, float *, int, double, float *, unsigned int, int, int, double);
int FUN_00291340(float *, float *, float *, float *, float *);
int nodeTreeReleaseItemClearOwner(double);
int FUN_00291620(...);
int nodeTreeReleaseItem(...);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int nn_math_ARMv6_MTX34CopyAsm(...);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(...);

#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
/* stack frame of param_1: 19 slot(s), 76 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
} param_1_stack;

extern unsigned int DAT_00407ed0; /* 0x407ed0 */
extern unsigned int DAT_00407ed4; /* 0x407ed4 */
extern unsigned int DAT_00407ed8; /* 0x407ed8 */
extern unsigned int DAT_00407edc; /* 0x407edc */
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

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00291060. */
/* Supplied declaration required: FUN_0029118c. */
extern f32 FUN_00291234(s32 mode, s32 lower, s32 upper, u32 divisor);
/* Supplied declaration required: FUN_00291310. */
/* Supplied declaration required: FUN_00291340. */
/* Supplied declaration required: nodeTreeReleaseItemClearOwner. */
/* Supplied declaration required: FUN_00291620. */
/* Supplied declaration required: nodeTreeReleaseItem. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x001938d8) */

void FUN_00193440(float *param_1)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  short temp_v0;
  char temp_v1;
  float temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  float temp_v6;
  int temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  unsigned int temp_v15;
  float temp_v16;
  unsigned int temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned int temp_v23;
  unsigned long long temp_v24;
  unsigned int temp_v25;
  unsigned long long temp_v26;
  unsigned long long temp_v27;
  unsigned long long temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float fStack_78;
  unsigned int temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  unsigned int temp_v38;
  float temp_v39;
  float temp_v40;
  float fStack_58;
  unsigned int temp_v41;
  
  temp_v7 = 0;
  temp_v22 = 0.0f;
  if (param_1[0x61] == param_1[9]) {
    temp_v0 = *(short *)(param_1 + 0xc0) - 1;
    *(short *)(param_1 + 0xc0) = temp_v0;
    param_1[9] = 0.0f;
    if (temp_v0 < 1) {
      temp_v7 = 0;
      if (param_1 != (float *)0x0) {
        do {
          nodeTreeReleaseItemClearOwner(param_1[temp_v7 + 0x8e]);
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 0x32);
        param_1[9] = 0.0f;
        param_1[10] = 0.0f;
        param_1[0xb] = 0.0f;
        param_1[0xc] = 0.0f;
        if ((unsigned int *)romwright_f2u((float)(param_1[0x8a])) != (unsigned int *)0x0) {
          *(unsigned int *)romwright_f2u((float)(param_1[0x8a])) = 0;
        }
        nodeTreeReleaseItem(param_1);
        return;
      }
    }
    else {
      *param_1 = 0.0f;
      param_1[1] = 0.0f;
      param_1[2] = 0.0f;
      param_1[3] = 0.0f;
      param_1[4] = 0.0f;
      param_1[5] = 0.0f;
      param_1[6] = 0.0f;
      param_1[7] = 0.0f;
      param_1[8] = 0.0f;
      param_1[10] = 0.0f;
      param_1[0xb] = 0.0f;
      param_1[0xc] = 0.0f;
      param_1[0xd] = 0.0f;
      FUN_00291340(param_1 + 0x5b,param_1 + 10,param_1 + 0xc,param_1 + 3,param_1 + 6);
    }
    return;
  }
  if ((-1 < (int)param_1[0x8c]) && (param_1[(int)param_1[0x8c] + 0x8e] == 0.0f)) {
    do {
      if (param_1[0x8d] == param_1[0x8c]) break;
      temp_v2 = (float)(((int)param_1[0x8c] + 1) % 0x32);
      param_1[0x8c] = temp_v2;
    } while (param_1[(int)temp_v2 + 0x8e] == 0.0f);
  }
  temp_v8 = *param_1;
  temp_v2 = param_1[0xd];
  if (0 < (int)temp_v8 - (int)temp_v2) {
    temp_v26 = 0x4120000000000000;
    temp_v28 = 0x3f360b61;
    temp_v24 = 0x47800000;
    temp_v27 = 0x3f8000003c23d70a;
    do {
      temp_v6 = (float)(((int)param_1[0x8d] + 1) % 0x32);
      if ((int)param_1[0x8c] < 0) {
        param_1[0x8c] = 0.0f;
      }
      else if (param_1[(int)temp_v6 + 0x8e] != 0.0f) {
        nodeTreeReleaseItem();
      }
      temp_v9 = (float)(int)(param_1[0x5f] * (float)((unsigned long long)temp_v26 >> 0x20));
      temp_v3 = param_1[0x89];
      temp_v10 = temp_v9;
      FUN_00291310(temp_v3,param_1 + 0xe,param_1 + 0x5b,3,param_1[0x87],param_1 + (int)temp_v6 + 0x8e,
                   (unsigned int)temp_v6 & 0xff,*(unsigned char *)(param_1 + 0x8b),1,param_1[0x88]);
      param_1[(int)temp_v6 + 0x8e] = temp_v3;
      temp_v10 = FUN_00291234(0,(s32)temp_v9,10,10);
      temp_v25 = (unsigned int)((unsigned long long)temp_v26 >> 0x20);
      temp_v23 = (unsigned int)temp_v24;
      temp_v10 = temp_v10 * *(float *)((int)temp_v3 + 500);
      *(float *)((int)temp_v3 + 500) = temp_v10;
      temp_v1 = *(char *)((int)param_1 + 0x216);
      if (temp_v1 == -0x4c) {
        temp_v4 = (unsigned int)*(unsigned char *)((int)param_1 + 0x217);
      }
      if (!(temp_v1 == -0x4c && temp_v4 == 0xb4)) {
        FUN_00291620(2,temp_v1,1);
        temp_v24 = CONCAT44(temp_v10,temp_v23);
        FUN_00291620(2,*(unsigned char *)((int)param_1 + 0x217),1);
        temp_v26 = CONCAT44(temp_v25,temp_v10);
        FUN_00291620(0,param_1[0x60],100);
        temp_v30 = (float)((unsigned long long)temp_v27 >> 0x20);
        temp_v29 = temp_v22;
        temp_v31 = temp_v22;
        if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) && (temp_v5 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v5 != 0)) {
          _ZZN2nw4math5MTX348IdentityEvE8identity = (unsigned int)((unsigned long long)temp_v27 >> 0x20);
          DAT_004efd70 = temp_v22;
          DAT_004efd74 = temp_v22;
          DAT_004efd78 = temp_v22;
          DAT_004efd7c = temp_v22;
          DAT_004efd80 = _ZZN2nw4math5MTX348IdentityEvE8identity;
          DAT_004efd84 = temp_v22;
          DAT_004efd88 = temp_v22;
          DAT_004efd8c = temp_v22;
          DAT_004efd90 = temp_v22;
          DAT_004efd94 = _ZZN2nw4math5MTX348IdentityEvE8identity;
          DAT_004efd98 = temp_v22;
        }
        nn_math_ARMv6_MTX34CopyAsm(&temp_v32,&_ZZN2nw4math5MTX348IdentityEvE8identity);
        temp_v11 = (float)((unsigned long long)temp_v24 >> 0x20) * (float)temp_v28;
        temp_v12 = (float)temp_v26 * (float)temp_v28;
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v22 <= temp_v12) << 0x1d);
        temp_v12 = romwright_fabs_4(temp_v12);
        temp_v14 = (float)temp_v24;
        for (temp_v9 = romwright_fabs_4(temp_v11); temp_v21 = temp_v22, (int)temp_v9 >= 0x47800000;
            temp_v9 = temp_v9 - temp_v14) {
        }
        for (; (int)temp_v21 >= 0x47800000; temp_v21 = temp_v21 - temp_v14) {
        }
        for (; (int)temp_v12 >= 0x47800000; temp_v12 = temp_v12 - temp_v14) {
        }
        temp_v17 = VectorFloatToUnsigned(temp_v9,3);
        temp_v13 = VectorFloatToUnsigned(temp_v21,3);
        temp_v15 = VectorFloatToUnsigned(temp_v12,3);
        temp_v4 = temp_v17 & 0xff;
        temp_v18 = (float)VectorUnsignedToFloat(temp_v17 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v19 = (float)VectorUnsignedToFloat(temp_v13 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = temp_v15 & 0xff;
        temp_v13 = temp_v13 & 0xff;
        temp_v20 = (float)VectorUnsignedToFloat(temp_v15 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v24 = CONCAT44((&DAT_00407ed8)[temp_v17 * 4],temp_v14);
        temp_v26 = romwright_piece_4_4((int)((unsigned long long)temp_v26 >> 0x20),(&DAT_00407edc)[temp_v17 * 4]);
        temp_v16 = (float)(&DAT_00407ed0)[temp_v4 * 4] +
                 (temp_v9 - temp_v18) * (float)(&DAT_00407ed8)[temp_v4 * 4];
        temp_v14 = (float)(&DAT_00407ed0)[temp_v13 * 4] +
                 (temp_v21 - temp_v19) * (float)(&DAT_00407ed8)[temp_v13 * 4];
        temp_v9 = (float)(&DAT_00407ed4)[temp_v4 * 4] +
                 (temp_v9 - temp_v18) * (float)(&DAT_00407edc)[temp_v4 * 4];
        fStack_58 = (float)(&DAT_00407ed4)[temp_v13 * 4] +
                    (temp_v21 - temp_v19) * (float)(&DAT_00407edc)[temp_v13 * 4];
        temp_v21 = (float)(&DAT_00407ed0)[temp_v17 * 4] +
                 (temp_v12 - temp_v20) * (float)(&DAT_00407ed8)[temp_v17 * 4];
        temp_v12 = (float)(&DAT_00407ed4)[temp_v17 * 4] +
                 (temp_v12 - temp_v20) * (float)(&DAT_00407edc)[temp_v17 * 4];
        if (temp_v11 < temp_v22) {
          temp_v16 = -temp_v16;
        }
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
          temp_v21 = -temp_v21;
        }
        temp_v32 = temp_v12 * fStack_58;
        temp_v35 = temp_v21 * fStack_58;
        temp_v40 = temp_v16 * fStack_58;
        fStack_58 = temp_v9 * fStack_58;
        temp_v39 = -temp_v14;
        fStack_78 = temp_v16 * temp_v21 + temp_v9 * temp_v12 * temp_v14;
        temp_v36 = temp_v9 * temp_v12 + temp_v16 * temp_v21 * temp_v14;
        temp_v33 = temp_v16 * temp_v12 * temp_v14 - temp_v9 * temp_v21;
        temp_v37 = temp_v9 * temp_v21 * temp_v14 - temp_v16 * temp_v12;
        temp_v34 = 0;
        temp_v38 = 0;
        temp_v41 = 0;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v29,&temp_v32);
        *(float *)((int)temp_v3 + 0x120) = *(float *)((int)temp_v3 + 0x120) + temp_v29 * temp_v10;
        *(float *)((int)temp_v3 + 0x124) = *(float *)((int)temp_v3 + 0x124) + temp_v30 * temp_v10;
        *(float *)((int)temp_v3 + 0x128) = *(float *)((int)temp_v3 + 0x128) + temp_v31 * temp_v10;
        temp_v9 = temp_v31;
        FUN_00291620(0,(int)param_1[0x62] - (int)param_1[0x86],1);
        temp_v10 = (float)VectorSignedToFloat(param_1[0x86],(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v10 = temp_v10 + temp_v9;
        *(float *)((int)temp_v3 + 0x348) = temp_v29 * temp_v10;
        *(float *)((int)temp_v3 + 0x34c) = temp_v30 * temp_v10;
        temp_v10 = temp_v31 * temp_v10;
        *(float *)((int)temp_v3 + 0x350) = temp_v10;
      }
      else {
        temp_v9 = param_1[0x60];
        FUN_00291620(2,temp_v9,100);
        temp_v10 = temp_v10 + *(float *)((int)temp_v3 + 0x120);
        *(float *)((int)temp_v3 + 0x120) = temp_v10;
        FUN_00291620(2,temp_v9,100);
        temp_v10 = temp_v10 + *(float *)((int)temp_v3 + 0x124);
        *(float *)((int)temp_v3 + 0x124) = temp_v10;
        FUN_00291620(2,temp_v9,100);
        *(float *)((int)temp_v3 + 0x128) = temp_v10 + *(float *)((int)temp_v3 + 0x128);
        temp_v10 = *(float *)((int)temp_v3 + 0x120) - param_1[0x56];
        temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v22 <= temp_v10) << 0x1d);
        if (!romwright_subpiece_4_1_0(temp_v4 >> 0x1d,0)) {
          FUN_00291620(1,(int)param_1[0x62] - (int)param_1[0x86],1);
          *(float *)((int)temp_v3 + 0x348) = temp_v10;
          temp_v9 = (float)VectorSignedToFloat(param_1[0x86],(unsigned char)(temp_v4 >> 0x16) & 3);
          temp_v10 = temp_v10 - temp_v9;
        }
        else {
          FUN_00291620(0,(int)param_1[0x62] - (int)param_1[0x86],1);
          *(float *)((int)temp_v3 + 0x348) = temp_v10;
          temp_v9 = (float)VectorSignedToFloat(param_1[0x86],(unsigned char)(temp_v4 >> 0x16) & 3);
          temp_v10 = temp_v10 + temp_v9;
        }
        *(float *)((int)temp_v3 + 0x348) = temp_v10;
        temp_v10 = *(float *)((int)temp_v3 + 0x124) - param_1[0x57];
        temp_v4 = (temp_v4 & 0xfffffff) | ((unsigned int)(temp_v22 <= temp_v10) << 0x1d);
        if (!romwright_subpiece_4_1_0(temp_v4 >> 0x1d,0)) {
          FUN_00291620(1,(int)param_1[0x62] - (int)param_1[0x86],1);
          *(float *)((int)temp_v3 + 0x34c) = temp_v10;
          temp_v9 = (float)VectorSignedToFloat(param_1[0x86],(unsigned char)(temp_v4 >> 0x16) & 3);
          temp_v10 = temp_v10 - temp_v9;
        }
        else {
          FUN_00291620(0,(int)param_1[0x62] - (int)param_1[0x86],1);
          *(float *)((int)temp_v3 + 0x34c) = temp_v10;
          temp_v9 = (float)VectorSignedToFloat(param_1[0x86],(unsigned char)(temp_v4 >> 0x16) & 3);
          temp_v10 = temp_v10 + temp_v9;
        }
        *(float *)((int)temp_v3 + 0x34c) = temp_v10;
        temp_v10 = *(float *)((int)temp_v3 + 0x128) - param_1[0x58];
        in_fpscr = (temp_v4 & 0xfffffff) | ((unsigned int)(temp_v22 <= temp_v10) << 0x1d);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
          FUN_00291620(1,(int)param_1[0x62] - (int)param_1[0x86],1);
          *(float *)((int)temp_v3 + 0x350) = temp_v10;
          temp_v9 = (float)VectorSignedToFloat(param_1[0x86],(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v10 = temp_v10 - temp_v9;
        }
        else {
          FUN_00291620(0,(int)param_1[0x62] - (int)param_1[0x86],1);
          *(float *)((int)temp_v3 + 0x350) = temp_v10;
          temp_v9 = (float)VectorSignedToFloat(param_1[0x86],(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v10 = temp_v10 + temp_v9;
        }
        *(float *)((int)temp_v3 + 0x350) = temp_v10;
      }
      FUN_00291620(0,param_1[0x5c],100);
      temp_v9 = (float)VectorSignedToFloat(param_1[0x5b],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = temp_v10 + temp_v9 * (float)temp_v27;
      *(float *)((int)temp_v3 + 0x340) = temp_v10;
      *(float *)((int)temp_v3 + 0x33c) = temp_v22;
      FUN_0029118c(2,param_1[0x5d],100);
      *(float *)((int)temp_v3 + 0x344) = temp_v10;
      temp_v7 = temp_v7 + 1;
      param_1[0xd] = (float)((int)param_1[0xd] + 1);
      param_1[0x8d] = temp_v6;
    } while (temp_v7 < (int)temp_v8 - (int)temp_v2);
  }
  FUN_00291060(param_1 + 0x5b,param_1 + 0xb,param_1 + 10,param_1 + 0xc,param_1,param_1 + 3,
               param_1 + 6,param_1 + 0xd);
  param_1[9] = (float)((int)param_1[9] + 1);
  return;
}

} /* extern "C" */
