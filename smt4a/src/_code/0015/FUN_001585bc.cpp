#include "romwright_types.h"

extern "C" {


void FUN_001585bc(unsigned int *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(unsigned short *)(param_1 + 0x12) = 0;
  *(unsigned short *)((int)param_1 + 0x4a) = 0;
  return;
}

} /* extern "C" */
