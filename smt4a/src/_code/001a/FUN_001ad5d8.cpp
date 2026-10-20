#include "romwright_types.h"

extern "C" {


int FUN_001ad5d8(int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (param_1 != 0) {
    temp_v0 = param_1 + 0x14;
  }
  return temp_v0;
}

} /* extern "C" */
