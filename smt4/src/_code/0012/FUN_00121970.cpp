#include "romwright_types.h"

extern "C" {

int FUN_002b4e74(...);

/* Supplied declaration required: FUN_002b4e74. */


void FUN_00121970(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002b4e74();
  FUN_002b4e74(param_1 + 0xb4);
  *(unsigned char *)(param_1 + 0x18d) = 0;
  return;
}

} /* extern "C" */
