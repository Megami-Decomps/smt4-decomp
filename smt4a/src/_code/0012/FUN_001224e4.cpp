#include "romwright_types.h"

extern "C" {


void FUN_001224e4(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0xc) = param_2 >> 3;
  *(unsigned int *)(param_1 + 0x10) = 7 - (param_2 & 7);
  return;
}

} /* extern "C" */
