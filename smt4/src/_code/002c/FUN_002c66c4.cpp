/* NON_MATCHING: fragment of a larger function (ARM-to-Thumb entry veneer continues at 0x2c66cc). */
/* romwright 0.5.0 decompilation of FUN_002c66c4 for reference (not compiled; its own view of the boundaries):

int FUN_002c66c4(int param_1,code *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = param_4 * param_3 + param_1;
    do {
      iVar1 = iVar1 - param_3;
      (*param_2)(iVar1);
    } while (param_1 != iVar1);
  }
  return param_1 - 8;
}
*/
#include "common.h"
