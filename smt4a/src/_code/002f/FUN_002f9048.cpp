#include "romwright_types.h"

extern "C" {


unsigned int FUN_002f9048(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
