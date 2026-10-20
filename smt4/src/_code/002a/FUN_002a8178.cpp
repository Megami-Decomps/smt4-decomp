#include "romwright_types.h"

extern "C" {


void FUN_002a8178(unsigned int *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(unsigned short *)(param_1 + 2) = 0;
  return;
}

} /* extern "C" */
