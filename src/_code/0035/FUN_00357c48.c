/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00357c48` (_code @ 0x357c48, 0x5b8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
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
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int spF8; /* 0xf8: local_f8 */
} param_5_stack;

extern unsigned int DAT_004e62a8; /* 0x4e62a8 */

/* Supplied declaration required: FUN_00238dd4. */
/* Supplied declaration required: FUN_002392e0. */
extern unsigned int FUN_0023953c(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_00239564. */
extern int FUN_0023963c(int *, int, int *);
extern int FUN_002396f8(unsigned char *);
extern int *FUN_00239b54(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00239b84. */
/* Supplied declaration required: FUN_00263720. */
/* Supplied declaration required: FUN_002ad8f8. */
/* Supplied declaration required: FUN_002adb40. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c586c. */
/* Supplied declaration required: FUN_002c5ff4. */
/* Supplied declaration required: FUN_00358b0c. */
/* Supplied declaration required: FUN_003e07a4. */
/* Supplied declaration required: FUN_003e0c74. */
/* Supplied declaration required: FUN_003e0cf0. */
/* Supplied declaration required: FUN_003e0da8. */
/* Supplied declaration required: FUN_003e0de8. */


int * FUN_00357c48(int *param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 17 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int *piVar5;
  unsigned int temp_v3;
  unsigned char *puVar7;
  unsigned char *puVar8;
  unsigned int *puVar9;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  int temp_v9;
  int iStack_f4;
  unsigned char *puStack_f0;
  int *piStack_ec;
  unsigned char temp_v10 [96];
  unsigned int temp_v11;
  unsigned int uStack_7c;
  unsigned char *puStack_78;
  unsigned char temp_v12 [8];
  int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int *temp_v18;
  int *temp_v19;
  int *temp_v20;
  int *temp_v21;
  int *temp_v22;
  int temp_v23;
  unsigned char temp_v24 [4];
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  unsigned int temp_v25;
  
  piStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  temp_v25 = param_4;
  FUN_002c3aa8(&DAT_004e62a8);
  temp_v7 = 0;
  FUN_00263720(temp_v12);
  temp_v16 = 0;
  temp_v15 = 0;
  if ((*(char *)((int)param_1 + 9) == '\0') && (piVar3 = param_1, FUN_00358b0c(), (int)piVar3 < 0))
  {
    FUN_002c3a24(&DAT_004e62a8);
    return piVar3;
  }
  if (param_1[1] == 0) {
    FUN_002c3a24(&DAT_004e62a8);
    return (int *)0xc8810bea;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    FUN_002c3a24(&DAT_004e62a8);
    return (int *)0xc8810bef;
  }
  temp_v17 = 0;
  temp_v1 = param_2;
  FUN_003e0c74(param_2,2,temp_v24,&temp_v17);
  if (temp_v1 < 0) {
    FUN_002c3a24(&DAT_004e62a8);
    return (int *)0xc8810bef;
  }
  if (param_1[1] != *(int *)(param_2 + 0x10)) {
    FUN_002c3a24(&DAT_004e62a8);
    return (int *)0xc8e1086b;
  }
  FUN_00238dd4(&temp_v9,param_2,temp_v12);
  FUN_003e0da8(param_2,temp_v10);
  temp_v1 = FUN_002396f8(temp_v12);
  if (temp_v1 != 0) {
    FUN_002c586c(&temp_v21);
    temp_v19 = temp_v21;
    temp_v20 = temp_v22;
    FUN_002ad8f8(&temp_v9,&temp_v19);
    temp_v11 = temp_v9;
    uStack_7c = iStack_f4;
    puStack_78 = puStack_f0;
    puVar8 = puStack_f0;
  }
  else {
    puVar8 = temp_v12;
    piVar3 = param_1;
    FUN_003e07a4(param_1,param_3 != 0);
    temp_v7 = piVar3 != (int *)0xffffffff;
  }
  temp_v0 = *(unsigned char *)(param_2 + 0x6c);
  if (temp_v0 >= 2) {
    temp_v0 = *(unsigned char *)(param_2 + 0x6d);
  }
  if (temp_v0 >= 2) {
    FUN_002c3a24(&DAT_004e62a8);
    return (int *)0xe0e10bee;
  }
  temp_v18 = param_1 + 0x224;
  temp_v21 = param_1 + 0x222;
  temp_v22 = param_1 + 0x22c;
  piVar3 = (int *)0xc8e10869;
  temp_v19 = param_1 + 0x22a;
  if (param_3 != 0) {
    if (*(char *)((int)param_1 + 0xb) == '\0') {
      puVar9 = (unsigned int *)(param_1 + 0xed);
      temp_v23 = param_1[0xf0];
    }
    else {
      puVar9 = (unsigned int *)(param_1 + 0x229);
      temp_v23 = param_1[0x22c];
    }
    temp_v4 = *puVar9;
    temp_v5 = puVar9[1];
    temp_v6 = puVar9[2];
    puVar7 = (unsigned char *)param_1[0xf2];
    if (puVar7 != (unsigned char *)0x0) {
      puVar8 = *(unsigned char **)(param_2 + 4);
    }
    if (puVar7 != (unsigned char *)0x0 && puVar7 < puVar8) {
      FUN_002c3a24(&DAT_004e62a8);
      return piVar3;
    }
  }
  else {
    if (*(char *)((int)param_1 + 10) == '\0') {
      puVar9 = (unsigned int *)(param_1 + 0x81);
      temp_v23 = param_1[0x84];
    }
    else {
      puVar9 = (unsigned int *)(param_1 + 0x221);
      temp_v23 = param_1[0x224];
    }
    temp_v4 = *puVar9;
    temp_v5 = puVar9[1];
    temp_v6 = puVar9[2];
    puVar7 = (unsigned char *)param_1[0x86];
    temp_v8 = puVar7 == (unsigned char *)0x0;
    if (!temp_v8) {
      puVar8 = *(unsigned char **)(param_2 + 4);
    }
    if ((temp_v8 || puVar7 <= puVar8) && (!temp_v8 && puVar8 != puVar7)) {
      FUN_002c3a24(&DAT_004e62a8);
      return piVar3;
    }
  }
  if (temp_v7) {
    piVar3 = param_1;
    FUN_003e07a4(param_1,param_3,temp_v12);
    if (piVar3 != (int *)0xffffffff) {
      temp_v2 = FUN_0023963c(param_1,param_3,piVar3);
      temp_v1 = 0;
      if (temp_v2 != 0) {
        temp_v1 = *(int *)(temp_v2 + 4);
      }
      if ((temp_v4 != 0) && (temp_v4 < *(int *)(param_2 + 4) + (temp_v5 - temp_v1))) {
        FUN_002c3a24(&DAT_004e62a8);
        return (int *)0xc8e10865;
      }
      temp_v16 = *(int *)(param_2 + 4) - temp_v1;
    }
  }
  else {
    if ((temp_v4 != 0) && (temp_v4 < *(int *)(param_2 + 4) + temp_v5)) {
      FUN_002c3a24(&DAT_004e62a8);
      return (int *)0xc8e10865;
    }
    temp_v16 = *(int *)(param_2 + 4);
  }
  if (temp_v6 != 0) {
    if (!temp_v7) {
      if (temp_v6 < temp_v23 + 1U) {
        FUN_002c3a24(&DAT_004e62a8);
        return (int *)0xc8e10866;
      }
      temp_v15 = 1;
    }
  }
  else if (!temp_v7) {
    temp_v15 = 1;
  }
  temp_v20 = (int *)FUN_00239b54(*(unsigned int *)(param_2 + 4),4);
  if (temp_v20 == (int *)0x0) {
    FUN_002c3a24(&DAT_004e62a8);
    return (int *)0xc8610bf3;
  }
  FUN_003e0cf0(param_2,temp_v20);
  FUN_002c5ff4(temp_v20,temp_v10,0x70);
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v1 = FUN_002396f8(temp_v12);
  if (temp_v1 == 0) {
    FUN_003e0de8(temp_v12,&temp_v13);
  }
  puStack_f0 = *(unsigned char **)(param_2 + 4);
  piStack_ec = param_1 + 0x6b;
  temp_v9 = 8;
  iStack_f4 = (int)temp_v20;
  piVar3 = (int *)(**(romwright_code **)(*param_1 + 0x20))(param_1,param_1[1],param_3,&temp_v13);
  if (param_5 != 0) {
    piVar5 = param_1;
    if (param_3 != 1) {
      FUN_00239564(param_1,0,param_1 + 0x7f,param_1 + 0x87);
    }
    else {
      FUN_00239564(param_1,1,param_1 + 0xeb,param_1 + 0xf3);
    }
    if ((int)piVar5 < 0) {
      FUN_00239b84(temp_v20);
      FUN_002c3a24(&DAT_004e62a8);
      return piVar5;
    }
    if ((int)piVar3 < 0) {
      FUN_00239b84(temp_v20);
      FUN_002c3a24(&DAT_004e62a8);
      return piVar3;
    }
  }
  else {
    if (param_3 != 1) {
      if (*(char *)((int)param_1 + 10) == '\0') {
        param_1[0x21f] = param_1[0x7f];
        param_1[0x220] = param_1[0x80];
        param_1[0x221] = param_1[0x81];
        param_1[0x222] = param_1[0x82];
        param_1[0x223] = param_1[0x83];
        param_1[0x224] = param_1[0x84];
        param_1[0x225] = param_1[0x85];
        param_1[0x226] = param_1[0x86];
      }
      *(unsigned char *)((int)param_1 + 10) = 1;
      if ((int)piVar3 < 0) {
        FUN_00239b84(temp_v20);
        FUN_002c3a24(&DAT_004e62a8);
        return piVar3;
      }
      *temp_v21 = param_1[0x222] + temp_v16;
      temp_v1 = param_1[0x224];
      piVar5 = temp_v18;
    }
    else {
      if (*(char *)((int)param_1 + 0xb) == '\0') {
        param_1[0x227] = param_1[0xeb];
        param_1[0x228] = param_1[0xec];
        param_1[0x229] = param_1[0xed];
        param_1[0x22a] = param_1[0xee];
        param_1[0x22b] = param_1[0xef];
        param_1[0x22c] = param_1[0xf0];
        param_1[0x22d] = param_1[0xf1];
        param_1[0x22e] = param_1[0xf2];
      }
      *(unsigned char *)((int)param_1 + 0xb) = 1;
      if ((int)piVar3 < 0) {
        FUN_00239b84(temp_v20);
        FUN_002c3a24(&DAT_004e62a8);
        return piVar3;
      }
      *temp_v19 = param_1[0x22a] + temp_v16;
      temp_v1 = param_1[0x22c];
      piVar5 = temp_v22;
    }
    *piVar5 = temp_v1 + temp_v15;
  }
  temp_v1 = FUN_002396f8(temp_v12);
  if (temp_v1 != 0) {
    temp_v3 = FUN_0023953c((unsigned int *)&temp_v9,(unsigned int *)&temp_v13);
    FUN_002adb40(temp_v12,temp_v3);
    FUN_002adb40(temp_v25,temp_v12);
  }
  if (param_3 == 1 && !temp_v7) {
    temp_v9 = 2;
    temp_v4 = (**(romwright_code **)(*param_1 + 0x28))(param_1,param_1[1],temp_v12,8);
    if ((temp_v4 & 0x80000000) == 0) {
      FUN_002392e0(param_1);
    }
  }
  FUN_00239b84(temp_v20);
  FUN_002c3a24(&DAT_004e62a8);
  return piVar3;
}
