/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012bce8` (_code @ 0x12bce8, 0x1d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _Znwj(int);
int onlineInstanceTableGetCurrent(void);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002f7c94(unsigned int, unsigned int, unsigned int);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(...);
int FUN_0030c800(...);
int holderSetPairAndFlush(int *, unsigned int, unsigned int, unsigned int);
int wordListAt(unsigned int *, unsigned int);
int FUN_0030c884(unsigned char [8], int);
int recordListAt(int, unsigned int);
int FUN_0030cac0(unsigned char [8]);
int FUN_0030d0ac(unsigned char [8]);

typedef int romwright_code(...);
/* stack frame of param_1: 12 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned short sp32; /* 0x32: local_32 */
    unsigned short sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned char LAB_0012bec8; /* 0x12bec8 */
extern unsigned char DAT_0055aec4; /* 0x55aec4 */
extern romwright_code *DAT_00589564; /* 0x589564 */
extern unsigned int DAT_00589568; /* 0x589568 */

/* Supplied declaration required: _Znwj. */
extern unsigned int _ZN12OnlineResultC1ERKj(unsigned int *, unsigned int *);
/* Supplied declaration required: onlineInstanceTableGetCurrent. */
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(int, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_0030c800. */
/* Supplied declaration required: holderSetPairAndFlush. */
/* Supplied declaration required: wordListAt. */
/* Supplied declaration required: FUN_0030c884. */
/* Supplied declaration required: recordListAt. */
extern int elemVectorCount(void);
extern unsigned int vectorCount4_0030c8ce(void);
/* Supplied declaration required: FUN_0030cac0. */
/* Supplied declaration required: FUN_0030d0ac. */
extern int FUN_0030d3c8(unsigned int *, unsigned char *);


void FUN_0012bce8(int param_1)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  romwright_code *pcVar7;
  unsigned int temp_v5;
  int *piVar9;
  int *piVar10;
  unsigned char temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned char temp_v11 [8];
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned short temp_v15;
  unsigned short temp_v16;
  unsigned char temp_v17 [8];
  unsigned int temp_v18;
  int temp_v19;
  unsigned int *temp_v20;
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    temp_v20 = (unsigned int *)(param_1 + 0x3e0);
    temp_v1 = vectorCount4_0030c8ce();
    if (*(unsigned int *)(param_1 + 0x3f0) <= temp_v1) {
      temp_v19 = param_1 + 0x110;
      temp_v0 = elemVectorCount();
      if (temp_v0 != *(int *)(param_1 + 0x3f4)) {
        FUN_0030d0ac(temp_v11);
        temp_v7 = 0;
        piVar9 = (int *)(param_1 + 0x400);
        for (temp_v0 = *(int *)(param_1 + 0x3fc); *piVar9 != temp_v0; temp_v0 = temp_v0 + 0x18) {
          temp_v2 = temp_v19;
          recordListAt(temp_v19,*(unsigned int *)(param_1 + 0x3f4));
          if (*(int *)(temp_v2 + 0x10) == *(int *)(temp_v0 + 8)) {
            FUN_0030c884(temp_v11,temp_v0);
            temp_v7 = 1;
          }
        }
        if (temp_v7 != 0) {
          piVar10 = *(int **)(param_1 + 0x3ec);
          temp_v0 = temp_v19;
          recordListAt(temp_v19,*(unsigned int *)(param_1 + 0x3f4));
          temp_v10 = *(unsigned int *)(temp_v0 + 0xc);
          temp_v9 = *(unsigned int *)(temp_v0 + 8);
          temp_v8 = (unsigned int)temp_v16;
          temp_v7 = (unsigned int)temp_v15;
          (**(romwright_code **)(*piVar10 + 8))(piVar10,temp_v12,temp_v14,temp_v13);
          temp_v0 = onlineInstanceTableGetCurrent();
          onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
          temp_v6 = temp_v0 == 0;
        }
        else {
          temp_v0 = temp_v19;
          recordListAt(temp_v19,*(unsigned int *)(param_1 + 0x3f4));
          piVar9 = (int *)(param_1 + 0x280);
          holderSetPairAndFlush(piVar9,temp_v4,*(unsigned int *)(temp_v0 + 8),*(unsigned int *)(temp_v0 + 0xc));
          temp_v8 = *(unsigned int *)(param_1 + 0x294);
          temp_v7 = *(unsigned int *)(param_1 + 0x290);
          (**(romwright_code **)(**(int **)(param_1 + 0x3ec) + 0xc))(*(int **)(param_1 + 0x3ec),piVar9,0);
          temp_v0 = onlineInstanceTableGetCurrent();
          onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
          temp_v6 = temp_v0 == 0;
          if (!temp_v6) {
            *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3f4) + 1;
            return;
          }
        }
        if (temp_v6) {
          temp_v10 = 0x80010004;
        }
        else {
          if ((int *)piVar9[3] != (int *)0x0) {
            (**(romwright_code **)(*(int *)piVar9[3] + 4))();
          }
          puVar4 = (unsigned int *)_Znwj(0x24);
          temp_v7 = param_1 + 0x80;
          temp_v0 = 0;
          if (puVar4 != (unsigned int *)0x0) {
            puVar5 = temp_v20;
            wordListAt(temp_v20,*(unsigned int *)(param_1 + 0x3f0));
            puVar4[1] = *puVar5;
            puVar4[2] = temp_v7;
            *puVar4 = (unsigned int)&DAT_0055aec4;
            temp_v0 = FUN_0030d3c8(puVar4 + 3,temp_v11);
            temp_v0 = temp_v0 - 0xc;
          }
          piVar9[3] = temp_v0;
          FUN_0030cac0(temp_v17);
          temp_v0 = temp_v19;
          recordListAt(temp_v19,*(unsigned int *)(param_1 + 0x3f4));
          temp_v18 = *(unsigned int *)(temp_v0 + 0x10);
          piVar10 = (int *)(*(int *)(param_1 + 0x6c) + ((int)DAT_00589568 >> 1));
          pcVar7 = DAT_00589564;
          if ((DAT_00589568 & 1) != 0) {
            pcVar7 = *(romwright_code **)((unsigned char *)DAT_00589564 + *piVar10);
          }
          temp_v0 = (*pcVar7)(piVar10,temp_v7,temp_v17,piVar9[3]);
          if (temp_v0 != 0) {
            temp_v5 = *(unsigned int *)(temp_v7 + 0x44);
            temp_v3 = onlineInstanceTableGetCurrent();
            FUN_002f7c94(temp_v3,*(unsigned int *)(param_1 + 0x68),temp_v5);
            onlineJobSetStateWaiting(param_1);
            temp_v0 = _Znwj(0x10);
            temp_v3 = 0;
            if (temp_v0 != 0) {
              temp_v3 = FUN_002ea3c0(temp_v0,0x12bfc1,0,&LAB_0012bec8);
            }
            FUN_002f7cba(param_1,temp_v7,temp_v3);
            return;
          }
          temp_v10 = 0x8001000d;
        }
        temp_v3 = _ZN12OnlineResultC1ERKj(&temp_v7,(unsigned int *)&temp_v10);
        FUN_0030c800(param_1,temp_v3);
        return;
      }
    }
    temp_v10 = 0x10001;
  }
  else {
    temp_v10 = 0x80010004;
  }
  temp_v3 = _ZN12OnlineResultC1ERKj(&temp_v7,(unsigned int *)&temp_v10);
  FUN_0030c800(param_1,temp_v3);
  return;
}

} /* extern "C" */
