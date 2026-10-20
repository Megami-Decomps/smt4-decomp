#include "romwright_types.h"

extern "C" {


unsigned char FUN_00513ff0(int param_1,unsigned int *param_2)

{
  if (param_1 != 0) {
    unsigned int *p = (unsigned int *)(*(int *)(param_1 + 4) + 0x141c);
    *param_2 = p[6];
  }
  return param_1 == 0;
}

} /* extern "C" */
