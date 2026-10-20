#include "romwright_types.h"

extern "C" {


unsigned int FUN_002e7328(int param_1,unsigned int param_2)

{
  if (param_2 <= (unsigned int)(*(int *)(*(int *)(param_1 + 8) + 0x10) - *(int *)(param_1 + 0xc))) {
    return 1;
  }
  *(unsigned char *)(param_1 + 4) = 1;
  return 0;
}

} /* extern "C" */
