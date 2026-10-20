#include "romwright_types.h"

extern "C" {


unsigned int FUN_0012d286(unsigned int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = (param_1 >> 1) + param_1 + (param_1 >> 3);
  temp_v0 = param_1 + 0x20;
  if (param_1 + 0x20 <= temp_v1) {
    temp_v0 = temp_v1;
  }
  return temp_v0;
}

} /* extern "C" */
