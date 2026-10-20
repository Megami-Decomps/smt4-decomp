#include "romwright_types.h"

extern "C" {


unsigned int FUN_002c5da8(int param_1,int param_2,unsigned int param_3)

{
  return param_3 | (param_3 << 8) | (param_1 << 0x10) | (param_2 << 0x14) | (param_1 << 0x18) |
         (param_2 << 0x1c);
}

} /* extern "C" */
