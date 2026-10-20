#include "romwright_types.h"

extern "C" {


void FUN_001c33c8(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 0x88) = param_2;
  *(unsigned int *)(param_1 + 0x8c) = param_3;
  return;
}

} /* extern "C" */
