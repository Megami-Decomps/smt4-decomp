#include "romwright_types.h"

extern "C" {


unsigned int FUN_002ed344(int param_1,int param_2)

{
  if ((*(int *)(param_2 + 4) != *(int *)(param_1 + 4)) &&
     (*(int *)(param_2 + 4) - *(int *)(param_1 + 4) <= 0)) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
