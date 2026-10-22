/* NON_MATCHING: found outside every function: branched to by nn_fnd_detail_UnlinkHeap; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0035ac38 for reference (not compiled; its own view of the boundaries):

void FUN_0035ac38(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  
  uVar3 = (unsigned int)*(unsigned short *)((int)param_1 + 10);
  piVar2 = (int *)(uVar3 + param_2);
  uVar1 = *(unsigned int *)(param_2 + uVar3 + 4);
  if (*piVar2 != 0) {
    *(unsigned int *)(uVar3 + *piVar2 + 4) = uVar1;
  }
  else {
    *param_1 = uVar1;
  }
  if (piVar2[1] == 0) {
    param_1[1] = *piVar2;
  }
  else {
    *(int *)(piVar2[1] + (unsigned int)*(unsigned short *)((int)param_1 + 10)) = *piVar2;
  }
  *piVar2 = 0;
  piVar2[1] = 0;
  *(short *)(param_1 + 2) = *(short *)(param_1 + 2) - 1;
  return;
}
*/
#include "common.h"
