/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00515618` (_code @ 0x515618, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_004387f0. */
/* Supplied declaration required: FUN_00515598. */


void FUN_00515618(unsigned int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)param_2[2];
  FUN_004387f0(piVar1,2);
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
  }
  else {
    if (piVar1 != (int *)0xfffffff8) {
      FUN_00515598();
    }
    *piVar1 = *param_2;
    piVar1[1] = (int)param_2;
    *param_2 = (int)piVar1;
    *(int **)(*piVar1 + 4) = piVar1;
    *param_1 = (unsigned int)piVar1;
  }
  return;
}
