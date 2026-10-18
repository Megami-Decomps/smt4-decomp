/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00341c48` (_code @ 0x341c48, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00152af8. */
/* Supplied declaration required: FUN_002a7aa0. */


void FUN_00341c48(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00152af8();
    FUN_002a7aa0(*(unsigned int *)(param_1 + 0x28));
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  return;
}
