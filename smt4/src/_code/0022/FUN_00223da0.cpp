#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_0029aef0(unsigned int);


void FUN_00223da0(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  param_1 = (unsigned int *)*param_1;
  if (param_1 != (unsigned int *)0x0) {
    temp_v0 = FUN_0029aef0(*param_1);
    param_1[0x2519] = temp_v0;
  }
  return;
}

} /* extern "C" */
