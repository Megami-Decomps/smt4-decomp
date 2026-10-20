#include "romwright_types.h"

extern "C" {


void FUN_003aab78(int param_1)

{
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  return;
}

} /* extern "C" */
