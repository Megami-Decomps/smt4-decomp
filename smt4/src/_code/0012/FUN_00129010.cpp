#include "romwright_types.h"

extern "C" {


int FUN_00129010(int param_1)

{
  return param_1 + 8 + *(int *)(param_1 + 0x18);
}

} /* extern "C" */
