#include "romwright_types.h"

extern "C" {


void FUN_001d2384(int param_1)

{
  if (param_1 != 0) {
    *(unsigned int *)(param_1 + 0x1a0) = 0;
    *(unsigned int *)(param_1 + 0x1a4) = 0;
  }
  return;
}

} /* extern "C" */
