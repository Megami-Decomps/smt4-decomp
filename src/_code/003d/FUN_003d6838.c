/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d6838` (_code @ 0x3d6838, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002637b4. */
/* Supplied declaration required: FUN_0029c56c. */


void FUN_003d6838(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x730) != 0) {
    FUN_0029c56c(*(int *)(param_1 + 0x730),0);
    FUN_002637b4(*(unsigned int *)(param_1 + 0x730));
    *(unsigned int *)(param_1 + 0x730) = 0;
    *(unsigned int *)(param_1 + 0x734) = 0;
  }
  return;
}
