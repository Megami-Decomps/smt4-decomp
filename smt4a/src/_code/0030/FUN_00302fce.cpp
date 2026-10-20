#include "romwright_types.h"

extern "C" {


unsigned int FUN_00302fce(int param_1)

{
  if (*(int *)(param_1 + 0xe8) - 1U < 299) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
