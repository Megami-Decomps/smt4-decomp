/* NON_MATCHING: found outside every function: its address is in FUN_0038048c's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00380684 for reference (not compiled; its own view of the boundaries):

void FUN_00380684(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  unsigned char uVar1;
  
  if (param_1 == 0) {
    uVar1 = 4;
  }
  else {
    uVar1 = 2;
    *(unsigned int *)(param_4 + 0x450) = param_2;
  }
  *(unsigned char *)(param_4 + 0x45c) = uVar1;
  if (param_1 != 0) {
    *(unsigned int *)(param_4 + 0x454) = param_3;
  }
  return;
}
*/
#include "common.h"
