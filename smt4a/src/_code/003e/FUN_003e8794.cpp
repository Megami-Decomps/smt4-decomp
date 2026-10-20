#include "romwright_types.h"

extern "C" {


void FUN_003e8794(int param_1,int param_2)

{
  *(int *)(param_1 + 0x23a0) = param_2 + *(int *)(param_1 + 0x23a0);
  return;
}

} /* extern "C" */
