/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275a18` (_code @ 0x275a18, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cdf0; /* 0x44cdf0 */

/* Supplied declaration required: FUN_0039c26c. */


void FUN_00275a18(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0044cdf0 != 0) {
    FUN_0039c26c(DAT_0044cdf0 + 0x40);
    return;
  }
  return;
}
