#include "romwright_types.h"

extern "C" {

int FUN_002bffe0(unsigned int, unsigned int, int);

/* Supplied declaration required: FUN_002bffe0. */


void FUN_003c2e0c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002bffe0(param_1,param_2,1);
  return;
}

} /* extern "C" */
