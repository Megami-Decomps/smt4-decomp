#include "romwright_types.h"

extern "C" {


unsigned int FUN_0023ad2c(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x3c) & 0x7f;
  if ((temp_v0 == 0x18 || temp_v0 == 1) &&
     (*(char *)(param_1 + 0x23) == '\x03' || *(char *)(param_1 + 0x23) == '\a')) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
