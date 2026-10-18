/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e70a4` (_code @ 0x3e70a4, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003e71c4. */


unsigned int FUN_003e70a4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 4) != 0) {
    FUN_003e71c4(param_1 + 4);
    return 1;
  }
  return 0;
}
