#include "romwright_types.h"

extern "C" {


void FUN_004d0a8c(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 0x40) = param_2;
  *(unsigned int *)(param_1 + 0x44) = param_3;
  return;
}

} /* extern "C" */
