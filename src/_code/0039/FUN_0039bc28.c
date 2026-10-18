/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039bc28` (_code @ 0x39bc28, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00233240. */
/* Supplied declaration required: FUN_002af5c0. */
/* Supplied declaration required: FUN_002bd8e8. */
/* Supplied declaration required: FUN_0039c3fc. */


void FUN_0039bc28(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) != 1) {
      return;
    }
    FUN_0039c3fc(param_1);
    if ((*(unsigned int *)(param_1 + 0x10) & 8) != 0) {
      return;
    }
    temp_v0 = 2;
  }
  else {
    *(unsigned char *)(param_1 + 0x5b) = 0;
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x1008;
    FUN_00233240(param_1 + 0x178,0);
    FUN_00233240(param_1 + 0x178,1);
    FUN_002af5c0(param_1 + 0x8d4,1,0);
    FUN_002bd8e8(param_1 + 0x960,1,0);
    temp_v0 = 1;
  }
  *(unsigned int *)(param_1 + 8) = temp_v0;
  return;
}
