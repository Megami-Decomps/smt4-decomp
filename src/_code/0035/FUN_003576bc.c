/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003576bc` (_code @ 0x3576bc, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001390c0. */


int FUN_003576bc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_001390c0();
  if (*(int *)(param_1 + 0x14) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x14) = 0;
  }
  return param_1;
}
