#include "romwright_types.h"

extern "C" {


int FUN_002eac18(int param_1,int param_2)

{
  if (param_2 != 0) {
    return *(int *)(param_1 + 8) + param_2;
  }
  return param_1 + 0xc;
}

} /* extern "C" */
