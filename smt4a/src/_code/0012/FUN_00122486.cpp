#include "romwright_types.h"

extern "C" {

int FUN_003112dc(int);

/* Supplied declaration required: FUN_003112dc. */


void FUN_00122486(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_003112dc(*(int *)(param_1 + 0x28) + 0x2c);
  return;
}

} /* extern "C" */
