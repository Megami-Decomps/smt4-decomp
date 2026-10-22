/* NON_MATCHING: computes unit growth/reward updates from table records and applies level/stat changes; the reference loses record lookup returns and typed packed growth-result fields. */
/* romwright 0.5.0 decompilation of FUN_004cd4b8 for reference (not compiled; its own view of the boundaries):

void FUN_004cd4b8(int param_1,int param_2)

{
  unsigned char bVar1;
  unsigned short uVar2;
  short sVar3;
  unsigned char uVar4;
  short sVar5;
  unsigned short uVar6;
  int iVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  unsigned char *pbVar11;
  unsigned int uVar12;
  unsigned short *puVar13;
  unsigned int uVar14;
  unsigned int unaff_r6;
  int iVar15;
  int unaff_r11;
  unsigned int uVar16;
  unsigned char bVar17;
  unsigned char bVar18;
  int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  int uStack_5c;
  int iStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int auStack_48 [2];
  unsigned char auStack_40 [28];
  
  if (param_2 < 1) {
    return;
  }
  uVar2 = *(unsigned short *)(param_1 + 0x62);
  uVar14 = (unsigned int)uVar2;
  FUN_00184310();
  uStack_50 = 0;
  uStack_4c = 0;
  iStack_58 = (unsigned int)*(unsigned short *)(uVar14 + 0x18) << 0x10;
  uStack_5c = *(unsigned int *)(uVar14 + 0x28);
  iStack_58 = CONCAT31(iStack_58._1_3_,*(unsigned char *)(uVar14 + 0x2c));
  uStack_54 = *(unsigned int *)(uVar14 + 0x1a);
  uVar6 = *(unsigned short *)(uVar14 + 6);
  FUN_003da99c(uVar6,&uStack_5c);
  uStack_50 = CONCAT22(uStack_50._2_2_,uVar6);
  uVar6 = *(unsigned short *)(uVar14 + 6);
  FUN_003daaf8(uVar6,&uStack_5c);
  uStack_50 = CONCAT22(uVar6,(unsigned short)uStack_50);
  iVar7 = FUN_003e4de4((unsigned int)uVar2);
  if (iVar7 == 0) {
    uVar4 = 2;
  }
  else {
    uVar4 = 3;
  }
  uStack_4c = CONCAT31(uStack_4c._1_3_,uVar4);
  uStack_60 = (uStack_4c & 0xffff) | (unaff_r6 & 0xffff0000);
  uStack_70 = uStack_5c;
  uStack_6c = iStack_58;
  uStack_68 = uStack_54;
  uStack_64 = uStack_50;
  uStack_5c = recordGetScaledMaximum(param_1);
  sVar3 = *(short *)(param_1 + 0x10);
  uVar14 = uStack_60 & 0xff;
  uVar8 = FUN_00187180(9,4);
  iVar7 = FUN_00192798();
  iVar9 = FUN_00192748(uVar8);
  iVar15 = 0;
  if (iVar9 != 0) {
    pbVar11 = (unsigned char *)(iVar7 + 4);
    do {
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 8;
      if (bVar1 == uVar14) {
        iVar15 = iVar15 + 1;
      }
      iVar9 = iVar9 - 1;
    } while (iVar9 != 0);
  }
  auStack_48[0] = 0;
  iVar7 = (iVar15 + 1) * 8;
  FUN_002e3d04();
  FUN_002e6dd4();
  FUN_0023e51c(iVar7,auStack_48,uStack_60 & 0xff,(unsigned int)*(unsigned short *)(param_1 + 100) + param_2);
  uVar14 = 0;
  do {
    if (iVar15 + 1U <= uVar14) break;
    FUN_001a9110(auStack_40 + uVar14 * 8,iVar7 + uVar14 * 8);
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 3);
  if (0 < param_2) {
    unaff_r11 = 999;
  }
  iVar9 = 0;
  if (0 < param_2) {
    do {
      uVar14 = gameGetUnlockedCountLimit();
      if (uVar14 <= *(unsigned short *)(param_1 + 100)) break;
      uVar14 = *(unsigned short *)(param_1 + 100) + 1;
      uVar12 = uVar14 & 0xffff;
      *(short *)(param_1 + 100) = (short)uVar14;
      uVar14 = 0;
      if (auStack_48[0] != 0) {
        do {
          puVar13 = (unsigned short *)(iVar7 + uVar14 * 8);
          uVar16 = (unsigned int)*puVar13;
          bVar18 = uVar12 <= uVar16;
          bVar17 = uVar16 == uVar12;
          if (!bVar18 || bVar17) {
            uVar16 = (unsigned int)puVar13[1];
            bVar18 = uVar16 <= uVar12;
            bVar17 = uVar12 == uVar16;
          }
          if (!bVar18 || bVar17) {
            iVar15 = 0;
            uVar14 = (unsigned int)*(unsigned char *)(iVar7 + uVar14 * 8 + 7);
            if (uVar14 != 0) {
              do {
                iVar10 = param_1;
                FUN_004cd340(param_1,&uStack_70,1);
                switch(iVar10) {
                case 0:
                  *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + 1;
                  break;
                case 1:
                  *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + 1;
                  break;
                case 2:
                  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
                  break;
                case 3:
                  *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
                  break;
                case 4:
                  *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < (int)uVar14);
            }
            break;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < auStack_48[0]);
      }
      if (*(unsigned short *)(param_1 + 100) < 100) {
        iVar15 = FUN_003e46f4(7);
        bVar17 = iVar15 != 0;
        iVar15 = 0;
        iVar10 = 0;
        if (bVar17) {
          iVar10 = (int)*(short *)(param_1 + 4);
          iVar15 = unaff_r11 - iVar10;
        }
        if ((bVar17 && unaff_r11 != iVar10) && iVar15 < 0 == (bVar17 && SBORROW4(unaff_r11,iVar10)))
        {
          *(short *)(param_1 + 4) = (short)iVar10 + 1;
          *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + 1;
        }
        iVar15 = FUN_003e46f4(8);
        bVar17 = iVar15 != 0;
        iVar15 = 0;
        iVar10 = 0;
        if (bVar17) {
          iVar10 = (int)*(short *)(param_1 + 10);
          iVar15 = unaff_r11 - iVar10;
        }
        if ((bVar17 && unaff_r11 != iVar10) && iVar15 < 0 == (bVar17 && SBORROW4(unaff_r11,iVar10)))
        {
          *(short *)(param_1 + 10) = (short)iVar10 + 1;
          *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
        }
        iVar15 = FUN_003e46f4(9);
        bVar17 = iVar15 != 0;
        iVar15 = 0;
        iVar10 = 0;
        if (bVar17) {
          iVar10 = (int)*(short *)(param_1 + 0xc);
          iVar15 = unaff_r11 - iVar10;
        }
        if ((bVar17 && unaff_r11 != iVar10) && iVar15 < 0 == (bVar17 && SBORROW4(unaff_r11,iVar10)))
        {
          *(short *)(param_1 + 0xc) = (short)iVar10 + 1;
          *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
        }
        iVar15 = FUN_003e46f4(10);
        bVar17 = iVar15 != 0;
        iVar15 = 0;
        iVar10 = 0;
        if (bVar17) {
          iVar10 = (int)*(short *)(param_1 + 8);
          iVar15 = unaff_r11 - iVar10;
        }
        if ((bVar17 && unaff_r11 != iVar10) && iVar15 < 0 == (bVar17 && SBORROW4(unaff_r11,iVar10)))
        {
          *(short *)(param_1 + 8) = (short)iVar10 + 1;
          *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
        }
        iVar15 = FUN_003e46f4(0xb);
        bVar17 = iVar15 != 0;
        iVar15 = 0;
        iVar10 = 0;
        if (bVar17) {
          iVar10 = (int)*(short *)(param_1 + 6);
          iVar15 = unaff_r11 - iVar10;
        }
        if ((bVar17 && unaff_r11 != iVar10) && iVar15 < 0 == (bVar17 && SBORROW4(unaff_r11,iVar10)))
        {
          *(short *)(param_1 + 6) = (short)iVar10 + 1;
          *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + 1;
        }
      }
      iVar15 = FUN_0031cfd0(*(unsigned short *)(param_1 + 0x62));
      FUN_0031f0f4(*(unsigned short *)(param_1 + 0x62),iVar15 + 0x32);
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_2);
  }
  FUN_004bcd90(param_1);
  sVar5 = recordGetScaledMaximum(param_1);
  *(short *)(param_1 + 0x2a) = (sVar5 - (short)uStack_5c) + *(short *)(param_1 + 0x2a);
  *(short *)(param_1 + 0x2c) = (*(short *)(param_1 + 0x10) - sVar3) + *(short *)(param_1 + 0x2c);
  iVar9 = FUN_004bd340(param_1,2);
  *(unsigned short *)(param_1 + 0x60) = 0;
  if (iVar9 != 0) {
    FUN_004bd3ec(param_1,2);
  }
  iVar9 = FUN_003e46f4(0x83);
  if (iVar9 != 0) {
    uVar6 = recordGetScaledMaximum(param_1);
    *(unsigned short *)(param_1 + 0x2a) = uVar6;
    *(unsigned short *)(param_1 + 0x2c) = *(unsigned short *)(param_1 + 0x10);
  }
  else {
    iVar9 = FUN_003e46f4(0x82);
    if (iVar9 != 0) {
      iVar9 = recordGetScaledMaximum(param_1);
      *(short *)(param_1 + 0x2a) =
           *(short *)(param_1 + 0x2a) + (short)((iVar9 - *(short *)(param_1 + 0x2a)) / 2);
      *(short *)(param_1 + 0x2c) =
           *(short *)(param_1 + 0x2c) +
           (short)(((int)*(short *)(param_1 + 0x10) - (int)*(short *)(param_1 + 0x2c)) / 2);
    }
  }
  FUN_002e6490(iVar7);
  return;
}
*/
#include "common.h"
