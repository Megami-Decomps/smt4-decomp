#include "romwright_types.h"

extern "C" {

int FUN_002f4cd6(unsigned int, unsigned int);

/* Supplied declaration required: FUN_002f4cd6. */


void FUN_0012201a(unsigned int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002f4cd6(param_1,*param_2);
  return;
}

} /* extern "C" */
