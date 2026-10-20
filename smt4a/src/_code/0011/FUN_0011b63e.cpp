#include "romwright_types.h"

extern "C" {

int FUN_00117f88(int);

/* Supplied declaration required: FUN_00117f88. */


void FUN_0011b63e(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00117f88(param_1 + 0x18);
  return;
}

} /* extern "C" */
