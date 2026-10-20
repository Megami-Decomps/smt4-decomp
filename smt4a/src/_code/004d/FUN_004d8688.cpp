#include "romwright_types.h"

extern "C" {

int FUN_003fdb00(unsigned int);

/* Supplied declaration required: FUN_003fdb00. */


void FUN_004d8688(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_003fdb00(*(unsigned int *)(*param_1 + 4));
    return;
  }
  return;
}

} /* extern "C" */
