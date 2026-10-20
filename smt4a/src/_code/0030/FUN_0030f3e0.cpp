#include "romwright_types.h"

extern "C" {

int FUN_00105748(unsigned int, int);

/* Supplied declaration required: FUN_00105748. */


void FUN_0030f3e0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00105748(*(unsigned int *)(param_1 + 4),param_1);
  return;
}

} /* extern "C" */
