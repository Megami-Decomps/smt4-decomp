#include "romwright_types.h"

extern "C" {


void FUN_002b8234(int param_1)

{
  *(unsigned int *)(param_1 + 0x34) = *(unsigned int *)(param_1 + 0x34) | 0x80;
  return;
}

} /* extern "C" */
