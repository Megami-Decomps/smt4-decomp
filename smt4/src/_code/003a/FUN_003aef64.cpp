/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aef64` (_code @ 0x3aef64, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002dc424(int);

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_002dc424. */


void FUN_003aef64(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00439ca8 != 0) {
    FUN_002dc424(DAT_00439ca8 + 0x2460);
    return;
  }
  return;
}

} /* extern "C" */
