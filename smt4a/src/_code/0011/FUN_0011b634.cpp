#include "romwright_types.h"

extern "C" {

int FUN_00117eec(int);

/* Supplied declaration required: FUN_00117eec. */


void FUN_0011b634(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00117eec(param_1 + 0x18);
  return;
}

} /* extern "C" */
