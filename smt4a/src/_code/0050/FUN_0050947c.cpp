#include "romwright_types.h"

extern "C" {

int FUN_00502364(void);

/* Supplied declaration required: FUN_00502364. */


void FUN_0050947c(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_00502364();
    return;
  }
  return;
}

} /* extern "C" */
