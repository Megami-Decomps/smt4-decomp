/* NON_MATCHING: fragment of a larger function (ARM-to-Thumb veneer continues in FUN_0010034e and the shared printf dispatcher). */
/* romwright 0.5.0 decompilation of FUN_00100330 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_00100330(int param_1,unsigned int param_2,unsigned int *param_3)

{
  *(char *)(param_1 + 0x24) = (char)*param_3;
  *(unsigned char *)(param_1 + 0x25) = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_00100366(param_1,(unsigned char *)(param_1 + 0x24),1);
  }
  return 1;
}
*/
#include "common.h"
