#include "romwright_types.h"

extern "C" {


void FUN_0030d358(unsigned int param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int t0;
  unsigned int t1;
  unsigned int t2;
  
  if (param_2 != (unsigned int *)0x0) {
    t0 = param_3[0];
    t1 = param_3[1];
    t2 = param_3[2];
    param_2[0] = t0;
    param_2[1] = t1;
    param_2[2] = t2;

  }
  return;
}

} /* extern "C" */
