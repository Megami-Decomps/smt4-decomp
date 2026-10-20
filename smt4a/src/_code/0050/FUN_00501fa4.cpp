#include "romwright_types.h"

extern "C" {

int FUN_001a9110(unsigned int, unsigned int);

/* Supplied declaration required: FUN_001a9110. */


void FUN_00501fa4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_001a9110(param_2,param_1);
  return;
}

} /* extern "C" */
