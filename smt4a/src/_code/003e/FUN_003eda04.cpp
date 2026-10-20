#include "romwright_types.h"

extern "C" {


void FUN_003eda04(unsigned int param_1,int param_2)

{
  if (param_2 != 0) {
    *(unsigned short *)(param_2 + 0x1ce) = 0;
    *(unsigned short *)(param_2 + 0x1d0) = 0;
    *(unsigned short *)(param_2 + 0x1d2) = 0;
    *(unsigned short *)(param_2 + 0x1d4) = 0;
  }
  return;
}

} /* extern "C" */
