/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6bd8` (_code @ 0x3e6bd8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */


int FUN_003e6bd8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0019c364();
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return param_1;
}
