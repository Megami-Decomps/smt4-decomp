#include "romwright_types.h"

extern "C" {


unsigned char FUN_003c2d78(int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (param_1 != 0) {
    temp_v0 = *(int *)(param_1 + 0x3f8);
  }
  return param_1 == 0 || temp_v0 == 6;
}

} /* extern "C" */
