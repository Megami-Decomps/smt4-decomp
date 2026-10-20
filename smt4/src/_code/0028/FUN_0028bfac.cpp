#include "romwright_types.h"

extern "C" {

int FUN_002bd8e8(int, int, int);

/* Supplied declaration required: FUN_002bd8e8. */


void FUN_0028bfac(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x2180) == 1) {
    *(unsigned int *)(param_1 + 0x217c) = 0;
    *(unsigned int *)(param_1 + 0x2180) = 6;
    FUN_002bd8e8(param_1 + 0x20f0,0,1);
    return;
  }
  return;
}

} /* extern "C" */
