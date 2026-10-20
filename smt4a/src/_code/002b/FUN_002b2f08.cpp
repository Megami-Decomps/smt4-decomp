#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(unsigned int);

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_002b2f08(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0019a5a0(*(unsigned int *)(param_1 + 0x28));
  return;
}

} /* extern "C" */
