#include "romwright_types.h"

extern "C" {


void FUN_002ed206(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | param_2;
  return;
}

} /* extern "C" */
