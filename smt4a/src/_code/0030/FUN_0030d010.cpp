#include "romwright_types.h"

extern "C" {


void FUN_0030d010(unsigned int param_1,unsigned char *param_2,unsigned char *param_3)

{
  if (param_2 != (unsigned char *)0x0) {
    *param_2 = *param_3;
    *(unsigned int *)(param_2 + 4) = *(unsigned int *)(param_3 + 4);
  }
  return;
}

} /* extern "C" */
