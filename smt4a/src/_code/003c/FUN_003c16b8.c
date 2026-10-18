/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c16b8` (_code @ 0x3c16b8, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: FUN_002a4894. */


void FUN_003c16b8(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00588fe8 != 0) {
    FUN_002a4894(DAT_00588fe8 + 0x5ec);
    return;
  }
  return;
}
