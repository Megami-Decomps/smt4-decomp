#include "romwright_types.h"

extern "C" {


unsigned char FUN_002876f0(int param_1,unsigned int param_2)

{
  return ((unsigned int)*(unsigned char *)(param_1 + 9) & (1 << (param_2 & 0xff))) != 0;
}

} /* extern "C" */
