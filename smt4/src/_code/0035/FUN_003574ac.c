/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003574ac` (_code @ 0x3574ac, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00139750. */


int FUN_003574ac(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_00139750();
  if (*(int *)(param_1 + 0x14) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x14) = 0;
  }
  return param_1;
}
