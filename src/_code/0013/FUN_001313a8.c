/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001313a8` (_code @ 0x1313a8, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0013c780. */
/* Supplied declaration required: FUN_001500b4. */
/* Supplied declaration required: FUN_002ac22c. */


void FUN_001313a8(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_002ac22c(param_1);
    FUN_001500b4(*param_1,3);
    FUN_0013c780(*param_1);
    *param_1 = 0;
  }
  return;
}
