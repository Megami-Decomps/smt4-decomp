#include "romwright_types.h"

extern "C" {


void FUN_0040ab7c(int param_1,unsigned int param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    *(unsigned int *)(param_1 + 0x14) = param_2;
  }
  return;
}

} /* extern "C" */
