/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014fce4` (_code @ 0x14fce4, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c3fe4. */


int FUN_0014fce4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c3fe4();
  if (*(int *)(param_1 + 0x18) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x18) = 0;
  }
  FUN_002c3fe4();
  if (*(int *)(param_1 + 0x10) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x10) = 0;
  }
  return param_1;
}
