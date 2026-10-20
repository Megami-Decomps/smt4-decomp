#include "romwright_types.h"

extern "C" {

int FUN_002fb57e(int, unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_002fb57e. */


void FUN_001107d4(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_002fb57e(1,param_1,param_2,param_3);
  return;
}

} /* extern "C" */
