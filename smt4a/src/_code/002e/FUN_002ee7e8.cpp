#include "romwright_types.h"

extern "C" {


int FUN_002ee7e8(int param_1)

{
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) >> 1;
}

} /* extern "C" */
