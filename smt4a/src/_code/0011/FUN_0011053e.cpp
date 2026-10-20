#include "romwright_types.h"

extern "C" {

int FUN_00110528(unsigned int, unsigned int);
int FUN_002fb2d0(unsigned int, int, int, unsigned int);

/* Supplied declaration required: FUN_00110528. */
/* Supplied declaration required: FUN_002fb2d0. */


void FUN_0011053e(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002fb2d0(param_1,1,0x400,param_2);
  FUN_00110528(param_1,param_2);
  return;
}

} /* extern "C" */
