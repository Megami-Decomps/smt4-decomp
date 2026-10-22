/* NON_MATCHING: found outside every function: branched to by FUN_00195024; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001a8cb8 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_001a8cb8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned char bVar4;
  
  bVar4 = param_2 >> 0x18 == 1;
  if (bVar4) {
    param_4 = 1;
  }
  uVar3 = 0xffffffff;
  if (bVar4 && param_4 == param_2 >> 0x18) {
    puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 4));
    if ((((param_2 & 0xffffff) < *puVar1) &&
        (iVar2 = (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2], iVar2 != 0)) &&
       (*(short *)(iVar2 + 0xc) == 0x2201)) {
      uVar3 = *(unsigned int *)(iVar2 + *(int *)(iVar2 + 0x10) + 0x20);
    }
  }
  return uVar3;
}
*/
#include "common.h"
