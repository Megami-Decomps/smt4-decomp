#include "romwright_types.h"

extern "C" {

int FUN_00118030(int);

/* Supplied declaration required: FUN_00118030. */


void FUN_0011b648(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00118030(param_1 + 0x18);
  return;
}

} /* extern "C" */
