#include "romwright_types.h"

extern "C" {


void FUN_0036ba44(int param_1,unsigned char param_2,unsigned char param_3,unsigned char param_4,
                 unsigned char param_5)

{
  *(unsigned char *)(param_1 + 4) = param_2;
  *(unsigned char *)(param_1 + 5) = param_3;
  *(unsigned char *)(param_1 + 6) = param_4;
  *(unsigned char *)(param_1 + 7) = param_5;
  *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_1 + 4);
  return;
}

} /* extern "C" */
