/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00430394` (_code @ 0x430394, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005c1fc4; /* 0x5c1fc4 */
extern int DAT_005c1fc8; /* 0x5c1fc8 */

/* Supplied declaration required: FUN_004301e8. */
/* Supplied declaration required: FUN_0043069c. */


void FUN_00430394(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_005c1fc8 != 0) {
    FUN_0043069c();
    return;
  }
  if (DAT_005c1fc4 != 0) {
    FUN_004301e8(param_1);
    return;
  }
  return;
}
