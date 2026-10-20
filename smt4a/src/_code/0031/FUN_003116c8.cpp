#include "romwright_types.h"

extern "C" {


void FUN_003116c8(unsigned int param_1,unsigned short *param_2,unsigned short *param_3)

{
  if (param_2 != (unsigned short *)0x0) {
    *param_2 = *param_3;
    *(unsigned int *)(param_2 + 2) = *(unsigned int *)(param_3 + 2);
  }
  return;
}

} /* extern "C" */
