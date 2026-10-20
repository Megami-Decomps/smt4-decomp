#include "romwright_types.h"

extern "C" {

int FUN_0016cae0(void);

/* Supplied declaration required: FUN_0016cae0. */


void FUN_00156974(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (((*(unsigned int *)(param_1 + 4) & 1) == 0) && (*(int *)(param_1 + 0x25c) != 0)) {
    FUN_0016cae0();
    return;
  }
  return;
}

} /* extern "C" */
