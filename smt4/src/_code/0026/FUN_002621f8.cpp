#include "romwright_types.h"

extern "C" {


void FUN_002621f8(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 4) = 0xffffffff;
  *(unsigned int *)(param_1 + 8) = param_2;
  return;
}

} /* extern "C" */
