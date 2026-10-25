/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022d434` (_code @ 0x22d434, 0x374 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "status/StatusCamera.h"

extern "C" {

int FUN_0022e0fc(int, int);
int recordAppendFloatEntry(int, unsigned char [8]);
int FUN_0022e17c(unsigned char [8], int, int);
void entryTableClear(void *table);
int FUN_00233670(...);
int FUN_00233730(...);
int FUN_00233818(void);
int ifTouchRegionClearAll(unsigned int);
int FUN_0029ce60(unsigned int, int, int);
int itemGetFlagBit1(...);
int devilGetRecord(...);
int jyoucyuGetTableEntry(...);
int FUN_002cd37c(void);

typedef int romwright_code(...);
/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned char gaugePercent(int, unsigned int);
/* Supplied declaration required: FUN_0022e0fc. */
/* Supplied declaration required: recordAppendFloatEntry. */
/* Supplied declaration required: FUN_0022e17c. */
/* Supplied declaration required: entryTableClear. */
/* Supplied declaration required: FUN_00233670. */
/* Supplied declaration required: FUN_00233730. */
/* Supplied declaration required: FUN_00233818. */
/* Supplied declaration required: ifTouchRegionClearAll. */
/* Supplied declaration required: FUN_0029ce60. */
/* Supplied declaration required: itemGetFlagBit1. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: jyoucyuGetTableEntry. */
/* Supplied declaration required: FUN_002cd37c. */
extern unsigned char FUN_003ad6a0(int, int);


void FUN_0022d434(int param_1)

{
/* irregular: 14 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char *pbVar7;
  int temp_v5;
  unsigned int temp_v6;
  unsigned short *puVar10;
  unsigned int temp_v7;
  unsigned char temp_v8;
  int temp_v9;
  short temp_v10;
  unsigned long long temp_v11;
  unsigned char temp_v12 [8];
  unsigned int temp_v13;
  
  ifTouchRegionClearAll(*(unsigned int *)(param_1 + 0x590));
  FUN_00233818();
  temp_v2 = param_1 + 0x5a8;
  if (*(char *)(param_1 + 0x5a4) != '\x01') {
    entryTableClear(reinterpret_cast<void *>(temp_v2));
    temp_v10 = 0;
    temp_v9 = 0;
    do {
      puVar4 = (unsigned short *)((temp_v9 + 1U) & 0xffff);
      devilGetRecord();
      if ((puVar4 != (unsigned short *)0x0) && ((puVar4[3] & 1) != 0)) {
        temp_v10 = temp_v10 + 1;
        temp_v3 = itemGetFlagBit1(*puVar4);
        if (temp_v3 != 0) {
          FUN_0022e17c(temp_v12,*puVar4,0);
          temp_v4 = (unsigned int)*puVar4;
          FUN_0029ce60(temp_v4,*(unsigned char *)(param_1 + 0x5a5),0);
          temp_v13 = temp_v4;
          recordAppendFloatEntry(temp_v2,temp_v12);
        }
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 0x4ff);
    *(short *)(param_1 + 0xa5ae) = temp_v10;
    if (*(short *)(param_1 + 0x5a8) != 0) {
      temp_v9 = reinterpret_cast<int>(FUN_002a0d0c());
      pbVar7 = (unsigned char *)(temp_v9 + 0xf);
      temp_v8 = *pbVar7 & 0x7f;
      if (temp_v8 == 1) {
        temp_v0 = '\x06';
      }
      else if (temp_v8 == 2) {
        temp_v0 = '\x04';
      }
      else if (temp_v8 == 3) {
        temp_v0 = '\x16';
      }
      else if (temp_v8 == 7) {
        temp_v0 = '\x18';
      }
      else {
        temp_v0 = '\x06';
        *pbVar7 = (*pbVar7 & 0x80) | 1;
      }
      if ((*pbVar7 & 0x80) != 0) {
        temp_v0 = temp_v0 + '\x01';
      }
      FUN_0022e0fc(temp_v2,temp_v0);
    }
    FUN_00233730(param_1 + 0x20,10,(int)*(short *)(param_1 + 0x5a8),0,1,1);
    *(unsigned char *)(param_1 + 0x2d) = 1;
    temp_v1 = gaugePercent(temp_v2,1);
    *(unsigned char *)(param_1 + 0x94) = temp_v1;
    jyoucyuGetTableEntry(0);
  }
  else {
    entryTableClear(reinterpret_cast<void *>(temp_v2));
    temp_v9 = gameGetSlotTable();
    temp_v4 = 0;
    if (*(char *)(temp_v9 + 0x910b) != '\0') {
      do {
        temp_v3 = (int)*(char *)(temp_v9 + temp_v4 + 0x90f0);
        if (-1 < temp_v3) {
          temp_v3 = temp_v9 + temp_v3 * 0x604;
          temp_v5 = temp_v3 + 0x90;
          FUN_002cd37c();
          if (temp_v5 == 0) {
            puVar4 = (unsigned short *)(unsigned int)*(unsigned short *)(temp_v3 + 0xd6);
            devilGetRecord();
            FUN_0022e17c(temp_v12,*puVar4,1);
            temp_v6 = (unsigned int)*puVar4;
            FUN_0029ce60(temp_v6,*(unsigned char *)(param_1 + 0x5a5),0);
            temp_v13 = temp_v6;
            recordAppendFloatEntry(temp_v2,temp_v12);
          }
        }
        temp_v4 = (temp_v4 + 1) & 0xffff;
      } while (temp_v4 < *(unsigned char *)(temp_v9 + 0x910b));
    }
    *(unsigned short *)(param_1 + 0xa5ae) = 0x18;
    FUN_00233730(param_1 + 0x20,10,(int)*(short *)(param_1 + 0x5a8),0,1,1);
    temp_v4 = 1;
    temp_v3 = 0;
    *(unsigned char *)(param_1 + 0x2d) = 1;
    temp_v9 = 0;
    temp_v2 = 0;
    do {
      puVar10 = (unsigned short *)((temp_v2 + 1U) & 0xffff);
      devilGetRecord(puVar10,temp_v4);
      temp_v4 = temp_v7;
      if ((puVar10 != (unsigned short *)0x0) &&
         (temp_v4 = (unsigned int)(unsigned short)puVar10[3], (puVar10[3] & 1) != 0)) {
        temp_v9 = temp_v9 + 1;
        temp_v11 = itemGetFlagBit1(*puVar10);
        temp_v4 = (unsigned int)((unsigned long long)temp_v11 >> 0x20);
        if ((int)temp_v11 != 0) {
          temp_v3 = temp_v3 + 1;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x4ff);
    temp_v1 = FUN_003ad6a0(temp_v3,temp_v9);
    *(unsigned char *)(param_1 + 0x94) = temp_v1;
    jyoucyuGetTableEntry(0);
  }
  (**(romwright_code **)(**(int **)(param_1 + 0x590) + 8))(*(int **)(param_1 + 0x590),param_1 + 0x20);
  puVar4 = (unsigned short *)(*(int *)(param_1 + 0x590) + 4);
  *puVar4 = *puVar4 | 0x1000;
  temp_v2 = *(int *)(param_1 + 0x28);
  if (temp_v2 >= 10) {
    temp_v2 = 10;
  }
  FUN_00233670(param_1 + 0x55c,0x1d,0x40e,temp_v2);
  *(unsigned char *)(param_1 + 0x56c) = 1;
  jyoucyuGetTableEntry(0);
  return;
}

} /* extern "C" */
