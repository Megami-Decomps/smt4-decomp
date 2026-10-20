#include "romwright_types.h"

extern "C" {

int FUN_00187788(int, unsigned int);

extern int DAT_005b3fdc; /* 0x5b3fdc */

/* Supplied declaration required: FUN_00187788. */


void FUN_00167f74(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_005b3fdc != 0) {
    FUN_00187788(DAT_005b3fdc,param_1);
    return;
  }
  return;
}

} /* extern "C" */
