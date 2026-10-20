#include "romwright_types.h"

extern "C" {


unsigned int FUN_0047f2d8(unsigned int param_1)

{
  if (((param_1 & 0xfff) != 0) && ((param_1 << 8) >> 0x14 != 0)) {
    return (param_1 << 0x14) | (((param_1 << 8) >> 0x14) << 8) | ((param_1 >> 0x14) & 0xf0) |
           (param_1 >> 0x1c);
  }
  return 0;
}

} /* extern "C" */
