#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_003da0bc(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1cf8);
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 4))(piVar1);
    *(int *)(param_1 + 0x1cf8) = 0;
  }
  return;
}

} /* extern "C" */
