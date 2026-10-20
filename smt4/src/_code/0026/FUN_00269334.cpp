#include "romwright_types.h"

extern "C" {

int FUN_002c415c(unsigned int);

/* Supplied declaration required: FUN_002c415c. */


void FUN_00269334(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c415c(*(unsigned int *)(param_1 + 0x28));
  return;
}

} /* extern "C" */
