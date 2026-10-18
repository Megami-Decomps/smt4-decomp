/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fd38` (_code @ 0x10fd38, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0011c8c0. */


void FUN_0010fd38(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    *(int *)(param_1 + 0x1c) = param_2;
    *(int *)(param_1 + 0x20) = param_2;
    *(int *)(param_1 + 0x24) = param_2 + 0xb000;
    *(int *)(param_1 + 0x2c) = param_2 + 0xf800;
    *(int *)(param_1 + 0x28) = param_2 + 0xf000;
    FUN_0011c8c0();
    return;
  }
  return;
}
