#include "romwright_types.h"

extern "C" {


void FUN_004bd3ec(int param_1,unsigned int param_2)

{
  *(unsigned short *)(param_1 + 0x60) = *(unsigned short *)(param_1 + 0x60) | (unsigned short)(1 << (param_2 & 0xff));
  return;
}

} /* extern "C" */
