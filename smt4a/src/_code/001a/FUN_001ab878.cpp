#include "romwright_types.h"

extern "C" {


void FUN_001ab878(int param_1)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

} /* extern "C" */
