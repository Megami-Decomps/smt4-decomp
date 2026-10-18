/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5948` (_code @ 0x2c5948, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */
extern unsigned int DAT_0043e2b8; /* 0x43e2b8 */

/* Supplied declaration required: FUN_002c36fc. */


void FUN_002c5948(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  DAT_0043e2b8 = DAT_0043e2b8 & ~param_1;
  if (DAT_0043e2b8 != 0) {
    DAT_0043e2a8 = 0;
    FUN_002c36fc();
    return;
  }
  DAT_0043e2a8 = 1;
  FUN_002c36fc();
  return;
}
