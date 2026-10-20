#include "romwright_types.h"

extern "C" {


void FUN_004bd400(int param_1,unsigned short param_2)

{
  *(unsigned short *)(param_1 + 0x60) = *(unsigned short *)(param_1 + 0x60) & ~param_2;
  return;
}

} /* extern "C" */
