/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020fef0` (_code @ 0x20fef0, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e0e0; /* 0x44e0e0 */
extern int DAT_0044e0e4; /* 0x44e0e4 */

/* Supplied declaration required: FUN_002c415c. */


void FUN_0020fef0(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0044e0e0 != 0) {
    FUN_002c415c();
    DAT_0044e0e0 = 0;
  }
  if (DAT_0044e0e4 != 0) {
    FUN_002c415c();
    DAT_0044e0e4 = 0;
  }
  return;
}
