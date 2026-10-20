#include "romwright_types.h"

extern "C" {

int FUN_0035ac98(int);

/* Supplied declaration required: FUN_0035ac98. */


void nn_fnd_ExpHeapBase_Finalize(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0035ac98(param_1 + 0x18);
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
