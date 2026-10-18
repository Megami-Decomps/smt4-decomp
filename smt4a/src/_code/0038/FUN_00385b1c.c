/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00385b1c` (_code @ 0x385b1c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_0048ba5c. */


void FUN_00385b1c(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00587f28 != 0) {
    FUN_0048ba5c(DAT_00587f28 + 0x68);
    return;
  }
  return;
}
