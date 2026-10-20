#include "romwright_types.h"

extern "C" {


void FUN_004915d4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  *(unsigned int *)(param_1 + 0x20638) = param_3;
  *(unsigned int *)(param_1 + 0x2063c) = param_4;
  return;
}

} /* extern "C" */
