#include "romwright_types.h"

extern "C" {

int FUN_002e7232(unsigned int);

/* Supplied declaration required: FUN_002e7232. */


unsigned int * FUN_002f8264(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e7232(*param_1);
  return param_1;
}

} /* extern "C" */
