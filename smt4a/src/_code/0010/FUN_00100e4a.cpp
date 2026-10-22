/* NON_MATCHING: found outside every function: the Thumb body of the ARM entry stub FUN_00100e2c; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00100e4a for reference (not compiled; its own view of the boundaries):

unsigned int FUN_00100e4a(int param_1,unsigned int param_2,unsigned int *param_3)

{
  *(short *)(param_1 + 0x24) = (short)*param_3;
  *(unsigned short *)(param_1 + 0x26) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00102984();
  }
  else {
    FUN_00100b14(param_1,param_1 + 0x24,1);
  }
  return 1;
}
*/
#include "common.h"
