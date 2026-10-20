#include "romwright_types.h"

extern "C" {

int FUN_002eb87c(int);

/* Supplied declaration required: FUN_002eb87c. */


void FUN_00121050(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002eb87c(*(int *)(param_1 + 4) + 0x10);
  return;
}

} /* extern "C" */
