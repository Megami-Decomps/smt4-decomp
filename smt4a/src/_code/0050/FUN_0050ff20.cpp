/* NON_MATCHING: first array-construction helper and its callback literal are missing symbols in the target object. */
/* romwright 0.5.0 decompilation of FUN_0050ff20 for reference (not compiled; its own view of the boundaries):

int FUN_0050ff20(int param_1)

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
