#include "romwright_types.h"

extern "C" {


int FUN_001221a0(int param_1)

{
  int temp_v0;
  
  if (*(int *)(param_1 + 0x70) >= *(int *)(param_1 + 0x6c)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x70);
  }
  return temp_v0;
}

} /* extern "C" */
