#include "romwright_types.h"

extern "C" {


void FUN_00306e7a(int param_1)

{
  *(int *)(param_1 + 0x14) = *(int *)(*(int *)(param_1 + 8) + 0x10) << 3;
  return;
}

} /* extern "C" */
