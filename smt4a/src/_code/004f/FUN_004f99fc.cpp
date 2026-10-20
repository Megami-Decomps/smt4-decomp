#include "romwright_types.h"

extern "C" {


void FUN_004f99fc(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x33a0) = param_2;
  *(unsigned int *)(param_1 + 0x33a4) = 0;
  *(unsigned int *)(param_1 + 0x339c) = (*(unsigned int *)(param_1 + 0x339c) & 0xffffff1f) | 0x10;
  return;
}

} /* extern "C" */
