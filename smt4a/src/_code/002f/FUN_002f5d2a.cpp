#include "romwright_types.h"

extern "C" {

int FUN_002f5fb0(int, unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_002f5fb0. */


void FUN_002f5d2a(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_002f5fb0(param_1 + 8,param_2,param_3,0xffffffff);
  return;
}

} /* extern "C" */
