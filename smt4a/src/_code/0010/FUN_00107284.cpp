#include "romwright_types.h"

extern "C" {

int FUN_002e9598(int);

/* Supplied declaration required: FUN_002e9598. */


void FUN_00107284(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e9598(param_1 + 0x10);
  return;
}

} /* extern "C" */
