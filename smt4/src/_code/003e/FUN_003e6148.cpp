#include "romwright_types.h"

extern "C" {


int FUN_003e6148(int param_1)

{
  return param_1 + *(int *)(param_1 + 4);
}

} /* extern "C" */
