/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b950` (_code @ 0x37b950, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b743c. */
/* Supplied declaration required: FUN_003798f8. */
/* Supplied declaration required: FUN_003799f8. */


void FUN_0037b950(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_003798f8(piVar1 + -0x3b,param_2);
      FUN_002b743c(param_1,piVar1);
      FUN_003799f8(piVar1 + -0x3b,param_1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return;
}
