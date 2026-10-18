/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00274200` (_code @ 0x274200, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0049f942; /* 0x49f942 */
extern signed char DAT_004bd0dc; /* 0x4bd0dc */

/* Supplied declaration required: FUN_002020f0. */


void FUN_00274200(void)

{
/* irregular: 1 native warning(s); review required */
  if ((DAT_004bd0dc != '\0') && (DAT_0049f942 != '\0')) {
    FUN_002020f0();
    return;
  }
  return;
}
