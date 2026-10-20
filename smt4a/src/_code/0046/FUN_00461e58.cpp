#include "romwright_types.h"

extern "C" {

int FUN_001d2384(int);

/* Supplied declaration required: FUN_001d2384. */


void FUN_00461e58(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  for (temp_v0 = *(int *)(param_1 + 0x130); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x1ac)) {
    FUN_001d2384(temp_v0);
  }
  *(unsigned int *)(param_1 + 0x130) = 0;
  return;
}

} /* extern "C" */
