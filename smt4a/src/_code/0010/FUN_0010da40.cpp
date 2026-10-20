#include "romwright_types.h"

extern "C" {


unsigned int FUN_0010da40(int param_1)

{
  if (*(int *)(param_1 + 0x108) - 1U < 299) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
