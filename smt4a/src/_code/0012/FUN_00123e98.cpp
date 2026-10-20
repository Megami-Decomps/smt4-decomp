#include "romwright_types.h"

extern "C" {

int FUN_00113598(unsigned int, int, int);

/* Supplied declaration required: FUN_00113598. */


void FUN_00123e98(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_00113598(param_1,param_2 + 0x2e4,param_3);
  return;
}

} /* extern "C" */
