#include "romwright_types.h"

extern "C" {


unsigned char FUN_0023a34c(int param_1,unsigned int *param_2)

{
  if (param_1 != 0) {
    unsigned int *q = (unsigned int *)(*(int *)(param_1 + 4) + 0x1414);
    *param_2 = q[6];
  }
  return param_1 == 0;
}

} /* extern "C" */
