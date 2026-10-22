/* NON_MATCHING: fragment of a larger function (unit ends at a conditional return, leaving its continuing path outside the unit) */
/* romwright 0.5.0 decompilation of FUN_0023a3b4 for reference (not compiled; its own view of the boundaries):

unsigned int
FUN_0023a3b4(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4,
            unsigned int *param_5,unsigned int *param_6)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 4);
  FUN_00225c1c();
  iVar4 = *(int *)(iVar1 + 0x10);
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 0x48);
  }
  if (iVar4 != 0 && iVar1 != 0) {
    puVar2 = (unsigned int *)FUN_003ea930(iVar4);
    if (puVar2 != (unsigned int *)0x0) {
      if (*(char *)(puVar2 + 5) == '\0') {
        FUN_003ea320(iVar4,param_3,param_4);
        if (iVar4 == 0) {
          return 9;
        }
        *param_5 = puVar2[4];
        uVar3 = puVar2[1];
        *param_6 = *puVar2;
        param_6[1] = uVar3;
        return 0;
      }
      FUN_003afd18(iVar4);
    }
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    *param_6 = 0xffffffff;
    param_6[1] = 0xffffffff;
    return 0x14;
  }
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0xffffffff;
  param_6[1] = 0xffffffff;
  return 0xe;
}
*/
#include "common.h"
