#include "romwright_types.h"

extern "C" {


void FUN_002e08b0(unsigned int *param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (param_2 != 0) {
    temp_v0 = *param_1 | 4;
  }
  else {
    temp_v0 = *param_1 & 0xfffffffb;
  }
  *param_1 = temp_v0;
  return;
}

} /* extern "C" */
