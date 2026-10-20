#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_002eac8e(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(param_1 + 0x7c) != 0) {
      (**(romwright_code **)(*piVar1 + 0x34))(piVar1,*(int *)(param_1 + 0x7c),param_1);
    }
    if (param_2 != 0) {
      (**(romwright_code **)(**(int **)(param_1 + 4) + 0x30))(*(int **)(param_1 + 4),param_2,param_1);
    }
  }
  *(int *)(param_1 + 0x7c) = param_2;
  return;
}

} /* extern "C" */
