#include "romwright_types.h"

extern "C" {


void FUN_003c8fb4(int param_1,unsigned char param_2,unsigned short param_3)

{
  *(unsigned char *)(param_1 + 0x11c) = param_2;
  *(unsigned short *)(param_1 + 0x11e) = param_3;
  return;
}

} /* extern "C" */
