#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteB(unsigned int);

/* Supplied declaration required: asdOperatorDeleteB. */


unsigned int * FUN_0012d4d8(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  asdOperatorDeleteB(*param_1);
  return param_1;
}

} /* extern "C" */
