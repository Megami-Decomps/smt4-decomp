/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001416f8` (_code @ 0x1416f8, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005b3fdc; /* 0x5b3fdc */

/* Supplied declaration required: FUN_00157194. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_001416f8(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_005b3fdc != 0) {
    FUN_00157194();
    FUN_002e3328();
    DAT_005b3fdc = 0;
  }
  return;
}
