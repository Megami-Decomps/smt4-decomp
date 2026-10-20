#include "romwright_types.h"

extern "C" {

int FUN_0030f66c(unsigned int *);

/* Supplied declaration required: FUN_0030f66c. */


void FUN_0030f836(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *param_2;
  FUN_0030f66c(param_2);
  *param_1 = temp_v0;
  return;
}

} /* extern "C" */
