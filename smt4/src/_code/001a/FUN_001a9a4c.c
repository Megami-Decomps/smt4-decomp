/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a9a4c` (_code @ 0x1a9a4c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_002c415c. */


void FUN_001a9a4c(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0043427c != 0) {
    FUN_002c415c();
    DAT_0043427c = 0;
  }
  return;
}
