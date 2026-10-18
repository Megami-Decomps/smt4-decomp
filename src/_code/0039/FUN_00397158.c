/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00397158` (_code @ 0x397158, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00232a54. */
/* Supplied declaration required: FUN_00232ab4. */


void FUN_00397158(int param_1,int *param_2)

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
    FUN_00232ab4(piVar2);
    FUN_00232a54(piVar2);
    param_2 = piVar1;
    piVar2 = (int *)piVar1[2];
  }
  FUN_00232ab4(param_1 + 4);
  FUN_00232a54(param_1 + 4);
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
  return;
}
