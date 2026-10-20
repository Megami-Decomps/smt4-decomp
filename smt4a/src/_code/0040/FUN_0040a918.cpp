#include "romwright_types.h"

extern "C" {


void FUN_0040a918(int param_1,unsigned int param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    *(unsigned int *)(param_1 + 0x1c) = param_2;
  }
  return;
}

} /* extern "C" */
