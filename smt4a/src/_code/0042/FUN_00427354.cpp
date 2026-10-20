#include "romwright_types.h"

extern "C" {


unsigned short FUN_00427354(int param_1)

{
  return *(unsigned short *)(param_1 + 0x4a) & 0xff;
}

} /* extern "C" */
