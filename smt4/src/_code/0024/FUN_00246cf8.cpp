#include "romwright_types.h"

extern "C" {

int FUN_002629a0(int, int);
int FUN_002a03a0(int, int, int);

/* Supplied declaration required: FUN_002629a0. */
/* Supplied declaration required: FUN_002a03a0. */


void FUN_00246cf8(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x49d8);
  if (temp_v0 != param_2) {
    if (temp_v0 != -1) {
      FUN_002629a0(temp_v0,0);
    }
    FUN_002a03a0(param_2,0,10);
    *(int *)(param_1 + 0x49d8) = param_2;
  }
  return;
}

} /* extern "C" */
