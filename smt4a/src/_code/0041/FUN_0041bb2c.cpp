/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041bb2c` (_code @ 0x41bb2c, 0x244 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017fc94(...);
int FUN_001ab810(unsigned int, unsigned char [48]);
int FUN_001aff14(unsigned char [48], int);
int controllerSetDestination(...);
int controllerSetRotationEulerDegrees(int);
int tripleOwnerSetValue(int, int);
int nn_math_ARMv6_MTX34CopyAsm(int, unsigned int *);
int nn_math_ARMv6_MTX34MultAsm(int, unsigned char [48]);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(int *, int);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

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

/* Supplied declaration required: FUN_0017fc94. */
/* Supplied declaration required: FUN_001ab810. */
/* Supplied declaration required: FUN_001aff14. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: controllerSetRotationEulerDegrees. */
/* Supplied declaration required: tripleOwnerSetValue. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void FUN_0041bb2c(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [48];
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  temp_v0 = *(int *)(param_1 + 8) - 1;
  *(int *)(param_1 + 8) = temp_v0;
  if (temp_v0 == 0) {
    temp_v0 = *(int *)(*(int *)(param_1 + 4) + 4);
    controllerSetDestination(temp_v0,param_1 + 0x90);
    controllerSetRotationEulerDegrees(temp_v0);
    tripleOwnerSetValue(temp_v0,param_1 + 0xa8);
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
    return;
  }
  temp_v2 = 0;
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x48);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x4c);
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x3c);
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x44);
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x5c);
  temp_v7 = -*(float *)(param_1 + 0xc);
  temp_v8 = -*(float *)(param_1 + 0x10);
  temp_v9 = -*(float *)(param_1 + 0x14);
  if (((DAT_005c4c2c & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_005c4c2c), temp_v0 != 0)) {
    DAT_0064c054 = 0x3f800000;
    DAT_0064c068 = 0x3f800000;
    DAT_0064c07c = 0x3f800000;
    DAT_0064c058 = temp_v2;
    DAT_0064c05c = temp_v2;
    DAT_0064c060 = temp_v2;
    DAT_0064c064 = temp_v2;
    DAT_0064c06c = temp_v2;
    DAT_0064c070 = temp_v2;
    DAT_0064c074 = temp_v2;
    DAT_0064c078 = temp_v2;
    DAT_0064c080 = temp_v2;
  }
  nn_math_ARMv6_MTX34CopyAsm(param_1 + 0x60,&DAT_0064c054);
  FUN_0017fc94(param_1 + 0x60,&temp_v7);
  FUN_001aff14(temp_v3,1);
  nn_math_ARMv6_MTX34MultAsm(param_1 + 0x60,temp_v3);
  FUN_0017fc94(param_1 + 0x60,param_1 + 0xc);
  FUN_0017fc94(param_1 + 0x60,param_1 + 0x18);
  temp_v1 = *(unsigned int *)(*(int *)(param_1 + 4) + 4);
  FUN_001ab810(temp_v1,temp_v3);
  temp_v4 = temp_v2;
  temp_v5 = temp_v2;
  temp_v6 = temp_v2;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v4,param_1 + 0x60);
  controllerSetDestination(temp_v1,&temp_v4);
  return;
}

} /* extern "C" */
