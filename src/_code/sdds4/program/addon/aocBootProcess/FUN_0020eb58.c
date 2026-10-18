/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020eb58` (_code @ 0x20eb58, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00432fe0; /* 0x432fe0 */

/* Supplied declaration required: FUN_002c4360. */


void FUN_0020eb58(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00432fe0 != 0) {
    FUN_002c4360();
    DAT_00432fe0 = 0;
  }
  return;
}
