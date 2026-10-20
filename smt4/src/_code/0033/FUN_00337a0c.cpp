#include "romwright_types.h"

extern "C" {


void FUN_00337a0c(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x3f0) * 8 + 0x1f0) = param_3;
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x3f0) * 8 + 500) = param_2;
  *(int *)(param_1 + 0x3f0) = *(int *)(param_1 + 0x3f0) + 1;
  return;
}

} /* extern "C" */
