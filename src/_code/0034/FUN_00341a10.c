/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00341a10` (_code @ 0x341a10, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00152bec. */
/* Supplied declaration required: FUN_002a775c. */


void FUN_00341a10(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00152bec();
    FUN_002a775c(*(unsigned int *)(param_1 + 0x28));
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  return;
}
