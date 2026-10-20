#include "romwright_types.h"

extern "C" {


void FUN_0026e61c(int param_1,unsigned int param_2)

{
  *(unsigned short *)(param_1 + 0x44) = *(unsigned short *)(param_1 + 0x44) | (unsigned short)(1 << (param_2 & 0xff));
  return;
}

} /* extern "C" */
