#include "romwright_types.h"

extern "C" {

int FUN_00310d0a(unsigned int *, unsigned int, unsigned int);

/* Supplied declaration required: FUN_00310d0a. */


void FUN_002f7824(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00310d0a(param_1,*param_1,param_1[1]);
  return;
}

} /* extern "C" */
