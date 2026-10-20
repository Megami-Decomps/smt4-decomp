/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e542c` (_code @ 0x3e542c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004ff920(void);

/* Supplied declaration required: FUN_004ff920. */


void FUN_003e542c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(*(int *)(param_1 + 8) + 4) != 0) {
    FUN_004ff920();
    return;
  }
  return;
}

} /* extern "C" */
