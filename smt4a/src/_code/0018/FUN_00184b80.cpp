#include "romwright_types.h"

extern "C" {


void FUN_00184b80(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 4) = param_2;
  *(unsigned int *)(param_1 + 8) = 0xffffffff;
  return;
}

} /* extern "C" */
