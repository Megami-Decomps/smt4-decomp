#include "romwright_types.h"

extern "C" {

int FUN_0010e720(unsigned int);

/* Supplied declaration required: FUN_0010e720. */


void FUN_0010e2e8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0010e720(*(unsigned int *)(param_1 + 0x3c));
  return;
}

} /* extern "C" */
