#include "romwright_types.h"

extern "C" {


unsigned int FUN_00431158(unsigned int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 < 0xbb) {
    temp_v0 = *(unsigned int *)(param_1 * 4 + 0x5b44a4);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
