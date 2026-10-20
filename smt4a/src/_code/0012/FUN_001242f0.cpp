#include "romwright_types.h"

extern "C" {


unsigned short FUN_001242f0(int param_1)

{
  return *(unsigned short *)(param_1 + 0x3c) & 0xf;
}

} /* extern "C" */
