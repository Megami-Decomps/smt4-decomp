#include "romwright_types.h"

extern "C" {

int FUN_002e3494(unsigned int);

/* Supplied declaration required: FUN_002e3494. */


unsigned int * FUN_0012d4d8(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e3494(*param_1);
  return param_1;
}

} /* extern "C" */
