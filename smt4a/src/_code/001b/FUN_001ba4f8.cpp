#include "romwright_types.h"

extern "C" {


unsigned char FUN_001ba4f8(int param_1,unsigned int param_2)

{
  return ((unsigned int)*(unsigned char *)(param_1 + (param_2 >> 3) + 0x68) & (1 << (param_2 & 7))) != 0;
}

} /* extern "C" */
