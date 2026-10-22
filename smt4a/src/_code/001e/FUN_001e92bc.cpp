/* NON_MATCHING: found outside every function: called by FUN_001e71bc; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001e92bc for reference (not compiled; its own view of the boundaries):

unsigned long long FUN_001e92bc(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned long long uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int unaff_r6;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  unsigned int uVar33;
  unsigned int uVar34;
  unsigned int uVar35;
  unsigned int uVar36;
  int iVar37;
  unsigned int *unaff_r11;
  unsigned int *puVar38;
  int iVar39;
  int iStack_a0;
  int iStack_98;
  int iStack_90;
  int iStack_88;
  int iStack_80;
  int iStack_78;
  int iStack_70;
  int iStack_68;
  int iStack_60;
  int iStack_58;
  int iStack_50;
  int iStack_48;
  int iStack_40;
  int iStack_38;
  int iStack_30;
  int iStack_28;
  
  uVar4 = FUN_001e927c();
  uVar5 = unaff_r11[-0x40];
  uVar6 = unaff_r11[-0x3f];
  uVar7 = unaff_r11[-0x3e];
  uVar8 = unaff_r11[-0x3d];
  uVar9 = (unsigned int)*(unsigned char *)((int)unaff_r11 + 0xeff);
  uVar1 = uVar8 >> 0x18;
  iVar25 = ((int)(uVar9 + uVar1 + 1) >> 1) + unaff_r6 * 2;
  iVar2 = (int)((iVar25 - uVar9) + 1) >> 1;
  iVar10 = uVar9 * 8 + iVar2;
  iStack_a0 = (uVar5 & 0xff) << 6;
  iVar11 = iVar10 + iVar2;
  uVar33 = (uVar5 >> 8) & 0xff;
  iStack_98 = uVar33 << 6;
  iVar12 = iVar11 + iVar2;
  uVar9 = (uVar5 >> 0x10) & 0xff;
  iStack_90 = uVar9 << 6;
  iVar13 = iVar12 + iVar2;
  iStack_88 = (uVar5 >> 0x18) << 6;
  iVar14 = iVar13 + iVar2;
  iStack_80 = (uVar6 & 0xff) << 6;
  iVar15 = iVar14 + iVar2;
  uVar34 = (uVar6 >> 8) & 0xff;
  iStack_78 = uVar34 << 6;
  iVar16 = iVar15 + iVar2;
  uVar26 = (uVar6 >> 0x10) & 0xff;
  iStack_70 = uVar26 << 6;
  iVar17 = iVar16 + iVar2;
  iStack_68 = (uVar6 >> 0x18) << 6;
  iVar18 = iVar17 + iVar2;
  iStack_60 = (uVar7 & 0xff) << 6;
  iVar19 = iVar18 + iVar2;
  uVar35 = (uVar7 >> 8) & 0xff;
  iStack_58 = uVar35 << 6;
  iVar20 = iVar19 + iVar2;
  uVar27 = (uVar7 >> 0x10) & 0xff;
  iStack_50 = uVar27 << 6;
  iVar21 = iVar20 + iVar2;
  iStack_48 = (uVar7 >> 0x18) << 6;
  iVar22 = iVar21 + iVar2;
  iStack_40 = (uVar8 & 0xff) << 6;
  iVar23 = iVar22 + iVar2;
  uVar36 = (uVar8 >> 8) & 0xff;
  iStack_38 = uVar36 << 6;
  iVar24 = iVar23 + iVar2;
  uVar28 = (uVar8 >> 0x10) & 0xff;
  iStack_30 = uVar28 << 6;
  iStack_28 = (uVar8 >> 0x18) << 6;
  iVar37 = uVar1 << 3;
  iVar39 = 0x10;
  do {
    iVar37 = iVar37 + ((int)((iVar25 - uVar1) + 1) >> 1);
    iStack_a0 = iStack_a0 + ((int)(iVar10 + (uVar5 & 0xff) * -8 + 1) >> 1);
    iStack_98 = iStack_98 + ((int)(iVar11 + uVar33 * -8 + 1) >> 1);
    iStack_90 = iStack_90 + ((int)(iVar12 + uVar9 * -8 + 1) >> 1);
    iStack_88 = iStack_88 + ((int)(iVar13 + (uVar5 >> 0x18) * -8 + 1) >> 1);
    iVar3 = (int)(iVar37 + (unsigned int)*(unsigned char *)((int)unaff_r11 - 1) * -8 + 1) >> 1;
    iVar29 = (unsigned int)*(unsigned char *)((int)unaff_r11 - 1) * 0x40 + iVar3;
    iVar30 = iVar29 + iVar3;
    iVar31 = iVar30 + iVar3;
    iVar32 = iVar31 + iVar3;
    *unaff_r11 = ((iStack_a0 + iVar29 + 0x40) >> 7) | (((iStack_98 + iVar30 + 0x40) >> 7) << 8) |
                 (((iStack_90 + iVar31 + 0x40) >> 7) << 0x10) |
                 (((iStack_88 + iVar32 + 0x40) >> 7) << 0x18);
    iStack_80 = iStack_80 + ((int)(iVar14 + (uVar6 & 0xff) * -8 + 1) >> 1);
    iStack_78 = iStack_78 + ((int)(iVar15 + uVar34 * -8 + 1) >> 1);
    iStack_70 = iStack_70 + ((int)(iVar16 + uVar26 * -8 + 1) >> 1);
    iStack_68 = iStack_68 + ((int)(iVar17 + (uVar6 >> 0x18) * -8 + 1) >> 1);
    iVar32 = iVar32 + iVar3;
    iVar29 = iVar32 + iVar3;
    iVar30 = iVar29 + iVar3;
    iVar31 = iVar30 + iVar3;
    unaff_r11[1] = ((iStack_80 + iVar32 + 0x40) >> 7) | (((iStack_78 + iVar29 + 0x40) >> 7) << 8) |
                   (((iStack_70 + iVar30 + 0x40) >> 7) << 0x10) |
                   (((iStack_68 + iVar31 + 0x40) >> 7) << 0x18);
    iStack_60 = iStack_60 + ((int)(iVar18 + (uVar7 & 0xff) * -8 + 1) >> 1);
    iStack_58 = iStack_58 + ((int)(iVar19 + uVar35 * -8 + 1) >> 1);
    iStack_50 = iStack_50 + ((int)(iVar20 + uVar27 * -8 + 1) >> 1);
    iStack_48 = iStack_48 + ((int)(iVar21 + (uVar7 >> 0x18) * -8 + 1) >> 1);
    iVar31 = iVar31 + iVar3;
    iVar29 = iVar31 + iVar3;
    iVar30 = iVar29 + iVar3;
    iVar32 = iVar30 + iVar3;
    puVar38 = unaff_r11 + 3;
    unaff_r11[2] = ((iStack_60 + iVar31 + 0x40) >> 7) | (((iStack_58 + iVar29 + 0x40) >> 7) << 8) |
                   (((iStack_50 + iVar30 + 0x40) >> 7) << 0x10) |
                   (((iStack_48 + iVar32 + 0x40) >> 7) << 0x18);
    iStack_40 = iStack_40 + ((int)(iVar22 + (uVar8 & 0xff) * -8 + 1) >> 1);
    iStack_38 = iStack_38 + ((int)(iVar23 + uVar36 * -8 + 1) >> 1);
    iStack_30 = iStack_30 + ((int)(iVar24 + uVar28 * -8 + 1) >> 1);
    iStack_28 = iStack_28 + ((int)(iVar24 + iVar2 + (uVar8 >> 0x18) * -8 + 1) >> 1);
    iVar32 = iVar32 + iVar3;
    iVar29 = iVar32 + iVar3;
    iVar30 = iVar29 + iVar3;
    unaff_r11 = unaff_r11 + 0x40;
    *puVar38 = ((iStack_40 + iVar32 + 0x40) >> 7) | (((iStack_38 + iVar29 + 0x40) >> 7) << 8) |
               (((iStack_30 + iVar30 + 0x40) >> 7) << 0x10) |
               (((iStack_28 + iVar30 + iVar3 + 0x40) >> 7) << 0x18);
    iVar39 = iVar39 - 1;
  } while (iVar39 != 0);
  return uVar4;
}
*/
#include "common.h"
