/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00308d00` (_code @ 0x308d00, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cdf0; /* 0x44cdf0 */

/* Supplied declaration required: FUN_0039cb70. */


void FUN_00308d00(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0044cdf0 != 0) {
    FUN_0039cb70(DAT_0044cdf0 + 0x40);
    return;
  }
  return;
}
