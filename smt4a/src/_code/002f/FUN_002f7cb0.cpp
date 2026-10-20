#include "romwright_types.h"

extern "C" {

int FUN_003106a8(unsigned int, int);

/* Supplied declaration required: FUN_003106a8. */


void FUN_002f7cb0(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_003106a8(param_1,2);
  return;
}

} /* extern "C" */
