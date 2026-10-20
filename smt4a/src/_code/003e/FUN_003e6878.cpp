#include "romwright_types.h"

extern "C" {


unsigned char FUN_003e6878(int param_1)

{
  return *(int *)(param_1 + 0xc) == 4;
}

} /* extern "C" */
