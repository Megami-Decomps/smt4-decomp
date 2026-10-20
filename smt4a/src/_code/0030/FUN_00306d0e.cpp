#include "romwright_types.h"

extern "C" {

int FUN_002f3214(int);

/* Supplied declaration required: FUN_002f3214. */


void FUN_00306d0e(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002f3214(param_1 + 0xa4);
  return;
}

} /* extern "C" */
