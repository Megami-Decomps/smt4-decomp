#include "romwright_types.h"

extern "C" {


void FUN_0016d338(int *param_1,int param_2)

{
  *param_1 = param_2;
  if ((unsigned int *)param_1[3] != (unsigned int *)0x0) {
    *(unsigned int *)param_1[3] = (unsigned int)(param_2 - param_1[2]) >> 3;
  }
  param_1[1] = *param_1;
  param_1[3] = 0;
  param_1[2] = *param_1;
  param_1[4] = 0;
  return;
}

} /* extern "C" */
