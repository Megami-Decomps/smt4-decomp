#include "romwright_types.h"

extern "C" {


void FUN_00487110(int param_1)

{
  *(unsigned int *)(param_1 + 4) = 1;
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}

} /* extern "C" */
