/* NON_MATCHING: array-construction helpers are now named, but the callback literal resolves to FUN_004125c0 + 0xC (0x4125cc), not a registered callback entry; its start moved 0x10 back in wave 93, so the first helper call loads its own array, constructor, stride (68) and count (64). */
/* romwright 0.5.0 decompilation of FUN_0050ff10 for reference (not compiled; its own view of the boundaries):

int FUN_0050ff10(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned char bVar3;
  
  FUN_002f5020();
  param_1 = param_1 + 0x1100;
  FUN_002f5020(param_1,&LAB_004125c0,0x2c,9);
  iVar1 = 3;
  iVar2 = param_1 + 0x18c;
  while (bVar3 = iVar1 != 0, iVar1 = iVar1 - 1, bVar3) {
    (*(code *)&LAB_004125c0)(iVar2);
    iVar2 = iVar2 + 0x2c;
  }
  return param_1 + 0x18c;
}
*/
#include "common.h"
