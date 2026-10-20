#include "romwright_types.h"

extern "C" {


unsigned int FUN_002e7378(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(*(int *)(param_1 + 8) + 0x10) < param_2) {
    return 0;
  }
  *(unsigned int *)(param_1 + 0xc) = param_2;
  return 1;
}

} /* extern "C" */
