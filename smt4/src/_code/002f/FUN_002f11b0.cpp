#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_0028dcb0. */


unsigned int FUN_002f11b0(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(*param_1 + 0x3040) != '\r') {
    FUN_0028dcb0(0);
    return 0;
  }
  FUN_0028dcb0(1);
  return 1;
}

} /* extern "C" */
