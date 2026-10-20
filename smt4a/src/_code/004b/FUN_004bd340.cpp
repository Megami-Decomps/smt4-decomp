#include "romwright_types.h"

extern "C" {


unsigned char FUN_004bd340(int param_1,unsigned int param_2)

{
  return ((unsigned int)*(unsigned short *)(param_1 + 0x60) & (1 << (param_2 & 0xff))) != 0;
}

} /* extern "C" */
