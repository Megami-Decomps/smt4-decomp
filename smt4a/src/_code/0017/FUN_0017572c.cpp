#include "romwright_types.h"

extern "C" {


unsigned int FUN_0017572c(int param_1,unsigned int *param_2)

{
  if (*(unsigned int **)(param_1 + 0x170) == (unsigned int *)0x0) {
    *(unsigned int **)(param_1 + 0x16c) = param_2;
  }
  else {
    **(unsigned int **)(param_1 + 0x170) = (unsigned int)param_2;
  }
  *(unsigned int **)(param_1 + 0x170) = param_2;
  *param_2 = 0;
  return *(unsigned int *)(param_1 + 0x174);
}

} /* extern "C" */
