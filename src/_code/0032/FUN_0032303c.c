/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032303c` (_code @ 0x32303c, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_0029f248. */


void FUN_0032303c(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0044e190 != 0) {
    FUN_0029f248(DAT_0044e190 + 0x4d4);
    return;
  }
  return;
}
