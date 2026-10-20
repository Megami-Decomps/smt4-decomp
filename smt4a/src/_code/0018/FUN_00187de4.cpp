#include "romwright_types.h"

extern "C" {

int asdMemFree(void);

/* Supplied declaration required: asdMemFree. */


void FUN_00187de4(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    asdMemFree();
    *param_1 = 0;
  }
  return;
}

} /* extern "C" */
