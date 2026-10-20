#include "romwright_types.h"

extern "C" {

int FUN_00241b24(int, int);

/* Supplied declaration required: FUN_00241b24. */


void FUN_0020e9dc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_00241b24(param_1,1);
  for (temp_v0 = *(int *)(param_1 + 0x34); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x34)) {
    FUN_00241b24(temp_v0,0);
  }
  return;
}

} /* extern "C" */
