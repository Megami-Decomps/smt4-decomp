/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a1ca0` (_code @ 0x2a1ca0, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001800b8. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_002a1ca0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_001800b8();
    *(unsigned int *)(param_1 + 8) = 0;
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  return;
}
