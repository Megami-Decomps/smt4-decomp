#include "romwright_types.h"

extern "C" {


void FUN_00316f58(int param_1,unsigned char param_2,unsigned char param_3,unsigned char param_4,
                 unsigned char param_5)

{
  *(unsigned char *)(param_1 + 8) = param_2;
  *(unsigned char *)(param_1 + 9) = param_3;
  *(unsigned char *)(param_1 + 10) = param_4;
  *(unsigned char *)(param_1 + 0xb) = param_5;
  return;
}

} /* extern "C" */
