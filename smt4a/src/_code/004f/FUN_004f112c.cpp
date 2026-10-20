/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f112c` (_code @ 0x4f112c, 0x404 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014f0dc(int);
int FUN_0015a1b4(char *, char *);
int FUN_00162330(char *, char *);
int FUN_0018a924(float *, float [14]);
int FUN_001aff14(unsigned char [48], int);
int nn_math_ARMv6_MTX34CopyAsm(unsigned char [48], unsigned int *);
int nn_math_ARMv6_MTX44TransposeAsm(char *, char *);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(char *, unsigned char [48]);

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp50; /* 0x50: local_50 */
} param_6_stack;

extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_0064c054; /* 0x64c054 */
extern unsigned int DAT_0064c058; /* 0x64c058 */
extern unsigned int DAT_0064c05c; /* 0x64c05c */
extern unsigned int DAT_0064c060; /* 0x64c060 */
extern unsigned int DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern unsigned int DAT_0064c06c; /* 0x64c06c */
extern unsigned int DAT_0064c070; /* 0x64c070 */
extern unsigned int DAT_0064c074; /* 0x64c074 */
extern unsigned int DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern unsigned int DAT_0064c080; /* 0x64c080 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_0015a1b4. */
/* Supplied declaration required: FUN_00162330. */
/* Supplied declaration required: FUN_0018a924. */
/* Supplied declaration required: FUN_001aff14. */
extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX44TransposeAsm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void FUN_004f112c(int param_1,char *param_2,unsigned int *param_3,unsigned int *param_4,
                 unsigned int *param_5,int param_6)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned char temp_v17 [48];
  float temp_v18;
  float afStack_4c [14];
  
  temp_v15 = 0;
  if (*(float *)(param_6 + 8) == 0.0f) {
    FUN_0014f0dc(param_1 + 0x6c);
    return;
  }
  temp_v0 = param_3[1];
  temp_v2 = param_3[2];
  *(unsigned int *)(param_2 + 4) = *param_3;
  *(unsigned int *)(param_2 + 8) = temp_v0;
  *(unsigned int *)(param_2 + 0xc) = temp_v2;
  temp_v0 = param_4[1];
  temp_v2 = param_4[2];
  temp_v16 = 0x3f800000;
  *(unsigned int *)(param_2 + 0x10) = *param_4;
  *(unsigned int *)(param_2 + 0x14) = temp_v0;
  *(unsigned int *)(param_2 + 0x18) = temp_v2;
  temp_v0 = param_5[1];
  temp_v2 = param_5[2];
  *(unsigned int *)(param_2 + 0x1c) = *param_5;
  *(unsigned int *)(param_2 + 0x20) = temp_v0;
  *(unsigned int *)(param_2 + 0x24) = temp_v2;
  param_2[1] = '\0';
  temp_v3 = *(float *)(param_2 + 4) - *(float *)(param_2 + 0x10);
  temp_v4 = *(float *)(param_2 + 0xc) - *(float *)(param_2 + 0x18);
  if (temp_v3 * temp_v3 +
      (*(float *)(param_2 + 8) - *(float *)(param_2 + 0x14)) *
      (*(float *)(param_2 + 8) - *(float *)(param_2 + 0x14)) + temp_v4 * temp_v4 != 0.0f) {
    temp_v4 = *(float *)(param_2 + 0xc) - *(float *)(param_2 + 0x18);
    temp_v6 = *(float *)(param_2 + 4) - *(float *)(param_2 + 0x10);
    temp_v3 = *(float *)(param_2 + 8) - *(float *)(param_2 + 0x14);
    if ((temp_v6 == 0.0f) && (temp_v4 == 0.0f)) {
      *(float *)(param_2 + 0x38) = 1.0f;
      param_2[0x3c] = '\0';
      param_2[0x3d] = '\0';
      param_2[0x3e] = '\0';
      param_2[0x3f] = '\0';
      param_2[0x40] = '\0';
      param_2[0x41] = '\0';
      param_2[0x42] = '\0';
      param_2[0x43] = '\0';
      *(float *)(param_2 + 0x44) = -*(float *)(param_2 + 4);
      param_2[0x48] = '\0';
      param_2[0x49] = '\0';
      param_2[0x4a] = '\0';
      param_2[0x4b] = '\0';
      param_2[0x4c] = '\0';
      param_2[0x4d] = '\0';
      param_2[0x4e] = '\0';
      param_2[0x4f] = '\0';
      param_2[0x58] = '\0';
      param_2[0x59] = '\0';
      param_2[0x5a] = '\0';
      param_2[0x5b] = '\0';
      param_2[0x60] = '\0';
      param_2[0x61] = '\0';
      param_2[0x62] = '\0';
      param_2[99] = '\0';
      if (0.0f >= temp_v3) {
        param_2[0x50] = '\0';
        param_2[0x51] = '\0';
        param_2[0x52] = -0x80;
        param_2[0x53] = '?';
        *(float *)(param_2 + 0x54) = -*(float *)(param_2 + 0xc);
        param_2[0x5c] = '\0';
        param_2[0x5d] = '\0';
        param_2[0x5e] = -0x80;
        param_2[0x5f] = -0x41;
        *(unsigned int *)(param_2 + 100) = *(unsigned int *)(param_2 + 8);
      }
      else {
        param_2[0x50] = '\0';
        param_2[0x51] = '\0';
        param_2[0x52] = -0x80;
        param_2[0x53] = -0x41;
        *(unsigned int *)(param_2 + 0x54) = *(unsigned int *)(param_2 + 0xc);
        param_2[0x5c] = '\0';
        param_2[0x5d] = '\0';
        param_2[0x5e] = -0x80;
        param_2[0x5f] = '?';
        *(float *)(param_2 + 100) = -*(float *)(param_2 + 8);
      }
    }
    else {
      temp_v7 = 1.0f / romwright_sqrt_4(temp_v6 * temp_v6 + temp_v3 * temp_v3 + temp_v4 * temp_v4);
      temp_v3 = temp_v3 * temp_v7;
      temp_v12 = temp_v6 * temp_v7;
      temp_v7 = temp_v4 * temp_v7;
      temp_v5 = 1.0f / romwright_sqrt_4(temp_v4 * temp_v4 + temp_v6 * temp_v6);
      temp_v4 = temp_v4 * temp_v5;
      temp_v11 = -(temp_v6 * temp_v5);
      temp_v14 = temp_v12 * 0.0f - temp_v3 * temp_v4;
      temp_v13 = temp_v7 * temp_v4 - temp_v12 * temp_v11;
      temp_v5 = temp_v3 * temp_v11 - temp_v7 * 0.0f;
      FUN_0018a924(&temp_v18,afStack_4c);
      temp_v8 = *(float *)(param_2 + 4);
      temp_v9 = *(float *)(param_2 + 8);
      temp_v10 = *(float *)(param_2 + 0xc);
      temp_v6 = temp_v18 * temp_v5 + afStack_4c[0] * temp_v4;
      temp_v4 = afStack_4c[0] * temp_v5 - temp_v18 * temp_v4;
      temp_v5 = temp_v18 * temp_v14 + afStack_4c[0] * temp_v11;
      temp_v11 = afStack_4c[0] * temp_v14 - temp_v18 * temp_v11;
      *(float *)(param_2 + 0x38) = temp_v6;
      *(float *)(param_2 + 0x3c) = temp_v18 * temp_v13;
      *(float *)(param_2 + 0x40) = temp_v5;
      *(float *)(param_2 + 0x44) = -(temp_v8 * temp_v6 + temp_v9 * temp_v18 * temp_v13) + -(temp_v10 * temp_v5)
      ;
      *(float *)(param_2 + 0x48) = temp_v4;
      *(float *)(param_2 + 0x4c) = afStack_4c[0] * temp_v13;
      *(float *)(param_2 + 0x50) = temp_v11;
      *(float *)(param_2 + 0x54) =
           -(temp_v8 * temp_v4 + temp_v9 * afStack_4c[0] * temp_v13) + -(temp_v10 * temp_v11);
      *(float *)(param_2 + 0x58) = temp_v12;
      *(float *)(param_2 + 0x5c) = temp_v3;
      *(float *)(param_2 + 0x60) = temp_v7;
      *(float *)(param_2 + 100) = -(temp_v8 * temp_v12 + temp_v9 * temp_v3 + temp_v10 * temp_v7);
    }
    if (((DAT_005c4c2c & 1) == 0) && (temp_v1 = FUN_002eba64(&DAT_005c4c2c), temp_v1 != 0)) {
      DAT_0064c054 = temp_v16;
      DAT_0064c058 = temp_v15;
      DAT_0064c05c = temp_v15;
      DAT_0064c060 = temp_v15;
      DAT_0064c064 = temp_v15;
      DAT_0064c068 = temp_v16;
      DAT_0064c06c = temp_v15;
      DAT_0064c070 = temp_v15;
      DAT_0064c074 = temp_v15;
      DAT_0064c078 = temp_v15;
      DAT_0064c07c = temp_v16;
      DAT_0064c080 = temp_v15;
    }
    nn_math_ARMv6_MTX34CopyAsm(temp_v17,&DAT_0064c054);
    FUN_001aff14(temp_v17,1);
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(param_2 + 0x1c,temp_v17);
    FUN_00162330(param_2 + 0x128,param_2 + 0x38);
    *(unsigned int *)(param_2 + 0x198) = *(unsigned int *)(param_2 + 0x38);
    *(unsigned int *)(param_2 + 0x19c) = *(unsigned int *)(param_2 + 0x3c);
    *(unsigned int *)(param_2 + 0x1a0) = *(unsigned int *)(param_2 + 0x40);
    *(unsigned int *)(param_2 + 0x1a4) = *(unsigned int *)(param_2 + 0x44);
    *(unsigned int *)(param_2 + 0x1a8) = *(unsigned int *)(param_2 + 0x48);
    *(unsigned int *)(param_2 + 0x1ac) = *(unsigned int *)(param_2 + 0x4c);
    *(unsigned int *)(param_2 + 0x1b0) = *(unsigned int *)(param_2 + 0x50);
    *(unsigned int *)(param_2 + 0x1b4) = *(unsigned int *)(param_2 + 0x54);
    *(unsigned int *)(param_2 + 0x1b8) = *(unsigned int *)(param_2 + 0x58);
    *(unsigned int *)(param_2 + 0x1bc) = *(unsigned int *)(param_2 + 0x5c);
    *(unsigned int *)(param_2 + 0x1c0) = *(unsigned int *)(param_2 + 0x60);
    *(unsigned int *)(param_2 + 0x1c4) = *(unsigned int *)(param_2 + 100);
    *(unsigned int *)(param_2 + 0x1c8) = temp_v15;
    *(unsigned int *)(param_2 + 0x1cc) = temp_v15;
    *(unsigned int *)(param_2 + 0x1d0) = temp_v15;
    *(unsigned int *)(param_2 + 0x1d4) = temp_v16;
    nn_math_ARMv6_MTX44TransposeAsm(param_2 + 0x198,param_2 + 0x198);
    if (*param_2 == '\0') {
      return;
    }
  }
  else {
    if (*param_2 == '\0') {
      return;
    }
    if (((DAT_005c4c2c & 1) == 0) && (temp_v1 = FUN_002eba64(&DAT_005c4c2c), temp_v1 != 0)) {
      DAT_0064c054 = temp_v16;
      DAT_0064c058 = temp_v15;
      DAT_0064c05c = temp_v15;
      DAT_0064c060 = temp_v15;
      DAT_0064c064 = temp_v15;
      DAT_0064c068 = temp_v16;
      DAT_0064c06c = temp_v15;
      DAT_0064c070 = temp_v15;
      DAT_0064c074 = temp_v15;
      DAT_0064c078 = temp_v15;
      DAT_0064c07c = temp_v16;
      DAT_0064c080 = temp_v15;
    }
    nn_math_ARMv6_MTX34CopyAsm(temp_v17,&DAT_0064c054);
  }
  FUN_0015a1b4(param_2,param_2 + 0x38);
  return;
}

} /* extern "C" */
