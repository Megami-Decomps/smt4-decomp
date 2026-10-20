#include "romwright_types.h"

extern "C" {


void FUN_00237d64(unsigned int *param_1,unsigned int *param_2)

{
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = *param_2;
  return;
}

} /* extern "C" */
