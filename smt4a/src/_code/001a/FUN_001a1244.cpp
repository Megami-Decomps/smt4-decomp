#include "romwright_types.h"

extern "C" {

int FUN_001af4dc(int);

/* Supplied declaration required: FUN_001af4dc. */


void FUN_001a1244(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001af4dc(param_1 + 0x18);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - 1;
  return;
}

} /* extern "C" */
