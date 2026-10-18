/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00357af8` (_code @ 0x357af8, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_0048b250. */


void FUN_00357af8(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00587f28 != 0) {
    FUN_0048b250(DAT_00587f28 + 0x68);
    return;
  }
  return;
}
