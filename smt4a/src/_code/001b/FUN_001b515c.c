/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b515c` (_code @ 0x1b515c, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a730. */
/* Supplied declaration required: FUN_0019a840. */
/* Supplied declaration required: FUN_0019d1dc. */
extern int FUN_0030ef8c(int, char *, unsigned int);


void FUN_001b515c(int param_1,int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (*(char *)(*(int *)(param_2 + 4) + 0xd) != '\0') {
    temp_v2 = 1;
    if ((*(unsigned int *)(param_2 + 0x10) & 0x10000) != 0) {
      temp_v2 = 3;
    }
    FUN_0019d1dc(param_1,temp_v2,0x80);
  }
  temp_v0 = FUN_0030ef8c(param_1,"STEX",4);
  if (temp_v0 != 0) {
    FUN_0019a5a0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(unsigned int *)(param_2 + 8) = 0;
  }
  else {
    temp_v1 = (unsigned int)((*(unsigned int *)(param_2 + 0x10) & 0x10000) != 0);
    FUN_0019a730();
    *(unsigned int *)(param_2 + 8) = temp_v1;
    *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(param_1 + 8);
    *(unsigned int *)(*(int *)(param_2 + 8) + 0x14) = *(unsigned int *)(param_1 + 0xc);
    *(unsigned int *)(*(int *)(param_2 + 8) + 0x18) = *(unsigned int *)(param_1 + 0x10);
    *(unsigned int *)(*(int *)(param_2 + 8) + 0x1c) = *(unsigned int *)(param_1 + 0x18);
    *(unsigned int *)(*(int *)(param_2 + 8) + 0x20) = *(unsigned int *)(param_1 + 0x14);
    *(int *)(*(int *)(param_2 + 8) + 0x28) = param_3 - *(int *)(param_1 + 0x20);
    *(unsigned int *)(*(int *)(param_2 + 8) + 0x2c) = *(unsigned int *)(*(int *)(param_2 + 8) + 0x2c) | 0x10;
    if (*(int *)(param_1 + 4) == 1) {
      *(unsigned int *)(*(int *)(param_2 + 8) + 0x3c) = 1;
      *(unsigned int *)(*(int *)(param_2 + 8) + 0x40) = 1;
    }
    *(int *)(*(int *)(param_2 + 8) + 0x24) = *(int *)(param_1 + 0x20) + param_1;
  }
  temp_v1 = *(unsigned int *)(param_2 + 0x10);
  *(unsigned int *)(param_2 + 0x10) = (temp_v1 & 0xfffffffe) | 2;
  *(int *)(param_2 + 0xc) = param_1;
  if ((temp_v1 & 0x60) != 0) {
    if ((temp_v1 & 0x20) != 0) {
      if (param_2 == 0) {
        if (*(int *)(param_2 + 8) != 0) {
          FUN_0019a840();
          *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_2 + 0x10) | 4;
        }
        return;
      }
      if (*(int *)(param_2 + 8) == 0) {
        return;
      }
      *(unsigned int *)(*(int *)(param_2 + 8) + 8) = 0x20000;
      temp_v1 = *(unsigned int *)(param_2 + 0x10) | 0x20;
      *(unsigned int *)(param_2 + 0x10) = temp_v1;
    }
    else if (param_2 != 0) {
      if (*(int *)(param_2 + 8) == 0) {
        return;
      }
      *(unsigned int *)(*(int *)(param_2 + 8) + 8) = 0x30000;
      temp_v1 = *(unsigned int *)(param_2 + 0x10) | 0x40;
      *(unsigned int *)(param_2 + 0x10) = temp_v1;
    }
  }
  if (*(int *)(param_2 + 8) != 0) {
    FUN_0019a840();
    *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_2 + 0x10) | 4;
  }
  return;
}
