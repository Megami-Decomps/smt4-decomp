#include "romwright_types.h"

extern "C" {


void FUN_003d37bc(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  *param_2 = *(unsigned int *)(param_1 + 8);
  *param_3 = *(unsigned int *)(param_1 + 0xc);
  return;
}

} /* extern "C" */
