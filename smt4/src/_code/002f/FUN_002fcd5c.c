/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fcd5c` (_code @ 0x2fcd5c, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044eabc; /* 0x44eabc */
extern int DAT_0044eac0; /* 0x44eac0 */

/* Supplied declaration required: FUN_00247200. */
/* Supplied declaration required: FUN_00247240. */


void FUN_002fcd5c(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0044eac0 != 0) {
    FUN_00247240();
    DAT_0044eac0 = 0;
  }
  if (DAT_0044eabc != 0) {
    FUN_00247200();
    DAT_0044eabc = 0;
  }
  return;
}
