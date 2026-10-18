/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004613d4` (_code @ 0x4613d4, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0045f818. */


int FUN_004613d4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_0045f818(piVar1 + -0x44,param_1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return param_1;
}
