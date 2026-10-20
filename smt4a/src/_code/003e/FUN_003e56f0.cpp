#include "romwright_types.h"

extern "C" {

int FUN_004ffba8(void);

/* Supplied declaration required: FUN_004ffba8. */


void FUN_003e56f0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(*(int *)(param_1 + 8) + 4) != 0) {
    FUN_004ffba8();
    return;
  }
  return;
}

} /* extern "C" */
