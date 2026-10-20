#include "romwright_types.h"

extern "C" {


void FUN_002f5d1e(int param_1)

{
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned char *)(param_1 + 0x44) = 0;
  return;
}

} /* extern "C" */
