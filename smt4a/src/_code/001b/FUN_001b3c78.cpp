#include "romwright_types.h"

extern "C" {


int FUN_001b3c78(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x10);
}

} /* extern "C" */
