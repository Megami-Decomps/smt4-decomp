/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a65e4` (_code @ 0x3a65e4, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e06c; /* 0x44e06c */

/* Supplied declaration required: FUN_002976ac. */


void FUN_003a65e4(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0044e06c < 1) {
    FUN_002976ac(0x17);
  }
  DAT_0044e06c = DAT_0044e06c + 1;
  return;
}
