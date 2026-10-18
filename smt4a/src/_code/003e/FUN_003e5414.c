/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5414` (_code @ 0x3e5414, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_004ffb58. */


void FUN_003e5414(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(*(int *)(param_1 + 8) + 4) != 0) {
    FUN_004ffb58();
    return;
  }
  return;
}
