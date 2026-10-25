/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a45fc` (_code @ 0x3a45fc, 0x464 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listCursorSetPage(int, int);
int cellListAppend(int, int, unsigned int, int, int);
int dataTable17Sub1GetCount(void);
int FUN_00233730(int, unsigned int, int, int, int);
int dataTable17Sub1ChildGetCount(unsigned char *, int);
int dataTable17Sub1ChildGetEntries(unsigned char *, int);

/* stack frame of param_1: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

/* Supplied declaration required: listCursorSetPage. */
/* Supplied declaration required: cellListAppend. */
/* Supplied declaration required: dataTable17Sub1GetCount. */
extern int dataTable17Sub1GetRecord(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_00233730. */
extern unsigned int contentGetEntryKind(short);
extern unsigned long long FUN_002c0a2c(unsigned char, unsigned int, unsigned int);
extern int gameTestIndexedAuxiliaryFlag(short);
extern int questEvaluateUnlockConditions(void);
/* Supplied declaration required: dataTable17Sub1ChildGetCount. */
/* Supplied declaration required: dataTable17Sub1ChildGetEntries. */


unsigned int FUN_003a45fc(int param_1)

{
/* irregular: 2 goto(s); 6 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  unsigned char *puVar7;
  unsigned char *puVar8;
  unsigned int temp_v5;
  unsigned short *puVar10;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  unsigned long long temp_v12;
  unsigned int temp_v13 [2];
  int temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  int temp_v19;
  int temp_v20;
  int temp_v21;
  unsigned int temp_v22;
  unsigned char temp_v23 [4];
  
  temp_v22 = 0;
  temp_v8 = 0;
  do {
    temp_v3 = temp_v8 + 1;
    *(unsigned short *)(param_1 + temp_v8 * 0x1002 + 0x1c94) = 0;
    temp_v8 = temp_v3;
  } while (temp_v3 < 9);
  temp_v0 = *(unsigned char *)(param_1 + 0x14);
  temp_v9 = *(int *)(param_1 + 0x18);
  temp_v3 = dataTable17Sub1GetRecord(temp_v13,0);
  temp_v7 = 0;
  puVar5 = temp_v13;
  dataTable17Sub1GetCount();
  temp_v8 = -1;
  if (0 < (int)puVar5) {
    do {
      temp_v4 = temp_v3 + temp_v7 * 0x68;
      temp_v11 = *(unsigned short *)(temp_v4 + 0x24) == (unsigned short)temp_v0;
      if (temp_v11) {
        temp_v4 = *(int *)(temp_v4 + 0x20);
      }
      temp_v8 = temp_v7;
      if (temp_v11 && temp_v4 == temp_v9) break;
      temp_v7 = temp_v7 + 1;
      puVar5 = temp_v13;
      dataTable17Sub1GetCount();
      temp_v8 = -1;
    } while (temp_v7 < (int)puVar5);
  }
  puVar7 = temp_v23;
  dataTable17Sub1ChildGetEntries(puVar7,temp_v8);
  puVar8 = temp_v23;
  dataTable17Sub1ChildGetCount(puVar8,temp_v8);
  temp_v8 = 0;
  if (0 < (int)puVar8) {
    temp_v21 = param_1 + 0xc94;
    temp_v20 = param_1 + 0x1c96;
    temp_v14 = param_1 + 0x2c98;
    temp_v19 = param_1 + 0x3c9a;
    temp_v18 = param_1 + 0x4c9c;
    temp_v17 = param_1 + 0x5c9e;
    temp_v16 = param_1 + 0x6ca0;
    temp_v15 = param_1 + 0x7ca2;
    do {
      temp_v1 = *(short *)(puVar7 + temp_v8 * 8);
      if (temp_v1 == 0) break;
      temp_v3 = questEvaluateUnlockConditions();
      if (temp_v3 != 0) {
        temp_v10 = 0;
        if ((temp_v3 == 2) && (temp_v3 = gameTestIndexedAuxiliaryFlag(temp_v1), temp_v3 == 0)) {
          temp_v10 = 1;
        }
        temp_v5 = contentGetEntryKind(temp_v1);
        switch(temp_v5) {
        default:
          goto LAB_003a49b8;
        case 1:
          temp_v12 = FUN_002c0a2c(*(unsigned char *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),0);
          temp_v6 = (unsigned int)((unsigned long long)temp_v12 >> 0x20);
          puVar10 = (unsigned short *)temp_v12;
          temp_v11 = puVar10 != (unsigned short *)0x0;
          if (temp_v11) {
            temp_v6 = (unsigned int)*puVar10;
          }
          if (temp_v11 && temp_v6 != 0) {
            temp_v22 = 1;
          }
          temp_v11 = temp_v11 && temp_v6 != 0;
          temp_v2 = *puVar10 & 0xff;
          temp_v3 = temp_v15;
          break;
        case 2:
          temp_v12 = FUN_002c0a2c(*(unsigned char *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),0);
          temp_v6 = (unsigned int)((unsigned long long)temp_v12 >> 0x20);
          puVar10 = (unsigned short *)temp_v12;
          temp_v11 = puVar10 != (unsigned short *)0x0;
          if (temp_v11) {
            temp_v6 = (unsigned int)*puVar10;
          }
          if (temp_v11 && temp_v6 != 0) {
            temp_v22 = 1;
          }
          temp_v11 = temp_v11 && temp_v6 != 0;
          temp_v2 = *puVar10 & 0xff;
          temp_v3 = temp_v21;
          break;
        case 3:
          temp_v12 = FUN_002c0a2c(*(unsigned char *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),1);
          temp_v6 = (unsigned int)((unsigned long long)temp_v12 >> 0x20);
          puVar10 = (unsigned short *)temp_v12;
          temp_v11 = puVar10 != (unsigned short *)0x0;
          if (temp_v11) {
            temp_v6 = (unsigned int)*puVar10;
          }
          if (temp_v11 && temp_v6 != 0) {
            temp_v22 = 1;
          }
          temp_v11 = temp_v11 && temp_v6 != 0;
          temp_v2 = *puVar10 & 0xff;
          temp_v3 = temp_v20;
          break;
        case 4:
          temp_v12 = FUN_002c0a2c(*(unsigned char *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),2);
          temp_v6 = (unsigned int)((unsigned long long)temp_v12 >> 0x20);
          puVar10 = (unsigned short *)temp_v12;
          temp_v11 = puVar10 != (unsigned short *)0x0;
          if (temp_v11) {
            temp_v6 = (unsigned int)*puVar10;
          }
          if (temp_v11 && temp_v6 != 0) {
            temp_v22 = 1;
          }
          temp_v11 = temp_v11 && temp_v6 != 0;
          temp_v2 = *puVar10 & 0xff;
          temp_v3 = temp_v19;
          break;
        case 5:
          temp_v12 = FUN_002c0a2c(*(unsigned char *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),3);
          temp_v6 = (unsigned int)((unsigned long long)temp_v12 >> 0x20);
          puVar10 = (unsigned short *)temp_v12;
          temp_v11 = puVar10 != (unsigned short *)0x0;
          if (temp_v11) {
            temp_v6 = (unsigned int)*puVar10;
          }
          if (temp_v11 && temp_v6 != 0) {
            temp_v22 = 1;
          }
          temp_v11 = temp_v11 && temp_v6 != 0;
          temp_v2 = *puVar10 & 0xff;
          temp_v3 = temp_v18;
          break;
        case 6:
          temp_v12 = FUN_002c0a2c(*(unsigned char *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),4);
          temp_v6 = (unsigned int)((unsigned long long)temp_v12 >> 0x20);
          puVar10 = (unsigned short *)temp_v12;
          temp_v11 = puVar10 != (unsigned short *)0x0;
          if (temp_v11) {
            temp_v6 = (unsigned int)*puVar10;
          }
          if (temp_v11 && temp_v6 != 0) {
            temp_v22 = 1;
          }
          temp_v11 = temp_v11 && temp_v6 != 0;
          temp_v2 = *puVar10 & 0xff;
          temp_v3 = temp_v17;
          break;
        case 7:
          temp_v12 = FUN_002c0a2c(*(unsigned char *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),5);
          temp_v6 = (unsigned int)((unsigned long long)temp_v12 >> 0x20);
          puVar10 = (unsigned short *)temp_v12;
          temp_v11 = puVar10 != (unsigned short *)0x0;
          if (temp_v11) {
            temp_v6 = (unsigned int)*puVar10;
          }
          if (temp_v11 && temp_v6 != 0) {
            temp_v22 = 1;
          }
          temp_v11 = temp_v11 && temp_v6 != 0;
          temp_v2 = *puVar10 & 0xff;
          temp_v3 = temp_v16;
          break;
        case 8:
          temp_v11 = 0;
          temp_v2 = 0;
          temp_v3 = temp_v14;
        }
        cellListAppend(temp_v3,temp_v1,temp_v10,temp_v11,temp_v2);
      }
LAB_003a49b8:
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < (int)puVar8);
  }
  temp_v8 = 0;
  do {
    temp_v10 = 9;
    if (temp_v8 != 7 && temp_v8 != 8) {
      temp_v13[0] = 0;
      goto LAB_003a49e0;
    }
    while( 1 ) {
      temp_v13[0] = 1;
LAB_003a49e0:
      temp_v3 = param_1 + temp_v8 * 0x74;
      FUN_00233730(temp_v3 + 0x880,temp_v10,*(unsigned short *)(param_1 + temp_v8 * 0x1002 + 0x1c94),0,1);
      *(unsigned char *)(temp_v3 + 0x88d) = 1;
      listCursorSetPage(temp_v3 + 0x880,0);
      temp_v8 = temp_v8 + 1;
      if (temp_v8 >= 9) {
        return temp_v22;
      }
      if (temp_v8 != 7 && temp_v8 != 8) break;
      temp_v10 = 10;
    }
  } while( 1 );
}

} /* extern "C" */
