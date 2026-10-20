#include "romwright_types.h"

extern "C" {


void FUN_00336b54(int param_1,unsigned char param_2)

{
  *(unsigned char *)(param_1 + 0x38b4) = param_2;
  return;
}

} /* extern "C" */
