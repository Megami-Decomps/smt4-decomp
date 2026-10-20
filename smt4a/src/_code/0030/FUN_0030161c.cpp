#include "romwright_types.h"

extern "C" {

int FUN_00115aec(int);
int FUN_00124034(void);
int FUN_0030eeb0(int);

/* Supplied declaration required: FUN_00115aec. */
/* Supplied declaration required: FUN_00124034. */
/* Supplied declaration required: FUN_0030eeb0. */


void FUN_0030161c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00124034();
  if (*(int *)(param_1 + 0x18) != 0) {
    temp_v0 = FUN_0030eeb0(temp_v0);
    FUN_00115aec(temp_v0);
    return;
  }
  FUN_0030eeb0(temp_v0);
  return;
}

} /* extern "C" */
