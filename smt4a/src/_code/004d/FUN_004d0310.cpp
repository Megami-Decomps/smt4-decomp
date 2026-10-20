#include "romwright_types.h"

extern "C" {

int FUN_00228b04(int, int);

/* Supplied declaration required: FUN_00228b04. */


void FUN_004d0310(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00228b04(param_1 + 0x10,1);
    return;
  }
  return;
}

} /* extern "C" */
