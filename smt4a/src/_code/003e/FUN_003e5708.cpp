/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5708` (_code @ 0x3e5708, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004ff8dc(void);

/* Supplied declaration required: FUN_004ff8dc. */


void FUN_003e5708(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(*(int *)(param_1 + 8) + 4) != 0) {
    FUN_004ff8dc();
    return;
  }
  return;
}

} /* extern "C" */
