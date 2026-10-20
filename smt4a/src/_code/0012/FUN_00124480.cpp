#include "romwright_types.h"

extern "C" {


int FUN_00124480(int param_1)

{
  return *(int *)(param_1 + 0xc) * 8 + (7 - *(int *)(param_1 + 0x10));
}

} /* extern "C" */
