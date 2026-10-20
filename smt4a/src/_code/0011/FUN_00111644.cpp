#include "romwright_types.h"

extern "C" {


void FUN_00111644(int param_1,unsigned int param_2,unsigned int *param_3)

{
  *(unsigned int *)(param_1 + 0x48) = param_2;
  *(unsigned int *)(param_1 + 0x4c) = *param_3;
  return;
}

} /* extern "C" */
