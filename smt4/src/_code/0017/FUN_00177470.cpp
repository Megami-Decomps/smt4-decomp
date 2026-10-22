/* NON_MATCHING: fragment of a larger function (uses r4-r9/fp as live decoder registers, restores only a partial frame, and has no return). */
/* romwright 0.5.0 decompilation of FUN_00177470 for reference (not compiled; its own view of the boundaries):

void FUN_00177470(int param_1)

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
  bVar1 = *(unsigned char *)(unaff_r4 + 0x177404);
  bVar2 = *(unsigned char *)(unaff_r4 + 0x17743a);
  iVar6 = 0x10;
  pbVar3 = (unsigned char *)((unsigned int)bVar2 * 0x10 + 0x177394);
  pbVar4 = (unsigned char *)0x1773f4;
  puVar5 = (unsigned int *)(param_1 + 0x178);
  do {
    *puVar5 = (unsigned int)*pbVar4 | ((unsigned int)*pbVar3 << ((bVar1 + 8) & 0xff));
    iVar6 = iVar6 - 1;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar6 != 0);
  iVar6 = 0x40;
  pbVar3 = (unsigned char *)((unsigned int)bVar2 * 0x40 + 0x1771d4);
  pbVar4 = (unsigned char *)0x177354;
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
