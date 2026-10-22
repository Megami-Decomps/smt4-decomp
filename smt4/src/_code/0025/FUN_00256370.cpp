/* NON_MATCHING: fragment of a larger function (conditional return occupies entire unit; non-returning path continues past its bounds) */
/* romwright 0.5.0 decompilation of FUN_00256370 for reference (not compiled; its own view of the boundaries):

void FUN_00256370(unsigned int param_1,unsigned int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned short uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  
  if (param_3 < 1) {
    return;
  }
  uVar1 = 1 << (param_2 & 0xff);
  if (((((param_1 == 0 || param_1 == 2) || param_1 == 3) &&
       (iVar4 = FUN_002b63ac(), (*(unsigned short *)(iVar4 + 0x72) & 2) == 0)) &&
      (iVar4 = FUN_002b63ac(), (*(unsigned short *)(iVar4 + 0x72) & 0x400) == 0)) &&
     (iVar4 = FUN_002b63ac(), (*(unsigned short *)(iVar4 + 0x72) & uVar1) != 0)) {
    iVar4 = FUN_002b63ac();
    sVar3 = *(short *)(iVar4 + 0x1c);
    iVar5 = FUN_002b63ac();
    iVar4 = (sVar3 * param_3) / 100;
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    iVar4 = *(short *)(iVar5 + 0x2a) - iVar4;
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    sVar3 = (short)iVar4;
    iVar4 = FUN_002b63ac();
    sVar9 = *(short *)(iVar4 + 0x1c);
    if ((sVar3 <= sVar9) && (sVar9 = sVar3, sVar3 < 1)) {
      sVar9 = 1;
    }
    *(short *)(iVar4 + 0x2a) = sVar9;
  }
  if (param_1 >= 2) {
    if (param_1 != 2 && param_1 != 3) {
      return;
    }
    iVar5 = 3;
    iVar4 = FUN_002a8764();
    iVar4 = iVar4 + 0x9108;
  }
  else {
    iVar5 = FUN_002a8778();
    iVar4 = FUN_002a8764();
    iVar4 = iVar4 + 0x90f0;
  }
  iVar8 = 0;
  if (0 < iVar5) {
    do {
      if (-1 < *(char *)(iVar4 + iVar8)) {
        iVar6 = FUN_002a8740();
        uVar2 = *(unsigned short *)(iVar6 + 0x44);
        if ((((uVar2 & 2) == 0 && (uVar2 & 0x400) == 0) && (uVar2 & 4) == 0) &&
           ((uVar2 & uVar1) != 0)) {
          sVar3 = *(short *)(iVar6 + 0xe);
          iVar7 = (sVar3 * param_3) / 100;
          if (iVar7 < 1) {
            iVar7 = 1;
          }
          iVar7 = *(short *)(iVar6 + 0x2a) - iVar7;
          if (iVar7 < 1) {
            iVar7 = 1;
          }
          sVar9 = (short)iVar7;
          if (iVar6 != 0) {
            if (((int)sVar9 <= (int)sVar3) && (sVar3 = sVar9, sVar9 < 1)) {
              sVar3 = 1;
            }
            *(short *)(iVar6 + 0x2a) = sVar3;
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar5);
  }
  return;
}
*/
#include "common.h"
