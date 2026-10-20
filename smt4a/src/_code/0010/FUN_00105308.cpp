#include "romwright_types.h"

extern "C" {

int FUN_002ea43c(int);
int FUN_002ea446(int);

/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002ea446. */


void FUN_00105308(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (0 < *(int *)(param_1 + 0x3c)) {
    FUN_002ea446(param_1);
    return;
  }
  FUN_002ea43c(param_1);
  return;
}

} /* extern "C" */
