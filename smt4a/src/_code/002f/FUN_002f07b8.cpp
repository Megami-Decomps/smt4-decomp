#include "romwright_types.h"

extern "C" {

int FUN_002ef00c(unsigned int, int);

/* Supplied declaration required: FUN_002ef00c. */


void FUN_002f07b8(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ef00c(param_1,param_2 + 0x48);
  return;
}

} /* extern "C" */
