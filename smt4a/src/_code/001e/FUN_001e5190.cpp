/* NON_MATCHING: found outside every function: branched to by FUN_001e2be8; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001e5190 for reference (not compiled; its own view of the boundaries):

unsigned long long FUN_001e5190(int param_1,unsigned int param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  unsigned char *in_stack_00000004;
  int *piVar13;
  
  iVar5 = *(int *)(param_1 + 0x1bc);
  iVar6 = *(int *)(param_1 + 0x1c0);
  iVar7 = *(int *)(param_1 + 0x1c4);
  piVar11 = (int *)(param_1 + 0x1c8);
  iVar4 = *(int *)(param_1 + 0x1b8) + 0x20;
  iVar10 = 4;
  piVar9 = (int *)(param_1 + 0x1f8);
  while( 1 ) {
    iVar4 = iVar4 + iVar6;
    iVar6 = iVar4 + iVar6 * -2;
    iVar8 = (iVar5 >> 1) - iVar7;
    iVar5 = iVar5 + (iVar7 >> 1);
    piVar9[0xc] = iVar4 - iVar5;
    piVar9[8] = iVar6 - iVar8;
    piVar9[4] = iVar6 + iVar8;
    *piVar9 = iVar4 + iVar5;
    iVar10 = iVar10 - 1;
    if (iVar10 == 0) break;
    iVar4 = *piVar11;
    iVar5 = piVar11[1];
    iVar6 = piVar11[2];
    iVar7 = piVar11[3];
    piVar11 = piVar11 + 4;
    piVar9 = piVar9 + 1;
  }
  piVar11 = piVar9 + -3;
  iVar5 = 4;
  iVar4 = piVar9[-0x70] + 0x40;
  do {
    iVar6 = *piVar11;
    piVar9 = piVar11 + 1;
    piVar12 = piVar11 + 2;
    piVar13 = piVar11 + 3;
    piVar11 = piVar11 + 4;
    iVar6 = iVar6 + *piVar12;
    iVar7 = iVar6 + *piVar12 * -2;
    iVar10 = (*piVar9 >> 1) - *piVar13;
    iVar8 = *piVar9 + (*piVar13 >> 1);
    bVar1 = *(unsigned char *)(iVar4 + (unsigned int)*in_stack_00000004 + ((iVar6 + iVar8) >> 6));
    bVar2 = *(unsigned char *)(iVar4 + (unsigned int)in_stack_00000004[1] + ((iVar7 + iVar10) >> 6));
    bVar3 = *(unsigned char *)(iVar4 + (unsigned int)in_stack_00000004[2] + ((iVar7 - iVar10) >> 6));
    in_stack_00000004[3] = *(unsigned char *)(iVar4 + (unsigned int)in_stack_00000004[3] + ((iVar6 - iVar8) >> 6));
    in_stack_00000004[2] = bVar3;
    in_stack_00000004[1] = bVar2;
    *in_stack_00000004 = bVar1;
    iVar5 = iVar5 - 1;
    in_stack_00000004 = in_stack_00000004 + 0x400;
  } while (iVar5 != 0);
  return CONCAT44(param_2,param_1);
}
*/
#include "common.h"
