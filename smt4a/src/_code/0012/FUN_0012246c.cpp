#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int FUN_0012246c(int param_1)

{
  if ((~*(unsigned int *)(param_1 + 0x2c) & 1) == 0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x28) + 0x14))(*(int **)(param_1 + 0x28),param_1);
  }
  return 1;
}

} /* extern "C" */
