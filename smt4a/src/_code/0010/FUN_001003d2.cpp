/* NON_MATCHING: found outside every function: the Thumb body of the ARM entry stub FUN_001003b4; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001003d2 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_001003d2(int param_1,unsigned int param_2,unsigned int *param_3)

{
  *(char *)(param_1 + 0x24) = (char)*param_3;
  *(unsigned char *)(param_1 + 0x25) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_001028f4();
  }
  else {
    FUN_001003ea(param_1,(unsigned char *)(param_1 + 0x24),1);
  }
  return 1;
}
*/
#include "common.h"
