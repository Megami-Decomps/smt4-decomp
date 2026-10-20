/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a1958` (_code @ 0x4a1958, 0x3a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jyoucyuGetTableEntry(...);
int FUN_00184310(void);
int FUN_002a4b28(...);
int FUN_0032fbd0(void);
int FUN_00389f0c(...);
int FUN_004a83f8(void);
int FUN_004a849c(int, unsigned char [8]);
int FUN_004a84e8(int, int);
int FUN_004a8584(unsigned char [8], int, int);
int FUN_004a8750(unsigned int, int, int);
int FUN_004cfeb0(...);
int FUN_004d05c4(...);
int releaseEntriesA(void);
int releaseEntriesB(unsigned int);

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

/* Supplied declaration required: jyoucyuGetTableEntry. */
/* Supplied declaration required: FUN_00184310. */
extern int gameFlagIsSet(unsigned int);
extern int gameGetSlotTable(void);
extern int FUN_0026140c(void);
/* Supplied declaration required: FUN_002a4b28. */
/* Supplied declaration required: FUN_0032fbd0. */
/* Supplied declaration required: FUN_00389f0c. */
/* Supplied declaration required: FUN_004a83f8. */
extern unsigned char FUN_004a8454(int, unsigned int);
/* Supplied declaration required: FUN_004a849c. */
/* Supplied declaration required: FUN_004a84e8. */
extern unsigned char FUN_004a8544(int, int);
/* Supplied declaration required: FUN_004a8584. */
/* Supplied declaration required: FUN_004a8750. */
/* Supplied declaration required: FUN_004cfeb0. */
/* Supplied declaration required: FUN_004d05c4. */
/* Supplied declaration required: releaseEntriesA. */
/* Supplied declaration required: releaseEntriesB. */


void FUN_004a1958(int param_1)

{
/* irregular: 1 goto(s); 15 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  unsigned int temp_v3;
  unsigned short *puVar6;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char *pbVar9;
  unsigned int temp_v6;
  unsigned char temp_v7;
  int temp_v8;
  short temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  unsigned long long temp_v12;
  unsigned char temp_v13 [8];
  unsigned int temp_v14;
  
  releaseEntriesB(*(unsigned int *)(param_1 + 0x84c));
  releaseEntriesA();
  temp_v2 = param_1 + 0x864;
  if (*(char *)(param_1 + 0x860) != '\x01') {
    FUN_004a83f8();
    temp_v9 = 0;
    temp_v8 = 0;
LAB_004a19b4:
    do {
      puVar4 = (unsigned short *)((temp_v8 + 1U) & 0xffff);
      FUN_00184310();
      if ((puVar4 != (unsigned short *)0x0) && ((puVar4[5] & 1) != 0)) {
        if ((temp_v8 == 9) && (temp_v4 = gameFlagIsSet(0x441), temp_v4 == 0)) {
          temp_v8 = 10;
          goto LAB_004a19b4;
        }
        temp_v9 = temp_v9 + 1;
        temp_v5 = FUN_002a4b28(*puVar4);
        temp_v11 = temp_v5 == 0;
        if (temp_v11) {
          temp_v5 = (unsigned int)*(unsigned char *)(param_1 + 0xa876);
        }
        if (!temp_v11 || temp_v5 != 0) {
          FUN_004a8584(temp_v13,*puVar4,0);
          temp_v5 = (unsigned int)*puVar4;
          FUN_004a8750(temp_v5,*(unsigned char *)(param_1 + 0x861),0);
          temp_v14 = temp_v5;
          FUN_004a849c(temp_v2,temp_v13);
        }
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 0x4ff);
    *(short *)(param_1 + 0xa86a) = temp_v9;
    if (*(short *)(param_1 + 0x864) != 0) {
      temp_v8 = FUN_0026140c();
      pbVar9 = (unsigned char *)(temp_v8 + 0xf);
      temp_v7 = *pbVar9 & 0x7f;
      if (temp_v7 == 1) {
        temp_v0 = '\x06';
      }
      else if (temp_v7 == 2) {
        temp_v0 = '\x04';
      }
      else if (temp_v7 == 3) {
        temp_v0 = '\x16';
      }
      else if (temp_v7 == 7) {
        temp_v0 = '\x18';
      }
      else {
        temp_v0 = '\x06';
        *pbVar9 = (*pbVar9 & 0x80) | 1;
      }
      if ((*pbVar9 & 0x80) != 0) {
        temp_v0 = temp_v0 + '\x01';
      }
      FUN_004a84e8(temp_v2,temp_v0);
    }
    FUN_004cfeb0(param_1 + 0x20,10,(int)*(short *)(param_1 + 0x864),0,1,1);
    *(unsigned char *)(param_1 + 0x2d) = 1;
    temp_v1 = FUN_004a8454(temp_v2,1);
    *(unsigned char *)(param_1 + 0x94) = temp_v1;
    jyoucyuGetTableEntry(0);
  }
  else {
    FUN_004a83f8();
    temp_v8 = gameGetSlotTable();
    temp_v5 = 0;
    if (temp_v5 < *(unsigned char *)(temp_v8 + 0x1ca3)) {
      do {
        temp_v4 = (int)*(char *)(temp_v8 + temp_v5 + 0x1c88);
        if (-1 < temp_v4) {
          temp_v4 = temp_v8 + temp_v4 * 300;
          temp_v10 = temp_v4 + 0x68;
          FUN_0032fbd0();
          if (temp_v10 == 0) {
            puVar4 = (unsigned short *)(unsigned int)*(unsigned short *)(temp_v4 + 0xca);
            FUN_00184310();
            FUN_004a8584(temp_v13,*puVar4,1);
            temp_v3 = (unsigned int)*puVar4;
            FUN_004a8750(temp_v3,*(unsigned char *)(param_1 + 0x861),0);
            temp_v14 = temp_v3;
            FUN_004a849c(temp_v2,temp_v13);
          }
        }
        temp_v5 = (temp_v5 + 1) & 0xffff;
      } while (temp_v5 < *(unsigned char *)(temp_v8 + 0x1ca3));
    }
    *(unsigned short *)(param_1 + 0xa86a) = 0x18;
    FUN_004cfeb0(param_1 + 0x20,10,(int)*(short *)(param_1 + 0x864),0,1,1);
    temp_v5 = 1;
    temp_v4 = 0;
    *(unsigned char *)(param_1 + 0x2d) = 1;
    temp_v8 = 0;
    temp_v2 = 0;
    do {
      puVar6 = (unsigned short *)((temp_v2 + 1U) & 0xffff);
      FUN_00389f0c(puVar6,temp_v5);
      temp_v5 = temp_v6;
      if ((puVar6 != (unsigned short *)0x0) && (temp_v5 = (unsigned int)(unsigned short)puVar6[5], (puVar6[5] & 1) != 0))
      {
        temp_v8 = temp_v8 + 1;
        temp_v12 = FUN_002a4b28(*puVar6);
        temp_v5 = (unsigned int)((unsigned long long)temp_v12 >> 0x20);
        if ((int)temp_v12 != 0) {
          temp_v4 = temp_v4 + 1;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x4ff);
    temp_v1 = FUN_004a8544(temp_v4,temp_v8);
    *(unsigned char *)(param_1 + 0x94) = temp_v1;
    jyoucyuGetTableEntry(0);
  }
  (**(romwright_code **)(**(int **)(param_1 + 0x84c) + 8))(*(int **)(param_1 + 0x84c),param_1 + 0x20);
  puVar4 = (unsigned short *)(*(int *)(param_1 + 0x84c) + 4);
  *puVar4 = *puVar4 | 0x1000;
  temp_v2 = *(int *)(param_1 + 0x28);
  if (temp_v2 >= 10) {
    temp_v2 = 10;
  }
  FUN_004d05c4(param_1 + 0x818,0x14,0x40e,temp_v2);
  *(unsigned char *)(param_1 + 0x828) = 1;
  jyoucyuGetTableEntry(0);
  return;
}

} /* extern "C" */
