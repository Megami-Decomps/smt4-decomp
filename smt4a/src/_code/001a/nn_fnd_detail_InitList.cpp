#include "romwright_types.h"

extern "C" {


void nn_fnd_detail_InitList(unsigned int *param_1,unsigned short param_2)

{
  *(unsigned short *)((int)param_1 + 10) = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  *(unsigned short *)(param_1 + 2) = 0;
  return;
}

} /* extern "C" */
