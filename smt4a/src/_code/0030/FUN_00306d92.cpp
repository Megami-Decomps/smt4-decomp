#include "romwright_types.h"

extern "C" {

int FUN_00111690(unsigned int);

/* Supplied declaration required: FUN_00111690. */


void FUN_00306d92(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00111690(*(unsigned int *)(param_1 + 0x18));
  return;
}

} /* extern "C" */
