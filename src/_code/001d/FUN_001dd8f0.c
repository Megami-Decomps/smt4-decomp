/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dd8f0` (_code @ 0x1dd8f0, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e140; /* 0x43e140 */

/* Supplied declaration required: FUN_002beda4. */


void FUN_001dd8f0(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0043e140 != 0) {
    FUN_002beda4(DAT_0043e140 + 0x34);
    return;
  }
  return;
}
