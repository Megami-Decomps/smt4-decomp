#include "romwright_types.h"

extern "C" {

int FUN_002ac068(void);

/* Supplied declaration required: FUN_002ac068. */


void FUN_002451ac(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x2238) != 0) {
    FUN_002ac068();
    return;
  }
  return;
}

} /* extern "C" */
