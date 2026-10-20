#include "romwright_types.h"

extern "C" {


unsigned int FUN_002eafbe(int param_1)

{
  if ((*(char *)(param_1 + 0x24) == '\0') ||
     ((*(char *)(param_1 + 0x24) == '\x01' && ((*(unsigned int *)(param_1 + 0x8c) & 0xff) < 2)))) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
