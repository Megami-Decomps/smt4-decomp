#include "romwright_types.h"

extern "C" {


int * FUN_00124b88(int *param_1,int *param_2)

{
  int temp_v0;
  
  temp_v0 = *param_2;
  *param_1 = temp_v0;
  *(int *)(temp_v0 + 0x1c) = *(int *)(temp_v0 + 0x1c) + 1;
  return param_1;
}

} /* extern "C" */
