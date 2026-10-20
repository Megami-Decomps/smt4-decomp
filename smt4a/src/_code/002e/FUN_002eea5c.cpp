#include "romwright_types.h"

extern "C" {

int FUN_002e7690(unsigned int, unsigned int, int);

/* Supplied declaration required: FUN_002e7690. */


unsigned int FUN_002eea5c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e7690(param_1,param_2,1);
  return param_1;
}

} /* extern "C" */
