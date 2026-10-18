/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002594cc` (_code @ 0x2594cc, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0043e2a9; /* 0x43e2a9 */
extern unsigned int DAT_0043e2bc; /* 0x43e2bc */

/* Supplied declaration required: FUN_002c4320. */


void FUN_002594cc(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  DAT_0043e2a9 = 0;
  DAT_0043e2bc = param_1 | DAT_0043e2bc;
  FUN_002c4320(0);
  return;
}
