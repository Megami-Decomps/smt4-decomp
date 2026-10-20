#include "romwright_types.h"

extern "C" {


unsigned int FUN_00103f9a(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x24);
  *(unsigned int *)(param_1 + 0x24) = 0;
  return temp_v0;
}

} /* extern "C" */
