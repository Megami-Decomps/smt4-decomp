/* NON_MATCHING: fragment of a larger function (conditional bxge returns but the other path falls through beyond the unit). */
/* romwright 0.5.0 decompilation of FUN_003f2aec for reference (not compiled; its own view of the boundaries):

void FUN_003f2aec(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  
  if (10 < param_2) {
    return;
  }
  do {
    iVar4 = param_1 + param_2 * 2;
    iVar3 = param_2;
    if (-1 < *(short *)(iVar4 + 0x3006)) {
      while (iVar3 = iVar3 + 1, iVar3 < 0xc) {
        iVar5 = param_1 + iVar3 * 2;
        sVar1 = *(short *)(iVar5 + 0x3006);
        iVar6 = (int)sVar1;
        if (-1 < iVar6) {
          sVar2 = *(short *)(iVar4 + 0x3006);
          iVar11 = *(int *)(param_1 + 0x1ffc);
          iVar10 = iVar11 + sVar2 * 0x408 + 0x164;
          iVar7 = iVar6 * 0x408 + 0x164 + iVar11;
          sVar8 = *(short *)(iVar10 + 0x10a) + *(short *)(iVar10 + 0x22c);
          sVar9 = *(short *)(iVar7 + 0x10a) + *(short *)(iVar7 + 0x22c);
          if ((sVar8 < sVar9) ||
             ((sVar8 == sVar9 &&
              (*(short *)(iVar11 + iVar6 * 0x408 + 8) < *(short *)(iVar11 + sVar2 * 0x408 + 8))))) {
            *(short *)(iVar4 + 0x3006) = sVar1;
            *(short *)(iVar5 + 0x3006) = sVar2;
          }
        }
      }
    }
    param_2 = param_2 + 1;
  } while (param_2 < 0xb);
  return;
}
*/
#include "common.h"
