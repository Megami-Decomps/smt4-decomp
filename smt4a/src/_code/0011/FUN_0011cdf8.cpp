#include "romwright_types.h"

extern "C" {

int FUN_00106d16(unsigned int);

/* Supplied declaration required: FUN_00106d16. */


void FUN_0011cdf8(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00106d16(*param_1);
  return;
}

} /* extern "C" */
