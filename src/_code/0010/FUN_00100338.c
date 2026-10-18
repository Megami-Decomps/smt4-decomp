/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100338` (_code @ 0x100338, 0x16 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00100366. */


unsigned int FUN_00100338(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_00100366();
  }
  return 1;
}
