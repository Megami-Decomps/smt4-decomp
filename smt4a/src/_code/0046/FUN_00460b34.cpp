#include "romwright_types.h"

extern "C" {


void FUN_00460b34(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 0x18) = param_2;
  *(unsigned int *)(param_1 + 0x1c) = param_3;
  *(unsigned int *)(param_1 + 0x20) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x24) = 0xffffffff;
  return;
}

} /* extern "C" */
