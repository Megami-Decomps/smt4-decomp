#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_00373d40(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(*param_1 + 0x33b4) != '\r') {
    FUN_003283ac(0);
    return 0;
  }
  FUN_003283ac(1);
  return 1;
}

} /* extern "C" */
