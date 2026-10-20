#include "romwright_types.h"

extern "C" {

int FUN_002e93da(void);

/* Supplied declaration required: FUN_002e93da. */


unsigned char FUN_002eabdc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e93da();
  return *(unsigned char *)(param_1 + 8);
}

} /* extern "C" */
