/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00406204` (_code @ 0x406204, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_00406204(int param_1)

{
  int temp_v0;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 8);
  for (piVar2 = *(int **)(param_1 + 4); piVar2 != piVar3; piVar2 = piVar2 + 1) {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(romwright_code **)(*(int *)*piVar2 + 4))();
    }
  }
  temp_v0 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 4) != temp_v0) {
    *(unsigned int *)(param_1 + 8) = temp_v0 - ((temp_v0 - *(int *)(param_1 + 4)) & 0xfffffffcU);
  }
  return;
}
