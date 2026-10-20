#include "romwright_types.h"

extern "C" {

int FUN_002ad8b4(unsigned int, unsigned int);

/* Supplied declaration required: FUN_002ad8b4. */


void FUN_003e0bbc(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ad8b4(param_2,param_1);
  return;
}

} /* extern "C" */
