/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00396f3c` (_code @ 0x396f3c, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002328c0(...);
int FUN_00232920(...);

/* Supplied declaration required: FUN_002328c0. */
/* Supplied declaration required: FUN_00232920. */


void FUN_00396f3c(int param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int *piVar3;
  unsigned char temp_v0;
  
  piVar3 = (int *)(param_1 + 8);
  *param_2 = (int)piVar3;
  param_2[1] = (int)piVar3;
  *(unsigned char *)(param_2 + 3) = 1;
  piVar2 = *(int **)(param_1 + 0x18);
  temp_v0 = piVar2 != piVar3;
  if (temp_v0) {
    piVar2 = (int *)*piVar2;
  }
  if (!temp_v0 || piVar2 == param_2) {
    *(int **)(param_1 + 0x18) = param_2;
  }
  piVar2 = *(int **)(param_1 + 0x1c);
  temp_v0 = piVar2 != piVar3;
  if (temp_v0) {
    piVar2 = (int *)piVar2[1];
  }
  if (!temp_v0 || piVar2 == param_2) {
    *(int **)(param_1 + 0x1c) = param_2;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  piVar2 = (int *)param_2[2];
  while (piVar1 = piVar2, piVar1 != piVar3) {
    piVar2 = piVar1;
    if ((int *)*piVar1 != param_2) {
      piVar2 = piVar1 + 1;
    }
    FUN_00232920(piVar2);
    FUN_002328c0(piVar2);
    param_2 = piVar1;
    piVar2 = (int *)piVar1[2];
  }
  FUN_00232920(param_1 + 4);
  FUN_002328c0(param_1 + 4);
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
  return;
}

} /* extern "C" */
