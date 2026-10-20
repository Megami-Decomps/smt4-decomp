#include "romwright_types.h"

extern "C" {


unsigned int FUN_00431140(unsigned int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 < 7) {
    temp_v0 = *(unsigned int *)(param_1 * 4 + 0x5b47d0);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
