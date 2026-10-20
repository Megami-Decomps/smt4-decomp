#include "romwright_types.h"

extern "C" {


void FUN_002f81b0(int param_1,unsigned int *param_2)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 4);
  param_2[2] = temp_v0;
  if (temp_v0 != 0) {
    *param_2 = *(unsigned int *)(temp_v0 + 0x14);
    param_2[1] = *(unsigned int *)(temp_v0 + 0x18);
  }
  return;
}

} /* extern "C" */
