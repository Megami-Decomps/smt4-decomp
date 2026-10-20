#include "romwright_types.h"

extern "C" {


int FUN_0024b0c0(int param_1,int param_2)

{
  int temp_v0;
  
  if ((param_2 >= 0) && (*(int *)(*(int *)(param_1 + 0xb0) + 8) > param_2)) {
    temp_v0 = *(int *)(param_1 + 0xb4) + param_2 * 0x20;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
