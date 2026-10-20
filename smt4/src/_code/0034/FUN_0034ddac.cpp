#include "romwright_types.h"

extern "C" {

int FUN_002c0894(unsigned int);

/* Supplied declaration required: FUN_002c0894. */


void FUN_0034ddac(int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x24) = 0;
  FUN_002c0894(*(unsigned int *)(param_1 + 0x10));
  *(unsigned int *)(param_1 + 0x10) = 0;
  return;
}

} /* extern "C" */
