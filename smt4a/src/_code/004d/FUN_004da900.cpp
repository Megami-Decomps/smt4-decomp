#include "romwright_types.h"

extern "C" {


void FUN_004da900(int param_1,unsigned char param_2,unsigned short param_3)

{
  *(unsigned char *)(param_1 + 0x148) = param_2;
  *(unsigned short *)(param_1 + 0x14a) = param_3;
  return;
}

} /* extern "C" */
