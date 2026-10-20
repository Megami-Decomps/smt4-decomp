#include "romwright_types.h"

extern "C" {


unsigned int FUN_00263720(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 4);
  if ((temp_v0 == 0) || (temp_v1 = 0, *(float *)(temp_v0 + 0x38) >= *(float *)(temp_v0 + 0x48))) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
