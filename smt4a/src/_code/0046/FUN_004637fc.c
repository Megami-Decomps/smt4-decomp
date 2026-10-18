/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004637fc` (_code @ 0x4637fc, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_001af148. */
/* Supplied declaration required: FUN_001b6668. */
/* Supplied declaration required: FUN_001b9f8c. */


void FUN_004637fc(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_001af148(param_1 + 0x70);
  piVar1 = *(int **)(param_1 + 0x88);
  if (*(int **)(param_1 + 0x88) != (int *)(param_1 + 0x88)) {
    do {
      piVar3 = piVar1 + -0x14;
      piVar2 = (int *)*piVar1;
      FUN_001af148(piVar1 + -0x11);
      FUN_001b6668(param_1 + 0x84,piVar1);
      if (piVar3 != (int *)0x0) {
        (**(romwright_code **)*piVar3)(piVar3);
        FUN_001b9f8c(param_1 + 0x90,piVar3);
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x88));
  }
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x38))();
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  return;
}
