/* NON_MATCHING: unimplemented 0x528-byte battle/model restoration routine; reference draft retained and no byte-identical SMT IV twin found. */
/* romwright 0.5.0 decompilation of FUN_002def6c for reference (not compiled; its own view of the boundaries):

unsigned long long FUN_002def6c(void)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int unaff_r8;
  int *piVar8;
  int *piVar9;
  int in_lr;
  unsigned char uVar10;
  char cVar11;
  char cVar12;
  unsigned char bVar13;
  unsigned char uVar14;
  
  puVar1 = DAT_00573920;
  puVar2 = DAT_00573920 + 0x1396;
  *(unsigned char *)(DAT_00573920 + 0x21) = 1;
  piVar9 = (int *)*puVar2;
  *puVar2 = 0;
  puVar1[0x1397] = 0;
  puVar1[0x1398] = 0;
  if (puVar1[0x8a6] != 0) {
    FUN_004d88cc();
    FUN_002e3328();
    puVar1[0x8a6] = 0;
  }
  iVar5 = 0;
  do {
    if (puVar1[iVar5 + 0x8af] != 0) {
      FUN_004d88cc();
      FUN_002e3328();
      puVar1[iVar5 + 0x8af] = 0;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  iVar5 = 0;
  piVar8 = puVar1 + 0x7b5;
  do {
    iVar7 = *piVar8 + iVar5 * 0x1d0;
    uVar3 = *(unsigned int *)(iVar7 + 0x50);
    bVar13 = (uVar3 & 0x200000) != 0;
    if (bVar13) {
      uVar3 = *(unsigned int *)(iVar7 + 0x1bc);
    }
    if (bVar13 && uVar3 != 0) {
      FUN_004d88cc();
      FUN_002e3328();
      *(unsigned int *)(iVar7 + 0x1bc) = 0;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x6d);
  if (puVar1[0x1395] != 0) {
    FUN_003e6bd8();
    FUN_002e3328();
    puVar1[0x1395] = 0;
  }
  func_0x00236010();
  FUN_0037e09c(0);
  if (DAT_0057a9c8 != 0) {
    FUN_00290ba4(puVar1);
  }
  FUN_003315c4();
  FUN_003f19dc(puVar1);
  piVar6 = puVar1 + 0x1125;
  if (*piVar6 != 0) {
    resourceOwnerReleaseAll();
    if ((int *)*piVar6 != (int *)0x0) {
      (**(code **)(*(int *)*piVar6 + 4))();
    }
    *piVar6 = 0;
  }
  FUN_003ef614(puVar1);
  FUN_003eacb4(puVar1);
  if (puVar1[0x89d] != 0) {
    puVar1[0x89d] = 0;
  }
  if (puVar1[0x89c] != 0) {
    puVar1[0x89c] = 0;
  }
  if (puVar1[0x89a] != 0) {
    puVar1[0x89a] = 0;
  }
  if (puVar1[0x89b] != 0) {
    puVar1[0x89b] = 0;
  }
  if (puVar1[0x89e] != 0) {
    puVar1[0x89e] = 0;
  }
  if (puVar1[0x89f] != 0) {
    puVar1[0x89f] = 0;
  }
  if (puVar1[0x1359] != 0) {
    puVar1[0x1359] = 0;
  }
  if (puVar1[0x8a0] != 0) {
    puVar1[0x8a0] = 0;
  }
  if (puVar1[0x8a1] != 0) {
    puVar1[0x8a1] = 0;
  }
  if (puVar1[0x8a3] != 0) {
    FUN_0019c364();
    puVar1[0x8a3] = 0;
  }
  if (puVar1[0x8a2] != 0) {
    puVar1[0x8a2] = 0;
  }
  if (puVar1[0x1354] != 0) {
    FUN_0019a5a0();
    puVar1[0x1354] = 0;
  }
  if (puVar1[0x1355] != 0) {
    FUN_0019c364();
    puVar1[0x1355] = 0;
  }
  puVar1[0x1356] = 0;
  if (puVar1[0x138e] != 0) {
    FUN_0019a5a0();
    puVar1[0x138e] = 0;
  }
  if (puVar1[0x138f] != 0) {
    FUN_0019c364();
    puVar1[0x138f] = 0;
  }
  puVar1[0x1390] = 0;
  if (puVar1[0x8a4] != 0) {
    FUN_0019a5a0();
    puVar1[0x8a4] = 0;
  }
  if (puVar1[0x8a5] != 0) {
    FUN_0019a5a0();
    puVar1[0x8a5] = 0;
  }
  FUN_001add24(0x4d);
  iVar5 = FUN_003f86c8(0x4e);
  if (iVar5 != 0) {
    FUN_001add24(0x4e);
  }
  uVar4 = 1;
  if ((puVar1[0x2a] != 2) && (puVar1[0x3c] == 0x169 || puVar1[0x3c] == 0x16b)) {
    uVar4 = 0;
  }
  FUN_003ec580(puVar1,uVar4);
  if (puVar1[0x904] != 0) {
    FUN_0019a5a0();
    puVar1[0x904] = 0;
  }
  if (puVar1[0x7b1] != 0) {
    FUN_0019a5a0();
    puVar1[0x7b1] = 0;
  }
  if (puVar1[0x7ff] != 0) {
    FUN_0019a5a0();
    puVar1[0x7ff] = 0;
  }
  if (*piVar8 != 0) {
    FUN_0019a5a0();
    *piVar8 = 0;
  }
  if (puVar1[0x7fe] != 0) {
    FUN_0019a5a0();
    puVar1[0x7fe] = 0;
  }
  if (DAT_00573924 != 0) {
    FUN_0019a5a0();
    DAT_00573924 = 0;
  }
  if (DAT_00573928 != 0) {
    FUN_0019a5a0();
    DAT_00573928 = 0;
  }
  iVar5 = 0;
  do {
    if (puVar1[iVar5 + 0x85b] != 0) {
      FUN_0040a244();
      puVar1[iVar5 + 0x85b] = 0;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x2a);
  iVar5 = 0;
  do {
    if (puVar1[iVar5 * 4 + 0x135e] != 0) {
      FUN_0040a244();
      puVar1[iVar5 * 4 + 0x135e] = 0;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xc);
  FUN_003a6c18();
  FUN_00321744();
  FUN_00203d04(1);
  func_0x003a7060();
  FUN_003fd63c(0x590,0,1);
  FUN_003fd63c(0x591,0);
  FUN_002ae468();
  FUN_001add24(7);
  FUN_001add24(0x3e);
  FUN_001add24(0x3b);
  FUN_001add24(0x16);
  FUN_001add24(0x13);
  FUN_001add24(0x48);
  FUN_00471748(DAT_00570280);
  iVar5 = FUN_00163e40(*puVar1);
  if (iVar5 != 0) {
    FUN_001631d0(*puVar1,0);
  }
  cVar12 = (int)DAT_00573920 < 0;
  uVar14 = DAT_00573920 == (unsigned int *)0x0;
  uVar10 = 1;
  cVar11 = '\0';
  if (!(unsigned char)uVar14) {
    FUN_0019a5a0();
    DAT_00573920 = (unsigned int *)0x0;
  }
  *piVar9 = (int)piVar9;
  if (cVar12 == cVar11) {
    *(BADSPACEBASE **)(in_lr - 0x501) = register0x00000054;
  }
  if (!(unsigned char)uVar10 || (unsigned char)uVar14) {
    software_interrupt(0x2601);
  }
  if ((unsigned char)uVar10) {
    *piVar9 = (int)piVar9 - 0x11;
  }
  return *(unsigned long long *)(unaff_r8 + 4);
}
*/
#include "common.h"
