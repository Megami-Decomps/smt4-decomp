#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00306e84(unsigned int *, unsigned int);


unsigned int * FUN_00121144(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  temp_v0 = FUN_00306e84(param_1,1);
  param_1[4] = temp_v0;
  *(unsigned int *)temp_v0 = temp_v0;
  *(unsigned int *)(param_1[4] + 4) = param_1[4];
  return param_1;
}

} /* extern "C" */
