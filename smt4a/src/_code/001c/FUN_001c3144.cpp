#include "romwright_types.h"

extern "C" {


void FUN_001c3144(int param_1,int param_2,unsigned short param_3)

{
  *(unsigned short *)(param_1 + param_2 * 2 + 0xd0) = param_3;
  return;
}

} /* extern "C" */
