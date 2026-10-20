#include "romwright_types.h"

extern "C" {


void FUN_00201940(int param_1)

{
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}

} /* extern "C" */
