#include "romwright_types.h"

extern "C" {

int FUN_002eeb98(int, unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_002eeb98. */


void FUN_0010715a(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_002eeb98(param_1,*(unsigned int *)(param_1 + 8),param_2,param_3);
  return;
}

} /* extern "C" */
