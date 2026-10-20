#include "romwright_types.h"

extern "C" {


void FUN_001585c4(int param_1,int param_2,unsigned short param_3)

{
  *(unsigned short *)(param_1 + param_2 * 2 + 0xcc) = param_3;
  return;
}

} /* extern "C" */
