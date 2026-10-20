/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d86e4` (_code @ 0x4d86e4, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004ff9b4(unsigned int);

/* Supplied declaration required: FUN_004ff9b4. */


void FUN_004d86e4(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_004ff9b4(*(unsigned int *)(*param_1 + 4));
    return;
  }
  return;
}

} /* extern "C" */
