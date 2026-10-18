/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00233410` (_code @ 0x233410, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0029efd8. */


void FUN_00233410(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0029efd8(param_1 + 0x10,1);
    return;
  }
  return;
}
