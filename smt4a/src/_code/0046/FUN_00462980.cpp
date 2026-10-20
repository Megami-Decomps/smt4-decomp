#include "romwright_types.h"

extern "C" {

int FUN_0045b96c(unsigned int);

/* Supplied declaration required: FUN_0045b96c. */


void FUN_00462980(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_0045b96c(*(unsigned int *)(param_1 + 0x24));
    return;
  }
  return;
}

} /* extern "C" */
