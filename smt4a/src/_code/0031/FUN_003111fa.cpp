#include "romwright_types.h"

extern "C" {


int FUN_003111fa(int param_1)

{
  return *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
}

} /* extern "C" */
