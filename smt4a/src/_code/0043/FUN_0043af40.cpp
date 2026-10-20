/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043af40` (_code @ 0x43af40, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0043b42c(int);

/* Supplied declaration required: FUN_0043b42c. */


void FUN_0043af40(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (0 < *(int *)(param_1 + 4)) {
    FUN_0043b42c(param_1 + 0xc);
    return;
  }
  return;
}

} /* extern "C" */
