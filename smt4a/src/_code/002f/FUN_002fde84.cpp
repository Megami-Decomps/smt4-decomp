#include "romwright_types.h"

extern "C" {


int FUN_002fde84(int param_1)

{
  return *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
}

} /* extern "C" */
