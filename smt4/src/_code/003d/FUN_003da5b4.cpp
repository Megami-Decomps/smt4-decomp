#include "romwright_types.h"

extern "C" {


unsigned int FUN_003da5b4(int param_1)

{
  if ((*(int *)(param_1 + 0x3054) != 0) && ((*(unsigned char *)(*(int *)(param_1 + 0x3054) + 8) & 1) != 0)) {
    return (*(unsigned int *)(param_1 + 0x3028) & 0x2000) >> 0xd;
  }
  return 1;
}

} /* extern "C" */
