#include "romwright_types.h"

extern "C" {


unsigned int FUN_00508dc8(unsigned int param_1,int *param_2)

{
  unsigned int temp_v0;
  
  if (*param_2 != 0x4d545343) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 0;
    if (param_2[2] + 0xfe000000U <= 0x30100U) {
      temp_v0 = 1;
    }
  }
  return temp_v0;
}

} /* extern "C" */
