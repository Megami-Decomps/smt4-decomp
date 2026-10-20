#include "romwright_types.h"

extern "C" {

int FUN_002bd8e8(int, int, int);

/* Supplied declaration required: FUN_002bd8e8. */


void FUN_0028bf9c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002bd8e8(param_1 + 0x1c4,3,1);
  return;
}

} /* extern "C" */
