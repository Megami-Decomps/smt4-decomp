#include "romwright_types.h"

extern "C" {

int FUN_003106a8(unsigned int, int);

/* Supplied declaration required: FUN_003106a8. */


void FUN_00120896(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_003106a8(param_1,5);
  return;
}

} /* extern "C" */
