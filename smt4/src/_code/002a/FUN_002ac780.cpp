#include "romwright_types.h"

extern "C" {

int FUN_00151ecc(unsigned int);

/* Supplied declaration required: FUN_00151ecc. */


void FUN_002ac780(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00151ecc(*(unsigned int *)(param_1 + 4));
  return;
}

} /* extern "C" */
