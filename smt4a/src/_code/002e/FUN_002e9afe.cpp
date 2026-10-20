#include "romwright_types.h"

extern "C" {


void FUN_002e9afe(unsigned int *param_1,unsigned int *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}

} /* extern "C" */
