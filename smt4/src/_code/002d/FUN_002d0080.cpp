#include "romwright_types.h"

extern "C" {


unsigned char FUN_002d0080(int param_1)

{
  return *(int *)(param_1 + 0x3048) == 6;
}

} /* extern "C" */
