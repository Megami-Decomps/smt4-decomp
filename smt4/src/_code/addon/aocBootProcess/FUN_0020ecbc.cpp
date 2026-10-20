/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ecbc` (_code @ 0x20ecbc, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c415c(void);

extern int DAT_00432fe0; /* 0x432fe0 */

/* Supplied declaration required: FUN_002c415c. */


void FUN_0020ecbc(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00432fe0 != 0) {
    FUN_002c415c();
    DAT_00432fe0 = 0;
  }
  return;
}

} /* extern "C" */
