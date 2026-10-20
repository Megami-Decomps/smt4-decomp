#include "romwright_types.h"

extern "C" {


int FUN_00461e8c(int param_1,int param_2)

{
  int temp_v0;
  
  if (param_2 < 0x10) {
    temp_v0 = param_1 + param_2 * 2 + 0x10c;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
