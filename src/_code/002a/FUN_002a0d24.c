/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a0d24` (_code @ 0x2a0d24, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0035ac98. */


void FUN_002a0d24(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0035ac98(param_1 + 0x18);
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}
