#include "romwright_types.h"

extern "C" {


unsigned int FUN_0025a03c(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  if ((0 >= (int)param_1[0xd]) || (temp_v0 = param_1[0x13], temp_v0 == 0) || (((*param_1 & 1) == 0) && (*(float *)(temp_v0 + 0x38) >= *(float *)(temp_v0 + 0x48)))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
