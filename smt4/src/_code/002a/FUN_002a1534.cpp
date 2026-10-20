#include "romwright_types.h"

extern "C" {


unsigned int FUN_002a1534(int param_1)

{
  return (*(unsigned int *)(param_1 + 0x754) & 0x10000) >> 0x10;
}

} /* extern "C" */
