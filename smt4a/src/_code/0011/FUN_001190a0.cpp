#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_001190a0(int param_1,unsigned int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    (**(romwright_code **)(*piVar1 + 8))(piVar1);
  }
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 4))(piVar1);
  }
  return;
}

} /* extern "C" */
