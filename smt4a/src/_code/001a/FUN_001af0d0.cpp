#include "romwright_types.h"

extern "C" {


unsigned int * FUN_001af0d0(unsigned int *param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (param_2 == 0) {
    temp_v0 = 0x23c;
  }
  else {
    temp_v0 = 0x23d;
  }
  *param_1 = 1;
  param_1[1] = temp_v0 | 0xf0000;
  return param_1 + 2;
}

} /* extern "C" */
