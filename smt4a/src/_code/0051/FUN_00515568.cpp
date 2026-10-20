#include "romwright_types.h"

extern "C" {


void FUN_00515568(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  *(unsigned char *)(param_1 + 1) = 3;
  param_1[4] = param_3;
  *param_1 = *param_2;
  return;
}

} /* extern "C" */
