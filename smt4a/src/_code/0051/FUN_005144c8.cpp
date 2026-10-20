#include "romwright_types.h"

extern "C" {


void FUN_005144c8(unsigned int *param_1)

{
  if (param_1 != (unsigned int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(unsigned char *)(param_1 + 4) = 0;
  }
  return;
}

} /* extern "C" */
