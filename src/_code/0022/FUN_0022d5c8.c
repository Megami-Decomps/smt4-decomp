/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022d5c8` (_code @ 0x22d5c8, 0x374 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned char FUN_0022e244(int, unsigned int);
/* Supplied declaration required: FUN_0022e290. */
/* Supplied declaration required: FUN_0022e2ec. */
/* Supplied declaration required: FUN_0022e310. */
/* Supplied declaration required: FUN_0022e490. */
/* Supplied declaration required: FUN_00233804. */
/* Supplied declaration required: FUN_002338c4. */
/* Supplied declaration required: FUN_002339ac. */
/* Supplied declaration required: FUN_002339e8. */
/* Supplied declaration required: FUN_0029d100. */
/* Supplied declaration required: FUN_0029ed08. */
extern int FUN_002a0fac(void);
extern int FUN_002a8a08(void);
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002c583c. */
/* Supplied declaration required: FUN_002cd2cc. */
extern unsigned char FUN_003ad8c0(int, int);


void FUN_0022d5c8(int param_1)

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
  
  FUN_002339e8(*(unsigned int *)(param_1 + 0x590));
  FUN_002339ac();
  temp_v2 = param_1 + 0x5a8;
  if (*(char *)(param_1 + 0x5a4) != '\x01') {
    FUN_0022e490();
    temp_v10 = 0;
    temp_v9 = 0;
    do {
      puVar4 = (unsigned short *)((temp_v9 + 1U) & 0xffff);
      FUN_002b9364();
      if ((puVar4 != (unsigned short *)0x0) && ((puVar4[3] & 1) != 0)) {
        temp_v10 = temp_v10 + 1;
        temp_v3 = FUN_0029ed08(*puVar4);
        if (temp_v3 != 0) {
          FUN_0022e310(temp_v12,*puVar4,0);
          temp_v4 = (unsigned int)*puVar4;
          FUN_0029d100(temp_v4,*(unsigned char *)(param_1 + 0x5a5),0);
          temp_v13 = temp_v4;
          FUN_0022e2ec(temp_v2,temp_v12);
        }
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 0x4ff);
    *(short *)(param_1 + 0xa5ae) = temp_v10;
    if (*(short *)(param_1 + 0x5a8) != 0) {
      temp_v9 = FUN_002a0fac();
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
      FUN_0022e290(temp_v2,temp_v0);
    }
    FUN_002338c4(param_1 + 0x20,10,(int)*(short *)(param_1 + 0x5a8),0,1,1);
    *(unsigned char *)(param_1 + 0x2d) = 1;
    temp_v1 = FUN_0022e244(temp_v2,1);
    *(unsigned char *)(param_1 + 0x94) = temp_v1;
    FUN_002c583c(0);
  }
  else {
    FUN_0022e490();
    temp_v9 = FUN_002a8a08();
    temp_v4 = 0;
    if (*(char *)(temp_v9 + 0x910b) != '\0') {
      do {
        temp_v3 = (int)*(char *)(temp_v9 + temp_v4 + 0x90f0);
        if (-1 < temp_v3) {
          temp_v3 = temp_v9 + temp_v3 * 0x604;
          temp_v5 = temp_v3 + 0x90;
          FUN_002cd2cc();
          if (temp_v5 == 0) {
            puVar4 = (unsigned short *)(unsigned int)*(unsigned short *)(temp_v3 + 0xd6);
            FUN_002b9364();
            FUN_0022e310(temp_v12,*puVar4,1);
            temp_v6 = (unsigned int)*puVar4;
            FUN_0029d100(temp_v6,*(unsigned char *)(param_1 + 0x5a5),0);
            temp_v13 = temp_v6;
            FUN_0022e2ec(temp_v2,temp_v12);
          }
        }
        temp_v4 = (temp_v4 + 1) & 0xffff;
      } while (temp_v4 < *(unsigned char *)(temp_v9 + 0x910b));
    }
    *(unsigned short *)(param_1 + 0xa5ae) = 0x18;
    FUN_002338c4(param_1 + 0x20,10,(int)*(short *)(param_1 + 0x5a8),0,1,1);
    temp_v4 = 1;
    temp_v3 = 0;
    *(unsigned char *)(param_1 + 0x2d) = 1;
    temp_v9 = 0;
    temp_v2 = 0;
    do {
      puVar10 = (unsigned short *)((temp_v2 + 1U) & 0xffff);
      FUN_002b9364(puVar10,temp_v4);
      temp_v4 = temp_v7;
      if ((puVar10 != (unsigned short *)0x0) &&
         (temp_v4 = (unsigned int)(unsigned short)puVar10[3], (puVar10[3] & 1) != 0)) {
        temp_v9 = temp_v9 + 1;
        temp_v11 = FUN_0029ed08(*puVar10);
        temp_v4 = (unsigned int)((unsigned long long)temp_v11 >> 0x20);
        if ((int)temp_v11 != 0) {
          temp_v3 = temp_v3 + 1;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x4ff);
    temp_v1 = FUN_003ad8c0(temp_v3,temp_v9);
    *(unsigned char *)(param_1 + 0x94) = temp_v1;
    FUN_002c583c(0);
  }
  (**(romwright_code **)(**(int **)(param_1 + 0x590) + 8))(*(int **)(param_1 + 0x590),param_1 + 0x20);
  puVar4 = (unsigned short *)(*(int *)(param_1 + 0x590) + 4);
  *puVar4 = *puVar4 | 0x1000;
  temp_v2 = *(int *)(param_1 + 0x28);
  if (temp_v2 >= 10) {
    temp_v2 = 10;
  }
  FUN_00233804(param_1 + 0x55c,0x1d,0x40e,temp_v2);
  *(unsigned char *)(param_1 + 0x56c) = 1;
  FUN_002c583c(0);
  return;
}
