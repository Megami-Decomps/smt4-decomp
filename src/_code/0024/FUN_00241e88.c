/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241e88` (_code @ 0x241e88, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e12d0. */
/* Supplied declaration required: FUN_0036f11c. */


void FUN_00241e88(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_002e12d0();
    FUN_0036f11c(param_1 + 0xc);
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}
