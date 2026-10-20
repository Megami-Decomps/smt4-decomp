#include "romwright_types.h"

extern "C" {

int FUN_0030f69c(unsigned int, int, int);

/* Supplied declaration required: FUN_0030f69c. */


void FUN_00122db6(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0030f69c(*(unsigned int *)(param_1 + 0x44),100,1);
  return;
}

} /* extern "C" */
