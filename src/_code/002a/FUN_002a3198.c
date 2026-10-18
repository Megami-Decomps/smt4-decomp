/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3198` (_code @ 0x2a3198, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001597a4. */


void FUN_002a3198(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      if (*(char *)(param_1 + 0x18) == '\0') {
        *(unsigned int *)(param_1 + 8) = 0;
        *(unsigned int *)(param_1 + 0xc) = 0;
      }
      else {
        software_interrupt(0x20);
        FUN_001597a4(param_1);
      }
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      software_interrupt(0x23);
      *(int *)(param_1 + 0x14) = 0;
    }
  }
  return;
}
