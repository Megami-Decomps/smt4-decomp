/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dd7e8` (_code @ 0x1dd7e8, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e140; /* 0x43e140 */

/* Supplied declaration required: FUN_002bef7c. */


void FUN_001dd7e8(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0043e140 != 0) {
    FUN_002bef7c(DAT_0043e140 + 0x34);
    return;
  }
  return;
}
