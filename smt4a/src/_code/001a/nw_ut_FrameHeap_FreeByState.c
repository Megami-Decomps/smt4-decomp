/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_ut_FrameHeap_FreeByState` (_code @ 0x1a3798, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001b061c. */


unsigned int nw_ut_FrameHeap_FreeByState(int param_1,int param_2)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if (param_2 != 0) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
      if (*piVar1 == param_2) goto LAB_001a37d8;
    }
  }
  else {
LAB_001a37d8:
    if (piVar1 != (int *)0x0) {
      temp_v0 = piVar1[1];
      temp_v1 = *(int *)(param_1 + 0x28);
      temp_v2 = *(int *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x28) = temp_v0;
      *(int *)(param_1 + 0x2c) = piVar1[2];
      *(int *)(param_1 + 0x30) = piVar1[3];
      FUN_001b061c(param_1,temp_v0,temp_v1 - temp_v0);
      FUN_001b061c(param_1,temp_v2,*(int *)(param_1 + 0x2c) - temp_v2);
      return 1;
    }
  }
  return 0;
}
