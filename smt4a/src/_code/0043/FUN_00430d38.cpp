#include "romwright_types.h"

extern "C" {


unsigned int FUN_00430d38(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  *param_3 = *(unsigned int *)(param_1 + 0x134);
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = *(unsigned int *)(param_1 + 0x138);
  }
  return *(unsigned int *)(param_1 + 0x138);
}

} /* extern "C" */
