/* NON_MATCHING: fragment of a larger function (only cmp r0,#0; bxeq lr; nonnull path falls into following unit). */
/* romwright 0.5.0 decompilation of FUN_00321378 for reference (not compiled; its own view of the boundaries):

void FUN_00321378(int param_1,short param_2,short param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar3 = 0;
    param_2 = *(short *)(param_1 + 0x2448) + param_2;
    *(short *)(param_1 + 0x2448) = param_2;
    *(short *)(param_1 + 0x244a) = *(short *)(param_1 + 0x244a) + param_3;
    if (0 < param_2) {
      do {
        iVar4 = param_1 + iVar3 * 0x8c;
        FUN_001846d0(iVar4 + 0xb10,6);
        FUN_001846d0(iVar4 + 0x1088,4);
        FUN_001846d0(iVar4 + 0x598,0);
        FUN_001846d0(iVar4 + 0x20,2);
        if (iVar3 < 4) {
          if (iVar3 == 0) {
            FUN_001846d0(param_1 + 0x217c,0xc);
          }
          FUN_001846d0(iVar4 + 0x2208,0xc);
        }
        if (*(int *)(param_1 + 0x2440) != 0) {
          FUN_00184b80(iVar4 + 0x20,1);
        }
        else {
          iVar1 = FUN_00291e14();
          if (iVar1 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = 0xfb0;
          }
          FUN_00184b80(iVar4 + 0x20,uVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(short *)(param_1 + 0x2448));
    }
    if (0 < *(short *)(param_1 + 0x244a)) {
      iVar3 = 0;
      do {
        iVar4 = param_1 + ((*(short *)(param_1 + 0x2448) - iVar3) - 1) * 0x8c;
        FUN_00184b80(iVar4 + 0x598,6);
        FUN_001846d0(iVar4 + 0x598,1);
        FUN_001846d0(iVar4 + 0xb10,6);
        FUN_001846d0(iVar4 + 0x1088,4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(short *)(param_1 + 0x244a));
    }
    return;
  }
  return;
}
*/
#include "common.h"
