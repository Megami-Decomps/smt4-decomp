#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int FUN_00122452(int param_1)

{
  if ((~*(unsigned int *)(param_1 + 0x2c) & 1) == 0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x28) + 0x18))(*(int **)(param_1 + 0x28),param_1);
  }
  return 1;
}

} /* extern "C" */
