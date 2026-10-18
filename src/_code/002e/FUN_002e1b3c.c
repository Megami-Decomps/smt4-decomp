/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1b3c` (_code @ 0x2e1b3c, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */

/* Supplied declaration required: FUN_002c3940. */


void FUN_002e1b3c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 < 0xc) {
    FUN_002c3940(DAT_0043e2ac + param_1 * 0x4c + 0x24814,0x4c);
    return;
  }
  return;
}
