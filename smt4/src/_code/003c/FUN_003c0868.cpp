#include "romwright_types.h"

extern "C" {

int FUN_002ac068(int, int);

/* Supplied declaration required: FUN_002ac068. */


void FUN_003c0868(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_002ac068(*(int *)(param_1 + 8),0);
    return;
  }
  return;
}

} /* extern "C" */
