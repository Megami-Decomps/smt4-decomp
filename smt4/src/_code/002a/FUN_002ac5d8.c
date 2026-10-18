/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac5d8` (_code @ 0x2ac5d8, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0014d5a8. */


void FUN_002ac5d8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_0014d5a8(*(unsigned int *)(param_1 + 4));
    return;
  }
  return;
}
