#include "romwright_types.h"

extern "C" {


unsigned int FUN_003112dc(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    return *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x2c) + 4) + 8);
  }
  return 0;
}

} /* extern "C" */
