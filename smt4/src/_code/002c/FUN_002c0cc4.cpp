#include "romwright_types.h"

extern "C" {


int * FUN_002c0cc4(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 0x314c4254)) {
    param_1 = param_1 + 4;
  }
  else {
    param_1 = (int *)0x0;
  }
  return param_1;
}

} /* extern "C" */
