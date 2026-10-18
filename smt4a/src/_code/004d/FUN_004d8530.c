/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d8530` (_code @ 0x4d8530, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_004ffa14. */


void FUN_004d8530(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_004ffa14(*(unsigned int *)(*param_1 + 4));
    return;
  }
  return;
}
