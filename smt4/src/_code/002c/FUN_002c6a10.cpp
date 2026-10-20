#include "romwright_types.h"

extern "C" {

int asdMemFree(void);

/* Supplied declaration required: asdMemFree. */


void FUN_002c6a10(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != 0) {
    asdMemFree();
    return;
  }
  return;
}

} /* extern "C" */
