/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338404` (_code @ 0x338404, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027f94c(void);

/* Supplied declaration required: FUN_0027f94c. */


void FUN_00338404(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x4394) != 0) {
    FUN_0027f94c();
    return;
  }
  return;
}

} /* extern "C" */
