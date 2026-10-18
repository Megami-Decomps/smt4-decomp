/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00220f00` (_code @ 0x220f00, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043de68; /* 0x43de68 */

/* Supplied declaration required: FUN_002e0d38. */


void FUN_00220f00(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0043de68 != 0) {
    FUN_002e0d38(*(unsigned int *)(DAT_0043de68 + 4));
    return;
  }
  return;
}
