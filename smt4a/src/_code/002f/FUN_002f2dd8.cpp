#include "romwright_types.h"

extern "C" {


void FUN_002f2dd8(int param_1)

{
  *(short *)(param_1 + 0x122) = *(short *)(param_1 + 0x122) + 1;
  return;
}

} /* extern "C" */
