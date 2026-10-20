#include "romwright_types.h"

extern "C" {

int FUN_0030c558(unsigned int *);

/* Supplied declaration required: FUN_0030c558. */


void FUN_00300376(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *param_2;
  FUN_0030c558(param_2);
  *param_1 = temp_v0;
  return;
}

} /* extern "C" */
