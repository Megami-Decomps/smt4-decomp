#include "romwright_types.h"

extern "C" {


void FUN_001527d8(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x38) = param_2 & 0xffffff00;
  return;
}

} /* extern "C" */
