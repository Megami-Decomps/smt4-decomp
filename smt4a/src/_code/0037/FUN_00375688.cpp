#include "romwright_types.h"

extern "C" {


unsigned int FUN_00375688(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0x387c);
  if ((temp_v0 == 0x22 || temp_v0 == 0x23) || (temp_v0 == 0x24 || temp_v0 == 0x25)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
