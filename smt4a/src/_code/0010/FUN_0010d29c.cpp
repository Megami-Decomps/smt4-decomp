#include "romwright_types.h"

extern "C" {

int FUN_002f73e4(int);

/* Supplied declaration required: FUN_002f73e4. */


void FUN_0010d29c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002f73e4(param_1 + 4);
  return;
}

} /* extern "C" */
