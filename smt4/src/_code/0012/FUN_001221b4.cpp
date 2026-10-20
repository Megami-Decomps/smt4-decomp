#include "romwright_types.h"

extern "C" {


int FUN_001221b4(int param_1)

{
  int temp_v0;
  
  if (*(int *)(param_1 + 0x80) >= *(int *)(param_1 + 0x7c)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x80);
  }
  return temp_v0;
}

} /* extern "C" */
