#include "romwright_types.h"

extern "C" {

int FUN_002ebd94(unsigned int, int);

/* Supplied declaration required: FUN_002ebd94. */


void FUN_00120f34(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ebd94(*(unsigned int *)(param_1 + 4),param_1);
  return;
}

} /* extern "C" */
