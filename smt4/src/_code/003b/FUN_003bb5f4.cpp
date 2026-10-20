#include "romwright_types.h"

extern "C" {


void FUN_003bb5f4(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(param_1 + *(int *)(param_1 + 0x52c) * 4 + 0x530) = param_2;
    *(int *)(param_1 + 0x52c) = *(int *)(param_1 + 0x52c) + 1;
  }
  return;
}

} /* extern "C" */
