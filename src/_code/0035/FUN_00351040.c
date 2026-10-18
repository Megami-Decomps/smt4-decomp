/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351040` (_code @ 0x351040, 0x1c4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: FUN_002bb490. */
/* Supplied declaration required: FUN_0034ef74. */
extern int FUN_0034f058(int);


void FUN_00351040(int param_1)

{
/* irregular: 1 unstructured edge(s); irregular input(s): in_lr; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int unaff_r4;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int in_lr;
  
  temp_v0 = FUN_0034f058(param_1 + 0x158);
  temp_v4 = 0;
  if (temp_v4 < temp_v0) {
    do {
      FUN_0034ef74(param_1 + 0x158);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v0);
  }
  temp_v0 = 0;
  temp_v4 = *(int *)(param_1 + 0x1c);
  *(unsigned int *)(param_1 + 0x148) = 0;
  *(unsigned int *)(param_1 + 0x14c) = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    if (-1 < *(int *)(temp_v1 + 0x46c)) {
      if (*(int *)(param_1 + 0x14c) == 0 && *(int *)(param_1 + 0x148) == 0) {
        temp_v5 = param_1 + temp_v0 * 0x80 + (*(int *)(temp_v1 + 0x47c) % 0x10) * 8;
        temp_v6 = *(unsigned int *)(temp_v5 + 0x34);
        *(unsigned int *)(param_1 + 0x148) = *(unsigned int *)(temp_v5 + 0x30);
        *(unsigned int *)(param_1 + 0x14c) = temp_v6;
      }
      temp_v2 = param_1 + *(int *)(temp_v1 + 0x46c) * 0x28;
      temp_v5 = 0;
      if (temp_v2 != -0x30c) {
        if (*(unsigned int *)(temp_v2 + 0x314) < 2) {
          temp_v5 = 2;
        }
        else {
          temp_v5 = 1;
        }
      }
      *(int *)(temp_v1 + 0x47c) = *(int *)(temp_v1 + 0x47c) + temp_v5;
      if (*(int *)(param_1 + 0x1c) == temp_v4) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + temp_v5;
      }
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  do {
    if (*(int *)(param_1 + 0xc) == 1) {
      return;
    }
    if (*(int *)(param_1 + 0x46c) >= 0) {
      temp_v0 = 0;
    }
    else {
      if (-1 >= *(int *)(param_1 + 0x470)) continue;
      temp_v0 = 1;
    }
    temp_v1 = param_1 + temp_v0 * 4;
    temp_v5 = param_1 + *(int *)(temp_v1 + 0x46c) * 0x28;
    temp_v4 = 0;
    if (temp_v5 != -0x30c) {
      if (*(unsigned int *)(temp_v5 + 0x314) < 2) {
        temp_v4 = 2;
      }
      else {
        temp_v4 = 1;
      }
    }
    if (temp_v4 <= *(int *)(temp_v1 + 0x474) - *(int *)(temp_v1 + 0x47c)) {
      temp_v0 = param_1 + temp_v0 * 0x80 + (*(int *)(param_1 + temp_v0 * 4 + 0x47c) % 0x10) * 8;
      temp_v3 = *(unsigned int *)(temp_v0 + 0x30);
      temp_v0 = *(int *)(temp_v0 + 0x34);
      *(unsigned int *)(param_1 + 0x140) = *(unsigned int *)(param_1 + 0x138) + temp_v3;
      *(unsigned int *)(param_1 + 0x144) =
           temp_v0 + *(int *)(param_1 + 0x13c) + (unsigned int)romwright_carry_4(*(unsigned int *)(param_1 + 0x138),temp_v3);
      return;
    }
    FUN_002bb490(500000,0,temp_v4,*(int *)(temp_v1 + 0x474),unaff_r4,in_lr);
  } while( 1 );
}
