#include "romwright_types.h"

extern "C" {


void FUN_002ea41e(unsigned int *param_1,int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = *(unsigned int *)(param_2 + 0x38);
  temp_v0 = *(unsigned int *)(param_2 + 0x40);
  param_1[1] = *(unsigned int *)(param_2 + 0x3c);
  *param_1 = temp_v1;
  param_1[2] = temp_v0;
  return;
}

} /* extern "C" */
