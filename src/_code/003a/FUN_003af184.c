/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003af184` (_code @ 0x3af184, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_002dc3bc. */


void FUN_003af184(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00439ca8 != 0) {
    FUN_002dc3bc(DAT_00439ca8 + 0x2460);
    return;
  }
  return;
}
