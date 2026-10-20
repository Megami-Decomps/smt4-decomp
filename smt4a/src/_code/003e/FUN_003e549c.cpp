#include "romwright_types.h"

extern "C" {

int FUN_003fe86c(int, unsigned int, int);

/* Supplied declaration required: FUN_003fe86c. */


void FUN_003e549c(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(*(int *)(param_1 + 8) + 4);
  if (temp_v0 != 0) {
    FUN_003fe86c(temp_v0,param_2,2);
    return;
  }
  return;
}

} /* extern "C" */
