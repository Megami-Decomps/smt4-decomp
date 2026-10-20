#include "romwright_types.h"

extern "C" {


unsigned int FUN_00336aa4(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0x387c);
  if ((temp_v0 == 3 || temp_v0 == 4) || (temp_v0 == 5)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
