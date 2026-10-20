#include "romwright_types.h"

extern "C" {


int FUN_0016003c(int param_1)

{
  int temp_v0;
  
  if (*(int *)(param_1 + 0x74) >= *(int *)(param_1 + 0x70)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x74);
  }
  return temp_v0;
}

} /* extern "C" */
