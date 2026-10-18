/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121944` (_code @ 0x121944, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001311d8. */
/* Supplied declaration required: FUN_002b4fb0. */


void FUN_00121944(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    piVar1 = *(int **)(param_1 + 8);
    if (*(int **)(param_1 + 8) != (int *)(param_1 + 8)) {
      do {
        piVar2 = (int *)*piVar1;
        FUN_001311d8(piVar1 + -0x4f);
        piVar1 = piVar2;
      } while (piVar2 != (int *)(param_1 + 8));
    }
    FUN_002b4fb0(param_1,*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c));
    *(unsigned char *)(param_1 + 0x10) = 0;
  }
  return;
}
