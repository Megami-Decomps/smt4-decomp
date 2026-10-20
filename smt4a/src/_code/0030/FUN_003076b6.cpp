#include "romwright_types.h"

extern "C" {


unsigned int FUN_003076b6(int *param_1,int *param_2)

{
  unsigned int temp_v0;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0 ^ 1;
}

} /* extern "C" */
