#include "romwright_types.h"

extern "C" {


void FUN_002c2c88(int param_1)

{
  *(unsigned char *)(param_1 + 0x61) = 0;
  *(unsigned char *)(param_1 + 0x60) = 0;
  return;
}

} /* extern "C" */
