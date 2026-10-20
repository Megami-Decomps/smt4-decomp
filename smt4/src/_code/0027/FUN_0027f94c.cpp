#include "romwright_types.h"

extern "C" {

int FUN_002b2b64(unsigned int);

/* Supplied declaration required: FUN_002b2b64. */


void FUN_0027f94c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002b2b64(*(unsigned int *)(*(int *)(param_1 + 8) + 8));
  return;
}

} /* extern "C" */
