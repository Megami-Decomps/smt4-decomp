#include "romwright_types.h"

extern "C" {


unsigned char FUN_002d0298(int param_1)

{
  return *(int *)(param_1 + 0x2180) != 4;
}

} /* extern "C" */
