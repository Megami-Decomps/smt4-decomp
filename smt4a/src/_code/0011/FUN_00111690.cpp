#include "romwright_types.h"

extern "C" {

int FUN_002f9f4e(int);

/* Supplied declaration required: FUN_002f9f4e. */


void FUN_00111690(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002f9f4e(param_1 + 8);
  return;
}

} /* extern "C" */
