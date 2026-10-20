#include "romwright_types.h"

extern "C" {


void FUN_00300c10(unsigned int *param_1)

{
  *param_1 = 0;
  *(unsigned char *)((int)param_1 + 1) = 2;
  *(unsigned char *)param_1 = 8;
  param_1[1] = 0;
  return;
}

} /* extern "C" */
