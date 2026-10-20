#include "romwright_types.h"

extern "C" {

int FUN_00311248(unsigned int, unsigned int, int, int);

/* Supplied declaration required: FUN_00311248. */


unsigned int FUN_00303028(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_00311248(param_1,param_2,4,1);
  return param_1;
}

} /* extern "C" */
