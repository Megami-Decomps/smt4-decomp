/* NON_MATCHING: fragment of a larger function (custom-register decoder entry clobbers r4-r9 and dispatches into neighbouring fragments). */
/* romwright 0.5.0 decompilation of FUN_0016e4e8 for reference (not compiled; its own view of the boundaries):

unsigned long long FUN_0016e4e8(int param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned char *unaff_r11;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  unsigned long long uVar14;
  int *piVar13;
  
  *(unsigned int *)(param_1 + 0x1b8) = 0;
  *(unsigned int *)(param_1 + 0x1bc) = 0;
  *(unsigned int *)(param_1 + 0x1c0) = 0;
  *(unsigned int *)(param_1 + 0x1c4) = 0;
  *(unsigned int *)(param_1 + 0x1c8) = 0;
  *(unsigned int *)(param_1 + 0x1cc) = 0;
  *(unsigned int *)(param_1 + 0x1d0) = 0;
  *(unsigned int *)(param_1 + 0x1d4) = 0;
  *(unsigned int *)(param_1 + 0x1d8) = 0;
  *(unsigned int *)(param_1 + 0x1dc) = 0;
  *(unsigned int *)(param_1 + 0x1e0) = 0;
  *(unsigned int *)(param_1 + 0x1e4) = 0;
  *(unsigned int *)(param_1 + 0x1e8) = 0;
  *(unsigned int *)(param_1 + 0x1ec) = 0;
  *(unsigned int *)(param_1 + 0x1f0) = 0;
  *(unsigned int *)(param_1 + 500) = 0;
  param_1 = param_1 + 0x178;
  uVar14 = func_0x001704a0();
  iVar7 = (int)uVar14;
  if (param_1 - iVar7 < 0x17d) {
    iVar4 = (*(int *)(iVar7 + 0x1b8) + 0x20) >> 6;
    iVar5 = 4;
    iVar7 = *(int *)(iVar7 + 0x44) + 0x40;
    do {
      bVar1 = *(unsigned char *)(iVar7 + (unsigned int)*unaff_r11 + iVar4);
      bVar2 = *(unsigned char *)(iVar7 + (unsigned int)unaff_r11[1] + iVar4);
      bVar3 = *(unsigned char *)(iVar7 + (unsigned int)unaff_r11[2] + iVar4);
      unaff_r11[3] = *(unsigned char *)(iVar7 + (unsigned int)unaff_r11[3] + iVar4);
      unaff_r11[2] = bVar3;
      unaff_r11[1] = bVar2;
      *unaff_r11 = bVar1;
      iVar5 = iVar5 - 1;
      unaff_r11 = unaff_r11 + 0x400;
    } while (iVar5 != 0);
    return uVar14;
  }
  iVar5 = *(int *)(iVar7 + 0x1bc);
  iVar6 = *(int *)(iVar7 + 0x1c0);
  iVar8 = *(int *)(iVar7 + 0x1c4);
  piVar11 = (int *)(iVar7 + 0x1c8);
  iVar4 = *(int *)(iVar7 + 0x1b8) + 0x20;
  iVar10 = 4;
  piVar9 = (int *)(iVar7 + 0x1f8);
  while( 1 ) {
    iVar4 = iVar4 + iVar6;
    iVar7 = iVar4 + iVar6 * -2;
    iVar6 = (iVar5 >> 1) - iVar8;
    iVar5 = iVar5 + (iVar8 >> 1);
    piVar9[0xc] = iVar4 - iVar5;
    piVar9[8] = iVar7 - iVar6;
    piVar9[4] = iVar7 + iVar6;
    *piVar9 = iVar4 + iVar5;
    iVar10 = iVar10 - 1;
    if (iVar10 == 0) break;
    iVar4 = *piVar11;
    iVar5 = piVar11[1];
    iVar6 = piVar11[2];
    iVar8 = piVar11[3];
    piVar11 = piVar11 + 4;
    piVar9 = piVar9 + 1;
  }
  piVar11 = piVar9 + -3;
  iVar4 = 4;
  iVar7 = piVar9[-0x70] + 0x40;
  do {
    iVar5 = *piVar11;
    piVar9 = piVar11 + 1;
    piVar12 = piVar11 + 2;
    piVar13 = piVar11 + 3;
    piVar11 = piVar11 + 4;
    iVar5 = iVar5 + *piVar12;
    iVar6 = iVar5 + *piVar12 * -2;
    iVar8 = (*piVar9 >> 1) - *piVar13;
    iVar10 = *piVar9 + (*piVar13 >> 1);
    bVar1 = *(unsigned char *)(iVar7 + (unsigned int)*unaff_r11 + ((iVar5 + iVar10) >> 6));
    bVar2 = *(unsigned char *)(iVar7 + (unsigned int)unaff_r11[1] + ((iVar6 + iVar8) >> 6));
    bVar3 = *(unsigned char *)(iVar7 + (unsigned int)unaff_r11[2] + ((iVar6 - iVar8) >> 6));
    unaff_r11[3] = *(unsigned char *)(iVar7 + (unsigned int)unaff_r11[3] + ((iVar5 - iVar10) >> 6));
    unaff_r11[2] = bVar3;
    unaff_r11[1] = bVar2;
    *unaff_r11 = bVar1;
    iVar4 = iVar4 - 1;
    unaff_r11 = unaff_r11 + 0x400;
  } while (iVar4 != 0);
  return uVar14;
}
*/
#include "common.h"
