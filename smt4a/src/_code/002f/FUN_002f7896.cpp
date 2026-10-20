#include "romwright_types.h"

extern "C" {

int FUN_0030ffe0(unsigned int);

/* Supplied declaration required: FUN_0030ffe0. */


void FUN_002f7896(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0030ffe0(*(unsigned int *)(param_1 + 4));
  return;
}

} /* extern "C" */
