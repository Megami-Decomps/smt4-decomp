/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00463d8c` (_code @ 0x463d8c, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_001b6668. */
/* Supplied declaration required: FUN_001b9f8c. */


void FUN_00463d8c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 0x88);
  if (piVar2 != (int *)(param_1 + 0x88)) {
    do {
      piVar1 = piVar2 + -0x14;
      piVar3 = (int *)*piVar2;
      if ((char)piVar2[-0xf] != '\x03') {
        return;
      }
      FUN_001b6668(param_1 + 0x84,piVar2);
      if (piVar1 != (int *)0x0) {
        (**(romwright_code **)*piVar1)(piVar1);
        FUN_001b9f8c(param_1 + 0x90,piVar1);
      }
      piVar2 = piVar3;
    } while (piVar3 != (int *)(param_1 + 0x88));
  }
  return;
}
