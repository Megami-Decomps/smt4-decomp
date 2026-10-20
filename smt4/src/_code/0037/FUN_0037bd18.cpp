#include "romwright_types.h"

extern "C" {


void FUN_0037bd18(unsigned int *param_1)

{
  if (*(char *)(param_1 + 3) != '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(unsigned char *)(param_1 + 3) = 0;
  }
  return;
}

} /* extern "C" */
