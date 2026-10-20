#include "romwright_types.h"

extern "C" {


void FUN_00107608(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 0x32c) < param_2) {
    *(unsigned int *)(param_1 + 0x32c) = param_2;
  }
  if (param_2 < *(unsigned int *)(param_1 + 0x330)) {
    *(unsigned int *)(param_1 + 0x330) = param_2;
  }
  return;
}

} /* extern "C" */
