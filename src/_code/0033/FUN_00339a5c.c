/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00339a5c` (_code @ 0x339a5c, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00152af8. */
/* Supplied declaration required: FUN_002a7aa0. */


void FUN_00339a5c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x4398) != 0) {
    if (-1 < *(int *)(*(int *)(*(int *)(param_1 + 0x4398) + 8) + 0xc)) {
      FUN_00152af8();
    }
    FUN_002a7aa0(*(unsigned int *)(param_1 + 0x4398));
    *(unsigned int *)(param_1 + 0x4398) = 0;
  }
  return;
}
