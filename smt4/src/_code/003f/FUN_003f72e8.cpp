#include "romwright_types.h"

extern "C" {


void FUN_003f72e8(unsigned int *param_1,unsigned int *param_2,unsigned short param_3)

{
  *(unsigned char *)(param_1 + 1) = 2;
  *(unsigned short *)((int)param_1 + 6) = param_3;
  *param_1 = *param_2;
  return;
}

} /* extern "C" */
