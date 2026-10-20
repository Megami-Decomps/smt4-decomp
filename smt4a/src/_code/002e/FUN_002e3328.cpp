#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_002e3328(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != 0) {
    FUN_0019a5a0();
    return;
  }
  return;
}

} /* extern "C" */
