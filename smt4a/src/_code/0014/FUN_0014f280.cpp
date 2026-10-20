#include "romwright_types.h"

extern "C" {


unsigned int FUN_0014f280(int param_1,int *param_2,unsigned short param_3,int param_4)

{
  if (param_4 == 0) {
    *(unsigned short *)(param_1 + *param_2 * 2) = param_3;
  }
  *param_2 = *param_2 + 1;
  return 1;
}

} /* extern "C" */
