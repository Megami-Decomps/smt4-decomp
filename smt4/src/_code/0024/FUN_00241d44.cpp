#include "romwright_types.h"

extern "C" {

int FUN_002e0ed0(int);

extern int DAT_00464c40; /* 0x464c40 */

/* Supplied declaration required: FUN_002e0ed0. */


void FUN_00241d44(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 == 0) {
    param_1 = DAT_00464c40;
  }
  FUN_002e0ed0(param_1);
  return;
}

} /* extern "C" */
