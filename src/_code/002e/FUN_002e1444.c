/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1444` (_code @ 0x2e1444, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c4360. */


void FUN_002e1444(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x478) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0x478) = 0;
  }
  return;
}
