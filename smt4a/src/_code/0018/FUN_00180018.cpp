#include "romwright_types.h"

extern "C" {


int FUN_00180018(int *param_1,int *param_2)

{
  int temp_v0;
  
  *param_2 = 0;
  if (*param_1 == 4) {
    *param_2 = param_1[6];
    temp_v0 = param_1[3];
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
