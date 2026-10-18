/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399414` (_code @ 0x399414, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0056fcc8; /* 0x56fcc8 */

/* Supplied declaration required: FUN_0013cab8. */


void FUN_00399414(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0013cab8();
  FUN_0013cab8(1,0x3c,0xff);
  *(unsigned int *)(DAT_0056fcc8 + 0x14c) = 1;
  return;
}
