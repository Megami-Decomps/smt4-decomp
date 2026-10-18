/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001386e8` (_code @ 0x1386e8, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0057f698; /* 0x57f698 */
extern unsigned int DAT_0057f6ac; /* 0x57f6ac */

/* Supplied declaration required: FUN_001406f0. */


void FUN_001386e8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  DAT_0057f6ac = DAT_0057f6ac & ~param_1;
  if (DAT_0057f6ac != 0) {
    DAT_0057f698 = 0;
    FUN_001406f0();
    return;
  }
  DAT_0057f698 = 1;
  FUN_001406f0();
  return;
}
