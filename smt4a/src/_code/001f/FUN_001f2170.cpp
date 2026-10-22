/* NON_MATCHING: found outside every function: branched to by FUN_001ed7bc; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001f2170 for reference (not compiled; its own view of the boundaries):

void FUN_001f2170(int param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int unaff_r4;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned int *puVar5;
  int iVar6;
  
  if (unaff_r4 < 0xc) {
    unaff_r4 = 0xc;
  }
  if (0x34 < unaff_r4) {
    unaff_r4 = 0x34;
  }
  *(int *)(param_1 + 0x48) = unaff_r4;
  bVar1 = *(unsigned char *)(unaff_r4 + 0x1f2104);
  bVar2 = *(unsigned char *)(unaff_r4 + 0x1f213a);
  iVar6 = 0x10;
  pbVar3 = (unsigned char *)((unsigned int)bVar2 * 0x10 + 0x1f2094);
  pbVar4 = (unsigned char *)0x1f20f4;
  puVar5 = (unsigned int *)(param_1 + 0x178);
  do {
    *puVar5 = (unsigned int)*pbVar4 | ((unsigned int)*pbVar3 << ((bVar1 + 8) & 0xff));
    iVar6 = iVar6 - 1;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar6 != 0);
  iVar6 = 0x40;
  pbVar3 = (unsigned char *)((unsigned int)bVar2 * 0x40 + 0x1f1ed4);
  pbVar4 = (unsigned char *)0x1f2054;
  puVar5 = (unsigned int *)(param_1 + 0x78);
  do {
    *puVar5 = (unsigned int)*pbVar4 | ((unsigned int)*pbVar3 << ((bVar1 + 6) & 0xff));
    iVar6 = iVar6 - 1;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar6 != 0);
  *(unsigned char *)(param_1 + 0x51) = 9;
  *(unsigned char *)(param_1 + 0x52) = 9;
  *(unsigned char *)(param_1 + 0x53) = 9;
  *(unsigned char *)(param_1 + 0x54) = 9;
  *(unsigned char *)(param_1 + 0x58) = 9;
  *(unsigned char *)(param_1 + 0x60) = 9;
  *(unsigned char *)(param_1 + 0x68) = 9;
  *(unsigned char *)(param_1 + 0x70) = 9;
  return;
}
*/
#include "common.h"
