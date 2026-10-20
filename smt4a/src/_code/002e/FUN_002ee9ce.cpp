#include "romwright_types.h"

extern "C" {

int FUN_0030fee0(void);

/* Supplied declaration required: FUN_0030fee0. */


unsigned int FUN_002ee9ce(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0030fee0();
  return *(unsigned int *)(param_1 + 8);
}

} /* extern "C" */
