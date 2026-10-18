/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0744` (_code @ 0x2e0744, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fb8; /* 0x588fb8 */
extern int DAT_00588fbc; /* 0x588fbc */

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_002e0744(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00588fb8 != 0) {
    FUN_0019a5a0();
    DAT_00588fb8 = 0;
  }
  if (DAT_00588fbc != 0) {
    FUN_0019a5a0();
    DAT_00588fbc = 0;
  }
  return;
}
