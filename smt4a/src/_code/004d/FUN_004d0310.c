/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d0310` (_code @ 0x4d0310, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00228b04. */


void FUN_004d0310(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00228b04(param_1 + 0x10,1);
    return;
  }
  return;
}
