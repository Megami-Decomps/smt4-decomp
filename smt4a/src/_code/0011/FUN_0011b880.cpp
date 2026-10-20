#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_0011b880(unsigned int param_1,unsigned int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  (**(romwright_code **)(*piVar1 + 8))(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 4))(piVar1);
  }
  return;
}

} /* extern "C" */
