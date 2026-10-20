#include "romwright_types.h"

extern "C" {


void FUN_002c49f8(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x34) = param_2 | *(unsigned int *)(param_1 + 0x34);
  return;
}

} /* extern "C" */
