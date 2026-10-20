#include "romwright_types.h"

extern "C" {

int FUN_002ff3c8(unsigned int *);

/* Supplied declaration required: FUN_002ff3c8. */


void FUN_002ff3b8(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *param_2;
  FUN_002ff3c8(param_2);
  *param_1 = temp_v0;
  return;
}

} /* extern "C" */
