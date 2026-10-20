/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003307dc` (_code @ 0x3307dc, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00285834(unsigned int);

extern unsigned int DAT_00570ab4; /* 0x570ab4 */

/* Supplied declaration required: FUN_00285834. */


void FUN_003307dc(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00285834(DAT_00570ab4);
  DAT_00570ab4 = 0;
  return;
}

} /* extern "C" */
