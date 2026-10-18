/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003111e8` (_code @ 0x3111e8, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_00293348. */


void FUN_003111e8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0043dcf0 == 0) {
    return;
  }
  if (param_1 != 0) {
    FUN_00293348(8,1);
    return;
  }
  FUN_00293348(0x16,1);
  return;
}
