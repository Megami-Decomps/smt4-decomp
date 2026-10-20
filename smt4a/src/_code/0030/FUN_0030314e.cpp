#include "romwright_types.h"

extern "C" {

int FUN_00302fec(unsigned int, unsigned int);

/* Supplied declaration required: FUN_00302fec. */


void FUN_0030314e(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_00302fec(param_1,*(unsigned int *)(param_2 + 8));
  return;
}

} /* extern "C" */
