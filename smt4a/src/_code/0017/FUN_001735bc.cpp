/* NON_MATCHING: found outside every function: branched to by FUN_00157050; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001735bc for reference (not compiled; its own view of the boundaries):

void FUN_001735bc(int *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  unsigned int uVar13;
  int iVar14;
  
  iVar11 = 0;
  iVar10 = 0;
  iVar1 = param_1[0x12];
  iVar12 = param_1[1];
  puVar2 = (unsigned int *)param_1[iVar1 * 8 + 5];
  puVar8 = (unsigned int *)param_1[iVar1 * 8 + 4];
  if (0 < iVar12) {
    do {
      iVar7 = 0;
      uVar5 = 0;
      puVar4 = puVar8;
      do {
        uVar13 = iVar7 * 0x10 + 0x144;
        puVar6 = (unsigned int *)(*param_1 + iVar10 * 0x100 + iVar7 * 0x20);
        if (*(char *)(puVar6 + 7) != '\0') {
          *puVar4 = *puVar6;
          *puVar2 = puVar6[1];
          if (*(char *)((int)puVar6 + 0x1d) == '\0') {
            iVar14 = 1;
          }
          else {
            iVar14 = 4;
          }
          puVar4[1] = uVar13 | (iVar14 << 0x14) | 0x800f0000;
          if (*(char *)((int)puVar6 + 0x1d) == '\0') {
            iVar14 = 1;
          }
          else {
            iVar14 = 4;
          }
          puVar2[1] = uVar13 | (iVar14 << 0x14) | 0x800f0000;
          puVar9 = puVar4 + 3;
          puVar4[2] = (unsigned int)*(unsigned short *)(puVar6 + 2);
          puVar3 = puVar2 + 3;
          puVar2[2] = (unsigned int)*(unsigned short *)((int)puVar6 + 10);
          if (*(char *)((int)puVar6 + 0x1d) != '\0') {
            *puVar9 = puVar6[3];
            *puVar3 = puVar6[4];
            puVar9 = puVar4 + 5;
            puVar4[4] = puVar6[5];
            puVar3 = puVar2 + 5;
            puVar2[4] = puVar6[6];
          }
          puVar4 = puVar9 + 1;
          *puVar9 = 0;
          puVar2 = puVar3 + 1;
          *puVar3 = 0;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 8);
      if (puVar4 != puVar8) {
        uVar5 = (((int)puVar4 - (int)puVar8) & 0xfffffffcU) + 8;
        if (((uVar5 & 0xf) != 0) && (uVar13 = 4 - ((uVar5 & 0xf) >> 2), 0 < (int)uVar13)) {
          puVar6 = puVar4 + -1;
          if ((uVar13 & 1) != 0) {
            *puVar4 = 0;
            puVar6 = puVar4;
          }
          for (iVar7 = (int)uVar13 >> 1; iVar7 != 0; iVar7 = iVar7 - 1) {
            puVar6[1] = 0;
            puVar6 = puVar6 + 2;
            *puVar6 = 0;
          }
          puVar4 = puVar4 + uVar13;
        }
        if (((uVar5 & 0xf) != 0) && (uVar5 = 4 - ((uVar5 & 0xf) >> 2), 0 < (int)uVar5)) {
          puVar6 = puVar2 + -1;
          if ((uVar5 & 1) != 0) {
            *puVar2 = 0;
            puVar6 = puVar2;
          }
          for (iVar7 = (int)uVar5 >> 1; iVar7 != 0; iVar7 = iVar7 - 1) {
            puVar6[1] = 0;
            puVar6 = puVar6 + 2;
            *puVar6 = 0;
          }
          puVar2 = puVar2 + uVar5;
        }
        puVar4 = (unsigned int *)FUN_001af0d0(puVar4,1);
        puVar2 = (unsigned int *)FUN_001af0d0(puVar2,1);
        uVar5 = ((int)puVar4 - (int)puVar8) & 0xfffffffc;
        *(short *)(param_1[iVar1 * 8 + 2] + iVar10 * 4) = (short)iVar11;
        iVar11 = iVar11 + uVar5;
      }
      iVar7 = iVar10 * 4;
      iVar10 = iVar10 + 1;
      *(short *)(param_1[iVar1 * 8 + 2] + iVar7 + 2) = (short)uVar5;
      puVar8 = puVar4;
    } while (iVar10 < iVar12);
  }
  param_1[iVar1 * 8 + 6] = iVar11;
  *(unsigned char *)(param_1 + iVar1 * 8 + 9) = 1;
  return;
}
*/
#include "common.h"
