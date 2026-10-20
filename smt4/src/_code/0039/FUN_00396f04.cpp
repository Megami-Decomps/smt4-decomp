#include "romwright_types.h"

extern "C" {

int FUN_002a775c(void);

/* Supplied declaration required: FUN_002a775c. */


void FUN_00396f04(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_002a775c();
    *(unsigned int *)(param_1 + 0x98) = 0;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_002a775c();
    *(unsigned int *)(param_1 + 0x9c) = 0;
  }
  return;
}

} /* extern "C" */
