/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b970` (_code @ 0x11b970, 0x13a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001339e0(int, int, unsigned short [2]);
int _ZN9Obj55b28cC1EPv(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int _ZN9Obj55aff4C1EPKt(unsigned char [8], unsigned char *);
int _ZN9Obj55aff4D1Ev(unsigned char [8]);
int onlineMutexLockIfNeeded(...);
int onlineMutexUnlockIfNeeded(...);
int FUN_0031160c(int, int, unsigned short [2]);
int keyValueCopyConstruct(int, int);
int word3CopyConstruct(int, int);
int onlineObjectThreadRootSetupStart(unsigned int, int, int, int, int, int);

/* stack frame of param_3: 10 slot(s), 34 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned short sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned short sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_3_stack;

extern unsigned char LAB_0011bab0; /* 0x11bab0 */
extern unsigned int DAT_00594a4c; /* 0x594a4c */
extern int DAT_00594a5c; /* 0x594a5c */

/* Supplied declaration required: FUN_001339e0. */
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int _Znwj(unsigned int);
/* Supplied declaration required: _ZN9Obj55aff4C1EPKt. */
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: onlineMutexLockIfNeeded. */
/* Supplied declaration required: onlineMutexUnlockIfNeeded. */
/* Supplied declaration required: FUN_0031160c. */
/* Supplied declaration required: keyValueCopyConstruct. */
/* Supplied declaration required: word3CopyConstruct. */
/* Supplied declaration required: onlineObjectThreadRootSetupStart. */
extern unsigned int FUN_00311700(int, unsigned char *, unsigned int);


unsigned int FUN_0011b970(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 11 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned short temp_v6 [2];
  unsigned int temp_v7;
  unsigned short temp_v8 [2];
  int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11 [12];
  int temp_v12;
  unsigned char temp_v13 [8];
  unsigned int temp_v14;
  int iStack_20;
  unsigned int temp_v15;
  unsigned int uStack_18;
  
  iStack_20 = param_1;
  temp_v15 = param_2;
  uStack_18 = param_3;
  _ZN9Obj55b28cC1EPv(temp_v11,param_1 + 8);
  temp_v4 = -1;
  temp_v1 = 0;
  do {
    if (*(char *)(param_1 + temp_v1 + 0x38) == '\0') {
      temp_v4 = temp_v1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  if (temp_v4 != -1) {
    temp_v1 = temp_v4 * 4 + param_1;
    temp_v12 = temp_v1;
    if (*(int *)(temp_v1 + 0xa0) == 0) {
      temp_v5 = 0;
      temp_v2 = _Znwj(0x34);
      temp_v3 = 0;
      if (temp_v2 != 0) {
        temp_v14 = DAT_00594a4c;
        _ZN9Obj55aff4C1EPKt(temp_v13,&LAB_0011bab0);
        temp_v5 = 1;
        temp_v3 = FUN_00311700(temp_v2,temp_v13,temp_v14);
      }
      *(unsigned int *)(temp_v1 + 0xa0) = temp_v3;
      if (temp_v5 != 0) {
        _ZN9Obj55aff4D1Ev(temp_v13);
      }
      if (DAT_00594a5c != -0x80000000) {
        *(int *)(*(int *)(temp_v1 + 0xa0) + 0x20) = DAT_00594a5c;
      }
      onlineObjectThreadRootSetupStart(*(unsigned int *)(temp_v1 + 0xa0),param_1,0x11baf5,0,temp_v4,0);
    }
    temp_v0 = (unsigned short)temp_v15;
    temp_v8[0] = (unsigned short)temp_v15;
    temp_v1 = *(int *)(param_1 + 0x44);
    temp_v9 = temp_v4;
    temp_v10 = param_3;
    if (temp_v1 != *(int *)(param_1 + 0x48)) {
      *(int *)(param_1 + 0x44) = temp_v1 + 0xc;
      word3CopyConstruct(param_1 + 0x40,temp_v1);
    }
    else {
      FUN_001339e0(param_1 + 0x40,temp_v1,temp_v8);
    }
    *(unsigned char *)(param_1 + temp_v4 + 0x38) = 1;
    *(unsigned char *)(param_1 + 5) = 1;
    onlineMutexLockIfNeeded(*(unsigned int *)(temp_v12 + 0x4c));
    temp_v4 = temp_v4 * 8 + param_1;
    *(unsigned short *)(temp_v4 + 0x54) = temp_v0;
    *(unsigned int *)(temp_v4 + 0x58) = param_3;
    onlineMutexUnlockIfNeeded(*(unsigned int *)(temp_v12 + 0x4c));
    onlineMutexLockIfNeeded();
    temp_v6[0] = temp_v0;
    temp_v4 = *(int *)(param_1 + 0x68);
    temp_v7 = param_3;
    if (temp_v4 != *(int *)(param_1 + 0x6c)) {
      *(int *)(param_1 + 0x68) = temp_v4 + 8;
      keyValueCopyConstruct(param_1 + 100,temp_v4);
    }
    else {
      FUN_0031160c(param_1 + 100,temp_v4,temp_v6);
    }
    onlineMutexUnlockIfNeeded(param_1 + 0x70);
    *(unsigned char *)(param_1 + 5) = 0;
    _ZN9Obj55b28cD1Ev(temp_v11);
    temp_v3 = 1;
  }
  else {
    _ZN9Obj55b28cD1Ev(temp_v11);
    temp_v3 = 0;
  }
  return temp_v3;
}

} /* extern "C" */
