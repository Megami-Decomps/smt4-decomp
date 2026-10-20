#include "romwright_types.h"

extern "C" {


void FUN_005001a4(int *param_1,int param_2,unsigned int param_3)

{
  int *piVar1;
  int temp_v0;
  
  piVar1 = *(int **)(param_2 + 4);
  if ((piVar1 != (int *)0x0) && ((unsigned int)piVar1[1] >= param_3)) {
    temp_v0 = *piVar1 + param_3 * 0x30;
  }
  else {
    temp_v0 = 0;
  }
  *param_1 = temp_v0;
  return;
}

} /* extern "C" */
