#include "romwright_types.h"

extern "C" {

int FUN_002e9854(unsigned int, unsigned int);

/* Supplied declaration required: FUN_002e9854. */


void FUN_0030f12c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e9854(param_2,param_3);
  return;
}

} /* extern "C" */
