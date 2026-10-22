/* NON_MATCHING: found outside every function: branched to by FUN_0017ae34; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0017d110 for reference (not compiled; its own view of the boundaries):

unsigned long long FUN_0017d110(int param_1,unsigned int param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  unsigned char *in_stack_00000004;
  int *piVar20;
  
  iVar5 = *(int *)(param_1 + 0x1bc);
  iVar6 = *(int *)(param_1 + 0x1c0);
  iVar7 = *(int *)(param_1 + 0x1c4);
  iVar8 = *(int *)(param_1 + 0x1c8);
  iVar9 = *(int *)(param_1 + 0x1cc);
  iVar10 = *(int *)(param_1 + 0x1d0);
  iVar12 = *(int *)(param_1 + 0x1d4);
  piVar18 = (int *)(param_1 + 0x1d8);
  iVar3 = *(int *)(param_1 + 0x1b8) + 0x20;
  iVar17 = 8;
  piVar16 = (int *)(param_1 + 0x2b8);
  while( 1 ) {
    iVar4 = iVar6 + (iVar10 >> 1);
    iVar10 = (iVar6 >> 1) - iVar10;
    iVar6 = (iVar3 - iVar8) + iVar10;
    iVar10 = (iVar3 - iVar8) - iVar10;
    iVar11 = (iVar3 + iVar8) - iVar4;
    iVar13 = ((iVar5 + iVar12) - iVar7) - (iVar7 >> 1);
    iVar14 = (iVar12 - iVar5) + iVar9 + (iVar9 >> 1);
    iVar12 = (iVar9 - (iVar12 + (iVar12 >> 1))) - iVar7;
    iVar7 = iVar7 + iVar9 + iVar5 + (iVar5 >> 1);
    iVar5 = iVar12 + (iVar7 >> 2);
    iVar7 = iVar7 - (iVar12 >> 2);
    iVar9 = iVar13 + (iVar14 >> 2);
    iVar14 = (iVar13 >> 2) - iVar14;
    iVar3 = iVar3 + iVar8 + iVar4 + iVar7;
    piVar16[0x38] = iVar3 + iVar7 * -2;
    piVar16[0x30] = iVar6 - iVar14;
    piVar16[0x28] = iVar10 - iVar9;
    piVar16[0x20] = iVar11 - iVar5;
    piVar16[0x18] = iVar11 + iVar5;
    piVar16[0x10] = iVar10 + iVar9;
    piVar16[8] = iVar6 + iVar14;
    *piVar16 = iVar3;
    iVar17 = iVar17 - 1;
    if (iVar17 == 0) break;
    iVar3 = *piVar18;
    iVar5 = piVar18[1];
    iVar6 = piVar18[2];
    iVar7 = piVar18[3];
    iVar8 = piVar18[4];
    iVar9 = piVar18[5];
    iVar10 = piVar18[6];
    iVar12 = piVar18[7];
    piVar18 = piVar18 + 8;
    piVar16 = piVar16 + 1;
  }
  piVar18 = piVar16 + -7;
  iVar5 = 8;
  iVar3 = piVar16[-0xa4] + 0x40;
  do {
    iVar6 = *piVar18;
    iVar8 = piVar18[1];
    piVar16 = piVar18 + 2;
    iVar9 = piVar18[3];
    piVar19 = piVar18 + 4;
    iVar17 = piVar18[5];
    piVar20 = piVar18 + 6;
    iVar11 = piVar18[7];
    piVar18 = piVar18 + 8;
    iVar13 = iVar6 + *piVar19;
    iVar6 = iVar6 - *piVar19;
    iVar7 = *piVar16 + (*piVar20 >> 1);
    iVar12 = (*piVar16 >> 1) - *piVar20;
    iVar10 = iVar6 + iVar12;
    iVar6 = iVar6 - iVar12;
    iVar14 = iVar13 - iVar7;
    iVar15 = ((iVar8 + iVar11) - iVar9) - (iVar9 >> 1);
    iVar4 = (iVar11 - iVar8) + iVar17 + (iVar17 >> 1);
    iVar12 = (iVar17 - (iVar11 + (iVar11 >> 1))) - iVar9;
    iVar9 = iVar9 + iVar17 + iVar8 + (iVar8 >> 1);
    iVar8 = iVar12 + (iVar9 >> 2);
    iVar9 = iVar9 - (iVar12 >> 2);
    iVar12 = iVar15 + (iVar4 >> 2);
    iVar4 = (iVar15 >> 2) - iVar4;
    iVar7 = iVar13 + iVar7 + iVar9;
    bVar1 = *(unsigned char *)(iVar3 + (unsigned int)in_stack_00000004[1] + ((iVar10 + iVar4) >> 6));
    *in_stack_00000004 = *(unsigned char *)(iVar3 + (unsigned int)*in_stack_00000004 + (iVar7 >> 6));
    bVar2 = *(unsigned char *)(iVar3 + (unsigned int)in_stack_00000004[2] + ((iVar6 + iVar12) >> 6));
    in_stack_00000004[1] = bVar1;
    bVar1 = *(unsigned char *)(iVar3 + (unsigned int)in_stack_00000004[3] + ((iVar14 + iVar8) >> 6));
    in_stack_00000004[2] = bVar2;
    bVar2 = *(unsigned char *)(iVar3 + (unsigned int)in_stack_00000004[4] + ((iVar14 - iVar8) >> 6));
    in_stack_00000004[3] = bVar1;
    bVar1 = *(unsigned char *)(iVar3 + (unsigned int)in_stack_00000004[5] + ((iVar6 - iVar12) >> 6));
    in_stack_00000004[4] = bVar2;
    bVar2 = *(unsigned char *)(iVar3 + (unsigned int)in_stack_00000004[6] + ((iVar10 - iVar4) >> 6));
    in_stack_00000004[5] = bVar1;
    bVar1 = *(unsigned char *)(iVar3 + (unsigned int)in_stack_00000004[7] + ((iVar7 + iVar9 * -2) >> 6));
    in_stack_00000004[6] = bVar2;
    iVar5 = iVar5 - 1;
    in_stack_00000004[7] = bVar1;
    in_stack_00000004 = in_stack_00000004 + 0x200;
  } while (iVar5 != 0);
  return CONCAT44(param_2,param_1);
}
*/
#include "common.h"
