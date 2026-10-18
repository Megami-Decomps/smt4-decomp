/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019059c` (_code @ 0x19059c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001884b0. */
/* Supplied declaration required: FUN_00195fc8. */


void FUN_0019059c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 4) & 0xfffffffe) != 0) {
    if ((*(unsigned int *)(param_1 + 4) & 1) != 0) {
      FUN_00195fc8();
    }
    FUN_001884b0(*(unsigned int *)(param_1 + 4) & 0xfffffffe);
    *(unsigned int *)(param_1 + 4) = 0;
  }
  return;
}
