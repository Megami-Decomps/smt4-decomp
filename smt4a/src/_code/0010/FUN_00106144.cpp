#include "romwright_types.h"

extern "C" {

int FUN_0011e7da(unsigned int);

/* Supplied declaration required: FUN_0011e7da. */


void FUN_00106144(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0011e7da(*(unsigned int *)(param_1 + 0x24));
  return;
}

} /* extern "C" */
