/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00188c28` (_code @ 0x188c28, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00647660; /* 0x647660 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001bd438. */
/* Supplied declaration required: FUN_002e3140. */


void FUN_00188c28(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      if (*(char *)(param_1 + 0x18) == '\0') {
        *(unsigned int *)(param_1 + 8) = 0;
        *(unsigned int *)(param_1 + 0xc) = 0;
      }
      else {
        software_interrupt(0x20);
        if (*(int *)(param_1 + 0x14) < 0) {
          FUN_002e3140();
        }
        FUN_001bd438(&DAT_00647660,param_1);
      }
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      software_interrupt(0x23);
      *(int *)(param_1 + 0x14) = 0;
    }
  }
  return;
}
