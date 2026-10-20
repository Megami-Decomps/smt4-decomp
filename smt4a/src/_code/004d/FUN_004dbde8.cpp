#include "romwright_types.h"

extern "C" {


void FUN_004dbde8(int param_1,unsigned char param_2,unsigned short param_3)

{
  *(unsigned char *)(param_1 + 0x17b) = param_2;
  *(unsigned short *)(param_1 + 0x17c) = param_3;
  return;
}

} /* extern "C" */
