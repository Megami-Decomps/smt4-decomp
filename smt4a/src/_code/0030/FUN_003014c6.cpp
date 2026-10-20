#include "romwright_types.h"

extern "C" {


unsigned int FUN_003014c6(int param_1,unsigned int *param_2)

{
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = 0;
  }
  if (*(unsigned int *)(*(int *)(param_1 + 8) + 0x10) < 10) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
