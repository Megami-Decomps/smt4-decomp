/* NON_MATCHING: fragment of a larger function (unit ends at a conditional return; the non-returning path falls through into code outside its bounds) */
/* romwright 0.5.0 decompilation of FUN_003f3d90 for reference (not compiled; its own view of the boundaries):

void FUN_003f3d90(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 != 0) {
    iVar1 = FUN_003493ac();
    if ((iVar1 == 1 || iVar1 == 4) || ((iVar1 == 0xc || iVar1 == 0xf) || iVar1 == 0x11)) {
      FUN_001677c0();
      FUN_001835b4(2,0x11,0xb5,param_2,param_3,0xc9);
      iVar1 = 0;
      do {
        iVar2 = FUN_0035d0a4(iVar1 + 0xd);
        if (iVar2 != 0) {
          FUN_001677c0();
        }
        FUN_001835b4(2,0x11,iVar1 + 0xb8,param_2,param_3,0xce);
        FUN_001677c0();
        iVar1 = iVar1 + 1;
      } while (iVar1 < 3);
    }
    return;
  }
  return;
}
*/
#include "common.h"
