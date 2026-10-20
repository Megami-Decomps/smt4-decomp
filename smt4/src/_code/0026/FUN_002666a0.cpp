#include "romwright_types.h"

extern "C" {


void FUN_002666a0(int param_1,int param_2,unsigned int param_3)

{
  *(int *)(param_1 + 4) = param_2 + 100;
  *(unsigned int *)(param_1 + 8) = param_3;
  return;
}

} /* extern "C" */
