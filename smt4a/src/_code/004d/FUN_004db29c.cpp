#include "romwright_types.h"

extern "C" {


void FUN_004db29c(int param_1,unsigned char param_2,unsigned short *param_3)

{
  *(unsigned char *)(param_1 + 0x16a) = param_2;
  if (param_3 != (unsigned short *)0x0) {
    *(unsigned short *)(param_1 + 0x16c) = *param_3;
  }
  return;
}

} /* extern "C" */
