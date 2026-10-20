#include "romwright_types.h"

extern "C" {

extern int FUN_0019e0c0(unsigned int);


void FUN_003832d0(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0019e0c0(**(unsigned int **)(param_1 + 0x5c4));
  if (temp_v0 == 2) {
    *(unsigned int *)(param_1 + 4) = 4;
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}

} /* extern "C" */
