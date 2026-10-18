/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001244b8` (_code @ 0x1244b8, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short *DAT_0043e2b4; /* 0x43e2b4 */

/* Supplied declaration required: FUN_0013912c. */


void FUN_001244b8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  
  puVar1 = DAT_0043e2b4;
  if (param_1 <= *DAT_0043e2b4) {
    *DAT_0043e2b4 = *DAT_0043e2b4 - (short)param_1;
    FUN_0013912c(puVar1,param_1);
    return;
  }
  return;
}
