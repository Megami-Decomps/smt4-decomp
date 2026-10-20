#include "romwright_types.h"

extern "C" {

int FUN_0030ec74(unsigned int *, unsigned int *);

/* Supplied declaration required: FUN_0030ec74. */


unsigned int * FUN_0030c546(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = *param_2;
  FUN_0030ec74(param_1 + 1,param_2 + 1);
  return param_1;
}

} /* extern "C" */
