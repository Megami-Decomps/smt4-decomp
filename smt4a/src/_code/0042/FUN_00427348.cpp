#include "romwright_types.h"

extern "C" {


unsigned short FUN_00427348(int param_1)

{
  return *(unsigned short *)(param_1 + 0x48) & 0xff;
}

} /* extern "C" */
