#include "romwright_types.h"

extern "C" {

/* Supplied declaration required: FUN_0030a59e. */


void FUN_0030a59e(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  while (param_2 != 0) {
    FUN_0030a59e(param_1,*(unsigned int *)(param_2 + 0xc));
    temp_v0 = *(int *)(param_2 + 8);
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_2;
    param_2 = temp_v0;
  }
  return;
}

} /* extern "C" */
