/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b7314` (_code @ 0x3b7314, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: FUN_003e4140. */


void FUN_003b7314(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00588fe8;
  if (DAT_00588fe8 != 0) {
    *(unsigned char *)(DAT_00588fe8 + 0x2584) = 1;
    FUN_003e4140(temp_v0 + 0x2588);
    return;
  }
  return;
}
