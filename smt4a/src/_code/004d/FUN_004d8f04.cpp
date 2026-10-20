#include "romwright_types.h"

extern "C" {


void FUN_004d8f04(int param_1)

{
  *(unsigned int *)(param_1 + 0xa0) = 1;
  *(unsigned short *)(param_1 + 0xbc) = 0;
  return;
}

} /* extern "C" */
