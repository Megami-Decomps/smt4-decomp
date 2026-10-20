#include "romwright_types.h"

extern "C" {


unsigned int FUN_0039ea80(int param_1)

{
  unsigned int temp_v0;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x387c) != 0x1f)) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
