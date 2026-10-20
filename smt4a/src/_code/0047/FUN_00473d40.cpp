#include "romwright_types.h"

extern "C" {


unsigned char FUN_00473d40(int param_1,unsigned int param_2)

{
  return param_2 < *(unsigned int *)(param_1 + 0x67c);
}

} /* extern "C" */
