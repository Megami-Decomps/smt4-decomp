#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_0022c0a4(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)param_1[2];
  if (puVar1 == (unsigned int *)0x0 || puVar1 == param_1) {
    if (param_1[1] != 0) {
      (**(romwright_code **)(*(int *)*param_1 + 4))(*param_1,param_1[1]);
    }
  }
  else {
    puVar1[3] = param_1[3];
    *(unsigned int *)(param_1[3] + 8) = param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
  }
  param_1[1] = 0;
  return;
}

} /* extern "C" */
