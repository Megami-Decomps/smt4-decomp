/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241d58` (_code @ 0x241d58, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e1344. */
/* Supplied declaration required: FUN_0036ef0c. */


void FUN_00241d58(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_002e1344();
    FUN_0036ef0c(param_1 + 0xc);
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}
