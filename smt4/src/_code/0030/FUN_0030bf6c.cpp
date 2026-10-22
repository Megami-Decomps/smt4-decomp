/* NON_MATCHING: linker-erased calls at +0x54, +0x7c and +0xb4 have no recovered targets. */
/* romwright 0.5.0 decompilation of FUN_0030bf6c for reference (not compiled; its own view of the boundaries):

void FUN_0030bf6c(unsigned short *param_1,unsigned short *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = FUN_002b45e8(*param_1);
  iVar2 = FUN_002b45e8(*param_2);
  iVar5 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar8 = 0x12;
  iVar9 = 0x12;
  do {
    iVar7 = iVar1 + iVar4 * 2;
    iVar3 = iVar5;
    FUN_0028886c(iVar5,(int)*(short *)(iVar7 + 0x74) >> 10);
    if (0 < iVar3) {
      iVar5 = (int)*(short *)(iVar7 + 0x74) >> 10;
      iVar8 = iVar4;
    }
    iVar7 = iVar2 + iVar4 * 2;
    iVar3 = iVar6;
    FUN_0028886c(iVar6,(int)*(short *)(iVar7 + 0x74) >> 10);
    if (0 < iVar3) {
      iVar6 = (int)*(short *)(iVar7 + 0x74) >> 10;
      iVar9 = iVar4;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  if ((iVar9 == iVar8) && (FUN_0028886c(iVar6,iVar5), iVar6 == 0)) {
    FUN_002b45e8(*param_1);
    FUN_002b45e8(*param_2);
  }
  return;
}
*/
#include "common.h"
