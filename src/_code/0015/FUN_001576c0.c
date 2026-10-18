/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001576c0` (_code @ 0x1576c0, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a2008. */
/* Supplied declaration required: FUN_002b4cd4. */


void FUN_001576c0(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  param_1 = param_1 + param_2 * 0x10;
  if (param_3 != 0) {
    FUN_002a2008(param_1 + 0x24,(param_3 + 4U) / 5);
  }
  else {
    FUN_002b4cd4();
    if (*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x30)) {
      FUN_002a2008(param_1 + 0x24,0);
      return;
    }
  }
  return;
}
