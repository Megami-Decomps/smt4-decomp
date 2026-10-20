#include "romwright_types.h"

extern "C" {


void FUN_00158878(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 0x84) = param_2;
  *(unsigned int *)(param_1 + 0x88) = param_3;
  return;
}

} /* extern "C" */
