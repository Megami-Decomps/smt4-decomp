#include "romwright_types.h"

extern "C" {


void FUN_00164cd0(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x34) = *(unsigned int *)(param_1 + 0x34) & ~param_2;
  return;
}

} /* extern "C" */
