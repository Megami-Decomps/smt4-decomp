#include "romwright_types.h"

extern "C" {


unsigned char FUN_00421248(int param_1)

{
  if (*(int *)(param_1 + 0x2c) == 1) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
