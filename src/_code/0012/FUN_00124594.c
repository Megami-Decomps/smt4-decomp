/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124594` (_code @ 0x124594, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short *DAT_0043e2b4; /* 0x43e2b4 */

/* Supplied declaration required: FUN_001397bc. */


void FUN_00124594(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  
  puVar1 = DAT_0043e2b4;
  if (param_1 <= *DAT_0043e2b4) {
    *DAT_0043e2b4 = *DAT_0043e2b4 - (short)param_1;
    FUN_001397bc(puVar1,param_1);
    return;
  }
  return;
}
