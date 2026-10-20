#include "romwright_types.h"

extern "C" {


void FUN_004db048(int param_1,unsigned char param_2,unsigned char param_3,unsigned int *param_4)

{
  *(unsigned char *)(param_1 + 0x158) = param_2;
  *(unsigned char *)(param_1 + 0x159) = param_3;
  if (param_4 != (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0x15a) = *param_4;
    *(unsigned int *)(param_1 + 0x15e) = param_4[1];
    *(unsigned int *)(param_1 + 0x162) = param_4[2];
    *(unsigned int *)(param_1 + 0x166) = param_4[3];
  }
  return;
}

} /* extern "C" */
