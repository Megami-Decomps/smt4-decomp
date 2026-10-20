/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021e150` (_code @ 0x21e150, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027d0ec(void);

extern int DAT_00447e28; /* 0x447e28 */

/* Supplied declaration required: FUN_0027d0ec. */


void FUN_0021e150(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00447e28 != 0) {
    FUN_0027d0ec();
    return;
  }
  return;
}

} /* extern "C" */
