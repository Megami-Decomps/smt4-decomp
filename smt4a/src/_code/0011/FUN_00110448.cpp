#include "romwright_types.h"

extern "C" {

int FUN_002fb1ea(unsigned int);

/* Supplied declaration required: FUN_002fb1ea. */


void FUN_00110448(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x14) = param_2;
  FUN_002fb1ea(**(unsigned int **)(param_1 + 0xc));
  return;
}

} /* extern "C" */
