#include "romwright_types.h"

extern "C" {


unsigned char FUN_003f995c(int param_1)

{
  if (*(int *)(param_1 + 0x40c) == 4) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
