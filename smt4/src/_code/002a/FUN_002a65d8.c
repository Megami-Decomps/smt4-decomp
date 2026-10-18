/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a65d8` (_code @ 0x2a65d8, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


void FUN_002a65d8(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int temp_v0;
  int *piVar5;
  int temp_v1;
  unsigned char temp_v2;
  
  piVar3 = (int *)(*param_1 + 0x28);
  temp_v1 = *piVar3;
  if (temp_v1 != 0) {
    piVar3 = (int *)((int)piVar3 + temp_v1);
  }
  if (temp_v1 == 0) {
    piVar3 = (int *)0x0;
  }
  temp_v1 = *(int *)(*param_1 + 0x24);
  if (piVar3 != (int *)0x0) {
    piVar3 = piVar3 + 7;
  }
  temp_v0 = *(int *)(*param_1 + 0x28);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x28 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    piVar1 = (int *)(temp_v0 + 0x1c);
  }
  else {
    piVar1 = (int *)0x0;
  }
  while (piVar1 != piVar3 + temp_v1 * 4) {
    piVar5 = piVar1 + 4;
    if (piVar1[3] != 0) {
      piVar2 = (int *)((int)piVar1 + piVar1[3] + 0xc);
    }
    else {
      piVar2 = (int *)0x0;
    }
    temp_v0 = *piVar2;
    temp_v2 = temp_v0 != 0x20000009;
    if (temp_v2) {
      temp_v0 = temp_v0 - 0x10;
    }
    piVar1 = piVar5;
    if (!temp_v2 || temp_v0 == 0x20000001) {
      piVar2[0xc] = param_2;
    }
  }
  return;
}
