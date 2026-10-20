/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe996` (_code @ 0x2fe996, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001329ba(int *);
int FUN_002e6e14(...);

/* Supplied declaration required: FUN_001329ba. */
/* Supplied declaration required: FUN_002e6e14. */


int FUN_002fe996(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 4);
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_001329ba(piVar3);
    puVar1 = *(unsigned int **)(param_1 + 0x14);
    *puVar1 = *(unsigned int *)(param_1 + 8);
    *(unsigned int **)(param_1 + 8) = puVar1;
    while (piVar2 = (int *)*piVar3, piVar2 != (int *)0x0) {
      *piVar3 = *piVar2;
      FUN_002e6e14(piVar2[2]);
      FUN_002e6e14(piVar2);
    }
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned int *)(param_1 + 0xc) = 0;
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  return param_1;
}

} /* extern "C" */
