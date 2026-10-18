/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040af70` (_code @ 0x40af70, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0040af70(int param_1)

{
  int *piVar1;
  int *piVar2;
  int temp_v0;
  
  piVar2 = *(int **)(param_1 + 0x1c);
  for (piVar1 = *(int **)(param_1 + 0x18); piVar1 != piVar2; piVar1 = piVar1 + 1) {
    *(unsigned int *)(*piVar1 + 0x268) = 0;
  }
  temp_v0 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x18) != temp_v0) {
    *(unsigned int *)(param_1 + 0x1c) = temp_v0 - ((temp_v0 - *(int *)(param_1 + 0x18)) & 0xfffffffcU);
  }
  return;
}
