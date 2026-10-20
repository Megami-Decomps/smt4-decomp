#include "romwright_types.h"

extern "C" {


void FUN_002b8d80(int param_1)

{
  *(unsigned int *)(param_1 + 0x34) = *(unsigned int *)(param_1 + 0x34) & 0xffffff7f;
  return;
}

} /* extern "C" */
