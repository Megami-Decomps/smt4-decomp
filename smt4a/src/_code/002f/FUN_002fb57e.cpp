#include "romwright_types.h"

extern "C" {

int FUN_0012333c(unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_0012333c. */


void FUN_002fb57e(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  FUN_0012333c(param_2,param_3,param_4);
  return;
}

} /* extern "C" */
