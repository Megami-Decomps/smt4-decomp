/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00237cfc` (_code @ 0x237cfc, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00238aac. */


void FUN_00237cfc(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_2 + 0xc);
  piVar3 = (int *)(param_2 + 4);
  FUN_00238aac(piVar1,2);
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
  }
  else {
    piVar2 = piVar1 + 2;
    if (piVar2 != (int *)0x0) {
      piVar1[4] = 0;
      *piVar2 = (int)piVar2;
      piVar1[5] = 0;
      piVar1[3] = (int)piVar2;
    }
    *piVar1 = *piVar3;
    piVar1[1] = (int)piVar3;
    *piVar3 = (int)piVar1;
    *(int **)(*piVar1 + 4) = piVar1;
    *param_1 = (unsigned int)piVar1;
    piVar1[4] = *(int *)(param_2 + 0x14);
  }
  return;
}
