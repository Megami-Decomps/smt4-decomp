/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042fd28` (_code @ 0x42fd28, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005c1fc4; /* 0x5c1fc4 */
extern int DAT_005c1fc8; /* 0x5c1fc8 */

/* Supplied declaration required: FUN_0042ffd8. */
/* Supplied declaration required: FUN_0043048c. */


void FUN_0042fd28(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_005c1fc8 != 0) {
    FUN_0043048c();
    return;
  }
  if (DAT_005c1fc4 != 0) {
    FUN_0042ffd8(param_1);
    return;
  }
  return;
}
