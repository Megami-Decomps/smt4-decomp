#include "romwright_types.h"

extern "C" {

int FUN_002e95c4(unsigned int, unsigned int);

/* Supplied declaration required: FUN_002e95c4. */


unsigned int FUN_003056e4(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e95c4(param_1,*(unsigned int *)(param_2 + 4));
  return param_1;
}

} /* extern "C" */
