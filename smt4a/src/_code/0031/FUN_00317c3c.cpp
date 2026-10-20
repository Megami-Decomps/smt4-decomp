#include "romwright_types.h"

extern "C" {

int FUN_00359094(int);

extern int DAT_005b3ce8; /* 0x5b3ce8 */

/* Supplied declaration required: FUN_00359094. */


void FUN_00317c3c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 == 0) {
    param_1 = DAT_005b3ce8;
  }
  FUN_00359094(param_1);
  return;
}

} /* extern "C" */
