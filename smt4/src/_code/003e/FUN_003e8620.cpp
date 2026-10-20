#include "romwright_types.h"

extern "C" {


int FUN_003e8620(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2;
}

} /* extern "C" */
