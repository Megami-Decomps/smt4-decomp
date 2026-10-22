/* NON_MATCHING: found outside every function: branched to by FUN_0013a4f4; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00146d60 for reference (not compiled; its own view of the boundaries):

void FUN_00146d60(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((unsigned int)*(unsigned short *)((int)param_1 + 10) + param_2);
  if (*param_1 != 0) {
    iVar2 = param_1[1];
    piVar1[1] = 0;
    *piVar1 = iVar2;
    *(int *)(param_1[1] + (unsigned int)*(unsigned short *)((int)param_1 + 10) + 4) = param_2;
    param_1[1] = param_2;
    *(short *)(param_1 + 2) = (short)param_1[2] + 1;
    return;
  }
  piVar1[1] = 0;
  *piVar1 = 0;
  *param_1 = param_2;
  param_1[1] = param_2;
  *(short *)(param_1 + 2) = (short)param_1[2] + 1;
  return;
}
*/
#include "common.h"
