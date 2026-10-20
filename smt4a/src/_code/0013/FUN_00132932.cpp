/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00132932` (_code @ 0x132932, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fdafa(int);

/* Supplied declaration required: FUN_002fdafa. */


void FUN_00132932(int *param_1,int param_2,int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  int temp_v0;
  
  piVar2 = (int *)*param_3;
  if (piVar2 == *(int **)(param_2 + 0x10)) {
    *param_1 = (int)*(int **)(param_2 + 0x10);
    return;
  }
  temp_v0 = *piVar2;
  *(int *)piVar2[1] = *piVar2;
  *(int *)(*(int *)*param_3 + 4) = ((int *)*param_3)[1];
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) - 1;
  FUN_002fdafa(*param_3 + 8);
  puVar1 = (unsigned int *)*param_3;
  *puVar1 = *(unsigned int *)(param_2 + 4);
  *(unsigned int **)(param_2 + 4) = puVar1;
  *param_1 = temp_v0;
  return;
}

} /* extern "C" */
