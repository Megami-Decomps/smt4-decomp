/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030944c` (_code @ 0x30944c, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00432cc8; /* 0x432cc8 */

/* Supplied declaration required: FUN_002c2ba4. */


void FUN_0030944c(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c2ba4();
  FUN_002c2ba4(1,0x3c,0xff);
  *(unsigned int *)(DAT_00432cc8 + 0x14c) = 1;
  return;
}
