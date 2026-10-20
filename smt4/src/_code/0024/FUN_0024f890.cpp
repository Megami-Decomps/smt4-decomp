#include "romwright_types.h"

extern "C" {


void FUN_0024f890(int param_1,unsigned int *param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = *(int *)(param_1 + 0x20);
  temp_v1 = *(unsigned int *)(temp_v0 + 0x14);
  temp_v2 = *(unsigned int *)(temp_v0 + 0x18);
  temp_v3 = *(unsigned int *)(temp_v0 + 0x1c);
  *param_2 = *(unsigned int *)(temp_v0 + 0x10);
  param_2[1] = temp_v1;
  param_2[2] = temp_v2;
  param_2[3] = temp_v3;
  return;
}

} /* extern "C" */
