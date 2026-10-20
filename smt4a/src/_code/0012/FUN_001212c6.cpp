#include "romwright_types.h"

extern "C" {

int FUN_002eb87c(int);

/* Supplied declaration required: FUN_002eb87c. */


void FUN_001212c6(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002eb87c(*(int *)(param_1 + 0xc) + 0x80);
  return;
}

} /* extern "C" */
