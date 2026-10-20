#include "romwright_types.h"

extern "C" {

int FUN_002e783c(void);

/* Supplied declaration required: FUN_002e783c. */


void FUN_002eea7c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 4) != 0) {
    FUN_002e783c();
  }
  return;
}

} /* extern "C" */
