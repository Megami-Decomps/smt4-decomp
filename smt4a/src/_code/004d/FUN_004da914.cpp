#include "romwright_types.h"

extern "C" {


void FUN_004da914(int param_1,unsigned char param_2,unsigned int param_3)

{
  *(unsigned char *)(param_1 + 0x150) = param_2;
  *(unsigned int *)(param_1 + 0x154) = param_3;
  return;
}

} /* extern "C" */
