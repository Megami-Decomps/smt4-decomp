#include "romwright_types.h"

extern "C" {

int FUN_003106a8(int, int);

/* Supplied declaration required: FUN_003106a8. */


void FUN_002ea446(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_003106a8(param_1,1);
  *(unsigned int *)(param_1 + 0x24) = param_2;
  return;
}

} /* extern "C" */
