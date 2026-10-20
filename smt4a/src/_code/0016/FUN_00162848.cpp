#include "romwright_types.h"

extern "C" {


unsigned char FUN_00162848(int param_1)

{
  return *(short *)(param_1 + 0x48) != 0;
}

} /* extern "C" */
