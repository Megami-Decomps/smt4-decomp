/* NON_MATCHING: Retail now contains the full item/card renderer, including category icons, text colors, placement, and render-context state; the large row/texture layout and draw-helper argument types remain unreconstructed. */
/* romwright 0.5.0 decompilation of FUN_0025cfe4 for reference (not compiled; its own view of the boundaries):

void FUN_0025cfe4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  unsigned int in_fpscr;
  unsigned long long uVar13;
  
  if (param_1 != 0) {
    FUN_001677c0();
    iVar10 = *(int *)(param_1 + 0x40);
    uVar9 = (unsigned int)(0 < *(int *)(param_1 + 0x3c));
    iVar11 = 0;
    iVar12 = 4;
    piVar1 = (int *)(param_1 + 0x3c);
    do {
      if (0 < iVar10) {
        uVar9 = uVar9 + 1;
      }
      iVar10 = piVar1[3];
      if (0 < piVar1[2]) {
        iVar11 = iVar11 + 1;
      }
      iVar12 = iVar12 - 1;
      piVar1 = piVar1 + 2;
    } while (iVar12 != 0);
    iVar11 = uVar9 + iVar11;
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x60)) {
      iVar11 = iVar11 + 1;
    }
    if (iVar11 < 7) {
      iVar11 = FUN_001834a4(0x2e,0x124);
      iVar10 = FUN_001834a4(0x2e,0x14c);
      iVar10 = (int)*(short *)(iVar10 + 10) - (int)*(short *)(iVar11 + 10);
    }
    else if (iVar11 < 9) {
      iVar11 = FUN_001834a4(0x2e,0x124);
      iVar10 = FUN_001834a4(0x2e,0x14d);
      iVar10 = (int)*(short *)(iVar10 + 10) - (int)*(short *)(iVar11 + 10);
    }
    FUN_00164b5c(2,0x2e,0x24,*(unsigned int *)(param_2 + 4),*(int *)(param_2 + 8) + iVar10,0x65);
    uVar13 = 0x3f80000000000000;
    iVar11 = 0;
    do {
      iVar12 = param_1 + iVar11 * 4;
      if (0 < *(int *)(iVar12 + 0x3c)) {
        iVar2 = FUN_001834a4(0x2e,iVar11 + 0x138);
        iVar3 = FUN_001834a4(0x2e,iVar11 + 0x142);
        iVar4 = FUN_001834a4(0x2e,0x134);
        iVar5 = FUN_001834a4(0x2e,0x133);
        iVar6 = FUN_001834a4(0x2e,0x137);
        iVar7 = FUN_001834a4(0x2e,0x135);
        iVar8 = FUN_001834a4(0x2e,0x136);
        FUN_001689e8((int)*(short *)(param_1 + iVar11 * 2 + 0x28),
                     *(int *)(param_2 + 4) + (int)*(short *)(iVar2 + 8) + (int)*(short *)(iVar5 + 8)
                     ,*(short *)(iVar5 + 10) + iVar10 +
                      *(int *)(param_2 + 8) + (int)*(short *)(iVar2 + 10),0x65,0);
        if (*(char *)(param_1 + iVar11 + 100) != '\0') {
          if ((*(int *)(DAT_0059dbb4 + 0x52c) == 0) &&
             (iVar5 = *(int *)(iVar12 + 0x70) + 1, *(int *)(iVar12 + 0x70) = iVar5, 0x20 < iVar5)) {
            *(unsigned int *)(iVar12 + 0x70) = 0;
          }
          iVar5 = *(int *)(iVar12 + 0x70) % 0x20;
          if (iVar5 < 0x11) {
            VectorSignedToFloat(iVar5,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          else {
            iVar5 = iVar5 - 0x10;
            VectorSignedToFloat(iVar5,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          FUN_001677c0(iVar5);
          FUN_00164b5c(2,0x2e,0xd,*(int *)(param_2 + 4) + (int)*(short *)(iVar3 + 8),
                       (int)*(short *)(iVar3 + 10) + *(int *)(param_2 + 8) + iVar10,0x65);
          FUN_001677c0();
        }
        FUN_001527d8(*(unsigned int *)(param_1 + iVar11 * 4),0xffffffff);
        FUN_0025cc78(*(unsigned int *)(param_1 + iVar11 * 4),
                     *(int *)(param_2 + 4) + (int)*(short *)(iVar2 + 8) + (int)*(short *)(iVar4 + 8)
                     ,*(short *)(iVar4 + 10) + iVar10 +
                      *(int *)(param_2 + 8) + (int)*(short *)(iVar2 + 10),0x65);
        iVar12 = *(int *)(iVar12 + 0x3c);
        FUN_001835b4(2,0x2e,0x131,*(int *)(param_2 + 4) + (int)*(short *)(iVar2 + 8),
                     *(int *)(param_2 + 8) + (int)*(short *)(iVar2 + 10) + iVar10,0x65);
        FUN_001835b4(2,7,0xd,(int)*(short *)(iVar2 + 8) + *(int *)(param_2 + 4) +
                             (int)*(short *)(iVar6 + 8),
                     *(short *)(iVar6 + 10) + iVar10 +
                     (int)*(short *)(iVar2 + 10) + *(int *)(param_2 + 8),0x65);
        FUN_001835b4(2,7,iVar12 / 10,
                     (int)*(short *)(iVar2 + 8) + *(int *)(param_2 + 4) + (int)*(short *)(iVar8 + 8)
                     ,*(short *)(iVar8 + 10) + iVar10 +
                      (int)*(short *)(iVar2 + 10) + *(int *)(param_2 + 8),0x65);
        FUN_001835b4(2,7,iVar12 % 10,
                     (int)*(short *)(iVar7 + 8) + *(int *)(param_2 + 4) + (int)*(short *)(iVar2 + 8)
                     ,(int)*(short *)(iVar2 + 10) + *(int *)(param_2 + 8) +
                      *(short *)(iVar7 + 10) + iVar10,0x65);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 10);
    DAT_0063077c = (float)((unsigned long long)uVar13 >> 0x20);
    if (0x3f800000 < (int)DAT_0063077c) {
      DAT_0063077c = 1.0f;
    }
    if (DAT_0063077c < 0.0f) {
      DAT_0063077c = 0.0f;
    }
    DAT_00630730 = DAT_0063077c;
    DAT_00630740 = DAT_0063077c;
    DAT_00630750 = DAT_0063077c;
    DAT_00630760 = DAT_0063077c;
    DAT_00630775 = 1;
    return;
  }
  return;
}
*/
#include "common.h"
