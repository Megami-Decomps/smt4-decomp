/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6e0c` (_code @ 0x3e6e0c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003e6ecc. */


unsigned int FUN_003e6e0c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 4) != 0) {
    FUN_003e6ecc(param_1 + 4);
    return 1;
  }
  return 0;
}
