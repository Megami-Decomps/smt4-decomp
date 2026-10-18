/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b3428` (_code @ 0x1b3428, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: FUN_002e3140. */


void FUN_001b3428(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*param_1 != 0) {
    software_interrupt(0x24);
    if (*param_1 < 0) {
      FUN_002e3140();
    }
    *(unsigned char *)(param_1 + 1) = 1;
    FUN_001a0d08(param_1);
    if (*param_1 != 0) {
      software_interrupt(0x23);
      *param_1 = 0;
    }
  }
  return;
}
