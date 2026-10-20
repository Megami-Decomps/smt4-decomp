#include "romwright_types.h"

extern "C" {


void FUN_002cd108(int param_1,unsigned char param_2)

{
  *(unsigned char *)(param_1 + 0x38b7) = param_2;
  return;
}

} /* extern "C" */
