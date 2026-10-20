#include "romwright_types.h"

extern "C" {


unsigned int FUN_0030fb0c(int param_1)

{
  if ((*(int *)(param_1 + 0x120) != 0) && (*(char *)(*(int *)(param_1 + 0x120) + 0x22) != '\x05')) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
