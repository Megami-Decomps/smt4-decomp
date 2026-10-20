#include "romwright_types.h"

extern "C" {

int memClear(unsigned int, int);

/* Supplied declaration required: memClear. */


void FUN_003611b8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  memClear(param_1,0xb2c8);
  return;
}

} /* extern "C" */
