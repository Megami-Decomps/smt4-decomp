/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab0d0` (_code @ 0x3ab0d0, 0x1a0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
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
extern unsigned char FUN_0022e244(int);
/* Supplied declaration required: FUN_0022e290. */
/* Supplied declaration required: FUN_0022e2ec. */
/* Supplied declaration required: FUN_0022e490. */
/* Supplied declaration required: FUN_002338c4. */
/* Supplied declaration required: FUN_00249a44. */
extern int FUN_0025b920(unsigned int);
extern int FUN_002a0fac(void);
/* Supplied declaration required: FUN_002bcff0. */
/* Supplied declaration required: FUN_002c583c. */


void FUN_003ab0d0(int param_1)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char *pbVar7;
  unsigned short *puVar8;
  unsigned char temp_v6;
  unsigned short temp_v7;
  short temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned short temp_v12;
  unsigned int temp_v13;
  
  temp_v2 = param_1 + 0x5a8;
  FUN_0022e490();
  temp_v7 = 0x79f;
  temp_v8 = 0;
  do {
    temp_v8 = temp_v8 + 1;
    temp_v3 = FUN_0025b920(temp_v7);
    if (temp_v3 != 0) {
      temp_v4 = temp_v7;
      FUN_00249a44();
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v4 + 0x26);
      if (temp_v5 != 0) {
        temp_v9 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v9 + 2)),*(unsigned short *)(temp_v4 + 0x20));
        FUN_002bcff0();
        temp_v11 = *(unsigned int *)(temp_v4 + 0x28);
        temp_v12 = *(unsigned short *)(temp_v4 + 0x24);
        temp_v13 = temp_v5;
        FUN_0022e2ec(temp_v2,&temp_v9);
      }
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 0x803);
  *(short *)(param_1 + 0xa5ae) = temp_v8;
  if (*(short *)(param_1 + 0x5a8) != 0) {
    temp_v3 = FUN_002a0fac();
    pbVar7 = (unsigned char *)(temp_v3 + 0x10);
    temp_v6 = *pbVar7 & 0x7f;
    if (temp_v6 == 0xb) {
      temp_v0 = '\x1c';
    }
    else if (temp_v6 < 0xc) {
      if (temp_v6 == 3) {
        temp_v0 = '\x1a';
      }
      else if (temp_v6 == 7) {
        temp_v0 = '\x18';
      }
      else {
        temp_v0 = '\x1c';
        *pbVar7 = (*pbVar7 & 0x80) | 0xb;
      }
    }
    else if (temp_v6 == 0xf) {
      temp_v0 = '\x1e';
    }
    else if (temp_v6 == 0x11) {
      temp_v0 = ' ';
    }
    else {
      temp_v0 = '\x1c';
      *pbVar7 = (*pbVar7 & 0x80) | 0xb;
    }
    if ((*pbVar7 & 0x80) != 0) {
      temp_v0 = temp_v0 + '\x01';
    }
    FUN_0022e290(temp_v2,temp_v0);
  }
  temp_v9 = 1;
  temp_v10 = 1;
  FUN_002338c4(param_1 + 0x20,10,(int)*(short *)(param_1 + 0x5a8),0);
  *(unsigned char *)(param_1 + 0x2d) = 1;
  (**(romwright_code **)(**(int **)(param_1 + 0x590) + 8))(*(int **)(param_1 + 0x590),param_1 + 0x20);
  puVar8 = (unsigned short *)(*(int *)(param_1 + 0x590) + 4);
  *puVar8 = *puVar8 | 0x1000;
  temp_v1 = FUN_0022e244(temp_v2);
  *(unsigned char *)(param_1 + 0x94) = temp_v1;
  FUN_002c583c(0);
  FUN_002c583c(0);
  return;
}
