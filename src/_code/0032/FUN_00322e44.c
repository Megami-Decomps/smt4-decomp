/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00322e44` (_code @ 0x322e44, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_0029efa8. */


void FUN_00322e44(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0044e190 != 0) {
    FUN_0029efa8(DAT_0044e190 + 0x4d4);
    return;
  }
  return;
}
