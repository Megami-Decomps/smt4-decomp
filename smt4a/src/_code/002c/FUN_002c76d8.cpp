/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c76d8` (_code @ 0x2c76d8, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001406f0(int);

extern unsigned char DAT_0057f698; /* 0x57f698 */
extern unsigned int DAT_0057f6ac; /* 0x57f6ac */

/* Supplied declaration required: FUN_001406f0. */


void FUN_002c76d8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  DAT_0057f698 = 0;
  DAT_0057f6ac = param_1 | DAT_0057f6ac;
  FUN_001406f0(0);
  return;
}

} /* extern "C" */
