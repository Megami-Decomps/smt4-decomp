#include "romwright_types.h"

extern "C" {

extern int FUN_0023e378(unsigned int);


unsigned char FUN_00347ac4(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0023e378(*(unsigned int *)(param_1 + 8));
  if (temp_v0 != 0) {
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x3c) = 1;
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x40) = 1;
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x38) = 3;
  }
  return temp_v0 != 0;
}

} /* extern "C" */
