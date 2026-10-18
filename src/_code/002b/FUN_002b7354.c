/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7354` (_code @ 0x2b7354, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004729e0; /* 0x4729e0 */
extern int DAT_004729e4; /* 0x4729e4 */

/* Supplied declaration required: FUN_002af630. */


void FUN_002b7354(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002af630(DAT_004729e4 << 2);
  DAT_004729e0 = 0;
  DAT_004729e4 = 0;
  return;
}
