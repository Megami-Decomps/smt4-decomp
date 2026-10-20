#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(unsigned int);
int FUN_0030fd90(unsigned int *, unsigned int, unsigned int);

/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_0030fd90. */


unsigned int * FUN_001220f0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_0030fd90(param_1,*param_1,param_1[1]);
  FUN_002e6e14(*param_1);
  return param_1;
}

} /* extern "C" */
