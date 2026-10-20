#include "romwright_types.h"

extern "C" {


void FUN_003c9744(int param_1,unsigned char param_2,unsigned short param_3)

{
  *(unsigned char *)(param_1 + 0x143) = param_2;
  *(unsigned short *)(param_1 + 0x144) = param_3;
  return;
}

} /* extern "C" */
