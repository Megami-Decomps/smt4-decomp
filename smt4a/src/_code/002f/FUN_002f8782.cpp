#include "romwright_types.h"

extern "C" {


unsigned int FUN_002f8782(int param_1)

{
  if (*(int *)(param_1 + 4) == *(int *)(param_1 + 8)) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
