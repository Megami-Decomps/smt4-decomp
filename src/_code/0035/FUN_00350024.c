/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00350024` (_code @ 0x350024, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023a690. */


void FUN_00350024(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1 + 0x158;
  FUN_0023a690();
  if (temp_v0 == 0) {
    *(unsigned int *)(param_1 + 0xc) = 7;
  }
  return;
}
