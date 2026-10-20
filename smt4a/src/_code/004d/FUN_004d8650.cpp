#include "romwright_types.h"

extern "C" {

int FUN_003fdb18(unsigned int);

/* Supplied declaration required: FUN_003fdb18. */


void FUN_004d8650(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_003fdb18(*(unsigned int *)(*param_1 + 4));
    return;
  }
  return;
}

} /* extern "C" */
