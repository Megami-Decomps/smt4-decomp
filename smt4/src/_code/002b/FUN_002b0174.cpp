#include "romwright_types.h"

extern "C" {


void FUN_002b0174(int param_1)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

} /* extern "C" */
