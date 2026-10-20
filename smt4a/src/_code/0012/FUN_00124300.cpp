#include "romwright_types.h"

extern "C" {

int FUN_002ff78c(int);

/* Supplied declaration required: FUN_002ff78c. */


void FUN_00124300(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ff78c(param_1 + 0x54);
  return;
}

} /* extern "C" */
