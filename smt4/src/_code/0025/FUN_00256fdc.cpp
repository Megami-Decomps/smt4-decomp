#include "romwright_types.h"

extern "C" {


void FUN_00256fdc(int param_1)

{
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}

} /* extern "C" */
