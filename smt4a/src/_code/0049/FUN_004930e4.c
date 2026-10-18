/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004930e4` (_code @ 0x4930e4, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00587fdc; /* 0x587fdc */
extern int DAT_00587fe0; /* 0x587fe0 */

/* Supplied declaration required: FUN_0014afd0. */


void FUN_004930e4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00587fdc == 0) {
    DAT_00587fe0 = param_1;
    if (param_1 == 0x65) {
      FUN_0014afd0(0x13,6);
    }
    if (DAT_00587fe0 == 0x66) {
      FUN_0014afd0(0x13,7);
    }
    if (DAT_00587fe0 == 0x67) {
      FUN_0014afd0(0x13,8);
    }
  }
  DAT_00587fdc = DAT_00587fdc + 1;
  return;
}
