#include "romwright_types.h"

extern "C" {

int FUN_0011a4b8(unsigned int, unsigned int);

/* Supplied declaration required: FUN_0011a4b8. */


void FUN_0011a718(unsigned int param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_0011a4b8(*param_2,param_3);
  return;
}

} /* extern "C" */
