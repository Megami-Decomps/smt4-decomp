#include "romwright_types.h"

extern "C" {


void FUN_001314f0(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 4) = param_2;
  *(unsigned int *)(param_1 + 8) = param_3;
  return;
}

} /* extern "C" */
