#include "romwright_types.h"

extern "C" {

int strAssign(unsigned int, unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: strAssign. */


void FUN_002e7674(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  strAssign(*(unsigned int *)(param_1 + 8),param_2,param_3,0xffffffff);
  return;
}

} /* extern "C" */
