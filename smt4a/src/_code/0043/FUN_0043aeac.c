/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043aeac` (_code @ 0x43aeac, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0043b1a8. */


void FUN_0043aeac(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  if ((param_2 != 0 && param_3 != 0) && (0 < *(int *)(param_1 + 4))) {
    FUN_0043b1a8(param_1 + 0xc,*(int *)(param_1 + 4),param_2,param_3);
    return;
  }
  return;
}
