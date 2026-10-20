#include "romwright_types.h"

extern "C" {

int sysMemClear(unsigned int, int);

/* Supplied declaration required: sysMemClear. */


void FUN_0043c2a8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  sysMemClear(param_1,0x10808);
  return;
}

} /* extern "C" */
