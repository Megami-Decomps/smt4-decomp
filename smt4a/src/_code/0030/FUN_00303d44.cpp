#include "romwright_types.h"

extern "C" {


unsigned int FUN_00303d44(int param_1,unsigned int param_2)

{
  if ((param_2 & ~*(unsigned int *)(param_1 + 0x2c)) != 0) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
