/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5ea0` (_code @ 0x2f5ea0, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044eac8; /* 0x44eac8 */

/* Supplied declaration required: FUN_00250368. */


void FUN_002f5ea0(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0044eac8 != 0) {
    FUN_00250368();
    DAT_0044eac8 = 0;
  }
  return;
}
