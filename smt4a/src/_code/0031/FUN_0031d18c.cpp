#include "romwright_types.h"

extern "C" {


unsigned int FUN_0031d18c(int param_1)

{
  unsigned int temp_v0;
  
  if (*(char *)(param_1 + 0x62) == '\0') {
    temp_v0 = *(unsigned int *)(param_1 + 0x48);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
