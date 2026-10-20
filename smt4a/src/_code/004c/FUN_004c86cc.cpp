#include "romwright_types.h"

extern "C" {


unsigned char FUN_004c86cc(int param_1,int param_2)

{
  return *(unsigned short *)(param_1 + param_2 * 2 + 0x152) >> 10 == 2;
}

} /* extern "C" */
