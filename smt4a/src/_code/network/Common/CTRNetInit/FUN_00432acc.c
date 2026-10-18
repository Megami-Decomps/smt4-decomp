/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00432acc` (_code @ 0x432acc, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00588118; /* 0x588118 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002e3140. */


unsigned char FUN_00432acc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = DAT_00588118;
  software_interrupt(0x24);
  if ((int)DAT_00588118 < 0) {
    FUN_002e3140();
  }
  return (temp_v0 & 0x3ff) == 0x3fe;
}
