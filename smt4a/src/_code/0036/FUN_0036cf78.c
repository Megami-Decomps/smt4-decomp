/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036cf78` (_code @ 0x36cf78, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f118; /* 0x57f118 */

/* Supplied declaration required: FUN_002e2114. */


void FUN_0036cf78(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0057f118 != 0) {
    FUN_002e2114(*(unsigned int *)(DAT_0057f118 + 4));
    return;
  }
  return;
}
