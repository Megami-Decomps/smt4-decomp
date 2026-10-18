/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310098` (_code @ 0x310098, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00432cc8; /* 0x432cc8 */

/* Supplied declaration required: FUN_0029c660. */


void FUN_00310098(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0029c660();
  FUN_0029c660(1,0x3c,0xff);
  *(unsigned int *)(DAT_00432cc8 + 0x14c) = 4;
  return;
}
