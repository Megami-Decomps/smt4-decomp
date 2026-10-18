/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ba954` (_code @ 0x3ba954, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bd9ec. */


void FUN_003ba954(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002bd9ec(param_1 + 0x42);
  *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) | 0x10;
  return;
}
