#include "romwright_types.h"

extern "C" {

int FUN_001b1b8c(int, int);

/* Supplied declaration required: FUN_001b1b8c. */


void FUN_0024dd48(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_001b1b8c(param_1,1);
  for (temp_v0 = *(int *)(param_1 + 0x34); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x34)) {
    FUN_001b1b8c(temp_v0,0);
  }
  return;
}

} /* extern "C" */
