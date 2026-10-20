#include "romwright_types.h"

extern "C" {


void FUN_00184c40(int param_1,unsigned short param_2,unsigned short param_3)

{
  *(unsigned short *)(param_1 + 0x18) = param_2;
  *(unsigned short *)(param_1 + 0x1a) = param_3;
  return;
}

} /* extern "C" */
