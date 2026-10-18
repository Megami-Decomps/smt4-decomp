/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ade5c` (_code @ 0x3ade5c, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_0028c868. */


void FUN_003ade5c(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00439ca8 != 0) {
    FUN_0028c868(DAT_00439ca8 + 0x2460);
    return;
  }
  return;
}
