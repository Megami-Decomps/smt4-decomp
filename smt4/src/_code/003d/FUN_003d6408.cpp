#include "romwright_types.h"

extern "C" {

int FUN_002a043c(int, int);

/* Supplied declaration required: FUN_002a043c. */


void FUN_003d6408(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x730) != 0) {
    FUN_002a043c(*(int *)(param_1 + 0x730),0);
    return;
  }
  return;
}

} /* extern "C" */
