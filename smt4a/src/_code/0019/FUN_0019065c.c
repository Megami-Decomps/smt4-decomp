/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019065c` (_code @ 0x19065c, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: FUN_001aa214. */
/* Supplied declaration required: FUN_001b1998. */
/* Supplied declaration required: FUN_002e3140. */


void FUN_0019065c(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    *(unsigned char *)(param_1 + 5) = 1;
    FUN_001b1998();
    FUN_001aa214();
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
    param_1[4] = -1;
    *(unsigned char *)((int)param_1 + 0x15) = 0;
  }
  return;
}
