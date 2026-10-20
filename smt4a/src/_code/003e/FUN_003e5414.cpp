#include "romwright_types.h"

extern "C" {

int FUN_004ffb58(void);

/* Supplied declaration required: FUN_004ffb58. */


void FUN_003e5414(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(*(int *)(param_1 + 8) + 4) != 0) {
    FUN_004ffb58();
    return;
  }
  return;
}

} /* extern "C" */
