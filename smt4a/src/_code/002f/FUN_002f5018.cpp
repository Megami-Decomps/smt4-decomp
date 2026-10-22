/* NON_MATCHING: found outside every function: branched to by FUN_0050e5e0; not written yet. */
/* romwright 0.5.0 decompilation of FUN_002f5018 for reference (not compiled; its own view of the boundaries):

int FUN_002f5018(int param_1,code *param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned char bVar2;
  
  iVar1 = param_1;
  if (param_2 != (code *)0x0) {
    while (bVar2 = param_4 != 0, param_4 = param_4 - 1, bVar2) {
      (*param_2)(iVar1);
      iVar1 = iVar1 + param_3;
    }
  }
  return param_1;
}
*/
#include "common.h"
