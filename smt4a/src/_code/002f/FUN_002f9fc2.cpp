#include "romwright_types.h"

extern "C" {


void FUN_002f9fc2(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(unsigned int *)(param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    *(int *)(param_1 + 0x1c) = param_2;
  }
  return;
}

} /* extern "C" */
