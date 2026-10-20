#include "romwright_types.h"

extern "C" {


void FUN_001576b4(int param_1,int param_2,unsigned short param_3)

{
  *(unsigned short *)(param_1 + param_2 * 2 + 0xa0) = param_3;
  return;
}

} /* extern "C" */
