#include "romwright_types.h"

extern "C" {

int FUN_002e755c(unsigned int, unsigned int, int);

/* Supplied declaration required: FUN_002e755c. */


void FUN_002eead8(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e755c(param_1,param_2,param_3 << 1);
  return;
}

} /* extern "C" */
