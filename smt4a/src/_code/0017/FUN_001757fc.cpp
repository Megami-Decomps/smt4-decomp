#include "romwright_types.h"

extern "C" {

int FUN_00188b60(int);

/* Supplied declaration required: FUN_00188b60. */


void FUN_001757fc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00188b60(param_1 + 0x1c4);
  return;
}

} /* extern "C" */
