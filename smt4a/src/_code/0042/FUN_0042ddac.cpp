/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042ddac` (_code @ 0x42ddac, 0x5b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00193038(int *, int **);
int wordPairCopy(...);
int FUN_0030fc80(int **);
int FUN_0042f79c(void);
int FUN_00430e58(int *);
int _ZN12CecMessageIdC1Ev(unsigned char [8]);
int FUN_00501928(...);
int copy0x70Bytes(int, unsigned char [96]);
int FUN_00501fa4(unsigned char [8], int *);
int nn_cec_CTR_Message_GetExHeader(int, int, unsigned char [4], int *);
int nn_cec_CTR_Message_GetMessageId(int *, int, unsigned char [8]);
int rt_memcpy(int *, unsigned char [96], int);

typedef int romwright_code(...);
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

extern unsigned int g_asdCecMessageBoxCriticalSection; /* 0x6426c0 */

/* Supplied declaration required: FUN_00193038. */
/* Supplied declaration required: wordPairCopy. */
/* Supplied declaration required: FUN_0030fc80. */
/* Supplied declaration required: FUN_0042f79c. */
/* Supplied declaration required: FUN_00430e58. */
extern unsigned int releaseOrCopyHandle2(unsigned int *, unsigned int *);
/* Supplied declaration required: _ZN12CecMessageIdC1Ev. */
extern int *handlerRefForward(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00501928. */
/* Supplied declaration required: copy0x70Bytes. */
/* Supplied declaration required: FUN_00501fa4. */
extern unsigned int nn_cec_CTR_MessageBox_GetMessHeader(unsigned int, int, unsigned int);
extern unsigned int nn_cec_CTR_MessageBox_ReadOutBoxIndex(unsigned int);
extern unsigned int nn_cec_CTR_MessageBox_WriteBoxInfo(unsigned int, int, unsigned int, unsigned int *);
extern unsigned char nn_cec_CTR_MessageId_IsEmpty(unsigned int);
/* Supplied declaration required: nn_cec_CTR_Message_GetExHeader. */
/* Supplied declaration required: nn_cec_CTR_Message_GetMessageId. */
extern unsigned int nn_cec_CTR_Message_MakeMessageBinary(unsigned int, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: rt_memcpy. */


int * FUN_0042ddac(int *param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 12 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  unsigned int temp_v4;
  unsigned char *puVar8;
  unsigned char *puVar9;
  unsigned int *puVar10;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
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
  nn_os_CriticalSection_Enter((unsigned int)&g_asdCecMessageBoxCriticalSection);
  temp_v8 = 0;
  _ZN12CecMessageIdC1Ev(temp_v12);
  temp_v16 = 0;
  temp_v15 = 0;
  if ((*(char *)((int)param_1 + 9) == '\0') && (piVar3 = param_1, FUN_0042f79c(), (int)piVar3 < 0))
  {
    nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
    return piVar3;
  }
  if (param_1[1] == 0) {
    nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
    return (int *)0xc8810bea;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
    return (int *)0xc8810bef;
  }
  temp_v17 = 0;
  temp_v3 = param_2;
  nn_cec_CTR_Message_GetExHeader(param_2,2,temp_v24,&temp_v17);
  if (temp_v3 < 0) {
    nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
    return (int *)0xc8810bef;
  }
  if (param_1[1] != *(int *)(param_2 + 0x10)) {
    nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
    return (int *)0xc8e1086b;
  }
  nn_cec_CTR_Message_GetMessageId(&temp_v9,param_2,temp_v12);
  copy0x70Bytes(param_2,temp_v10);
  temp_v0 = nn_cec_CTR_MessageId_IsEmpty((unsigned int)temp_v12);
  if (temp_v0) {
    FUN_0030fc80(&temp_v21);
    temp_v19 = temp_v21;
    temp_v20 = temp_v22;
    FUN_00193038(&temp_v9,&temp_v19);
    temp_v11 = temp_v9;
    uStack_7c = iStack_f4;
    puStack_78 = puStack_f0;
    puVar9 = puStack_f0;
  }
  else {
    puVar9 = temp_v12;
    piVar3 = param_1;
    FUN_00501928(param_1,param_3 != 0);
    temp_v8 = piVar3 != (int *)0xffffffff;
  }
  temp_v1 = *(unsigned char *)(param_2 + 0x6c);
  if (temp_v1 >= 2) {
    temp_v1 = *(unsigned char *)(param_2 + 0x6d);
  }
  if (temp_v1 >= 2) {
    nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
    return (int *)0xe0e10bee;
  }
  temp_v18 = param_1 + 0x224;
  temp_v21 = param_1 + 0x222;
  temp_v22 = param_1 + 0x22c;
  piVar3 = (int *)0xc8e10869;
  temp_v19 = param_1 + 0x22a;
  if (param_3 != 0) {
    if (*(char *)((int)param_1 + 0xb) == '\0') {
      puVar10 = (unsigned int *)(param_1 + 0xed);
      temp_v23 = param_1[0xf0];
    }
    else {
      puVar10 = (unsigned int *)(param_1 + 0x229);
      temp_v23 = param_1[0x22c];
    }
    temp_v5 = *puVar10;
    temp_v6 = puVar10[1];
    temp_v7 = puVar10[2];
    puVar8 = (unsigned char *)param_1[0xf2];
    if (puVar8 != (unsigned char *)0x0) {
      puVar9 = *(unsigned char **)(param_2 + 4);
    }
    if (puVar8 != (unsigned char *)0x0 && puVar8 < puVar9) {
      nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
      return piVar3;
    }
  }
  else {
    if (*(char *)((int)param_1 + 10) == '\0') {
      puVar10 = (unsigned int *)(param_1 + 0x81);
      temp_v23 = param_1[0x84];
    }
    else {
      puVar10 = (unsigned int *)(param_1 + 0x221);
      temp_v23 = param_1[0x224];
    }
    temp_v5 = *puVar10;
    temp_v6 = puVar10[1];
    temp_v7 = puVar10[2];
    puVar8 = (unsigned char *)param_1[0x86];
    temp_v0 = puVar8 == (unsigned char *)0x0;
    if (!temp_v0) {
      puVar9 = *(unsigned char **)(param_2 + 4);
    }
    if ((temp_v0 || puVar8 <= puVar9) && (!temp_v0 && puVar9 != puVar8)) {
      nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
      return piVar3;
    }
  }
  if (temp_v8) {
    piVar3 = param_1;
    FUN_00501928(param_1,param_3,temp_v12);
    if (piVar3 != (int *)0xffffffff) {
      temp_v2 = nn_cec_CTR_MessageBox_GetMessHeader((unsigned int)param_1,param_3,(unsigned int)piVar3);
      temp_v3 = 0;
      if (temp_v2 != 0) {
        temp_v3 = *(int *)(temp_v2 + 4);
      }
      if ((temp_v5 != 0) && (temp_v5 < *(int *)(param_2 + 4) + (temp_v6 - temp_v3))) {
        nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
        return (int *)0xc8e10865;
      }
      temp_v16 = *(int *)(param_2 + 4) - temp_v3;
    }
  }
  else {
    if ((temp_v5 != 0) && (temp_v5 < *(int *)(param_2 + 4) + temp_v6)) {
      nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
      return (int *)0xc8e10865;
    }
    temp_v16 = *(int *)(param_2 + 4);
  }
  if (temp_v7 != 0) {
    if (!temp_v8) {
      if (temp_v7 < temp_v23 + 1U) {
        nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
        return (int *)0xc8e10866;
      }
      temp_v15 = 1;
    }
  }
  else if (!temp_v8) {
    temp_v15 = 1;
  }
  temp_v20 = (int *)handlerRefForward(*(unsigned int *)(param_2 + 4),4);
  if (temp_v20 == (int *)0x0) {
    nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
    return (int *)0xc8610bf3;
  }
  nn_cec_CTR_Message_MakeMessageBinary(param_2,(unsigned int)temp_v20);
  rt_memcpy(temp_v20,temp_v10,0x70);
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v0 = nn_cec_CTR_MessageId_IsEmpty((unsigned int)temp_v12);
  if (!temp_v0) {
    FUN_00501fa4(temp_v12,&temp_v13);
  }
  puStack_f0 = *(unsigned char **)(param_2 + 4);
  piStack_ec = param_1 + 0x6b;
  temp_v9 = 8;
  iStack_f4 = (int)temp_v20;
  piVar3 = (int *)(**(romwright_code **)(*param_1 + 0x20))(param_1,param_1[1],param_3,&temp_v13);
  if (param_5 != 0) {
    if (param_3 != 1) {
      piVar6 = (int *)nn_cec_CTR_MessageBox_WriteBoxInfo((unsigned int)param_1,0,(unsigned int)(param_1 + 0x7f),(unsigned int *)(param_1 + 0x87));
    }
    else {
      piVar6 = (int *)nn_cec_CTR_MessageBox_WriteBoxInfo((unsigned int)param_1,1,(unsigned int)(param_1 + 0xeb),(unsigned int *)(param_1 + 0xf3));
    }
    if ((int)piVar6 < 0) {
      FUN_00430e58(temp_v20);
      nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
      return piVar6;
    }
    if ((int)piVar3 < 0) {
      FUN_00430e58(temp_v20);
      nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
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
        FUN_00430e58(temp_v20);
        nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
        return piVar3;
      }
      *temp_v21 = param_1[0x222] + temp_v16;
      temp_v3 = param_1[0x224];
      piVar6 = temp_v18;
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
        FUN_00430e58(temp_v20);
        nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
        return piVar3;
      }
      *temp_v19 = param_1[0x22a] + temp_v16;
      temp_v3 = param_1[0x22c];
      piVar6 = temp_v22;
    }
    *piVar6 = temp_v3 + temp_v15;
  }
  temp_v0 = nn_cec_CTR_MessageId_IsEmpty((unsigned int)temp_v12);
  if (temp_v0) {
    temp_v4 = releaseOrCopyHandle2((unsigned int *)&temp_v9,(unsigned int *)&temp_v13);
    wordPairCopy(temp_v12,temp_v4);
    wordPairCopy(temp_v25,temp_v12);
  }
  if (param_3 == 1 && !temp_v8) {
    temp_v9 = 2;
    temp_v5 = (**(romwright_code **)(*param_1 + 0x28))(param_1,param_1[1],temp_v12,8);
    if ((temp_v5 & 0x80000000) == 0) {
      nn_cec_CTR_MessageBox_ReadOutBoxIndex((unsigned int)param_1);
    }
  }
  FUN_00430e58(temp_v20);
  nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
  return piVar3;
}

} /* extern "C" */
