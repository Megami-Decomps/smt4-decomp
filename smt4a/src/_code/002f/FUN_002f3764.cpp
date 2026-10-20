#include "romwright_types.h"

extern "C" {

int FUN_002f39fa(unsigned int *);

/* Supplied declaration required: FUN_002f39fa. */


void FUN_002f3764(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *param_2;
  FUN_002f39fa(param_2);
  *param_1 = temp_v0;
  return;
}

} /* extern "C" */
