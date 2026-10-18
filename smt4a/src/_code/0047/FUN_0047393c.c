/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047393c` (_code @ 0x47393c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_004285cc. */


void FUN_0047393c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(param_1 + 0x5b0) != 0) {
    FUN_004285cc();
    FUN_002e3328();
    *(unsigned int *)(param_1 + 0x5b0) = 0;
  }
  if (*(int *)(param_1 + 0x5b4) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x5b4) = 0;
  }
  return;
}
