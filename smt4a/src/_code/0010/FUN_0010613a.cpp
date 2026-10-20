#include "romwright_types.h"

extern "C" {

int FUN_0011e784(unsigned int);

/* Supplied declaration required: FUN_0011e784. */


void FUN_0010613a(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0011e784(*(unsigned int *)(param_1 + 0x24));
  return;
}

} /* extern "C" */
