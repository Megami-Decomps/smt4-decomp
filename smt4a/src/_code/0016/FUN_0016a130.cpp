/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016a130` (_code @ 0x16a130, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017fc94(int *, int);
int FUN_0018eb44(int);
int nn_math_ARMv6_MTX34MultAsm(int *, int *, int);

/* stack frame of param_1: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

/* Supplied declaration required: FUN_0017fc94. */
/* Supplied declaration required: FUN_0018eb44. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */


void FUN_0016a130(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int temp_v20;
  unsigned int uStack_14;
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  if ((*(unsigned int *)(param_1 + 4) & 4) != 0) {
    puVar1 = (unsigned int *)
             (*(int *)(*(int *)(*(int *)(param_1 + 0x204) + 0x108) + 0x14) +
             (unsigned int)*(unsigned short *)(param_1 + 0x208) * 0x30);
    temp_v0 = puVar1[1];
    temp_v1 = puVar1[2];
    temp_v2 = puVar1[3];
    temp_v3 = puVar1[4];
    temp_v4 = puVar1[5];
    temp_v5 = puVar1[6];
    temp_v6 = puVar1[7];
    *(unsigned int *)(param_1 + 0x120) = *puVar1;
    *(unsigned int *)(param_1 + 0x124) = temp_v0;
    *(unsigned int *)(param_1 + 0x128) = temp_v1;
    *(unsigned int *)(param_1 + 300) = temp_v2;
    *(unsigned int *)(param_1 + 0x130) = temp_v3;
    *(unsigned int *)(param_1 + 0x134) = temp_v4;
    *(unsigned int *)(param_1 + 0x138) = temp_v5;
    *(unsigned int *)(param_1 + 0x13c) = temp_v6;
    temp_v0 = puVar1[8];
    temp_v1 = puVar1[9];
    temp_v2 = puVar1[10];
    *(unsigned int *)(param_1 + 0x14c) = puVar1[0xb];
    *(unsigned int *)(param_1 + 0x140) = temp_v0;
    *(unsigned int *)(param_1 + 0x144) = temp_v1;
    *(unsigned int *)(param_1 + 0x148) = temp_v2;
    return;
  }
  FUN_0018eb44(param_1 + 0xe4);
  temp_v7 = *(unsigned int *)(param_1 + 0x1f0);
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = *(unsigned int *)(param_1 + 500);
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  temp_v17 = *(unsigned int *)(param_1 + 0x1f8);
  temp_v18 = 0;
  nn_math_ARMv6_MTX34MultAsm(&temp_v19,&temp_v7,param_1 + 0x1c0);
  FUN_0017fc94(&temp_v19,param_1 + 0x1b4);
  *(unsigned int *)(param_1 + 0x120) = temp_v19;
  *(unsigned int *)(param_1 + 0x124) = uStack_34;
  *(unsigned int *)(param_1 + 0x128) = uStack_30;
  *(unsigned int *)(param_1 + 300) = uStack_2c;
  *(unsigned int *)(param_1 + 0x130) = uStack_28;
  *(unsigned int *)(param_1 + 0x134) = uStack_24;
  *(unsigned int *)(param_1 + 0x138) = uStack_20;
  *(unsigned int *)(param_1 + 0x13c) = uStack_1c;
  *(unsigned int *)(param_1 + 0x140) = temp_v20;
  *(unsigned int *)(param_1 + 0x144) = uStack_14;
  *(unsigned int *)(param_1 + 0x148) = uStack_10;
  *(unsigned int *)(param_1 + 0x14c) = uStack_c;
  return;
}

} /* extern "C" */
