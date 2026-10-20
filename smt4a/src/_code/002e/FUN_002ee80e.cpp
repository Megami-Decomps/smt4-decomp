#include "romwright_types.h"

extern "C" {

int FUN_002ee784(int, unsigned int);

/* Supplied declaration required: FUN_002ee784. */


void FUN_002ee80e(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ee784(param_1,*(unsigned int *)(param_1 + 4));
  return;
}

} /* extern "C" */
