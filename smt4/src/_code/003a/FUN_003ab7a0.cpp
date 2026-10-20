#include "romwright_types.h"

extern "C" {

extern int FUN_0019e0c0(unsigned int);


void FUN_003ab7a0(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0x5a0));
  if (temp_v0 == 2) {
    *(unsigned int *)(param_1 + 0x14) = 3;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
