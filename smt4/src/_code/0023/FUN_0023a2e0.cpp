/* NON_MATCHING: fragment of a larger function (unit ends at a conditional return, leaving its continuing path outside the unit) */
/* romwright 0.5.0 decompilation of FUN_0023a2e0 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_0023a2e0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int unaff_r6;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 4);
  FUN_00225c1c();
  if (iVar1 != 0) {
    unaff_r6 = *(int *)(iVar1 + 0x10);
  }
  if (!(iVar1 != 0 && unaff_r6 != 0)) {
    uVar2 = 0xe;
  }
  else {
    iVar4 = *(int *)(unaff_r6 + 0x48);
    iVar1 = 0;
    if (0 < iVar4) {
      do {
        iVar3 = unaff_r6;
        FUN_003afd18();
        if (iVar3 == 0) {
          return 0x14;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar4);
    }
    uVar2 = 0;
  }
  return uVar2;
}
*/
#include "common.h"
