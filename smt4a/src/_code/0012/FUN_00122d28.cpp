#include "romwright_types.h"

extern "C" {

int FUN_002fd0f4(unsigned int);

/* Supplied declaration required: FUN_002fd0f4. */


void FUN_00122d28(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002fd0f4(*(unsigned int *)(param_1 + 0x1c8));
  return;
}

} /* extern "C" */
