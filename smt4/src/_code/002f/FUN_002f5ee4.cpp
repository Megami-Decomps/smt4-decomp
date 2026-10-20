/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5ee4` (_code @ 0x2f5ee4, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025011c(void);

extern int DAT_0044eac8; /* 0x44eac8 */

/* Supplied declaration required: FUN_0025011c. */


void FUN_002f5ee4(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0044eac8 != 0) {
    FUN_0025011c();
    DAT_0044eac8 = 0;
  }
  return;
}

} /* extern "C" */
