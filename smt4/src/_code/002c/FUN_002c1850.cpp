#include "romwright_types.h"

extern "C" {


unsigned int FUN_002c1850(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (param_1 != 0) {
    temp_v0 = (*(unsigned int *)(param_1 + 0x90) & 2) >> 1;
  }
  return temp_v0;
}

} /* extern "C" */
