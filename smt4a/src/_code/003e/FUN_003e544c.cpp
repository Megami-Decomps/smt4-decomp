#include "romwright_types.h"

extern "C" {


void FUN_003e544c(int param_1,unsigned int *param_2)

{
  int temp_v0;
  
  temp_v0 = *(int *)(*(int *)(param_1 + 8) + 4);
  if (temp_v0 != 0) {
    *param_2 = *(unsigned int *)(temp_v0 + 0x1b4);
    param_2[1] = *(unsigned int *)(temp_v0 + 0x1b8);
    param_2[2] = *(unsigned int *)(temp_v0 + 0x1bc);
  }
  return;
}

} /* extern "C" */
