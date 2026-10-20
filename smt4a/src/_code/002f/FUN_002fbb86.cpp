#include "romwright_types.h"

extern "C" {

int FUN_00123772(void);

/* Supplied declaration required: FUN_00123772. */


unsigned int FUN_002fbb86(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00123772();
  return *(unsigned int *)(param_1 + 0x60);
}

} /* extern "C" */
