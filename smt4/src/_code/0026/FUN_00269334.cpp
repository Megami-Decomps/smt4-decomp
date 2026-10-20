#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int);

/* Supplied declaration required: asdMemFree. */


void FUN_00269334(int param_1)

{
/* irregular: 1 native warning(s); review required */
  asdMemFree(*(unsigned int *)(param_1 + 0x28));
  return;
}

} /* extern "C" */
