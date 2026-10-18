/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001575cc` (_code @ 0x1575cc, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a22a8. */
/* Supplied declaration required: FUN_002b4eb8. */


void FUN_001575cc(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  param_1 = param_1 + param_2 * 0x10;
  if (param_3 != 0) {
    FUN_002a22a8(param_1 + 0x24,(param_3 + 4U) / 5);
  }
  else {
    FUN_002b4eb8();
    if (*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x30)) {
      FUN_002a22a8(param_1 + 0x24,0);
      return;
    }
  }
  return;
}
