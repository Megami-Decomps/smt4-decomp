#include "romwright_types.h"

extern "C" {


void FUN_001913e4(int param_1)

{
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  return;
}

} /* extern "C" */
