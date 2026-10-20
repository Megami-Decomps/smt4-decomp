#include "romwright_types.h"

extern "C" {


int FUN_00254484(int *param_1)

{
  int temp_v0;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x52434254)) {
    temp_v0 = param_1[2];
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
