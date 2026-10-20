#include "romwright_types.h"

extern "C" {


void FUN_003eaa6c(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x42c) * 8 + 0x22c) = param_3;
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x42c) * 8 + 0x230) = param_2;
  *(int *)(param_1 + 0x42c) = *(int *)(param_1 + 0x42c) + 1;
  return;
}

} /* extern "C" */
