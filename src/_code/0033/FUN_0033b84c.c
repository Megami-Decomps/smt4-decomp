/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b84c` (_code @ 0x33b84c, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00420bf4; /* 0x420bf4 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c41e8. */
/* Supplied declaration required: FUN_00357698. */
/* Supplied declaration required: FUN_0035f3a8. */


int FUN_0033b84c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x3c);
  FUN_002c41e8(piVar1);
  if (*piVar1 != 0) {
    software_interrupt(0x23);
    *piVar1 = 0;
  }
  *(unsigned char **)(param_1 + 8) = &DAT_00420bf4;
  FUN_0035f3a8((unsigned int *)(param_1 + 8));
  FUN_00357698(param_1 + 0xc);
  return param_1;
}
