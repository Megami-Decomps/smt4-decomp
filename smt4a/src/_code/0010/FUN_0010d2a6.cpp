#include "romwright_types.h"

extern "C" {

int FUN_002f73fc(int);

/* Supplied declaration required: FUN_002f73fc. */


void FUN_0010d2a6(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002f73fc(param_1 + 4);
  return;
}

} /* extern "C" */
