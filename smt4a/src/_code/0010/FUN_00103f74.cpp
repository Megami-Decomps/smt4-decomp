#include "romwright_types.h"

extern "C" {


void FUN_00103f74(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0xc) | param_2;
  return;
}

} /* extern "C" */
