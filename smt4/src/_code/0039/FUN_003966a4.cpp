#include "romwright_types.h"

extern "C" {

int FUN_003966b8(unsigned int *);

/* Supplied declaration required: FUN_003966b8. */


void FUN_003966a4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((*param_1 & 1) == 0) {
    FUN_003966b8(param_1);
    return;
  }
  return;
}

} /* extern "C" */
