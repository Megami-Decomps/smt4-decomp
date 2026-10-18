/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027390c` (_code @ 0x27390c, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_0027390c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_002a755c();
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  return;
}
