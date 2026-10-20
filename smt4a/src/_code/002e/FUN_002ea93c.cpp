#include "romwright_types.h"

extern "C" {

int FUN_002e93da(void);

/* Supplied declaration required: FUN_002e93da. */


unsigned int FUN_002ea93c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e93da();
  return *(unsigned int *)(param_1 + 4);
}

} /* extern "C" */
