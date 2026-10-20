#include "romwright_types.h"

extern "C" {


unsigned char FUN_00420dd8(int param_1)

{
  return *(int *)(param_1 + 0x2c) == 4;
}

} /* extern "C" */
