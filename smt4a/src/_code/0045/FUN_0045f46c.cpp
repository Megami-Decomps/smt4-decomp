#include "romwright_types.h"

extern "C" {


void FUN_0045f46c(int param_1,unsigned char param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 0x50) = param_3;
  *(unsigned char *)(param_1 + 0x9d) = param_2;
  return;
}

} /* extern "C" */
