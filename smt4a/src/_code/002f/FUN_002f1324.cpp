#include "romwright_types.h"

extern "C" {

int FUN_002efd60(unsigned int *);

/* Supplied declaration required: FUN_002efd60. */


void FUN_002f1324(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *param_2;
  FUN_002efd60(param_2);
  *param_1 = temp_v0;
  return;
}

} /* extern "C" */
