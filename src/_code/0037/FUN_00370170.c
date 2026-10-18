/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00370170` (_code @ 0x370170, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0015b5b8. */
/* Supplied declaration required: FUN_0015b79c. */
/* Supplied declaration required: FUN_0015b8f8. */
/* Supplied declaration required: FUN_0036ed00. */


int FUN_00370170(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 != 0) {
    piVar2 = (int *)(temp_v0 + param_1 + 8);
  }
  else {
    piVar2 = (int *)0x0;
  }
  FUN_0036ed00();
  if (-1 < param_2) {
    piVar3 = piVar2;
    if (*piVar2 == 0x20000004) {
      temp_v0 = piVar2[7];
      piVar3 = (int *)0x0;
      if (temp_v0 != 0) {
        piVar3 = (int *)(temp_v0 + (int)(piVar2 + 7));
      }
    }
    temp_v0 = *piVar3;
    if (temp_v0 != 0x20000009) {
      if (temp_v0 != 0x20000011) {
        if (temp_v0 == 0x20000021) {
          FUN_0015b8f8(param_1);
        }
      }
      else {
        FUN_0015b79c(param_1);
      }
    }
    else {
      FUN_0015b5b8(param_1);
    }
  }
  return param_2;
}
