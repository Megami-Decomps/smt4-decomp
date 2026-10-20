#include "romwright_types.h"

extern "C" {

extern int FUN_00224880(unsigned int);


void FUN_004693d4(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00224880(**(unsigned int **)(param_1 + 0x2b4));
  if (temp_v0 == 2) {
    *(unsigned int *)(param_1 + 4) = 4;
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}

} /* extern "C" */
