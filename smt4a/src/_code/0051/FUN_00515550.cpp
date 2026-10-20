#include "romwright_types.h"

extern "C" {


void FUN_00515550(unsigned int *param_1,unsigned int *param_2,unsigned char param_3)

{
  *(unsigned char *)(param_1 + 1) = 4;
  *(unsigned char *)((int)param_1 + 6) = param_3;
  *param_1 = *param_2;
  return;
}

} /* extern "C" */
