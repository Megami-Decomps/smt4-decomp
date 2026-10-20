#include "romwright_types.h"

extern "C" {


void FUN_002efb90(unsigned int param_1,unsigned int *param_2,unsigned int *param_3)

{
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
  }
  return;
}

} /* extern "C" */
