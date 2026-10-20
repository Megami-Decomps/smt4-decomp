#include "romwright_types.h"

extern "C" {

int FUN_002efe80(int);

/* Supplied declaration required: FUN_002efe80. */


void FUN_002efcb8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002efe80(*(int *)(param_1 + 4) + 0x14);
  return;
}

} /* extern "C" */
