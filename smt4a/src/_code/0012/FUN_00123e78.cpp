#include "romwright_types.h"

extern "C" {


unsigned int FUN_00123e78(int param_1)

{
  if (*(short *)(param_1 + 0x1c) != 0x40) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
