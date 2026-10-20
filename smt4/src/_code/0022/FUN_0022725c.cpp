#include "romwright_types.h"

extern "C" {


unsigned int FUN_0022725c(int param_1)

{
  unsigned int temp_v0;
  
  if ((*(short *)(param_1 + 0x10) == -1) ||
     (*(short *)(param_1 + 0x12) < *(short *)(param_1 + 0x10))) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
