/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046135c` (_code @ 0x46135c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001b6668. */
/* Supplied declaration required: FUN_0045f718. */
/* Supplied declaration required: FUN_0045f818. */


void FUN_0046135c(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_0045f718(piVar1 + -0x44,param_2);
      FUN_001b6668(param_1,piVar1);
      FUN_0045f818(piVar1 + -0x44,param_1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return;
}
