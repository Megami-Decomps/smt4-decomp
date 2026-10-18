/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028bfac` (_code @ 0x28bfac, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bd8e8. */


void FUN_0028bfac(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x2180) == 1) {
    *(unsigned int *)(param_1 + 0x217c) = 0;
    *(unsigned int *)(param_1 + 0x2180) = 6;
    FUN_002bd8e8(param_1 + 0x20f0,0,1);
    return;
  }
  return;
}
