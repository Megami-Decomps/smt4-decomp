#include "romwright_types.h"

extern "C" {


void FUN_001aa324(int param_1)

{
  *(unsigned int *)(param_1 + 0x1c) = 0xffffffff;
  return;
}

} /* extern "C" */
