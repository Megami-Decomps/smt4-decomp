/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b5d8` (_code @ 0x33b5d8, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c3fe4. */


int FUN_0033b5d8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x38);
  FUN_002c3fe4(piVar1);
  if (*piVar1 != 0) {
    software_interrupt(0x23);
    *piVar1 = 0;
  }
  return param_1;
}
