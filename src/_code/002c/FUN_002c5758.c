/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5758` (_code @ 0x2c5758, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */
extern unsigned int DAT_0043e2b8; /* 0x43e2b8 */

/* Supplied declaration required: FUN_002c34f8. */


void FUN_002c5758(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  DAT_0043e2b8 = DAT_0043e2b8 & ~param_1;
  if (DAT_0043e2b8 != 0) {
    DAT_0043e2a8 = 0;
    FUN_002c34f8();
    return;
  }
  DAT_0043e2a8 = 1;
  FUN_002c34f8();
  return;
}
