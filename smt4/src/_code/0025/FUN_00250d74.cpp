#include "romwright_types.h"

extern "C" {

int FUN_002c415c(void);

/* Supplied declaration required: FUN_002c415c. */


void FUN_00250d74(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != 0) {
    FUN_002c415c();
    return;
  }
  return;
}

} /* extern "C" */
