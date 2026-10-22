/* NON_MATCHING: found outside every function: branched to by FUN_0042d32c; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0042cea0 for reference (not compiled; its own view of the boundaries):

void FUN_0042cea0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  FUN_002f5970(param_1 + 0xc);
  iVar1 = param_3[3];
  param_2[2] = param_3[2];
  param_2[3] = iVar1;
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 == param_3) {
    if (piVar2 == (int *)0x0) {
      param_2[1] = (int)param_2;
      *param_2 = (int)param_2;
    }
    else {
      param_2[1] = (int)piVar2;
      *(int **)(*piVar2 + 4) = param_2;
      *param_2 = *piVar2;
      *piVar2 = (int)param_2;
    }
    *(int **)(param_1 + 8) = param_2;
  }
  else if (param_3 != (int *)0x0) {
    param_2[1] = (int)param_3;
    *(int **)(*param_3 + 4) = param_2;
    *param_2 = *param_3;
    *param_3 = (int)param_2;
  }
  else if (piVar2 != (int *)0x0) {
    param_2[1] = (int)piVar2;
    *(int **)(*piVar2 + 4) = param_2;
    *param_2 = *piVar2;
    *piVar2 = (int)param_2;
  }
  else {
    param_2[1] = (int)param_2;
    *param_2 = (int)param_2;
    *(int **)(param_1 + 8) = param_2;
  }
  param_3[2] = 0;
  param_3[3] = 0;
  if ((int *)*param_3 == param_3) {
    *(unsigned int *)(param_1 + 8) = 0;
  }
  else {
    if (*(int **)(param_1 + 8) == param_3) {
      *(int *)(param_1 + 8) = (*(int **)(param_1 + 8))[1];
    }
    *(int *)param_3[1] = *param_3;
    *(int *)(*param_3 + 4) = param_3[1];
  }
  param_3[1] = 0;
  *param_3 = 0;
  FUN_002f59d8(param_1 + 0xc);
  return;
}
*/
#include "common.h"
