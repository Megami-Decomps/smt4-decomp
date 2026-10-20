#include "romwright_types.h"

extern "C" {

int FUN_00439f3c(unsigned int, unsigned int);

/* Supplied declaration required: FUN_00439f3c. */


void FUN_00461b68(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_00439f3c(*(unsigned int *)(param_1 + param_2 * 4),param_3);
  return;
}

} /* extern "C" */
