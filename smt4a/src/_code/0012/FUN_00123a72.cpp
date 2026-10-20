#include "romwright_types.h"

extern "C" {

int FUN_00123e78(unsigned int);

/* Supplied declaration required: FUN_00123e78. */


void FUN_00123a72(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00123e78(*(unsigned int *)(param_1 + 0x18));
  return;
}

} /* extern "C" */
