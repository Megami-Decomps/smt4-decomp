/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aaeb0` (_code @ 0x3aaeb0, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022e0fc(int, int);
int FUN_0022e158(int, int *);
int FUN_0022e2fc(void);
int FUN_00233730(int, int, int, int);
int FUN_002498ec(void);
int jyoucyuGetTableEntry(int);

typedef int romwright_code(...);
/* stack frame of param_1: 6 slot(s), 22 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned short sp32; /* 0x32: local_32 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
extern unsigned char gaugePercent(int);
/* Supplied declaration required: FUN_0022e0fc. */
/* Supplied declaration required: FUN_0022e158. */
/* Supplied declaration required: FUN_0022e2fc. */
/* Supplied declaration required: FUN_00233730. */
/* Supplied declaration required: FUN_002498ec. */
extern int FUN_0025b6e8(unsigned int);
extern int FUN_002a0d0c(void);
extern unsigned int FUN_002bce00(void);
/* Supplied declaration required: jyoucyuGetTableEntry. */


void FUN_003aaeb0(int param_1)

{
/* irregular: 6 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char *pbVar6;
  unsigned short *puVar7;
  unsigned char temp_v5;
  unsigned short temp_v6;
  short temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned short temp_v11;
  unsigned int temp_v12;
  
  temp_v2 = param_1 + 0x5a8;
  FUN_0022e2fc();
  temp_v6 = 0x79f;
  temp_v7 = 0;
  do {
    temp_v7 = temp_v7 + 1;
    temp_v3 = FUN_0025b6e8(temp_v6);
    if ((temp_v3 != 0) && (temp_v4 = temp_v6, FUN_002498ec(), *(short *)(temp_v4 + 0x26) != 0)) {
      temp_v8 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v8 + 2)),*(unsigned short *)(temp_v4 + 0x20));
      temp_v12 = FUN_002bce00();
      temp_v10 = *(unsigned int *)(temp_v4 + 0x28);
      temp_v11 = *(unsigned short *)(temp_v4 + 0x24);
      FUN_0022e158(temp_v2,&temp_v8);
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0x803);
  *(short *)(param_1 + 0xa5ae) = temp_v7;
  if (*(short *)(param_1 + 0x5a8) != 0) {
    temp_v3 = FUN_002a0d0c();
    pbVar6 = (unsigned char *)(temp_v3 + 0x10);
    temp_v5 = *pbVar6 & 0x7f;
    if (temp_v5 == 0xb) {
      temp_v0 = '\x1c';
    }
    else if (temp_v5 < 0xc) {
      if (temp_v5 == 3) {
        temp_v0 = '\x1a';
      }
      else if (temp_v5 == 7) {
        temp_v0 = '\x18';
      }
      else {
        temp_v0 = '\x1c';
        *pbVar6 = (*pbVar6 & 0x80) | 0xb;
      }
    }
    else if (temp_v5 == 0xf) {
      temp_v0 = '\x1e';
    }
    else if (temp_v5 == 0x11) {
      temp_v0 = ' ';
    }
    else {
      temp_v0 = '\x1c';
      *pbVar6 = (*pbVar6 & 0x80) | 0xb;
    }
    if ((*pbVar6 & 0x80) != 0) {
      temp_v0 = temp_v0 + '\x01';
    }
    FUN_0022e0fc(temp_v2,temp_v0);
  }
  temp_v8 = 1;
  temp_v9 = 1;
  FUN_00233730(param_1 + 0x20,10,(int)*(short *)(param_1 + 0x5a8),0);
  *(unsigned char *)(param_1 + 0x2d) = 1;
  (**(romwright_code **)(**(int **)(param_1 + 0x590) + 8))(*(int **)(param_1 + 0x590),param_1 + 0x20);
  puVar7 = (unsigned short *)(*(int *)(param_1 + 0x590) + 4);
  *puVar7 = *puVar7 | 0x1000;
  temp_v1 = gaugePercent(temp_v2);
  *(unsigned char *)(param_1 + 0x94) = temp_v1;
  jyoucyuGetTableEntry(0);
  jyoucyuGetTableEntry(0);
  return;
}

} /* extern "C" */
