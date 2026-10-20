#include "romwright_types.h"

extern "C" {


unsigned int FUN_002efd36(int param_1,int param_2)

{
  if (0 < (short)(*(short *)(param_1 + 4) - *(short *)(param_2 + 4))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
