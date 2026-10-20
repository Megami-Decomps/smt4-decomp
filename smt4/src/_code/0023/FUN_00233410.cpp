#include "romwright_types.h"

extern "C" {

int FUN_0029efd8(int, int);

/* Supplied declaration required: FUN_0029efd8. */


void FUN_00233410(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0029efd8(param_1 + 0x10,1);
    return;
  }
  return;
}

} /* extern "C" */
