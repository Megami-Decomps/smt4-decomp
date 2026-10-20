#include "romwright_types.h"

extern "C" {


void FUN_003f0240(int param_1)

{
  *(unsigned int *)(param_1 + 0x4d74) = 0xffffffff;
  return;
}

} /* extern "C" */
