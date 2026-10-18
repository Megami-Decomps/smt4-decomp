/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019da44` (_code @ 0x19da44, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434260; /* 0x434260 */

/* Supplied declaration required: FUN_0033574c. */


void FUN_0019da44(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00434260 != 0) {
    FUN_0033574c(DAT_00434260,param_1);
    return;
  }
  return;
}
