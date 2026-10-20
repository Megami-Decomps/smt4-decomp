#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_00483b30(int param_1)

{
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x98) + 4))(*(int **)(param_1 + 0x98));
    *(unsigned int *)(param_1 + 0x98) = 0;
  }
  if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x9c) + 4))(*(int **)(param_1 + 0x9c));
    *(unsigned int *)(param_1 + 0x9c) = 0;
  }
  return;
}

} /* extern "C" */
