/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b1f80` (_code @ 0x1b1f80, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001b9bc4. */


void FUN_001b1f80(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_001b9bc4(piVar1 + -0x6c,1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  return;
}
