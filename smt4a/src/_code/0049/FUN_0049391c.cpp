#include "romwright_types.h"

extern "C" {

int FUN_0049c9a0(...);

/* Supplied declaration required: FUN_0049c9a0. */


int FUN_0049391c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0049c9a0();
  temp_v1 = FUN_0049c9a0(param_2);
  return temp_v1 - temp_v0;
}

} /* extern "C" */
