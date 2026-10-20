#include "romwright_types.h"

extern "C" {


unsigned int FUN_00486304(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 4);
  if ((temp_v0 == 4 || temp_v0 == 6) || (temp_v0 == 0x10)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
