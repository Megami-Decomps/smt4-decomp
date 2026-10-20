#include "romwright_types.h"

extern "C" {


void FUN_002d0098(int param_1,unsigned char param_2)

{
  *(unsigned char *)(param_1 + 0x3080) = param_2;
  return;
}

} /* extern "C" */
