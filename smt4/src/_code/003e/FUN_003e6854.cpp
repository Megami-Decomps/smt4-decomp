#include "romwright_types.h"

extern "C" {


int FUN_003e6854(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x1c);
}

} /* extern "C" */
