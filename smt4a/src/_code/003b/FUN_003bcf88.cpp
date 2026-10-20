#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);

/* Supplied declaration required: FUN_001846d0. */


void FUN_003bcf88(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001846d0(param_1 + 0x368,4);
  *(unsigned int *)(param_1 + 0x3f4) = 0;
  *(unsigned int *)(param_1 + 0x3f8) = 5;
  return;
}

} /* extern "C" */
