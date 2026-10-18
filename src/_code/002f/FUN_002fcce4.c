/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fcce4` (_code @ 0x2fcce4, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044eabc; /* 0x44eabc */
extern int DAT_0044eac0; /* 0x44eac0 */

/* Supplied declaration required: FUN_0024736c. */
/* Supplied declaration required: FUN_002473ac. */


void FUN_002fcce4(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0044eac0 != 0) {
    FUN_002473ac();
    DAT_0044eac0 = 0;
  }
  if (DAT_0044eabc != 0) {
    FUN_0024736c();
    DAT_0044eabc = 0;
  }
  return;
}
