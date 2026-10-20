#include "romwright_types.h"

extern "C" {


void FUN_00130eb4(int param_1,int param_2)

{
  *(int *)(param_1 + 0x38) = param_2 + 8;
  return;
}

} /* extern "C" */
