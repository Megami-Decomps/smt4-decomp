#include "romwright_types.h"

extern "C" {


void FUN_003756b8(int param_1,unsigned char param_2)

{
  *(unsigned char *)(param_1 + 0x3db0) = param_2;
  return;
}

} /* extern "C" */
