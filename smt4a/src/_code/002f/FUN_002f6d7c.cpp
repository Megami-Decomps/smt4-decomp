#include "romwright_types.h"

extern "C" {

int FUN_002f6d1c(unsigned int *);

/* Supplied declaration required: FUN_002f6d1c. */


void FUN_002f6d7c(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *param_2;
  FUN_002f6d1c(param_2);
  *param_1 = temp_v0;
  return;
}

} /* extern "C" */
