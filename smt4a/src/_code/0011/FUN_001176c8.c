/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001176c8` (_code @ 0x1176c8, 0xc6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 6 slot(s), 21 byte(s) */
typedef struct {
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned char sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7232. */
extern unsigned int FUN_002ea714(void);
extern unsigned int FUN_002ea93c(unsigned char *);
/* Supplied declaration required: FUN_002ea974. */
/* Supplied declaration required: FUN_002ea9c0. */
/* Supplied declaration required: FUN_002ea9dc. */
/* Supplied declaration required: FUN_002eb17c. */
/* Supplied declaration required: FUN_002f9cf2. */
/* Supplied declaration required: FUN_002f9dd4. */


void FUN_001176c8(int *param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  int *piVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [104];
  
  temp_v2 = (unsigned int)*(unsigned short *)(param_2 + 0x86);
  temp_v6 = param_2 + 0x20;
  temp_v3 = romwright_piece_3_1((((unsigned int)(temp_v3) >> 8) & 0xffffffU),*(unsigned char *)(param_2 + 0x26));
  temp_v7 = temp_v3;
  piVar1 = param_1;
  FUN_002f9dd4(param_1,&temp_v7);
  if (piVar1 == (int *)0x0) {
    temp_v1 = FUN_002ea714();
    FUN_002e6e34(&temp_v2,temp_v1);
    for (temp_v0 = param_1[2]; param_1[3] != temp_v0; temp_v0 = temp_v0 + 8) {
    }
    FUN_002e7232(param_2);
    FUN_002e6e5c(&temp_v2);
    return;
  }
  piVar4 = *(int **)(param_1[5] + 0xbc);
  temp_v4 = param_2 + 0xdc;
  if (piVar4 != (int *)0x0) {
    FUN_002ea974(temp_v8);
    FUN_002ea9c0(temp_v8,temp_v4);
    temp_v0 = (**(romwright_code **)(*piVar4 + 0xc))(piVar4,temp_v8,temp_v2);
    temp_v1 = FUN_002ea93c(temp_v8);
    FUN_002eb17c(param_2,temp_v1);
    FUN_002ea9dc(temp_v8);
    if (temp_v0 != 0) {
      FUN_002e7232(param_2);
      return;
    }
  }
  temp_v5 = *(unsigned char *)(temp_v6 + 5);
  temp_v0 = (**(romwright_code **)(*piVar1 + 8))(piVar1,temp_v2,temp_v5 & 0xf,param_2);
  if (temp_v0 != 0) {
    return;
  }
  FUN_002f9cf2(param_1[5],*(unsigned int *)(param_2 + 0xd8),temp_v4);
  FUN_002e7232(param_2);
  return;
}
