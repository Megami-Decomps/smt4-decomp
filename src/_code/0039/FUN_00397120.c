/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00397120` (_code @ 0x397120, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a7aa0. */


void FUN_00397120(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_002a7aa0();
    *(unsigned int *)(param_1 + 0x98) = 0;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_002a7aa0();
    *(unsigned int *)(param_1 + 0x9c) = 0;
  }
  return;
}
