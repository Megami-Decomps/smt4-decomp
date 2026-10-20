#include "romwright_types.h"

extern "C" {

int FUN_00122d28(unsigned int);

/* Supplied declaration required: FUN_00122d28. */


void FUN_00122dac(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00122d28(*(unsigned int *)(param_1 + 0x44));
  return;
}

} /* extern "C" */
