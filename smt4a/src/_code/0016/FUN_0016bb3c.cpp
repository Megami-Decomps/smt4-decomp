#include "romwright_types.h"

extern "C" {


void FUN_0016bb3c(int *param_1)

{
  int temp_v0;
  
  temp_v0 = param_1[1];
  if (*param_1 != temp_v0) {
    param_1[1] = temp_v0 + ((temp_v0 - *param_1) / 0x30) * -0x30;
  }
  return;
}

} /* extern "C" */
