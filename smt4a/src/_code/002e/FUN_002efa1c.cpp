#include "romwright_types.h"

extern "C" {


unsigned int FUN_002efa1c(int param_1)

{
  if ((*(char *)(param_1 + 0x14c) == '\0') || (*(int *)(param_1 + 0x158) << 7 >= 0)) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
