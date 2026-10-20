#include "romwright_types.h"

extern "C" {

int FUN_00297684(void);

/* Supplied declaration required: FUN_00297684. */


void FUN_00338358(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x4394) != 0) {
    FUN_00297684();
    return;
  }
  return;
}

} /* extern "C" */
