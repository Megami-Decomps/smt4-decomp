/* NON_MATCHING: found outside every function: the Thumb body of the ARM entry stub FUN_00100330; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0010034e for reference (not compiled; its own view of the boundaries):

unsigned int FUN_0010034e(int param_1,unsigned int param_2,unsigned int *param_3)

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
