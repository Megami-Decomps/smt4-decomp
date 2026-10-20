/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001af958` (_code @ 0x1af958, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b5be8(unsigned char *, unsigned int);

extern unsigned char DAT_00643380; /* 0x643380 */

/* Supplied declaration required: FUN_001b5be8. */


void FUN_001af958(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001b5be8(&DAT_00643380,param_1);
  return;
}

} /* extern "C" */
