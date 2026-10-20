#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_002f30c4(int param_1)

{
  if ((*(char *)(param_1 + 4) != '\x03') && (*(int **)(param_1 + 0x3c) != (int *)0x0)) {
    (**(romwright_code **)(**(int **)(param_1 + 0x3c) + 4))(*(int **)(param_1 + 0x3c));
    *(unsigned char *)(param_1 + 4) = 3;
  }
  return;
}

} /* extern "C" */
