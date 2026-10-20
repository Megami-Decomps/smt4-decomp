#include "romwright_types.h"

extern "C" {


void FUN_004db034(int param_1,unsigned char param_2,unsigned short param_3)

{
  *(unsigned char *)(param_1 + 0x14c) = param_2;
  *(unsigned short *)(param_1 + 0x14e) = param_3;
  return;
}

} /* extern "C" */
