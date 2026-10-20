#include "romwright_types.h"

extern "C" {


void FUN_001844f8(int param_1,unsigned int param_2,unsigned int *param_3)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x2c);
  *param_3 = *(unsigned int *)(temp_v0 + 0x58);
  param_3[1] = *(unsigned int *)(temp_v0 + 0x68);
  param_3[2] = *(unsigned int *)(temp_v0 + 0x78);
  return;
}

} /* extern "C" */
