#include "romwright_types.h"

extern "C" {


void FUN_00336a70(int param_1,int param_2)

{
  *(int *)(param_1 + 0x22a4) = param_2 + *(int *)(param_1 + 0x22a4);
  return;
}

} /* extern "C" */
